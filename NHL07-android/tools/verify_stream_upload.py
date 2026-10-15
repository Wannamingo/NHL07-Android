"""Run isolated actual-GLES upload contracts; omission of --serial builds only."""
from pathlib import Path
import argparse,datetime,hashlib,json,re,subprocess,sys

root=Path(__file__).resolve().parents[1]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--serial')
parser.add_argument('--build-only',action='store_true')
args=parser.parse_args()
if args.serial:assert re.fullmatch(r'[A-Za-z0-9._:-]+',args.serial),'Unsafe device serial'
cfg=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/stream-upload-validation'

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def run(command,timeout=180,required=True):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout)
    if required:assert result.returncode==0,result.stdout[-8000:]+result.stderr[-8000:]
    return result

run([sys.executable,root/'tools/build_stream_upload.py'])
identity=json.loads((build/'build.json').read_text())
binary=Path(identity['binary'])
assert sha(binary)==identity['binary_sha256'],'Built executable differs from build record'
sources=[root/name for name in identity['tested_sources']]+[Path(__file__)]
source_hashes={p.relative_to(root).as_posix():sha(p) for p in sources}
assert all(source_hashes[name]==expected for name,expected in identity['tested_sources'].items()),'Sources changed during build'
if not args.serial or args.build_only:
    print(json.dumps({'binary':str(binary),'binary_sha256':sha(binary),'built_only':True,'device_used':False,'correctness_executed':False}))
    sys.exit(0)

prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
serial_tag=re.sub(r'[^A-Za-z0-9._-]','_',args.serial)
def adb(*command,required=True):return run(prefix+list(command),timeout=180,required=required)
started=datetime.datetime.now(datetime.timezone.utc).isoformat()
properties=adb('shell','getprop').stdout
all_properties=dict(re.findall(r'^\[([^\]]+)\]: \[(.*)\]$',properties,flags=re.M))
property_keys=['ro.product.manufacturer','ro.product.model','ro.product.device',
               'ro.build.version.release','ro.build.version.sdk','ro.build.fingerprint',
               'ro.soc.manufacturer','ro.soc.model','ro.board.platform',
               'ro.hardware.egl','ro.hardware.vulkan','ro.opengles.version',
               'ro.gfx.driver.0','ro.gfx.driver.1']
selected_properties={key:all_properties.get(key) or None for key in property_keys}
surface=adb('shell','dumpsys','SurfaceFlinger',required=False)
gles_line=next((line.strip() for line in surface.stdout.splitlines() if re.match(r'\s*GLES:',line)),None)
device_metadata={'serial':args.serial,'properties':selected_properties,
                 'surfaceflinger_gles':gles_line,
                 'surfaceflinger_gles_note':None if gles_line else 'System GLES driver description unavailable; actual test renderer is recorded separately.'}
remote_dir='/data/local/tmp/nhl07-438eaeada465/stream-upload-validation'
remote=remote_dir+'/'+binary.name
adb('shell','mkdir','-p',remote_dir)
adb('push',binary,remote)
adb('shell','chmod','700',remote)
device_hash=adb('shell','sha256sum',remote).stdout.split()[0]
assert device_hash==identity['binary_sha256'],'Device executable differs from locally built binary'
result=adb('shell',remote,required=False)
output=result.stdout+result.stderr
log=root/'logs'/('stream-upload-'+serial_tag+'.log')
log.write_text(output,encoding='utf-8')
assert result.returncode==0,output[-8000:]
match=re.search(r'^STREAM_UPLOAD passed=(\d+) failed=0\s*$',output,flags=re.M)
renderer=re.search(r'^STREAM_UPLOAD renderer=(.+)$',output,flags=re.M)
assert match and renderer,output[-8000:]
policies=[]
for line in output.splitlines():
    if line.startswith('STREAM_STATS '):policies.append({key:int(value) for key,value in re.findall(r'(\w+)=(\d+)',line)})
assert len(policies)==2 and {p['policy'] for p in policies}=={0,1},'Both actual fence-reuse and forced-orphan paths must pass'
for policy in policies:
    assert policy['uploads']>2000 and policy['rotations']>3,'Ring stress did not cross all three slots'
    if policy['policy']==1:assert policy['orphans']>3,'Actual storage orphaning was not exercised'
assert all(sha(root/name)==expected for name,expected in source_hashes.items()),'Sources changed during device execution'
assert sha(binary)==device_hash,'Local executable changed during device execution'
device_metadata['actual_test_renderer']=renderer[1].strip()
device_log=root/'logs'/('stream-upload-'+serial_tag+'-device.json')
device_log.write_text(json.dumps(device_metadata,indent=2),encoding='utf-8')
report={'serial':args.serial,'started_at_utc':started,'passed':int(match[1]),'failed':0,
        'correctness_executed':True,'device_used':True,'game_apk_used':False,
        'renderer':renderer[1].strip(),'device':device_metadata,'policies':policies,
        'binary_sha256':device_hash,'device_executable_sha256':device_hash,
        'raw_log':{'path':str(log),'sha256':sha(log)},
        'device_metadata_log':{'path':str(device_log),'sha256':sha(device_log)},
        'tested_sources':source_hashes,
        'scope':['Actual production stream_upload.cpp with GLES3 execution; no dependency doubles',
                 'Complete baseline-versus-streamed 64x64 GPU images for 180 changing draws per policy, separate/interleaved attributes, indexed and array draws',
                 'Exact mapped GPU vertex/index bytes, padding/tails, independent changing colors/geometry/indices and 16-byte alignment',
                 '1200 queued indexed draws per policy cross all three ring slots before final complete-image comparison',
                 'Ready-fence reuse and explicitly forced actual storage orphaning, bounded zero-timeout fence polls, larger draw growth and explicit cleanup/recreation',
                 'Oversize, nested reservations, reservation overrun and null source rejection'],
        'limitations':['Standalone upload-helper contract, not a complete game or original-console pixel-equivalence check.',
                       'The forced-orphan policy exercises the same allocation fallback; naturally pending fence counts depend on device timing.',
                       'System GLES version information comes from SurfaceFlinger; renderer comes from the actual test context.',
                       'No FPS improvement is inferred from correctness checks.']}
path=root/'analysis'/('stream-upload-'+serial_tag+'-validation.json')
path.write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps({'report':str(path),'renderer':report['renderer'],'passed':report['passed'],'failed':0,'policies':policies},indent=2))
