"""Run a bounded standalone comparison contract/benchmark while the game is stopped."""
from pathlib import Path
import argparse, datetime, hashlib, json, statistics, subprocess

root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial',required=True);ap.add_argument('--mode',choices=['contracts','bench'],required=True);args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/exact-bytes-prefetch';binary=build/'exact_bytes_prefetch_arm64'
metadata=json.loads((build/'build.json').read_text());assert hashlib.sha256(binary.read_bytes()).hexdigest()==metadata['binary_sha256']
prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
def run(command,timeout=15,allow_empty=False):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout)
    if result.returncode and not(allow_empty and result.returncode==1 and not result.stdout.strip()):
        raise RuntimeError(result.stdout[-2000:]+result.stderr[-2000:])
    return result.stdout+result.stderr
pid=run(prefix+['shell','pidof','org.nhl07.port'],allow_empty=True).strip()
assert not pid,'Stop game first; refusing to mix application and standalone benchmark: '+pid
remote='/data/local/tmp/nhl07-438eaeada465/exact_bytes_prefetch_arm64'
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote])
recorded=datetime.datetime.now(datetime.timezone.utc).isoformat()
options=['--contracts-only'] if args.mode=='contracts' else ['--bench-only','--quick']
output=run(prefix+['shell','timeout','50',remote]+options,timeout=60)
log=root/'logs'/('exact-bytes-prefetch-'+args.serial+'-'+args.mode+'.log');log.write_text(output,encoding='utf-8')
rows=[json.loads(line.split(' ',1)[1]) for line in output.splitlines() if line.startswith('EQUALITY_BENCH ')]
report=dict(serial=args.serial,mode=args.mode,recorded_at_utc=recorded,game_stopped_before_run=True,game_changed=False,
    remote_timeout_seconds=50,binary_sha256=metadata['binary_sha256'],tested_sources=metadata['tested_sources'],
    log=dict(path=str(log),sha256=hashlib.sha256(log.read_bytes()).hexdigest()),benchmark_rows=rows,
    limitations=['Synthetic distribution of texture-compatible spans, not a captured game workload',
                 'CPU affinity and frequencies are not locked; CPU clock excludes waiting but can change with scheduling',
                 'Only a stable, consistent benefit merits game integration; no game FPS improvement is claimed'])
if args.mode=='contracts':
    import re
    match=re.search(r'EQUALITY_PREFETCH passed=(\d+) failed=0 page_bytes=(\d+)',output);assert match,output
    report.update(passed=int(match[1]),failed=0,page_bytes=int(match[2]));print(output.strip())
else:
    assert len(rows)==180,('Incomplete benchmark',len(rows))
    cases=[]
    keys=['pool_bytes','alignment_a','alignment_b','mixed_mutations']
    for case_key in sorted({tuple(row[k] for k in keys) for row in rows}):
        chosen=[row for row in rows if tuple(row[k] for k in keys)==case_key]
        algorithms={}
        for name in sorted({row['algorithm'] for row in chosen}):
            sample=[row for row in chosen if row['algorithm']==name];assert len(sample)==3
            med_cpu=statistics.median(row['cpu_ns']/row['logical_bytes'] for row in sample)
            med_wall=statistics.median(row['wall_ns']/row['logical_bytes'] for row in sample)
            cpu_rat=max(row['cpu_ns']/row['logical_bytes'] for row in sample)/min(row['cpu_ns']/row['logical_bytes'] for row in sample)
            wall_rat=max(row['wall_ns']/row['logical_bytes'] for row in sample)/min(row['wall_ns']/row['logical_bytes'] for row in sample)
            algorithms[name]=dict(median_cpu_ns_per_requested_byte=med_cpu,median_wall_ns_per_requested_byte=med_wall,
                cpu_max_min_ratio=cpu_rat,wall_max_min_ratio=wall_rat,repeat_count=3)
        baseline=algorithms['libc_memcmp']
        for value in algorithms.values():
            value['cpu_ratio_vs_libc']=baseline['median_cpu_ns_per_requested_byte']/value['median_cpu_ns_per_requested_byte']
            value['wall_ratio_vs_libc']=baseline['median_wall_ns_per_requested_byte']/value['median_wall_ns_per_requested_byte']
            value['stable_cpu_and_wall']=value['cpu_max_min_ratio']<=1.25 and value['wall_max_min_ratio']<=1.25 and baseline['cpu_max_min_ratio']<=1.25 and baseline['wall_max_min_ratio']<=1.25
        cases.append(dict(zip(keys,case_key),algorithms=algorithms))
    report.update(benchmark_cases=cases,raw_ratios_are_not_game_speedups=True)
    print('Standalone equality benchmark: 180 rows, 12 cases, five algorithms, three rotated repeats; no game FPS claim')
    for name in ['prior_neon256','block1024','prefetch1024','prefetch2048']:
        ratios=[case['algorithms'][name]['cpu_ratio_vs_libc'] for case in cases]
        stable=sum(case['algorithms'][name]['stable_cpu_and_wall'] for case in cases)
        print(name,'CPU median/min/max ratio vs libc:',round(statistics.median(ratios),3),round(min(ratios),3),round(max(ratios),3),'stable cases:',stable,'/ 12')
report_path=root/'analysis'/('exact-bytes-prefetch-'+args.serial+'-'+args.mode+'.json')
report_path.write_text(json.dumps(report,indent=2),encoding='utf-8')
