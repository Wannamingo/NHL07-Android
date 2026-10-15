"""Bounded standalone exact comparison experiment while NHL07 is in the background."""
from pathlib import Path
import argparse, datetime, hashlib, json, statistics, subprocess
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial',required=True);ap.add_argument('--mode',choices=['contracts','bench'],required=True);ap.add_argument('--background-pid',type=int,required=True);args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text());build=root/'build/parallel-exact-bytes';binary=build/'parallel_exact_bytes_arm64';metadata=json.loads((build/'build.json').read_text())
assert hashlib.sha256(binary.read_bytes()).hexdigest()==metadata['binary_sha256']
prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
def run(command,timeout=15):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout)
    if result.returncode:raise RuntimeError(result.stdout[-4000:]+result.stderr[-4000:])
    return result.stdout+result.stderr
def current_pid():
    result=subprocess.run(prefix+['shell','pidof','org.nhl07.port'],capture_output=True,text=True,timeout=15)
    if result.returncode==1 and not result.stdout.strip():return 0
    assert result.returncode==0,result.stdout+result.stderr
    return int(result.stdout.strip())
assert current_pid()==args.background_pid
windows=run(prefix+['shell','dumpsys','window'])
focus=[line.strip() for line in windows.splitlines() if 'mCurrentFocus=' in line and '=null' not in line]
assert focus and all('org.nhl07.port' not in line for line in focus),focus
before_hint=run(prefix+['shell','dumpsys','performance_hint'])
remote='/data/local/tmp/nhl07-438eaeada465/parallel_exact_bytes_arm64'
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote])
recorded=datetime.datetime.now(datetime.timezone.utc).isoformat();options=['--bench-only'] if args.mode=='bench' else []
output=run(prefix+['shell','timeout','50',remote]+options,timeout=60)
assert current_pid()==args.background_pid
log=root/'logs'/('parallel-exact-bytes-'+args.serial+'-'+args.mode+'.log');log.write_text(output,encoding='utf-8')
report=dict(serial=args.serial,mode=args.mode,recorded_at_utc=recorded,background_app_pid=args.background_pid,
    foreground_before_test=focus,game_restarted=False,game_settings_changed=False,global_settings_changed=False,
    binary_sha256=metadata['binary_sha256'],tested_sources=metadata['tested_sources'],
    log=dict(path=str(log),sha256=hashlib.sha256(log.read_bytes()).hexdigest()),
    limitations=['Synthetic fixture, not a captured game frame or FPS measurement',
                 'Only the prototype worker affinity may be restricted to capacity>=90%maximum; the caller, game and global settings are not changed',
                 'Elapsed time, caller CPU and worker CPU are separately reported; reduced caller CPU alone is not an acceleration',
                 'CPU frequencies and caller placement are not locked; rotated repetitions expose, but do not eliminate, scheduling noise'])
if args.mode=='contracts':
    import re
    match=re.search(r'PARALLEL_EXACT passed=(\d+) failed=0 affinity_requested=1 affinity_applied=(\d+) affinity_mask=([0-9a-f]+) page_bytes=(\d+)',output);assert match,output
    report.update(passed=int(match[1]),failed=0,worker_affinity_applied=bool(int(match[2])),worker_affinity_mask_hex=match[3],page_bytes=int(match[4]));print(output.strip())
else:
    rows=[json.loads(line.split(' ',1)[1]) for line in output.splitlines() if line.startswith('PARALLEL_BENCH ')];assert len(rows)==324,len(rows)
    configs=[json.loads(line.split(' ',1)[1]) for line in output.splitlines() if line.startswith('PARALLEL_CONFIG ')];assert len(configs)==8
    cases=[];keys=['pool_bytes','alignment_a','alignment_b','mixed_mutations']
    for case_key in sorted({tuple(row[k] for k in keys) for row in rows}):
        chosen=[row for row in rows if tuple(row[k] for k in keys)==case_key];algorithms={}
        for name in sorted({row['algorithm'] for row in chosen}):
            sample=[row for row in chosen if row['algorithm']==name];assert len(sample)==3
            wall=[row['wall_ns']/row['logical_bytes'] for row in sample]
            caller=[row['caller_cpu_ns']/row['logical_bytes'] for row in sample]
            worker=[row['worker_cpu_ns']/row['logical_bytes'] for row in sample]
            total=[row['process_cpu_ns']/row['logical_bytes'] for row in sample]
            algorithms[name]=dict(median_wall_ns_per_requested_byte=statistics.median(wall),median_caller_cpu_ns_per_requested_byte=statistics.median(caller),
                median_worker_cpu_ns_per_requested_byte=statistics.median(worker),median_total_cpu_ns_per_requested_byte=statistics.median(total),
                wall_max_min_ratio=max(wall)/min(wall),total_cpu_max_min_ratio=max(total)/min(total),repeat_count=3)
        baseline=algorithms['libc_memcmp']
        for value in algorithms.values():
            value['wall_ratio_vs_libc']=baseline['median_wall_ns_per_requested_byte']/value['median_wall_ns_per_requested_byte']
            value['total_cpu_cost_ratio_vs_libc']=value['median_total_cpu_ns_per_requested_byte']/baseline['median_total_cpu_ns_per_requested_byte']
            value['stable_wall']=value['wall_max_min_ratio']<=1.25 and baseline['wall_max_min_ratio']<=1.25
        cases.append(dict(zip(keys,case_key),algorithms=algorithms))
    report.update(benchmark_rows=rows,benchmark_cases=cases,algorithm_configuration=configs)
    print('Parallel exact benchmark:324rows,12cases,9algorithms,3rotatedrepeats; no game FPS claim')
    for name in sorted({row['algorithm'] for row in rows}-{'libc_memcmp'}):
        values=[case['algorithms'][name] for case in cases]
        print(name,'wallratio median/min/max:',*[round(x,3) for x in (statistics.median(v['wall_ratio_vs_libc'] for v in values),min(v['wall_ratio_vs_libc'] for v in values),max(v['wall_ratio_vs_libc'] for v in values))],
            'totalCPUcostmedian:',round(statistics.median(v['total_cpu_cost_ratio_vs_libc'] for v in values),3),'stable:',sum(v['stable_wall'] for v in values),'/12')
(root/'analysis'/('parallel-exact-bytes-'+args.serial+'-'+args.mode+'.json')).write_text(json.dumps(report,indent=2),encoding='utf-8')
