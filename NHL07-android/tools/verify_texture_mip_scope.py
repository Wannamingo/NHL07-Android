"""Host cache mutation contract; optionally compile the same contract for ARM64 without a device."""
from pathlib import Path
import argparse, hashlib, json, os, re, shutil, subprocess

root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--arm-build',action='store_true');args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/texture-mip-scope-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
headers=build/'headers'
for name in ['GLES3/gl3.h','GLES3/gl3platform.h','KHR/khrplatform.h']:
    output=headers/name;output.parent.mkdir(parents=True,exist_ok=True)
    shutil.copyfile(llvm/'sysroot/usr/include'/name,output)
sources=[root/'tests/texture_mip_scope_contract.cpp',root/'src/texture_cache.cpp',
         root/'src/shaders/texture_rgba.cpp',root/'src/shaders/d3d_texture_model.c']
cmake='''cmake_minimum_required(VERSION 3.20)
project(nhl07_texture_mip_scope_contract C CXX)
add_executable(nhl07_texture_mip_scope_contract SOURCES)
target_compile_features(nhl07_texture_mip_scope_contract PRIVATE cxx_std_17)
target_compile_definitions(nhl07_texture_mip_scope_contract PRIVATE __SCITECH_SNAP__ _CRT_SECURE_NO_WARNINGS)
target_include_directories(nhl07_texture_mip_scope_contract PRIVATE "HEADERS" "SOURCE_INCLUDE")
target_compile_options(nhl07_texture_mip_scope_contract PRIVATE /utf-8 /O2)
'''.replace('SOURCES',' '.join('"'+s.as_posix()+'"' for s in sources)).replace('HEADERS',headers.as_posix()).replace('SOURCE_INCLUDE',(root/'src').as_posix())
(build/'CMakeLists.txt').write_text(cmake,encoding='utf-8')
env=dict(os.environ,TMP=str(build),TEMP=str(build),MSBUILDDISABLENODEREUSE='1')
def run(command):
    result=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=180)
    if result.returncode:raise RuntimeError(result.stdout[-6000:]+result.stderr[-6000:])
    return result.stdout+result.stderr
logs=[]
logs.append(run([cfg['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64']))
logs.append(run([cfg['cmake'],'--build',build/'windows','--config','Release','--parallel','2']))
binary=build/'windows/Release/nhl07_texture_mip_scope_contract.exe'
output=run([binary]);print(output);logs.append(output)
match=re.search(r'TEXTURE_MIP_SCOPE passed=(\d+) failed=0 skipped_mip_bytes=(\d+) profile_compare_bytes=(\d+)',output);assert match,output
arm=None
if args.arm_build:
    arm=build/'texture_mip_scope_arm64'
    logs.append(run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),
        '-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),*sources,'-static-libstdc++','-lm','-o',arm]))
log=root/'logs/texture-mip-scope-host-contract.log';log.write_text('\n'.join(logs),encoding='utf-8')
tested=sources+[root/'src/texture_cache.h',Path(__file__)]
report=dict(platform='Windows x64 MSVC Release',passed=int(match[1]),failed=0,device_connected_or_used=False,
    gpu_tested=False,production_texture_cache_and_decoder_compiled=True,gl_adapter='Explicit texture object and per-level RGBA storage; no real GPU',
    skipped_mip_bytes=int(match[2]),profile_comparison_span_bytes=int(match[3]),
    scope=['Every guest raw byte changed and restored between binds on one unchanging draw tag, ten formats',
           'Base-only binds compare every base byte and every palette byte; lower snapshot stays at last full GPU upload',
           'Enabling mip sampling detects all lower-level-only mutations and reuploads the whole chain',
           'Cross-stage binding, palette-only changes, truncated base/lower/palette input, cache clear and recreation',
           'Comparison-span accounting decreases only for skipped lower levels; this is not physical DRAM traffic'],
    limitations=['No Android runtime, hardware pixel sampling, or game FPS claim',
                 'Caller must prove only filtered sampling and base level 0; default API remains complete validation'],
    reference='https://registry.khronos.org/OpenGL/specs/es/3.0/es_spec_3.0.pdf section 3.8.10.2',
    host_binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
    arm64_compiled=bool(arm),arm64_executed=False,arm64_binary_sha256=hashlib.sha256(arm.read_bytes()).hexdigest() if arm else None,
    log=dict(path=str(log),sha256=hashlib.sha256(log.read_bytes()).hexdigest()),
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in tested})
(root/'analysis/texture-mip-scope-validation.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
