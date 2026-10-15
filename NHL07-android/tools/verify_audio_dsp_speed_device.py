"""Compare original and optimized DSP on one selected ARM64 CPU, without game playback."""
from pathlib import Path
import argparse,datetime,hashlib,json,re,subprocess
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text())
prefix=[config['adb'],'-P',str(config.get('adb_port',5038)),'-s',args.serial]
stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%d-%H%M%SZ')
out=root/'analysis'/('audio-dsp-speed-'+stamp);out.mkdir()
remote='/data/local/tmp/nhl07-438eaeada465/audio-dsp-speed-'+stamp
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def adb(cmd):
 r=subprocess.run(prefix+cmd,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=60)
 assert r.returncode==0,r.stdout+r.stderr
 return r.stdout
adb(['shell','mkdir','-p',remote]);adb(['shell','input','keyevent','3'])
image=root/'analysis/first-dsp-image.bin';adb(['push',str(image),remote+'/image.bin'])
modes=['baseline','flags','multiply'];binaries={}
for mode in modes:
 p=root/'build/dsp-optimization'/('dsp_opt_'+mode+'_arm64')
 binaries[mode]={'sha256':sha(p),'bytes':p.stat().st_size,'path':str(p)}
 adb(['push',str(p),remote+'/'+mode]);adb(['shell','chmod','700',remote+'/'+mode])
rows=[]
for repeat in range(3):
 for mode in modes[repeat:]+modes[:repeat]:
  text=adb(['shell','taskset','80',remote+'/'+mode,remote+'/image.bin',remote+'/'+mode+'.bin','1000'])
  (out/f'{repeat+1}-{mode}.log').write_text(text,encoding='utf-8')
  match=re.search(r'DSP_OPT passed=(\d+) snapshot_frames=(\d+) benchmark_frames=(\d+) seconds=([\d.]+) ns_per_dsp_frame=([\d.]+) digest=(\w+) instructions=(\d+) dma_bytes=(\d+)',text);assert match,text
  snap=adb(['shell','sha256sum',remote+'/'+mode+'.bin']).split()[0]
  if repeat==0:
   adb(['pull',remote+'/'+mode+'.bin',str(out/(mode+'.bin'))]);assert sha(out/(mode+'.bin'))==snap
  row=dict(repeat=repeat+1,mode=mode,passed=int(match[1]),snapshot_frames=int(match[2]),benchmark_frames=int(match[3]),seconds=float(match[4]),ns_per_dsp_frame=float(match[5]),digest=match[6],instructions=int(match[7]),dma_bytes=int(match[8]),snapshot_sha256=snap)
  rows.append(row);print(json.dumps(row),flush=True)
assert len({r['snapshot_sha256'] for r in rows})==len({r['digest'] for r in rows})==len({r['instructions'] for r in rows})==len({r['dma_bytes'] for r in rows})==1
assert all(r['passed']==2082944 and r['snapshot_frames']==64 for r in rows)
means={mode:sum(r['ns_per_dsp_frame'] for r in rows if r['mode']==mode)/3 for mode in modes}
report={'serial':args.serial,'cpu_affinity_mask':'0x80 (CPU7, standalone process only)','image_sha256':sha(image),'binaries':binaries,'runs':rows,'mean_ns_per_32_frame_dsp':means,'all_snapshots_and_digests_byte_exact':True,'realtime_32_frame_budget_ns':32/48000*1e9,'scope':'Standalone full original DSP chain, three alternating repeats per executable after 64-frame warmup. Not actual music, gameplay FPS or audible-quality validation.'}
(out/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
print(str(out/'report.json'),flush=True)
