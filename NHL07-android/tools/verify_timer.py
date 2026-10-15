"""Test actual kernel import wrappers on Windows x64 and connected ARM64."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
parser=argparse.ArgumentParser();parser.add_argument('--serial',required=True);args=parser.parse_args()
config=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/timer-validation';build.mkdir(parents=True,exist_ok=True)
env=dict(os.environ,TMP=str(build),TEMP=str(build),MSBUILDDISABLENODEREUSE='1')
source=root/'tests/timer_contract.c'
backend=game/'vendor/xboxrecomp'
library=game/'build/xboxrecomp/src/kernel/Release/xbox_kernel.lib'
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_timer_validation C)
add_executable(nhl07_timer_contract "'''+source.as_posix()+'''")
target_include_directories(nhl07_timer_contract PRIVATE "'''+(backend/'src').as_posix()+'''" "'''+(backend/'src/kernel').as_posix()+'''")
target_link_libraries(nhl07_timer_contract PRIVATE "'''+library.as_posix()+'''" kernel32 bcrypt)
target_compile_definitions(nhl07_timer_contract PRIVATE RECOMP_NATIVE_API_ONLY=1 _CRT_SECURE_NO_WARNINGS)
target_compile_options(nhl07_timer_contract PRIVATE /utf-8)
''')
def run(command,**kwargs):
    p=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,timeout=120,**kwargs)
    if p.returncode:raise RuntimeError(p.stdout[-3000:]+p.stderr[-3000:])
    return p.stdout+p.stderr
cmake=config['cmake']
run([cmake,'-S',build,'-B',build/'windows','-A','x64'])
run([cmake,'--build',build/'windows','--config','Release','--parallel','2'])
windows=build/'windows/Release/nhl07_timer_contract.exe'
outputs={'windows_x64':run([windows])}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
binary=build/'nhl07_timer_contract';ab=root/'vendor/xboxrecomp'
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2',
    '-Wl,-z,max-page-size=16384','-DRECOMP_NATIVE_API_ONLY=1','-I'+str(ab/'src'),'-I'+str(ab/'src/kernel'),'-I'+str(root/'src'),
    source,root/'src/path_case.c',root/'src/native_pause.c',root/'src/native_fps.c',root/'build/libnhl07_kernel.a','-lm','-llog','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial]
remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote])
outputs['android_arm64']=run(prefix+['shell',remote])
report={'serial':args.serial,'results':{},'scope':['Actual ordinal 194/229/234/185/187 wrappers and guest stack cleanup',
    'Worker blocked before arming, relative and absolute deadlines, rearm, cancel, manual/automatic reset',
    'Invalid handles/pointers/types and explicit unsupported APC/period/PreviousState statuses'],
    'not_validated':['APC delivery, periodic timers, PreviousState output','Full game correctness'],
    'primary_abi_reference':'https://github.com/XboxDev/nxdk/blob/master/lib/xboxkrnl/xboxkrnl.h',
    'tested_sources':{}}
for name,output in outputs.items():
    (root/'logs'/('timer-contract-'+name+'.log')).write_text(output)
    match=re.search(r'TIMER_CONTRACT passed=(\d+) failed=0',output);assert match,output
    report['results'][name]={'passed':int(match[1]),'failed':0};print(name,match[0])
for path in [source,ab/'src/kernel/kernel_bridge.c',ab/'src/platform/win32_compat.c',
             backend/'src/kernel/kernel_bridge.c',root/'src/native_pause.c',root/'src/native_fps.c']:
    report['tested_sources'][path.relative_to(root.parent).as_posix()]=hashlib.sha256(path.read_bytes()).hexdigest()
report['binary_sha256']={name:hashlib.sha256(path.read_bytes()).hexdigest() for name,path in
                         [('windows_x64',windows),('android_arm64',binary)]}
(root/'analysis/timer-contract.json').write_text(json.dumps(report,indent=2))
