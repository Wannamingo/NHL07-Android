"""Run the actual Android Java converter on JVM and, optionally, RG477M."""
from pathlib import Path
import argparse,hashlib,json,subprocess,zipfile
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
ap=argparse.ArgumentParser();ap.add_argument('--serial');args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());work=root/'build/roster-converter';work.mkdir(exist_ok=True)
java=Path(config['java'])/'bin';sdk=Path(config['build_tools'])
sources=[root/'android/java/org/nhl07/port/EaData.java',root/'android/java/org/nhl07/port/RosterConverter.java',root/'android/java/org/nhl07/port/RosterPackage.java',root/'tests/launcher/Nhl07RosterConverterContract.java']
def run(command):
    r=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=180)
    assert r.returncode==0,r.stdout+r.stderr
    return r.stdout+r.stderr
classes=work/'classes';classes.mkdir(exist_ok=True)
run([java/'javac.exe','--release','17','-encoding','UTF-8','-d',classes,*sources])
fixtures=[game/'disc/db/db.viv',game/'analysis/rosters/legacy-2026-27-roster.bin',game/'mods/rosters/db.viv',game/'analysis/rosters',game/'disc/preload/fapt.viv',game/'mods/rosters/preload/fapt.viv']
outputs={'windows_jvm':run([java/'java.exe','-cp',classes,'org.nhl07.port.Nhl07RosterConverterContract',*fixtures])}
if args.serial:
    jar=work/'converter.jar';run([java/'jar.exe','--create','--file',jar,'-C',classes,'.']);dex=work/'dex';dex.mkdir(exist_ok=True)
    run([java/'java.exe','-cp',sdk/'lib/d8.jar','com.android.tools.r8.D8','--min-api','29','--lib',config['android_jar'],'--output',dex,jar])
    dexjar=work/'converter-dex.jar'
    with zipfile.ZipFile(dexjar,'w') as z:z.write(dex/'classes.dex','classes.dex')
    prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/roster-converter'
    run(prefix+['shell','mkdir','-p',remote+'/original',remote+'/converted',remote+'/decoded'])
    for path,target in [(dexjar,'converter.jar'),(fixtures[0],'original/db.viv'),(fixtures[1],'legacy.bin'),(fixtures[2],'converted/db.viv'),(fixtures[4],'original/fapt.viv'),(fixtures[5],'converted/fapt.viv')]:run(prefix+['push',path,remote+'/'+target])
    for path in fixtures[3].glob('*.tdb.decoded'):run(prefix+['push',path,remote+'/decoded/'+path.name])
    outputs['android_dalvik']=run(prefix+['shell','dalvikvm','-cp',remote+'/converter.jar','org.nhl07.port.Nhl07RosterConverterContract',remote+'/original/db.viv',remote+'/legacy.bin',remote+'/converted/db.viv',remote+'/decoded',remote+'/original/fapt.viv',remote+'/converted/fapt.viv'])
for name,value in outputs.items():print(name,value.strip())
report={'serial':args.serial,'results':outputs,'failed':0,'scope':['Actual Android converter produces byte-identical output to separate Python implementation','17 original compressed game resources match actual recompiled original decoder','Malformed compressed resources and non-Legacy input rejected','Source game data and source roster remain unchanged'],
    'limitations':['Launcher installation, resource loading and updated gameplay still require integration checks'],
    'source_roster_sha256':hashlib.sha256(fixtures[1].read_bytes()).hexdigest(),'converted_viv_sha256':hashlib.sha256(fixtures[2].read_bytes()).hexdigest(),
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources+[Path(__file__)]}}
(root/'analysis/roster-converter-validation.json').write_text(json.dumps(report,indent=2))
