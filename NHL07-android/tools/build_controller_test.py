"""Build/install a separate instrumentation APK; never modifies the game APK.

Use --build-only to prepare the harness without a connected Android device.
The harness accepts synthetic input with no physical pad by default; pass
`-e require_physical true` to am instrument when physical enumeration is needed.
Optional `-e game_language ru|en` and `-e resolution 1|2|3` explicitly update
only those target preferences before MainActivity starts. Omit to preserve them.
"""
from pathlib import Path
import argparse,hashlib,json,os,secrets,subprocess,zipfile
root=Path(__file__).resolve().parents[1];config=json.loads((root/'local-toolchains.json').read_text())
ap=argparse.ArgumentParser();ap.add_argument('--serial');ap.add_argument('--build-only',action='store_true');args=ap.parse_args()
if not args.build_only and not args.serial:ap.error('--serial is required unless --build-only is selected')
build=root/'build/controller-test';build.mkdir(parents=True,exist_ok=True)
work=build/secrets.token_hex(5);work.mkdir();classes=work/'classes';classes.mkdir();dex=work/'dex';dex.mkdir()
env=dict(os.environ,TEMP=str(work),TMP=str(work))
java=Path(config['java'])/'bin';sdk=Path(config['build_tools']);android=Path(config['android_jar'])
def run(cmd):
    result=subprocess.run(list(map(str,cmd)),capture_output=True,text=True,encoding='utf-8',errors='replace',env=env)
    assert result.returncode==0,result.stdout+result.stderr
    return result.stdout
run([java/'javac.exe','--release','17','-encoding','UTF-8','-classpath',android,'-d',classes,root/'tests/controller/ControllerRun.java'])
jar=work/'test.jar';run([java/'jar.exe','--create','--file',jar,'-C',classes,'.'])
run([java/'java.exe','-cp',sdk/'lib/d8.jar','com.android.tools.r8.D8','--min-api','29','--lib',android,'--output',dex,jar])
unsigned=work/'unsigned.apk';run([sdk/'aapt2.exe','link','-o',unsigned,'--manifest',root/'tests/controller/AndroidManifest.xml','-I',android,'--min-sdk-version','29','--target-sdk-version','35'])
with zipfile.ZipFile(unsigned,'a') as archive:
    for source in dex.glob('classes*.dex'):archive.write(source,source.name,compress_type=zipfile.ZIP_DEFLATED)
aligned=work/'aligned.apk';run([sdk/'zipalign.exe','-f','4',unsigned,aligned])
apk=build/'controller-test.apk'
run([java/'java.exe','-jar',sdk/'lib/apksigner.jar','sign','--ks',root/'build/apk/development.keystore','--ks-key-alias','androiddebugkey','--ks-pass','pass:android','--key-pass','pass:android','--out',apk,aligned])
run([java/'java.exe','-jar',sdk/'lib/apksigner.jar','verify',apk])
if not args.build_only:
    print(run([config['adb'],'-P',str(config['adb_port']),'-s',args.serial,'install','-r',apk]))
else:
    print('Prepared instrumentation APK:',apk)
print('Instrumentation APK SHA256:',hashlib.sha256(apk.read_bytes()).hexdigest())
