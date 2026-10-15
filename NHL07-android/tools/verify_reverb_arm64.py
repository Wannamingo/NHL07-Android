"""Check the translated reverb calculator against original x86 vectors on RG477M."""
from pathlib import Path
import argparse,hashlib,json,re,subprocess
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64');build=root/'build/reverb-validation'
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
windows=json.loads((root/'analysis/reverb-windows-validation.json').read_text());assert windows['failed']==0
config=json.loads((root/'local-toolchains.json').read_text());llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'reverb_test_arm64'
command=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-fno-strict-aliasing','-ffp-contract=off','-Wl,-z,max-page-size=16384',
    '-I'+str(game/'src/recomp/gen'),root/'tests/reverb_harness.c',root/'tests/reverb_runner.c',build/'calculator.c','-lm','-o',binary]
result=subprocess.run(list(map(str,command)),capture_output=True,text=True);assert result.returncode==0,result.stderr[-4000:]
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/reverb-validation'
def adb(command):return subprocess.run(prefix+command,check=True,capture_output=True,text=True,timeout=60).stdout
adb(['shell','mkdir','-p',remote])
for p in [binary,build/'memory.bin',build/'reverb-vectors.bin',build/'initial-state.bin']:adb(['push',str(p),remote+'/'])
adb(['shell','chmod','700',remote+'/'+binary.name]);output=adb(['shell',remote+'/'+binary.name,remote+'/memory.bin',remote+'/reverb-vectors.bin',remote+'/initial-state.bin'])
match=re.search(r'REVERB_ARM64 passed=(\d+) failed=0',output);assert match;print(output)
(root/'logs/reverb-arm64-validation.log').write_text(output)
(root/'analysis/reverb-arm64-validation.json').write_text(json.dumps({'serial':args.serial,'passed':int(match[1]),'failed':0,
    'oracle':'Original x86 in Unicorn, 3 listener presets x 3 x87 control words','source_functions':windows['source_functions'],
    'calculator_sha256':hashlib.sha256((build/'calculator.c').read_bytes()).hexdigest(),'fixture_sha256':hashlib.sha256((build/'reverb-vectors.bin').read_bytes()).hexdigest(),
    'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),'scope':'Packed DSP reverb parameters and stack balance, actual ARM64 translated functions'},indent=2))
