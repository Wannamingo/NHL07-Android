"""Run PCM/ADPCM voice checks on Windows and the selected ARM64 device."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64');config=json.loads((root/'local-toolchains.json').read_text())
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args();build=root/'build/voice-validation';build.mkdir(exist_ok=True)
sources=[root/'tests/voice_contract.c',root/'src/native_voice.c',root/'src/xbox_adpcm.c']
includes=[game/'src/recomp/gen',root/'src',root/'deps/adpcm-xq']
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(nhl07_voice C)\nadd_executable(voice_contract '+
    ' '.join('"'+p.as_posix()+'"' for p in sources)+')\ntarget_include_directories(voice_contract PRIVATE '+
    ' '.join('"'+p.as_posix()+'"' for p in includes)+')\ntarget_compile_options(voice_contract PRIVATE /utf-8 /fp:strict)\n')
with (root/'logs/voice-validation-build.log').open('w') as log:
    for cmd in [[config['cmake'],'-S',build,'-B',build/'native','-A','x64'],[config['cmake'],'--build',build/'native','--config','Release','--parallel','2']]:
        result=subprocess.run(list(map(str,cmd)),env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'),stdout=log,stderr=subprocess.STDOUT)
        assert result.returncode==0,'Voice build failed; see logs/voice-validation-build.log'
windows=build/'native/Release/voice_contract.exe';result=subprocess.run([str(windows)],capture_output=True,text=True);assert result.returncode==0,result.stdout+result.stderr
print(result.stdout,flush=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'voice_contract_arm64'
cmd=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-fno-strict-aliasing','-ffp-contract=off','-Wl,-z,max-page-size=16384',
    *['-I'+str(p) for p in includes],*sources,'-lm','-o',binary]
result=subprocess.run(list(map(str,cmd)),capture_output=True,text=True);assert result.returncode==0,result.stderr[-4000:]
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
def adb(cmd):return subprocess.run(prefix+cmd,check=True,capture_output=True,text=True,timeout=60).stdout
adb(['push',str(binary),remote]);adb(['shell','chmod','700',remote]);output=adb(['shell',remote]);print(output)
match=re.search(r'VOICE_CONTRACT passed=(\d+) failed=0',output);assert match
(root/'logs/voice-contract.log').write_text(output)
(root/'analysis/voice-validation.json').write_text(json.dumps({'serial':args.serial,'passed_per_architecture':int(match[1]),'failed':0,
    'scope':['PCM sample identity, pause/stop/cursor, loop and mute','Six-channel interleaved PCM, distinct channel identity and byte cursors','Hand-derived signed mono and stereo Xbox ADPCM samples','64-sample Xbox block framing, invalid headers and sizes'],
    'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),'windows_binary_sha256':hashlib.sha256(windows.read_bytes()).hexdigest(),
    'source_sha256':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources},
    'game_audio_verified':False,'console_capture_equivalence':False},indent=2))
