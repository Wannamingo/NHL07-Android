"""Exercise actual native allocation/query code on Windows and connected RG477M."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/memory-validation';build.mkdir(parents=True,exist_ok=True)
def run(command):
    result=subprocess.run(list(map(str,command)),env=dict(os.environ,MSBUILDDISABLENODEREUSE='1',RECOMP_HEAP_RECLAIM='1'),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
    assert result.returncode==0,result.stdout[-3000:]+result.stderr[-3000:]
    return result.stdout+result.stderr
test=root/'tests/memory_budget_contract.c';backend=game/'vendor/xboxrecomp';ab=root/'vendor/xboxrecomp'
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(memory C)\nadd_executable(memory "'+test.as_posix()+'")\ntarget_include_directories(memory PRIVATE "'+(backend/'src').as_posix()+'" "'+(backend/'src/kernel').as_posix()+'")\ntarget_link_libraries(memory PRIVATE "'+(game/'build/xboxrecomp/src/kernel/Release/xbox_kernel.lib').as_posix()+'" kernel32 bcrypt)\ntarget_compile_definitions(memory PRIVATE RECOMP_NATIVE_API_ONLY=1 _CRT_SECURE_NO_WARNINGS)\ntarget_compile_options(memory PRIVATE /utf-8)\n')
run([config['cmake'],'-S',build,'-B',build/'windows','-A','x64']);run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
outputs={'windows_x64':run([build/'windows/Release/memory.exe',game/'input/default.xbe'])}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'memory_arm64'
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-Wl,-z,max-page-size=16384','-DRECOMP_NATIVE_API_ONLY=1',
    '-I'+str(ab/'src'),'-I'+str(ab/'src/kernel'),test,root/'src/path_case.c',root/'build/libnhl07_kernel.a','-lm','-llog','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/memory_arm64'
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote]);outputs['android_arm64']=run(prefix+['shell','env','RECOMP_HEAP_RECLAIM=1',remote,'/data/local/tmp/nhl07-438eaeada465/default.xbe'])
results={}
for architecture,output in outputs.items():
    (root/'logs'/('memory-contract-'+architecture+'.log')).write_text(output,encoding='utf-8')
    match=re.search(r'MEMORY_BUDGET passed=(\d+) failed=0 initial_available_pages=(\d+)',output);assert match,output[-2000:]
    results[architecture]={'passed':int(match[1]),'failed':0,'initial_available_pages':int(match[2])};print(architecture,match[0])
assert results['windows_x64']==results['android_arm64']
sources=[test,Path(__file__)]+[project/'vendor/xboxrecomp/src/kernel'/name for project in [game,root] for name in ['kernel_memory.c','xbox_memory_layout.c']]
(root/'analysis/memory-budget-validation.json').write_text(json.dumps(dict(serial=args.serial,results=results,
    scope=['Actual title XBE load and native allocators, ABI guards, real stack commitment/image pages',
        'Shared small heap pages, frees/coalescing, physical alignment gaps, 24 MiB allocation, budget saturation and restoration'],
    limitations=['Native allocator budget, not a cycle-accurate console memory manager',
        'Main stack uses XBE initial commitment; virtual reserve pages and later stack growth are not tracked separately',
        'Fixed-address pinned physical allocations bypass the allocator tables; NHL ordinary allocations use the tracked arena'],
    tested_sources={p.relative_to(root.parent).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources}),indent=2))
