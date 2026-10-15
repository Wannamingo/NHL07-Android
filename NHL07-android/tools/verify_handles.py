"""Test actual kernel import wrappers on Windows x64 and connected ARM64."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
parser=argparse.ArgumentParser();parser.add_argument('--serial',required=True);parser.add_argument('--baseline',action='store_true');args=parser.parse_args()
config=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/handle-validation';build.mkdir(parents=True,exist_ok=True)
env=dict(os.environ,TMP=str(build),TEMP=str(build),MSBUILDDISABLENODEREUSE='1')
source=root/'tests/handle_contract.c'
backend=game/'vendor/xboxrecomp'
library=game/'build/xboxrecomp/src/kernel/Release/xbox_kernel.lib'
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_handle_validation C)
add_executable(nhl07_handle_contract "'''+source.as_posix()+'''")
target_include_directories(nhl07_handle_contract PRIVATE "'''+(backend/'src').as_posix()+'''" "'''+(backend/'src/kernel').as_posix()+'''")
target_link_libraries(nhl07_handle_contract PRIVATE "'''+library.as_posix()+'''" kernel32 bcrypt)
target_compile_definitions(nhl07_handle_contract PRIVATE RECOMP_NATIVE_API_ONLY=1 _CRT_SECURE_NO_WARNINGS)
target_compile_options(nhl07_handle_contract PRIVATE /utf-8)
''')
def run(command,allow_failure=False,**kwargs):
    p=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,timeout=120,**kwargs)
    if p.returncode and not allow_failure:raise RuntimeError(p.stdout[-3000:]+p.stderr[-3000:])
    return p.stdout+p.stderr
cmake=config['cmake']
run([cmake,'-S',build,'-B',build/'windows','-A','x64'])
run([cmake,'--build',build/'windows','--config','Release','--parallel','2'])
windows=build/'windows/Release/nhl07_handle_contract.exe'
outputs={'windows_x64':run([windows],allow_failure=args.baseline)}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
binary=build/'nhl07_handle_contract';ab=root/'vendor/xboxrecomp'
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2',
    '-Wl,-z,max-page-size=16384','-DRECOMP_NATIVE_API_ONLY=1','-I'+str(ab/'src'),'-I'+str(ab/'src/kernel'),
    source,root/'src/path_case.c',root/'build/libnhl07_kernel.a','-lm','-llog','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial]
remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote])
outputs['android_arm64']=run(prefix+['shell',remote],allow_failure=args.baseline)
report={'serial':args.serial,'results':{},'scope':['16 simultaneously released threads create 1024 live events through ordinal 189',
    'Unique tokens; independently signal, wait and close each original event; actual import stack cleanup'],
    'not_validated':['Duplicate/close races on the same guest handle','Full game correctness'],
    'primary_abi_reference':'https://github.com/XboxDev/nxdk/blob/master/lib/xboxkrnl/xboxkrnl.h',
    'tested_sources':{}}
for name,output in outputs.items():
    (root/'logs'/('handle-contract-'+('baseline-' if args.baseline else '')+name+'.log')).write_text(output)
    if args.baseline:
        match=re.search(r'HANDLE_CONTRACT duplicate token=([^\n]+)',output);assert match,output
        report['results'][name]={'failure_reproduced':match[0]};print(name,match[0])
    else:
        match=re.search(r'HANDLE_CONTRACT passed=(\d+) failed=0',output);assert match,output
        report['results'][name]={'passed':int(match[1]),'failed':0};print(name,match[0])
for path in [source,root/'tests/timer_contract.c',ab/'src/kernel/kernel_bridge.c',ab/'src/platform/win32_compat.c',
             backend/'src/kernel/kernel_bridge.c']:
    report['tested_sources'][path.relative_to(root.parent).as_posix()]=hashlib.sha256(path.read_bytes()).hexdigest()
report['binary_sha256']={name:hashlib.sha256(path.read_bytes()).hexdigest() for name,path in
                         [('windows_x64',windows),('android_arm64',binary)]}
(root/('analysis/handle-contract-baseline.json' if args.baseline else 'analysis/handle-contract.json')).write_text(json.dumps(report,indent=2))
