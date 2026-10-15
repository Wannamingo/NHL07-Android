"""Prepare or run the bounded ARM64 startup probe when the user's device is connected.
Default: local plan only. Deployment/run require explicit command-line options.
This tool installs no APK and makes no playable-port claim.
"""
from pathlib import Path
import argparse
import datetime
import hashlib
import json
import subprocess

root=Path(__file__).resolve().parents[1]
game=root.with_name('NHL07-x64')
parser=argparse.ArgumentParser()
parser.add_argument('--serial',help='Exact ADB device serial; never select a device implicitly')
parser.add_argument('--deploy',action='store_true',help='Copy native probe, core, XBE and extracted disc to the device')
parser.add_argument('--update-code',action='store_true',help='Update native binaries and XBE; keep the already copied disc')
parser.add_argument('--run',action='store_true',help='Run the 30-second startup probe and capture its log')
args=parser.parse_args()
config=json.loads((root/'local-toolchains.json').read_text())
build=json.loads((root/'analysis/build.json').read_text())
remote='/data/local/tmp/nhl07-438eaeada465'
inputs=[(root/'build/libnhl07_core.so',build['sha256']),
        (root/'build/nhl07_probe',build['probe_sha256']),
        (game/'input/default.xbe',config['xbe_sha256'])]
for path,expected in inputs:
    assert hashlib.sha256(path.read_bytes()).hexdigest()==expected, 'Stale or wrong artifact: '+str(path)
plan={'kind':'ARM64 diagnostic startup probe, no game UI and no APK',
    'device_tested':False,'minimum_android_api':29,'required_abi':'arm64-v8a',
    'remote_directory':remote,'timeout_seconds':30,
    'payload_bytes':sum(p.stat().st_size for p,_ in inputs)+sum(p.stat().st_size for p in (game/'disc').rglob('*') if p.is_file()),
    'expected_current_blocker':'Intro movie: white frame repeated, EA clock stays at zero; native voice buffers and RGB565 upload implemented',
    'deployment': 'python tools/device_probe.py --serial DEVICE_SERIAL --deploy --run'}
if not (args.deploy or args.update_code or args.run):
    (root/'analysis/device-probe-plan.json').write_text(json.dumps(plan,indent=2))
    print(json.dumps(plan,indent=2))
    raise SystemExit(0)
if not args.serial: parser.error('--serial is required for device operations')
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial]
def adb(arguments,check=True,timeout=120):
    return subprocess.run(prefix+arguments,check=check,capture_output=True,text=True,timeout=timeout)
abi=adb(['shell','getprop','ro.product.cpu.abilist']).stdout.strip()
sdk=int(adb(['shell','getprop','ro.build.version.sdk']).stdout.strip())
model=adb(['shell','getprop','ro.product.model']).stdout.strip()
if 'arm64-v8a' not in abi or sdk<29: raise SystemExit('This build needs Android API 29+ with arm64-v8a.')
stamp=datetime.datetime.now().strftime('%Y%m%d-%H%M%S')
device={'model':model,'abi':abi,'sdk':sdk,'serial':args.serial,'timestamp':stamp,
        'gameplay_verified':False,'remote_directory':remote}
if args.deploy or args.update_code:
    adb(['shell','mkdir','-p',remote+'/saves'])
    for path,_ in inputs: adb(['push',str(path),remote+'/'],timeout=600)
    if args.deploy: adb(['push',str(game/'disc'),remote+'/'],timeout=3600)
    adb(['shell','chmod','700',remote+'/nhl07_probe'])
if args.run:
    for path,expected in inputs:
        actual=adb(['shell','sha256sum',remote+'/'+path.name]).stdout.split()[0]
        if actual!=expected: raise SystemExit('Device artifact checksum mismatch: '+path.name)
    command=f'cd {remote} && LD_LIBRARY_PATH={remote} ./nhl07_probe default.xbe disc saves'
    result=adb(['shell',command],check=False,timeout=60)
    log=root/'logs'/('device-probe-'+stamp+'.log')
    log.write_text(result.stdout+result.stderr,encoding='utf-8')
    device.update(returncode=result.returncode,log=str(log),
        native_entry_reached='[NHL07-ARM64]' in result.stdout,
        firmware_exit_requested='HalReturnToFirmware' in result.stdout)
    print('Probe return code:',result.returncode,'log:',log)
(root/'analysis'/('device-'+stamp+'.json')).write_text(json.dumps(device,indent=2))
