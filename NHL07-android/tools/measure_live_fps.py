"""Measure actual native frame batches without enabling GPU capture diagnostics."""
from pathlib import Path
import argparse,datetime,hashlib,json,re,subprocess,time
from installed_identity import require_installed_apk
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);ap.add_argument('--label',required=True);ap.add_argument('--scale',type=int,choices=[1,2,3],required=True);ap.add_argument('--seconds',type=int,default=65);args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text());prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial];external='/sdcard/Android/data/org.nhl07.port/files'
def adb(command):
    r=subprocess.run(prefix+command,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
    assert r.returncode==0,r.stdout+r.stderr
    return r.stdout
pid=adb(['shell','pidof','org.nhl07.port']).strip();assert pid
apk_sha256=require_installed_apk(root,prefix)
log=adb(['shell','cat',external+'/startup.log']);assert 'timeout=0;' in log,'Requires normal launch without GPU diagnostic captures'
pattern=re.compile(r'\[NHL07-FRAME-TIMING\] frames=(\d+) fps=([\d.]+) work_ms=([\d.]+) prepare_ms=([\d.]+) swap_ms=([\d.]+) limiter_ms=([\d.]+) scale=(\d+) diagnostic=(\d+)')
seen=len(pattern.findall(log));rows=[];end=time.monotonic()+max(20,min(180,args.seconds));started=datetime.datetime.now().astimezone().isoformat()
while time.monotonic()<end:
    time.sleep(5);assert adb(['shell','pidof','org.nhl07.port']).strip()==pid,'Game process restarted'
    # The game's own counters are independent of the Java overlay and host polling.
    matches=pattern.findall(adb(['shell','grep','-F','[NHL07-FRAME-TIMING]',external+'/startup.log']))
    for v in matches[seen:]:
        row=dict(zip(['frames','fps','work_ms','prepare_ms','swap_ms','limiter_ms','scale','diagnostic'],[int(v[0]),*map(float,v[1:6]),int(v[6]),int(v[7])]))
        if row['scale']==args.scale and row['diagnostic']==0:rows.append(row);print(json.dumps(row),flush=True)
    seen=len(matches)
assert len(rows)>=2,'Insufficient observed native frame batches'
# The first batch can straddle a resolution change; retain it in the raw data,
# but exclude it from the aggregate to avoid mixing two resolutions.
measured=rows[1:];frames=sum(r['frames'] for r in measured);seconds=sum(r['frames']/r['fps'] for r in measured)
report={'apk_sha256':apk_sha256,'serial':args.serial,'pid':pid,'started':started,'label':args.label,'scale':args.scale,'diagnostic_capture':False,'batches':rows,'aggregate_excludes_first_batch':True,
        'measured_frames':frames,'weighted_fps':frames/seconds,'batch_min_fps':min(r['fps'] for r in measured),'batch_max_fps':max(r['fps'] for r in measured),'average_ms':{n:sum(r[n]*r['frames'] for r in measured)/frames for n in ['work_ms','prepare_ms','swap_ms','limiter_ms']},
        'limitations':['Dynamic gameplay scenes are not identical between resolution samples','Work time includes translated game code, GL submission and any driver stalls; it does not isolate CPU from GPU execution']}
path=root/'analysis'/('fps-'+args.label+'.json');path.write_text(json.dumps(report,indent=2),encoding='utf-8');print(json.dumps({'report':str(path),'fps':report['weighted_fps'],'frames':frames}),flush=True)
