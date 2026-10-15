"""Run packed XPP ABI tests and actual AAudio output test on a selected device."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
parser=argparse.ArgumentParser();parser.add_argument('--serial',required=True);args=parser.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
binary=root/'build/nhl07_platform_contract'
inputs=[root/'tests/platform_contract.c',root/'src/native_input.c',root/'src/native_input_hooks.c',root/'src/native_input.h',root/'src/native_audio.c',root/'src/native_audio.h',root/'src/native_dsp.c',root/'src/native_dsp.h']
inputs += [root/'src/native_voice.c',root/'src/native_voice.h',root/'src/xbox_adpcm.c']
inputs += [root/'src/native_pause.c',root/'src/native_pause.h',root/'src/native_fps.c',root/'src/native_fps.h']
temp=root/'build/tmp';temp.mkdir(parents=True,exist_ok=True)
env=dict(os.environ,TEMP=str(temp),TMP=str(temp))
command=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-fno-strict-aliasing','-Wl,-z,max-page-size=16384',
    '-ffp-contract=off',
    '-I'+str(game/'src/recomp/gen'),'-I'+str(root/'src'),'-I'+str(root/'deps/dsp56300'),'-I'+str(root/'deps/adpcm-xq'),*[p for p in inputs if p.suffix=='.c'],root/'build/reverb-validation/calculator.c','-laaudio','-lm','-o',binary]
result=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True)
assert result.returncode==0,result.stderr[-4000:]
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
def adb(cmd):
    result=subprocess.run(prefix+cmd,check=True,capture_output=True,text=True,timeout=60)
    return result.stdout+result.stderr
directory='/data/local/tmp/nhl07-438eaeada465/platform-validation';adb(['shell','mkdir','-p',directory])
adb(['push',str(root/'analysis/first-dsp-image.bin'),directory+'/image.bin'])
adb(['push',str(root/'build/reverb-validation/memory.bin'),directory+'/memory.bin'])
adb(['push',str(binary),remote]);adb(['shell','chmod','700',remote]);output=adb(['shell',remote,directory+'/image.bin',directory,directory+'/memory.bin'])
print(output);match=re.search(r'PLATFORM_CONTRACT passed=(\d+) failed=0 audio_callback_frames=(\d+)',output);assert match
concurrency=re.search(r'AUDIO_CONCURRENCY polls=(\d+) cursor_changes=(\d+) maximum_control_wait_ms=([0-9.]+)',output);assert concurrency
report={'serial':args.serial,'passed':int(match[1]),'failed':0,'aaudio_callback_frames':int(match[2]),
    'audio_concurrency':{'polls':int(concurrency[1]),'cursor_changes':int(concurrency[2]),'maximum_control_wait_ms':float(concurrency[3]),'bound_ms':100,'original_DSP_active':True},
    'audio_affinity_restore':{'periodic_audit_verified':'periodic=true' in output,'resume_before_unpause_verified':'resume_before_unpause=true' in output,'simulation':'Test process widens the actual callback affinity to its original process mask, then verifies restoration'},
    'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in inputs},
    'scope':['Synthetic controller state through actual native boundary, packed 22-byte state and 25-byte capabilities','Generated XInputGetState wrapper stack cleanup','Actual Android AAudio service: float stereo 48000 Hz output callback','Native DirectSoundCreate and DownloadEffectsImage, packed descriptors and complete initial zero DSP frame','Audio pause freezes mixer cursor; resume advances it; monitor/AAudio close and reopen twice','Looping six-channel PCM cursors stay strictly within buffer'],
    'not_validated':['Physical button events in game','Game audio playback or DSP effects','Full game correctness']}
(root/'logs/platform-contract.log').write_text(output)
(root/'analysis/platform-contract.json').write_text(json.dumps(report,indent=2))
