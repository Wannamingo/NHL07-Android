"""Save a short functional screen sequence; never use this as an FPS benchmark."""
from pathlib import Path
import argparse,datetime,json,subprocess,time
from installed_identity import require_installed_apk
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);ap.add_argument('--label',required=True);ap.add_argument('--seconds',type=int,default=60);args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text());prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
def adb(*command):
    p=subprocess.run(prefix+list(command),capture_output=True,timeout=30);assert p.returncode==0,p.stderr.decode(errors='replace');return p.stdout
sha=require_installed_apk(root,prefix);pid=adb('shell','pidof','org.nhl07.port').strip();assert pid
folder=root/'analysis'/(args.label+'-'+datetime.datetime.now().strftime('%H%M%S'));folder.mkdir();end=time.monotonic()+args.seconds;records=[]
while time.monotonic()<end:
    assert adb('shell','pidof','org.nhl07.port').strip()==pid,'Target process changed'
    path=folder/f'frame-{len(records):03d}.png';payload=adb('exec-out','screencap','-p')
    start=payload.find(b'\x89PNG\r\n\x1a\n');assert start>=0,'No PNG returned by screencap'
    path.write_bytes(payload[start:]);records.append(path.name)
    time.sleep(.5)
(folder/'record.json').write_text(json.dumps({'serial':args.serial,'apk_sha256':sha,'pid':pid.decode(),'frames':records,'functional_capture_only':True},indent=2));print(str(folder))
