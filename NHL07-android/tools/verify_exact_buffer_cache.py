"""Validate production exact buffer ownership on Windows; prepare ARM/GPU tests, optional parent-owned ADB run."""
from pathlib import Path
import argparse,hashlib,json,os,re,shutil,subprocess

root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial');ap.add_argument('--build-only',action='store_true');args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/exact-buffer-cache-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';headers=build/'headers'
for name in ['GLES3/gl3.h','GLES3/gl3platform.h','KHR/khrplatform.h']:
    target=headers/name;target.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(llvm/'sysroot/usr/include'/name,target)
host_test=root/'tests/exact_buffer_cache_host_contract.cpp';gpu_test=root/'tests/exact_buffer_cache_gpu_contract.cpp';helper=root/'src/exact_buffer_cache.cpp'
env=dict(os.environ,TEMP=str(build),TMP=str(build),MSBUILDDISABLENODEREUSE='1')
def run(command,timeout=120):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout,env=env)
    assert result.returncode==0,result.stdout+result.stderr
    return result.stdout+result.stderr
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_exact_buffer_host CXX)
set(CMAKE_CXX_STANDARD 17)
add_executable(exact_buffer_host "'''+host_test.as_posix()+'''" "'''+helper.as_posix()+'''")
target_include_directories(exact_buffer_host PRIVATE "'''+headers.as_posix()+'''" "'''+(root/'src').as_posix()+'''")
target_compile_definitions(exact_buffer_host PRIVATE __SCITECH_SNAP__ _CRT_SECURE_NO_WARNINGS)
target_compile_options(exact_buffer_host PRIVATE /utf-8 /O2 /W4)
''',encoding='utf-8')
configure=run([config['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64'])
host_build=run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
host=build/'windows/Release/exact_buffer_host.exe';output=run([host]);print(output,end='')
match=re.search(r'EXACT_BUFFER_HOST passed=(\d+) failed=0 mutated_bytes=257 uploaded_bytes=(\d+) compared_bytes=(\d+)',output);assert match
flags=['--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wall','-Wextra','-Werror','-Wl,-z,max-page-size=16384','-I'+str(root/'src')]
arm=build/'exact_buffer_host_arm64';run([llvm/'bin/clang++.exe',*flags,host_test,helper,'-static-libstdc++','-lm','-o',arm])
gpu=build/'exact_buffer_gpu_arm64';run([llvm/'bin/clang++.exe',*flags,gpu_test,helper,root/'src/render_profile.cpp','-static-libstdc++','-lEGL','-lGLESv3','-lm','-o',gpu])
tested=[host_test,gpu_test,helper,root/'src/exact_buffer_cache.h',root/'src/render_profile.h',root/'src/render_profile.cpp',root/'src/nv2a_draw.cpp',Path(__file__)]
report=dict(host_executed=True,passed=int(match[1]),failed=0,mutated_bytes=257,uploaded_bytes=int(match[2]),compared_bytes=int(match[3]),
    arm64_compiled=True,arm64_executed=False,gpu_compiled=True,gpu_executed=False,
    scope=['Actual production cache with explicit byte-storage GL adapter; every source byte changed and restored between draws',
           'Full exact comparison on reuse; same address mutations, pointer changes, shrink/grow, shared array/index object, pinned changed-source fallback',
           '17protected attribute/index binds, all-pinned budget fallback, next-draw LRU eviction, independent entry/byte limits and explicit clear',
           'Profile byte counters distinguish actual uploaded bytes from candidate CPU comparisons'],
    limitations=['Host GL adapter proves CPU/ownership contract, not hardware behavior or game FPS',
                 'Resource budget limits CPU snapshot payload and sizes of live owned GL stores; driver-internal queued/orphaned allocations are unobservable'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in tested},
    binaries={p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [host,arm,gpu]})
if args.serial and not args.build_only:
    prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-exact-buffer-cache'
    run(prefix+['shell','mkdir','-p',remote]);run(prefix+['push',gpu,remote+'/'+gpu.name]);run(prefix+['shell','chmod','700',remote+'/'+gpu.name])
    assert run(prefix+['shell','sha256sum',remote+'/'+gpu.name]).split()[0]==report['binaries'][gpu.name]
    gpu_output=run(prefix+['shell',remote+'/'+gpu.name,remote]);print(gpu_output,end='')
    actual=re.search(r'EXACT_BUFFER_GPU passed=(\d+) failed=0 queued_pixels=768 pinned_pixels=768',gpu_output);assert actual
    captures=root/'analysis/exact-buffer-cache-gpu';captures.mkdir(parents=True,exist_ok=True)
    artifacts={}
    for name in ['exact-buffer-queued.ppm','exact-buffer-pinned.ppm']:
        path=captures/name;run(prefix+['pull',remote+'/'+name,path]);payload=path.read_bytes();header,dimensions,max_value,rgb=payload.split(b'\n',3)
        assert (header,dimensions,max_value)==(b'P6',b'48 16',b'255') and len(rgb)==48*16*3
        for y in range(16):
            for x in range(48):
                green=name.startswith('exact-buffer-queued') and 16<=x<32
                assert rgb[(y*48+x)*3:(y*48+x)*3+3]==(b'\x00\xff\x00' if green else b'\xff\x00\x00')
        artifacts[name]=dict(bytes=len(payload),sha256=hashlib.sha256(payload).hexdigest(),all_rgb_bytes_verified=True)
    (root/'logs/exact-buffer-cache-gpu.log').write_text(gpu_output,encoding='utf-8')
    report.update(gpu_executed=True,serial=args.serial,gpu_passed=int(actual[1]),pixel_artifacts=artifacts,
        gpu_scope=['RealGLES3 full4099byte buffer readback and first/middle/last changes',
                   'Three queued full-region draws preserve old/current buffer versions after glBufferData updates and LRU deletion before readback',
                   '16simultaneous attribute buffers stay pinned while17thindex bind falls back; everyRGBA pixel includes all16attributes',
                   'Explicit GL/EGL cleanup passed'])
(root/'analysis/exact-buffer-cache-validation.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
(root/'logs/exact-buffer-cache-host-build.log').write_text(configure+host_build,encoding='utf-8')
(root/'logs/exact-buffer-cache-host.log').write_text(output,encoding='utf-8')
