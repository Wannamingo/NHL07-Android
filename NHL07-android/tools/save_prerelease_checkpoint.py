"""Keep the verified APK, native symbols, source snapshot and scenario evidence."""
from pathlib import Path
import hashlib,json,shutil,subprocess,sys,zipfile
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64');workspace=root.parents[1]
device=json.loads((root/'analysis/prerelease-device-validation.json').read_text(encoding='utf-8'));version=device['version']
subprocess.run([sys.executable,str(game/'tools/pin_sources.py')],check=True)
pin=game/'analysis/source-and-artifact-pin.json';records=json.loads(pin.read_text())
folder=root/'checkpoints'/('20261015-prerelease-'+version);folder.mkdir(exist_ok=True)
def sha(p):return hashlib.sha256(Path(p).read_bytes()).hexdigest()
assert sha(device['prerelease_apk'])==device['apk_sha256']
for p in [Path(device['prerelease_apk']),root/'build/libnhl07_core.so',root/'analysis/apk.json',pin,root/'STATUS.txt',root/'PERFORMANCE.txt',Path(device['log'])]:shutil.copy2(p,folder/p.name)
for name in ['prerelease-device-validation.json','prerelease-performance.json','localization-overlay-validation.json','localization-assets.json','fps-pause-validation.json','launcher-host-validation.json','platform-contract.json','timer-contract.json']:
    shutil.copy2(root/'analysis'/name,folder/name)
for name in device['screenshots']:shutil.copy2(root/'analysis'/name,folder/name)
for p in (root/'analysis').glob('fps-rc*-*.json'):shutil.copy2(p,folder/p.name)
source=folder/'sources.zip'
with zipfile.ZipFile(source,'w',zipfile.ZIP_DEFLATED,compresslevel=6) as archive:
    for record in {r['path']:r for r in records['files']}.values():
        path=workspace/record['path'];assert sha(path)==record['sha256'],path;archive.write(path,record['path'])
with zipfile.ZipFile(source) as archive:assert archive.testzip() is None
manifest={'version':version,'apk_sha256':device['apk_sha256'],'source_zip_sha256':sha(source),'source_files':len(records['files']),
    'files':{p.name:sha(p) for p in folder.iterdir() if p.is_file() and p.name!='manifest.json'},'complete_match_on_this_apk_verified':False}
(folder/'manifest.json').write_text(json.dumps(manifest,indent=2),encoding='utf-8');print(json.dumps({'checkpoint':str(folder),'apk_sha256':device['apk_sha256'],'source_files':len(records['files'])},indent=2))
