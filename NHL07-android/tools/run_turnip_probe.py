"""Run only the pinned standalone Vulkan HAL probe in /data/local/tmp.

Does not install/modify an APK, change a system driver/settings, or run the game.
The shell process's linker namespace differs from an Android application's.
"""
from pathlib import Path
import argparse, datetime, hashlib, json, re, subprocess

root=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser();parser.add_argument('--serial',required=True)
args=parser.parse_args()
assert re.fullmatch(r'[A-Za-z0-9_.:-]{1,128}',args.serial),'Invalid device serial'
cfg=json.loads((root/'local-toolchains.json').read_text())
build_path=root/'analysis/turnip-probe-build.json'
build=json.loads(build_path.read_text(encoding='utf-8'))
probe=Path(build['probe_binary']);driver=Path(build['library'])
assert probe.resolve().is_relative_to(root.resolve()) and driver.resolve().is_relative_to(root.resolve())
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
assert sha(probe)==build['probe_binary_sha256'],'Probe binary changed since build report'
assert sha(driver)==build['library_sha256'],'Driver changed since ZIP audit'
for name,wanted in build['probe_sources'].items():assert sha(root/name)==wanted,('Probe source changed since build report',name)

prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
transcript=[]
def adb(command,timeout=30,allow_failure=False):
    invocation=prefix+list(map(str,command))
    result=subprocess.run(invocation,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout)
    transcript.append({'args':list(map(str,command)),'exit_code':result.returncode,'stdout':result.stdout,'stderr':result.stderr})
    if result.returncode and not allow_failure:raise RuntimeError(result.stdout[-4000:]+result.stderr[-4000:])
    return result

assert adb(['get-state']).stdout.strip()=='device'
properties={key:adb(['shell','getprop',key]).stdout.strip() for key in [
    'ro.product.model','ro.product.manufacturer','ro.product.device','ro.board.platform','ro.hardware',
    'ro.build.version.release','ro.build.version.sdk','ro.build.fingerprint']}
sdk=int(properties['ro.build.version.sdk'])
assert sdk>=build['effective_minimum_android_api_at_least'],('Actual binary needs API30 despite metadata minApi28',sdk)
application_pid_before=adb(['shell','pidof','org.nhl07.port'],allow_failure=True).stdout.strip()
remote='/data/local/tmp/nhl07-turnip-v32'
remote_probe=remote+'/turnip_probe';remote_driver=remote+'/libvulkan_freedreno.so'
adb(['shell','mkdir','-p',remote])
adb(['push',probe,remote_probe]);adb(['push',driver,remote_driver])
adb(['shell','chmod','700',remote_probe])
remote_hashes=adb(['shell','sha256sum',remote_probe,remote_driver]).stdout
parsed={line.split()[-1]:line.split()[0] for line in remote_hashes.splitlines() if len(line.split())>=2}
assert parsed.get(remote_probe)==build['probe_binary_sha256']
assert parsed.get(remote_driver)==build['library_sha256']

failure=None;executed=None
try:
    executed=adb(['shell',remote_probe,remote_driver],timeout=45,allow_failure=True)
except subprocess.TimeoutExpired as error:
    failure='Host wait timed out; probe has its own 30-second process watchdog'
    transcript.append({'args':['shell',remote_probe,remote_driver],'timeout':45,
                       'stdout':(error.stdout or b'').decode('utf-8','replace') if isinstance(error.stdout,bytes) else error.stdout,
                       'stderr':(error.stderr or b'').decode('utf-8','replace') if isinstance(error.stderr,bytes) else error.stderr})
application_pid_after=adb(['shell','pidof','org.nhl07.port'],allow_failure=True).stdout.strip()
output='' if executed is None else executed.stdout+executed.stderr
passed=bool(executed and executed.returncode==0 and
            'TURNIP_PROBE passed=1' in output and 'GPU_READBACK bytes=4096 mismatches=0' in output and
            'API HAL close result=0' in output and 'API dlclose result=0' in output)
stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%d-%H%M%SZ')
safe_serial=re.sub(r'[^A-Za-z0-9_.-]','_',args.serial)
log_path=root/'logs'/f'turnip-probe-{safe_serial}-{stamp}.log'
log_path.write_text('\n'.join('COMMAND '+json.dumps(item['args'])+'\nEXIT '+str(item.get('exit_code','timeout'))+
                             '\n'+(item.get('stdout') or '')+(item.get('stderr') or '') for item in transcript),encoding='utf-8')
device_rows=[{'name':name,'vendor_id':vendor,'device_id':device,'driver_version_hex':version,'api_version':api}
             for name,vendor,device,version,api in re.findall(
                 r'GPU name=(.*?) vendor=([0-9a-f]+) device=([0-9a-f]+) driver=([0-9a-f]+) api=([\d.]+)',output)]
report={'passed':passed,'serial':args.serial,'timestamp_utc':stamp,'device_properties':properties,
        'probe_exit_code':None if executed is None else executed.returncode,'host_timeout':failure,
        'probe_binary_sha256':build['probe_binary_sha256'],'driver_sha256':build['library_sha256'],
        'archive_sha256':build['archive_sha256'],'build_report_sha256':sha(build_path),
        'runner_source_sha256':sha(Path(__file__)),'remote_directory':remote,'remote_sha256':parsed,
        'driver_environment':'TU_DEBUG=sysmem set inside probe before dlopen',
        'physical_devices':device_rows,
        'api_results':[{'api':api,'VkResult':int(value)} for api,value in re.findall(r'API (.+?) VkResult=(-?\d+)',output)],
        'exact_gpu_readback_bytes':4096 if 'GPU_READBACK bytes=4096 mismatches=0' in output else None,
        'raw_log':str(log_path),'raw_log_sha256':sha(log_path),
        'main_application_pid_before':application_pid_before,'main_application_pid_after':application_pid_after,
        'APK_install_or_modify_command_issued':False,'system_driver_or_settings_modified':False,
        'scope':'Separate shell-process HAL loading, instance/GPU/device creation and one exact GPU buffer fill/readback',
        'not_validated':['App classloader namespace and libadrenotools integration','ANGLE GLES translation',
                         'Android window/swapchain presentation','NHL07 rendering, stability or FPS']}
report_path=root/'analysis'/f'turnip-probe-{safe_serial}-{stamp}.json'
report_path.write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps({'passed':passed,'serial':args.serial,'GPU':device_rows,'probe_exit_code':report['probe_exit_code'],
                  'report':str(report_path),'raw_log':str(log_path),'game_or_FPS_validation':False},indent=2))
if not passed:raise SystemExit(1)
