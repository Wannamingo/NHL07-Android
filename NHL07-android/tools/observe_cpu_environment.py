"""Observe an existing game's CPU placement without changing scheduling or settings."""
from pathlib import Path
import argparse, collections, datetime, hashlib, json, os, statistics, subprocess

root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial',required=True);ap.add_argument('--pid',type=int,required=True);ap.add_argument('--tid',type=int,required=True);ap.add_argument('--seconds',type=int,default=20);ap.add_argument('--label',required=True);args=ap.parse_args()
assert 1<=args.seconds<=30 and all(c.isalnum() or c in '-_' for c in args.label)
cfg=json.loads((root/'local-toolchains.json').read_text());apk=json.loads((root/'analysis/apk.json').read_text())
build=root/'build/cpu-environment-probe';build.mkdir(parents=True,exist_ok=True)
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';source=root/'tests/cpu_environment_probe.c';binary=build/'cpu_environment_arm64'
env=dict(os.environ,TMP=str(build),TEMP=str(build))
def run(command,timeout=15,allow_failure=False):
    result=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout)
    if result.returncode and not allow_failure:raise RuntimeError(result.stdout[-5000:]+result.stderr[-5000:])
    return result.stdout+result.stderr
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c11','-O2','-Wl,-z,max-page-size=16384',source,'-ldl','-o',binary],timeout=60)
adb=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
assert int(run(adb+['shell','pidof','org.nhl07.port']).strip())==args.pid
before={}
for name,command in {
    'thread_list':['ps','-T','-p',str(args.pid),'-o','TID,PRI,NI,PSR,COMM,CMD'],
    'renderer_status':['cat',f'/proc/{args.pid}/task/{args.tid}/status'],
    'renderer_cgroup':['cat',f'/proc/{args.pid}/task/{args.tid}/cgroup'],
    'cpuinfo':['cat','/proc/cpuinfo'],
    'performance_hint_service':['dumpsys','performance_hint'],
    'android_api':['getprop','ro.build.version.sdk'],
    'thermal':['dumpsys','thermalservice']}.items():
    before[name]=run(adb+['shell']+command,allow_failure=True)
remote='/data/local/tmp/nhl07-438eaeada465/cpu_environment_arm64'
run(adb+['push',binary,remote]);run(adb+['shell','chmod','700',remote])
started=datetime.datetime.now(datetime.timezone.utc).isoformat()
output=run(adb+['shell','timeout',str(args.seconds+5),remote,str(args.pid),str(args.tid),str(args.seconds)],timeout=args.seconds+10)
assert int(run(adb+['shell','pidof','org.nhl07.port']).strip())==args.pid
head=[json.loads(line.split(' ',1)[1]) for line in output.splitlines() if line.startswith('CPU_ENVIRONMENT ')];assert len(head)==1
samples=[json.loads(line.split(' ',1)[1]) for line in output.splitlines() if line.startswith('CPU_ENV_SAMPLE ')];assert len(samples)==args.seconds*2
valid=[sample for sample in samples if sample['thread_stat_readable']]
placement=dict(collections.Counter(sample['processor'] for sample in valid))
capacities={cpu['cpu']:cpu['capacity'] for cpu in head[0]['cpus']}
frequency_by_core={}
for core in range(8):
    values=[sample['current_khz'][core] for sample in samples if sample['current_khz'][core]>0]
    frequency_by_core[core]=dict(min_khz=min(values),median_khz=statistics.median(values),max_khz=max(values)) if values else None
log=root/'logs'/('cpu-environment-'+args.label+'.log');log.write_text(output,encoding='utf-8')
report=dict(serial=args.serial,pid=args.pid,tid=args.tid,seconds=args.seconds,recorded_at_utc=started,
    apk_sha256=apk['sha256'],native_debug_sha256=apk['native_debug_sha256'],
    metadata=head[0],processor_snapshot_counts=placement,frequency_by_core=frequency_by_core,raw_samples=samples,raw_readonly_context=before,
    game_restarted=False,system_or_application_settings_changed=False,hint_session_created=False,
    binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
    log=dict(path=str(log),sha256=hashlib.sha256(log.read_bytes()).hexdigest()),
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [source,Path(__file__)]},
    limitations=['500ms processor snapshots report the most recent executing CPU, not exact time spent on each core',
                 'CPU frequency snapshots are instantaneous and can change between reads; they are not averages weighted by execution time',
                 'Simpleperf may run concurrently as a separate CPU-clock profiler; FPS must be measured after profiling stops',
                 'Hint service and symbols demonstrate platform availability, not a game hint session or FPS benefit'])
(root/'analysis'/('cpu-environment-'+args.label+'.json')).write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps(dict(capacities=capacities,processor_snapshot_counts=placement,frequency_by_core=frequency_by_core,
    hint_manager_present=head[0]['hint_manager_present'],hint_preferred_rate_ns=head[0]['hint_preferred_rate_ns'],settings_changed=False)))
