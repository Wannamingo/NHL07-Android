"""Alternate isolated renderer switches in one existing, fixed game scene."""
from pathlib import Path
import argparse,datetime,json,math,subprocess,time
from installed_identity import require_installed_apk
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);ap.add_argument('--label',required=True);ap.add_argument('--modes',default='baseline,surfaces,combined');ap.add_argument('--repeats',type=int,default=3);ap.add_argument('--scene',default='unclassified; inspect captured windows');ap.add_argument('--warmup-batches',type=int,default=0);args=ap.parse_args()
if args.warmup_batches<0:ap.error('--warmup-batches must be nonnegative')
cfg=json.loads((root/'local-toolchains.json').read_text());prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial];external='/sdcard/Android/data/org.nhl07.port/files'
modes={'baseline':(0,0,0,0,0,0,0,0,0,0),'downsample':(0,1,0,0,0,0,0,0,0,0),'upsample':(0,0,1,0,0,0,0,0,0,0),'surfaces':(0,1,1,0,0,0,0,0,0,0),'combined':(0,1,1,1,0,0,0,0,0,0),'dirty':(1,1,1,1,0,0,0,0,0,0),
       'current':(0,1,1,1,0,0,0,0,0,0),'merge':(0,1,1,1,0,1,0,0,0,0),'stream':(0,1,1,1,1,0,0,0,0,0),'upload':(0,1,1,1,1,1,0,0,0,0),
       'packed':(0,1,1,1,0,0,1,0,0,0),'packed_stream':(0,1,1,1,1,0,1,0,0,0),'packed_merged':(0,1,1,1,0,1,1,0,0,0),
       'shader':(0,1,1,1,0,0,0,1,0,0),'mips':(0,1,1,1,0,0,0,0,1,0),'shader_mips':(0,1,1,1,0,0,0,1,1,0),
       'exact_buffer':(0,1,1,1,0,0,0,0,0,1),'shader_buffer':(0,1,1,1,0,0,0,1,0,1)}
keys=['target_dirty_cache','target_gpu_downsample','target_gpu_upsample','draw_dedup','stream_upload','merge_upload','pack_upload','shader_prep_cache','texture_base_compare','exact_buffer_cache']
def adb(*command,allow_empty=False):
    p=subprocess.run(prefix+list(command),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
    assert p.returncode==0 or (allow_empty and p.returncode==1 and not p.stdout and not p.stderr),p.stdout+p.stderr
    return p.stdout
def parse_profile_rows(log):
    lines=[line for line in log.splitlines() if line.startswith('[NHL07-GPU-PROFILE]')]
    result=[]
    for index,line in enumerate(lines):
        payload=line[len('[NHL07-GPU-PROFILE] '):]
        # The producer writes a row in several calls; grep can observe its
        # unfinished tail and itself append a newline. Only the final row may
        # be pending. The completed format ends with its frame_ns array.
        if index==len(lines)-1 and not payload.rstrip().endswith(']}'):break
        row=json.loads(payload)
        assert row['frames']==300 and len(row['frame_ns'])==300,'Incomplete profile frame batch'
        result.append(row)
    return result
def rows():
    log=adb('shell','grep','-F','[NHL07-GPU-PROFILE]',external+'/startup.log',allow_empty=True)
    return parse_profile_rows(log)
def select_matching_batch(candidates,flags,warmup_batches,warmup):
    """Skip complete matching warmup batches, retaining progress across polls."""
    for row in candidates:
        if row.get('frames')!=300:continue
        if not all(row.get(k)==v for k,v in flags.items()):continue
        if len(warmup)<warmup_batches:
            warmup.append(row)
            continue
        return row
    return None
pid=adb('shell','pidof','org.nhl07.port').strip();assert pid
apk_sha256=require_installed_apk(root,prefix)
assert 'timeout=0;' in adb('shell','cat',external+'/startup.log'),'Normal launch only'
selected=args.modes.split(',');assert all(m in modes for m in selected)
records=[];stamp=datetime.datetime.now().strftime('%Y%m%d-%H%M%S');folder=root/'analysis'/('benchmark-'+args.label+'-'+stamp);folder.mkdir()
for repeat in range(args.repeats):
    # Alternate order to reduce bias from temperature/frequency drift.
    for name in selected if repeat%2==0 else list(reversed(selected)):
        flags=dict(zip(keys,modes[name]));conf=folder/'gpu-profile.conf';conf.write_bytes(('format=2\nprofile=1\n'+''.join(f'{k}={v}\n' for k,v in flags.items())).encode('ascii'))
        seen=len(rows())
        adb('push',str(conf),external+'/gpu-profile-next.conf');adb('shell','mv',external+'/gpu-profile-next.conf',external+'/gpu-profile.conf')
        deadline=time.monotonic()+150*(args.warmup_batches+1);found=None;warmup=[]
        while time.monotonic()<deadline:
            time.sleep(3);assert adb('shell','pidof','org.nhl07.port').strip()==pid,'Game restarted'
            current=rows()
            found=select_matching_batch(current[seen:],flags,args.warmup_batches,warmup)
            if found:break
            seen=len(current)
        assert found is not None,'No completed profile batch with requested switches'
        record=dict(mode=name,repeat=repeat+1,flags=flags,warmup_batches=args.warmup_batches,warmup_profiles=warmup,profile=found);records.append(record)
        print(json.dumps({k:found[k] for k in ['fps','p95_ms','p99_ms']}|{'mode':name,'repeat':repeat+1}),flush=True)
        (folder/'samples.json').write_text(json.dumps(records,indent=2),encoding='utf-8')
        adb('shell','screencap','-p',external+'/benchmark-screen.png');adb('pull',external+'/benchmark-screen.png',str(folder/f'{repeat+1}-{name}.png'))
summary={}
for name in selected:
    batches=[r['profile'] for r in records if r['mode']==name];times=sorted(n for b in batches for n in b['frame_ns']);assert len(times)==300*args.repeats
    summary[name]={'frames':len(times),'fps':len(times)*1e9/sum(times),'frame_ms':sum(times)/len(times)/1e6,'p95_ms':times[math.ceil(len(times)*.95)-1]/1e6,'p99_ms':times[math.ceil(len(times)*.99)-1]/1e6,'max_ms':times[-1]/1e6,'stages_ms':{k:sum(b['inclusive_stages'][k]['ms_per_frame'] for b in batches)/len(batches) for k in batches[0]['inclusive_stages']},'stage_calls':{k:sum(b['inclusive_stages'][k]['calls'] for b in batches) for k in batches[0]['inclusive_stages']}}
report={'label':args.label,'scene_description':args.scene,'comparable_scene_verified':False,'apk_sha256':apk_sha256,'pid':pid,'serial':args.serial,'recorded_at':stamp,'repeats':args.repeats,'warmup_batches_per_selection':args.warmup_batches,'selection_deadline_seconds':150*(args.warmup_batches+1),'summary':summary,'folder':str(folder),'limitations':['Raw aggregates require separate visual scene qualification; they cannot by themselves establish an active-game FPS gain','One process and caller-selected scene; scene stability must be checked in screenshots','Inclusive wall timers include driver waits and cannot be added across nested stages','No pure GPU timer measurement; instrumentation adds overhead equally in all modes']}
(folder/'report.json').write_text(json.dumps(report,indent=2),encoding='utf-8');(root/'analysis'/('benchmark-'+args.label+'.json')).write_text(json.dumps(report,indent=2),encoding='utf-8');adb('pull',external+'/startup.log',str(folder/'startup.log'));print(json.dumps(report,indent=2),flush=True)
