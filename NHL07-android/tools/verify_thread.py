"""Verify real worker completion and the native XDK GetExitCodeThread boundary."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/thread-validation';build.mkdir(parents=True,exist_ok=True)
source=game/'src/overrides.c';body=re.search(r'void sub_0044B23A\(void\) \{.*?\n\}',source.read_text(),re.S).group()
boundary=build/'thread_api.c';boundary.write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n#include <stdio.h>\nextern uint32_t xbox_bridge_thread_exit_code(uint32_t,uint32_t *);\nvoid sub_00449A30(void);\n'+body)
def run(command):
    result=subprocess.run(list(map(str,command)),env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'),capture_output=True,text=True,timeout=120)
    assert result.returncode==0,result.stdout[-3000:]+result.stderr[-3000:]
    return result.stdout+result.stderr
test=root/'tests/thread_contract.c';backend=game/'vendor/xboxrecomp';include=game/'src/recomp/gen'
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(thread C)\nadd_executable(thread "'+test.as_posix()+'" "'+boundary.as_posix()+'")\ntarget_include_directories(thread PRIVATE "'+(backend/'src').as_posix()+'" "'+(backend/'src/kernel').as_posix()+'" "'+include.as_posix()+'")\ntarget_link_libraries(thread PRIVATE "'+(game/'build/xboxrecomp/src/kernel/Release/xbox_kernel.lib').as_posix()+'" kernel32 bcrypt)\ntarget_compile_definitions(thread PRIVATE RECOMP_NATIVE_API_ONLY=1 _CRT_SECURE_NO_WARNINGS)\ntarget_compile_options(thread PRIVATE /utf-8)\n')
run([config['cmake'],'-S',build,'-B',build/'windows','-A','x64']);run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
windows=build/'windows/Release/thread.exe';outputs={'windows_x64':run([windows,game/'input/default.xbe'])}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';ab=root/'vendor/xboxrecomp';binary=build/'thread_arm64'
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-Wl,-z,max-page-size=16384','-DRECOMP_NATIVE_API_ONLY=1',
    '-I'+str(ab/'src'),'-I'+str(ab/'src/kernel'),'-I'+str(include),test,boundary,root/'src/path_case.c',root/'build/libnhl07_kernel.a','-lm','-llog','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/thread_arm64'
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote]);outputs['android_arm64']=run(prefix+['shell',remote,'/data/local/tmp/nhl07-438eaeada465/default.xbe'])
results={}
for architecture,output in outputs.items():
    (root/'logs'/('thread-contract-'+architecture+'.log')).write_text(output)
    match=re.search(r'THREAD_CONTRACT passed=(\d+) failed=0',output);assert match,output
    results[architecture]={'passed':int(match[1]),'failed':0};print(architecture,match[0])
report={'serial':args.serial,'results':results,'scope':['Four real guest workers through original import 255 and termination 258','Active and terminated exit states, including arbitrary 32-bit exit codes','Native GetExitCodeThread ABI: RET 8, callee-saved registers, guest error callback and preserved error output','Closed/invalid handles, event handle rejected as wrong type and invalid guest output'],
    'not_validated':['General Xbox object-manager structures','Pseudo current-thread handles','Every game worker lifecycle'],
    'native_boundary_sha256':hashlib.sha256(body.encode()).hexdigest(),
    'tested_sources':{p.relative_to(root.parent).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [test,ab/'src/kernel/kernel_bridge.c',backend/'src/kernel/kernel_bridge.c',ab/'src/platform/win32_compat.c']}}
(root/'analysis/thread-contract.json').write_text(json.dumps(report,indent=2))
