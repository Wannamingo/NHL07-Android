"""Validate native DSP loading and execution on Windows and the selected ARM64 device."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];config=json.loads((root/'local-toolchains.json').read_text())
parser=argparse.ArgumentParser();parser.add_argument('--serial');parser.add_argument('--windows-only',action='store_true');args=parser.parse_args()
if not args.windows_only and not args.serial:parser.error('--serial is required for device execution')
build=root/'build/dsp-validation';build.mkdir(exist_ok=True)
for host in ['windows','arm64']:(build/host).mkdir(exist_ok=True)
image=root/'analysis/first-dsp-image.bin'
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_dsp_validation C)
set(CMAKE_C_STANDARD 11)
add_executable(dsp_test "'''+(root/'tests/dsp_runner.c').as_posix()+'''" "'''+(root/'src/native_dsp.c').as_posix()+'''")
target_include_directories(dsp_test PRIVATE "'''+(root/'src').as_posix()+'''" "'''+(root/'deps/dsp56300').as_posix()+'''")
target_compile_options(dsp_test PRIVATE /utf-8 /W0 /fp:strict)
''')
env=dict(os.environ,MSBUILDDISABLENODEREUSE='1')
with (root/'logs/dsp-validation-build.log').open('w') as log:
    for command in [[config['cmake'],'-S',build,'-B',build/'native','-A','x64'],[config['cmake'],'--build',build/'native','--config','Release','--parallel','2']]:
        r=subprocess.run(list(map(str,command)),env=env,stdout=log,stderr=subprocess.STDOUT)
        if r.returncode:raise SystemExit('Windows DSP test build failed; inspect logs/dsp-validation-build.log')
windows=build/'native/Release/dsp_test.exe'
result=subprocess.run([str(windows),str(image),str(build/'windows')],capture_output=True,text=True)
(root/'logs/dsp-windows-validation.log').write_text(result.stdout+result.stderr);assert result.returncode==0,(result.stdout+result.stderr)[-4000:]
print(result.stdout,flush=True)
windows_output=result.stdout
program=(build/'windows/program.bin').read_bytes();state=(build/'windows/initial-state.bin').read_bytes()
analysis=json.loads((root/'analysis/dsp-analysis.json').read_text())
for e in analysis['effects']:
    at=int(e['code_offset'],16)-0x818;assert program[at:at+e['code_bytes']]==(root/'analysis/dsp'/f'effect-{e["index"]:02d}.code.bin').read_bytes()
    at=int(e['state_offset'],16)-int(analysis['header_words'][2],16)+0x80*4
    assert state[at:at+e['state_bytes']]==(root/'analysis/dsp'/f'effect-{e["index"]:02d}.state.bin').read_bytes()
wm=re.search(r'DSP_TEST passed=(\d+) failed=0 instructions=(\d+) dma_bytes=(\d+)',windows_output);assert wm
report={'host':'Windows x64','checks_passed':int(wm[1]),'failed':0,'instructions':int(wm[2]),'dma_bytes':int(wm[3]),
    'native_loader_matches_original_x86_decoder':True,'executable_sha256':hashlib.sha256(windows.read_bytes()).hexdigest(),
    'source_sha256':hashlib.sha256((root/'src/native_dsp.c').read_bytes()).hexdigest(),
    'snapshots_sha256':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in (build/'windows').glob('*.bin')},
    'scope':['13 decoded code/state regions verified','32 signed identity-mixer samples','One zero frame and eight pseudorandom frames through all 13 programs with scratch DMA'],
    'not_validated':['Console capture equivalence','Game voice routing or audible playback','ARM64 execution']}
(root/'analysis/dsp-windows-validation.json').write_text(json.dumps(report,indent=2))
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';arm=build/'dsp_test_arm64'
command=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-fno-strict-aliasing','-ffp-contract=off','-Wl,-z,max-page-size=16384',
    '-I'+str(root/'src'),'-I'+str(root/'deps/dsp56300'),root/'tests/dsp_runner.c',root/'src/native_dsp.c','-lm','-o',arm]
result=subprocess.run(list(map(str,command)),capture_output=True,text=True);assert result.returncode==0,result.stderr[-4000:]
if args.windows_only:
    print('Windows DSP validation passed; ARM64 test executable built, device execution pending')
    raise SystemExit(0)
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/dsp-validation'
def adb(command):return subprocess.run(prefix+command,check=True,capture_output=True,text=True,timeout=60).stdout
adb(['shell','mkdir','-p',remote]);adb(['push',str(arm),remote+'/dsp_test']);adb(['push',str(image),remote+'/image.bin']);adb(['shell','chmod','700',remote+'/dsp_test'])
output=adb(['shell',remote+'/dsp_test',remote+'/image.bin',remote]);print(output,flush=True)
(root/'logs/dsp-arm64-validation.log').write_text(output)
names=['program.bin','initial-state.bin','final-state.bin']+[f'frame-{i}.bin' for i in range(8)]
records={}
for name in names:
    adb(['pull',remote+'/'+name,str(build/'arm64'/name)])
    a=(build/'windows'/name).read_bytes();b=(build/'arm64'/name).read_bytes();assert a==b,name+' differs across architectures'
    records[name]=hashlib.sha256(a).hexdigest()
program=(build/'windows/program.bin').read_bytes();state=(build/'windows/initial-state.bin').read_bytes()
analysis=json.loads((root/'analysis/dsp-analysis.json').read_text())
for e in analysis['effects']:
    at=int(e['code_offset'],16)-0x818;assert program[at:at+e['code_bytes']]==(root/'analysis/dsp'/f'effect-{e["index"]:02d}.code.bin').read_bytes()
    at=int(e['state_offset'],16)-int(analysis['header_words'][2],16)+0x80*4
    assert state[at:at+e['state_bytes']]==(root/'analysis/dsp'/f'effect-{e["index"]:02d}.state.bin').read_bytes()
match=re.search(r'DSP_TEST passed=(\d+) failed=0 instructions=(\d+) dma_bytes=(\d+)',output);assert match
report={'serial':args.serial,'checks_passed_per_architecture':int(match[1]),'failed':0,'instructions_arm64':int(match[2]),'dma_bytes_arm64':int(match[3]),
    'cross_architecture_snapshot_sha256':records,'native_loader_matches_original_x86_decoder':True,
    'windows_executable_sha256':hashlib.sha256(windows.read_bytes()).hexdigest(),'arm64_executable_sha256':hashlib.sha256(arm.read_bytes()).hexdigest(),
    'scope':['13 code/state regions match independent Python and original x86 decoder','Independent signed fixed-point identity-mixer checks','Full effect chain: zero frame and eight pseudorandom frames, Windows vs RG477M, with scratch DMA'],
    'not_validated':['Console capture equivalence','Game voice routing or audible playback','Performance under gameplay load']}
(root/'analysis/dsp-execution-validation.json').write_text(json.dumps(report,indent=2))
print('DSP loader and execution validated on Windows and RG477M')
