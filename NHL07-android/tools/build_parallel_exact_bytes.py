"""Build isolated persistent-worker equality prototype and run its host contract; no device access."""
from pathlib import Path
import hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];cfg=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/parallel-exact-bytes';build.mkdir(parents=True,exist_ok=True)
source=root/'tests/parallel_exact_bytes_contract.cpp';header=root/'src/parallel_exact_bytes.h'
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_parallel_exact_bytes CXX)
add_executable(nhl07_parallel_exact_bytes "SOURCE")
target_compile_features(nhl07_parallel_exact_bytes PRIVATE cxx_std_17)
target_compile_definitions(nhl07_parallel_exact_bytes PRIVATE _CRT_SECURE_NO_WARNINGS)
target_compile_options(nhl07_parallel_exact_bytes PRIVATE /utf-8 /O2)
target_include_directories(nhl07_parallel_exact_bytes PRIVATE "INCLUDE")
'''.replace('SOURCE',source.as_posix()).replace('INCLUDE',(root/'src').as_posix()),encoding='utf-8')
env=dict(os.environ,TMP=str(build),TEMP=str(build),MSBUILDDISABLENODEREUSE='1')
def run(command):
    result=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=180)
    if result.returncode:raise RuntimeError(result.stdout[-6000:]+result.stderr[-6000:])
    return result.stdout+result.stderr
logs=[run([cfg['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64']),run([cfg['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])]
host=build/'windows/Release/nhl07_parallel_exact_bytes.exe';output=run([host]);logs.append(output);print(output)
match=re.search(r'PARALLEL_EXACT passed=(\d+) failed=0',output);assert match
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';arm=build/'parallel_exact_bytes_arm64'
logs.append(run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),source,'-static-libstdc++','-pthread','-lm','-o',arm]))
log=root/'logs/parallel-exact-bytes-build.log';log.write_text('\n'.join(logs),encoding='utf-8')
report=dict(binary=str(arm),binary_sha256=hashlib.sha256(arm.read_bytes()).hexdigest(),host_passed=int(match[1]),host_failed=0,
    arm64_built=True,arm64_executed=False,production_integrated=False,device_used=False,game_changed=False,
    scope=['Persistent caller/worker disjoint libc comparisons; every source mutable between synchronous calls',
           'All32x32 alignments; threshold boundaries; first,last,split,both halves and random-byte mutations; immediate restorations',
           'Inaccessible guard pages on both ends; caller early mismatch still joins worker before input is unmapped',
           '128/256/512/1024KiB experimental thresholds; affinity requests safely fall back when unsupported',
           'Synthetic benchmark records elapsed time and both caller/worker CPU time; no game FPS claim'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [header,source,Path(__file__)]},
    host_binary_sha256=hashlib.sha256(host.read_bytes()).hexdigest(),log=dict(path=str(log),sha256=hashlib.sha256(log.read_bytes()).hexdigest()))
(build/'build.json').write_text(json.dumps(report,indent=2),encoding='utf-8');(root/'analysis/parallel-exact-bytes-build.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
