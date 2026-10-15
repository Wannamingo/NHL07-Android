"""Collect new native stage profiles. Requires an already running normal game."""
from pathlib import Path
import argparse,datetime,json,math,subprocess,time
from installed_identity import require_installed_apk
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);ap.add_argument('--label',required=True);ap.add_argument('--seconds',type=int,default=45);ap.add_argument('--warmup-batches',type=int,default=1);ap.add_argument('--minimum-batches',type=int,default=3);args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text());prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
def adb(*command,allow_empty=False):
    p=subprocess.run(prefix+list(command),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
    assert p.returncode==0 or (allow_empty and p.returncode==1 and not p.stdout and not p.stderr),p.stdout+p.stderr
    return p.stdout
def rows():
    text=adb('shell','grep','-F','[NHL07-GPU-PROFILE]','/sdcard/Android/data/org.nhl07.port/files/startup.log',allow_empty=True)
    return [json.loads(line.split('] ',1)[1]) for line in text.splitlines() if line.startswith('[NHL07-GPU-PROFILE]')]
pid=adb('shell','pidof','org.nhl07.port').strip();assert pid
apk_sha256=require_installed_apk(root,prefix)
seen=len(rows());end=time.monotonic()+args.seconds
while time.monotonic()<end:
    time.sleep(5);assert adb('shell','pidof','org.nhl07.port').strip()==pid,'Target restarted'
data=rows()[seen:];assert len(data)>=args.minimum_batches,'Insufficient complete 300-frame batches'
# Discard the first complete batch as warmup and any state transition.
used=data[args.warmup_batches:];assert used;frames=sum(x['frames'] for x in used)
times=[n for x in used for n in x.get('frame_ns',[])];times.sort()
report={'apk_sha256':apk_sha256,'pid':pid,'serial':args.serial,'label':args.label,'recorded_at':datetime.datetime.now().astimezone().isoformat(),'batches':data,'warmup_batches':args.warmup_batches,'measured_frames':frames,'fps':frames*1000/sum(x['frame_ms']*x['frames'] for x in used),'stages_ms':{name:sum(x['inclusive_stages'][name]['ms_per_frame']*x['frames'] for x in used)/frames for name in used[0]['inclusive_stages']},'stage_call_counts':{name:sum(x['inclusive_stages'][name]['calls'] for x in used) for name in used[0]['inclusive_stages']},'scope':'Caller must record scene/resolution; timers measure wall duration of API calls, with nested inclusive stages, not pure GPU execution'}
if times:report.update(p95_ms=times[math.ceil(len(times)*.95)-1]/1e6,p99_ms=times[math.ceil(len(times)*.99)-1]/1e6,max_ms=times[-1]/1e6)
path=root/'analysis'/('profile-'+args.label+'.json');path.write_text(json.dumps(report,indent=2),encoding='utf-8');adb('pull','/sdcard/Android/data/org.nhl07.port/files/startup.log',str(root/'logs'/('profile-'+args.label+'.log')))
print(json.dumps({k:v for k,v in report.items() if k!='batches'},indent=2))
