"""Execute the persistent-vector topology contract on Windows; compile ARM64, no ADB."""
from pathlib import Path
import hashlib,json,os,re,subprocess

root=Path(__file__).resolve().parents[1];config=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/immediate-topology-validation';build.mkdir(parents=True,exist_ok=True)
test=root/'tests/immediate_topology_contract.cpp';header=root/'tests/immediate_topology_contract.h';production=root/'src/immediate_vertices.h'
env=dict(os.environ,TEMP=str(build),TMP=str(build),MSBUILDDISABLENODEREUSE='1')
def run(command):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120,env=env)
    assert result.returncode==0,result.stdout+result.stderr
    return result.stdout+result.stderr
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_immediate_topology CXX)
set(CMAKE_CXX_STANDARD 17)
add_executable(immediate_topology_host "'''+test.as_posix()+'''")
target_compile_options(immediate_topology_host PRIVATE /utf-8 /O2 /W4)
''',encoding='utf-8')
configure=run([config['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64'])
host_build=run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
host=build/'windows/Release/immediate_topology_host.exe';output=run([host]);print(output,end='')
match=re.search(r'IMMEDIATE_TOPOLOGY passed=(\d+) failed=0 calls=(\d+) max_indices=196602 observed_capacity=(\d+)',output);assert match
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';arm=build/'immediate_topology_arm64'
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wall','-Wextra','-Werror','-Wl,-z,max-page-size=16384',test,'-static-libstdc++','-o',arm])
record=dict(host_executed=True,passed=int(match[1]),failed=0,calls=int(match[2]),max_indices=196602,host_observed_capacity=int(match[3]),arm64_compiled=True,arm64_executed=False,
    scope=['One persistent thread-local vector reused across all10primitive kinds, growth to65536vertices, shorter/empty/invalid/recovery batches',
           'Every index equals independent ordered-quad triangulation or sequential topology; triangle winding and16bit upper bound checked',
           'Exact current size with no stale suffix; capacity unchanged and nonempty data pointer stable whenever capacity suffices'],
    limitations=['CPU topology contract only; hardware replay additionally invokes this same contract before its existing GPU checks',
                 '196602 bounds logical index count; std::vector allocation capacity depends on implementation and is reported separately'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [test,header,production,Path(__file__)]},
    binaries={p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [host,arm]})
(root/'analysis/immediate-topology-validation.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
(root/'logs/immediate-topology-host.log').write_text(output,encoding='utf-8')
(root/'logs/immediate-topology-host-build.log').write_text(configure+host_build,encoding='utf-8')
