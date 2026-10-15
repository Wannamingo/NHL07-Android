"""Build a signed local development APK. Original disc/XBE stay outside the APK."""
from pathlib import Path
import hashlib,json,os,secrets,shutil,subprocess,zipfile,sys
import xml.etree.ElementTree as ET

root=Path(__file__).resolve().parents[1]
config=json.loads((root/'local-toolchains.json').read_text())
manifest=json.loads((root/'analysis/build.json').read_text())
application_manifest=ET.parse(root/'android/AndroidManifest.xml').getroot();ns='{http://schemas.android.com/apk/res/android}'
version_name=application_manifest.get(ns+'versionName')
assert version_name and version_name.isascii() and all(c.isalnum() or c in '.-_' for c in version_name)
assert hashlib.sha256((root/'build/libnhl07_core.so').read_bytes()).hexdigest()==manifest['sha256']
system_only='--custom-graphics' not in sys.argv
assert manifest.get('custom_graphics',True)!=system_only,'Build/package graphics variants must match'
build=root/'build/apk';build.mkdir(parents=True,exist_ok=True)
java=Path(config['java'])/'bin';sdk=Path(config['build_tools']);android=Path(config['android_jar'])
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64/bin'
env=dict(os.environ,TEMP=str(build),TMP=str(build))
def run(args):
    result=subprocess.run(list(map(str,args)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace')
    if result.returncode: raise RuntimeError(result.stdout+result.stderr)
    return result.stdout+result.stderr
work=build/('java-'+secrets.token_hex(5));work.mkdir()
classes=work/'classes';classes.mkdir();dex=work/'dex';dex.mkdir()
sources=sorted((root/'android/java').rglob('*.java'))
run([java/'javac.exe','--release','17','-encoding','UTF-8','-classpath',android,'-d',classes,*sources])
jar=work/'launcher.jar';run([java/'jar.exe','--create','--file',jar,'-C',classes,'.'])
run([java/'java.exe','-Djava.io.tmpdir='+str(build),'-cp',sdk/'lib/d8.jar','com.android.tools.r8.D8',
    '--min-api','29','--lib',android,'--output',dex,jar])
unsigned=build/'unsigned.apk'
resources=work/'resources.zip'
run([sdk/'aapt2.exe','compile','--dir',root/'android/res','--no-crunch','-o',resources])
run([sdk/'aapt2.exe','link','-o',unsigned,'--manifest',root/'android/AndroidManifest.xml','-I',android,
    '--min-sdk-version','29','--target-sdk-version','35',resources])
library=build/'libnhl07_core.so';shutil.copy2(root/'build/libnhl07_core.so',library)
run([llvm/'llvm-strip.exe','--strip-debug',library])
extra_libraries=[]
bridge={}
if not system_only:
    bridge=json.loads((root/'analysis/angle-bridge-build.json').read_text())
    adreno=json.loads((root/'analysis/adrenotools-probe-build.json').read_text())
    extra_libraries=[(Path(x['derived']),x['derived_sha256']) for x in bridge['libraries']]
    extra_libraries.append((Path(bridge['bridge']['path']),bridge['bridge']['sha256']))
    extra_libraries.extend((Path(x['path']),x['sha256']) for x in adreno['artifacts'])
    assert {p.name for p,h in extra_libraries}=={'libEGL_angle.so','libGLESv2_angle.so','libab.so','libadrenotools.so',
        'libfile_redirect_hook.so','libgsl_alloc_hook.so','libhook_impl.so','libmain_hook.so'}
graphics_records=[]
for source,sha in extra_libraries:
    assert hashlib.sha256(source.read_bytes()).hexdigest()==sha,source
    report=run([llvm/'llvm-readelf.exe','-h','-l','-d',source])
    loads=[int(line.split()[-1],16) for line in report.splitlines() if line.strip().startswith('LOAD')]
    assert 'AArch64' in report and loads and min(loads)>=16384,source
    graphics_records.append({'name':source.name,'sha256':sha,'bytes':source.stat().st_size,'load_alignments':loads})
driver_sha=None
if not system_only:
    driver=root/'analysis/driver/mainline-turnip-sync-V32/libvulkan_freedreno.so'
    driver_sha='3d04277c9aad26c9c886a337979be1e418b7a8ff8414c8f293d4f37757f4ac22'
    assert hashlib.sha256(driver.read_bytes()).hexdigest()==driver_sha
    licenses=root/'analysis/driver/THIRD-PARTY-LICENSES.txt'
    assert hashlib.sha256(licenses.read_bytes()).hexdigest()=='be116f384793c90aa3cd32964e2e81dc78fccb5d818efbc724be77448ff7c88d'
with zipfile.ZipFile(unsigned,'a') as archive:
    for source in sorted((root/'android/assets').rglob('*')):
        if source.is_file():
            name='assets/'+source.relative_to(root/'android/assets').as_posix()
            if name=='assets/launcher/index.html':
                payload=source.read_bytes();assert payload.count(b'__NHL07_VERSION__')==1
                archive.writestr(name,payload.replace(b'__NHL07_VERSION__',version_name.encode('ascii')),compress_type=zipfile.ZIP_DEFLATED)
            else:archive.write(source,name,compress_type=zipfile.ZIP_DEFLATED)
    for source in dex.glob('classes*.dex'): archive.write(source,source.name,compress_type=zipfile.ZIP_DEFLATED)
    archive.write(library,'lib/arm64-v8a/libnhl07_core.so',compress_type=zipfile.ZIP_STORED)
    for source,sha in extra_libraries:archive.write(source,'lib/arm64-v8a/'+source.name,compress_type=zipfile.ZIP_STORED)
    if not system_only:
        archive.write(driver,'assets/graphics/turnip-v32/libvulkan_freedreno.so',compress_type=zipfile.ZIP_DEFLATED)
        archive.write(licenses,'assets/graphics/THIRD-PARTY-LICENSES.txt',compress_type=zipfile.ZIP_DEFLATED)
        archive.write(licenses.with_suffix('.provenance.json'),'assets/graphics/THIRD-PARTY-LICENSES.provenance.json',compress_type=zipfile.ZIP_DEFLATED)
        archive.writestr('assets/graphics/manifest.json',json.dumps({'angle_commit':bridge['candidate_commit'],
            'turnip_sha256':driver_sha,'libraries':graphics_records},indent=2),compress_type=zipfile.ZIP_DEFLATED)
aligned=build/'aligned.apk';run([sdk/'zipalign.exe','-P','16','-f','4',unsigned,aligned])
key=build/'development.keystore'
if not key.exists():
    run([java/'keytool.exe','-genkeypair','-keystore',key,'-storepass','android','-keypass','android',
        '-alias','androiddebugkey','-dname','CN=NHL07 Local Development','-keyalg','RSA','-keysize','2048','-validity','10000'])
apk=root.parent/'NHL07-RG477M-dev.apk'
run([java/'java.exe','-jar',sdk/'lib/apksigner.jar','sign','--ks',key,'--ks-key-alias','androiddebugkey',
    '--ks-pass','pass:android','--key-pass','pass:android','--out',apk,aligned])
signature=run([java/'java.exe','-jar',sdk/'lib/apksigner.jar','verify','--verbose','--print-certs',apk])
run([sdk/'zipalign.exe','-c','-P','16','4',apk])
badging=run([sdk/'aapt2.exe','dump','badging',apk])
assert "package: name='org.nhl07.port'" in badging and "native-code: 'arm64-v8a'" in badging
assert "minSdkVersion:'29'" in badging
elf=run([llvm/'llvm-readelf.exe','-h','-l','-d',library])
assert 'AArch64' in elf and 'ELF64' in elf
alignments=[int(line.split()[-1],16) for line in elf.splitlines() if line.strip().startswith('LOAD')]
assert alignments and all(x>=16384 for x in alignments)
with zipfile.ZipFile(apk) as archive:
    assert archive.testzip() is None
    launcher_html=archive.read('assets/launcher/index.html')
    assert b'__NHL07_VERSION__' not in launcher_html and (version_name+'</span></footer>').encode('ascii') in launcher_html
    assert not any(n.lower().endswith(('.xbe','.iso','.viv')) for n in archive.namelist())
    if system_only:
        assert [n for n in archive.namelist() if n.startswith('lib/')]==['lib/arm64-v8a/libnhl07_core.so']
        assert not any(n.startswith('assets/graphics/') for n in archive.namelist())
record={'apk':str(apk),'sha256':hashlib.sha256(apk.read_bytes()).hexdigest(),'bytes':apk.stat().st_size,
    'native_debug_sha256':manifest['sha256'],'native_apk_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),
    'package':'org.nhl07.port','abi':'arm64-v8a','minimum_sdk':29,'load_alignments':alignments,
    'signature_verified':True,'zip_alignment_16k':True,'original_game_data_included':True,'complete_disc_or_xbe_included':False,
    'included_game_assets':'Derived Russian font copies and translated locale tables; original ISO/XBE/VIV archives remain outside APK',
    'gameplay_verified':False,'kind':'Experimental native port; normal launch unbounded; gameplay evidence is pinned separately per APK'}
application_manifest=ET.parse(root/'android/AndroidManifest.xml').getroot();ns='{http://schemas.android.com/apk/res/android}'
record.update(version=application_manifest.get(ns+'versionName'),version_code=int(application_manifest.get(ns+'versionCode')),
    debuggable=application_manifest.find('application').get(ns+'debuggable')=='true',
    profileable=application_manifest.find('application/profileable') is not None)
record.update(graphics_libraries=graphics_records,turnip_sha256=driver_sha,graphics_default=0,
    graphics_modes=['System GLES'] if system_only else ['System GLES','ANGLE Turnip V32'],graphics_api_minimum=29 if system_only else 30,
    system_only=system_only,
    native_libraries_extracted=application_manifest.find('application').get(ns+'extractNativeLibs')=='true')
(root/'analysis/apk.json').write_text(json.dumps(record,indent=2))
(root/'logs/apk-verification.txt').write_text(signature+'\n'+badging+'\n'+elf,encoding='utf-8')
apk.with_suffix('.sha256').write_text(record['sha256']+'  '+apk.name+'\n')
print(json.dumps(record,indent=2))
