"""CPU byte-fetch oracle for merged per-draw guest vertex uploads; no ADB."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];config=json.loads((root/'local-toolchains.json').read_text())
parser=argparse.ArgumentParser();parser.add_argument('--serial');args=parser.parse_args()
build=root/'build/draw-upload-plan-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
test=root/'tests/draw_upload_plan_contract.cpp';header=root/'src/draw_upload_plan.h'
env=dict(os.environ,TMP=str(build),TEMP=str(build),MSBUILDDISABLENODEREUSE='1')
def run(command):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120,env=env)
    assert result.returncode==0,result.stdout+result.stderr
    return result.stdout+result.stderr
# Windows host execution gives a fast independent CPU oracle. The same source
# is also compiled for Android ARM64, ready for optional device execution.
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_draw_upload_plan_validation CXX)
set(CMAKE_CXX_STANDARD 17)
add_executable(draw_upload_plan_host "'''+test.as_posix()+'''")
target_include_directories(draw_upload_plan_host PRIVATE "'''+(root/'src').as_posix()+'''")
target_compile_options(draw_upload_plan_host PRIVATE /utf-8 /O2)
''',encoding='utf-8')
run([config['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64'])
run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
host=build/'windows/Release/draw_upload_plan_host.exe'
output=run([host]);print(output,end='')
match=re.search(r'DRAW_UPLOAD_PLAN passed=(\d+) failed=0 randomized_layouts=5000',output);assert match
arm=build/'draw_upload_plan_arm64'
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2',
    '-Wl,-z,max-page-size=16384','-I'+str(root/'src'),test,'-static-libstdc++','-o',arm])
record={'passed':int(match[1]),'failed':0,'randomized_layouts':5000,'host_executed':True,'arm64_compiled':True,'arm64_executed':False,
    'scope':['Merged byte uploads reproduce every active attribute element at every tested vertex',
        'Interleaved/adjacent/overlapping/disjoint spans, unsorted inputs and compatible/incompatible scalar alignment residues',
        'Unaligned physical source addresses preserve baseline validity; stream base alignment 16 verified',
        'Fresh per-draw copies observe modified guest data; empty and 16-input layouts; invalid/overflow/range inputs rejected'],
    'limitations':['CPU planning/byte-fetch contract only; actual GLES renderer integration and GPU pixels require separate validation'],
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [test,header,Path(__file__)]},
    'binaries':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [host,arm]}}
if args.serial:
    prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial]
    remote='/data/local/tmp/nhl07-draw-upload-plan'
    run(prefix+['push',arm,remote]);run(prefix+['shell','chmod','700',remote])
    digest=hashlib.sha256(arm.read_bytes()).hexdigest()
    assert run(prefix+['shell','sha256sum',remote]).split()[0]==digest
    result=run(prefix+['shell',remote]);assert result.strip()==output.strip(),result
    (root/'logs/draw-upload-plan-arm64.log').write_text(result,encoding='utf-8')
    record.update(arm64_executed=True,serial=args.serial,arm64_stdout=result.strip())
    print(result,end='')
(root/'analysis/draw-upload-plan-validation.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
