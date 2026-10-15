"""Ask Ghidra for bounded bodies of omitted call targets; no game/source edits."""
from pathlib import Path
import argparse,json,re,subprocess
root=Path(__file__).resolve().parents[1];workspace=root.parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--min-address',type=lambda x:int(x,16),default=0x200000);ap.add_argument('--max-address',type=lambda x:int(x,16),default=0x300000);args=ap.parse_args()
config=json.loads((root.with_name('NHL07-android')/'local-toolchains.json').read_text())
addresses=[int(a,16) for a in re.findall(r'^void sub_([0-9A-F]{8})\(void\) \{ RECOMP_UNIMPL\("unresolved call target"',(root/'src/recomp/gen/recomp_stubs_unresolved.c').read_text(),re.M)]
addresses=[a for a in addresses if args.min_address<=a<args.max_address]
destination=root/'analysis/ghidra-omissions';destination.mkdir(parents=True,exist_ok=True)
previous=json.loads((destination/'functions.json').read_text()) if (destination/'functions.json').exists() else []
list_path=destination/'requested.txt';list_path.write_text('\n'.join(f'{a:08x}' for a in addresses)+'\n')
ghidra=workspace/'work/nhl07-tools/ghidra_12.1.4_PUBLIC';project=json.loads((root/'analysis/ghidra-project-location.json').read_text())['path']
command=[Path(config['java'])/'bin/java.exe','-Xmx2G','-Djava.awt.headless=true','-Djava.system.class.loader=ghidra.GhidraClassLoader',
    '-Duser.home='+str(workspace/'work/nhl07-tools/home'),'-cp',ghidra/'Ghidra/Framework/Utility/lib/Utility.jar','ghidra.Ghidra',
    'ghidra.app.util.headless.AnalyzeHeadless',project,'NHL07','-process','default.xbe','-noanalysis','-readOnly',
    '-scriptPath',root/'tools/ghidra','-postScript','Nhl07RecoverOmissions.java',destination,list_path]
print('Requested Ghidra entries:',len(addresses),flush=True)
log=root/'logs/ghidra-omissions.log'
with log.open('w',encoding='utf-8') as stream:
    result=subprocess.run(list(map(str,command)),stdout=stream,stderr=subprocess.STDOUT,creationflags=subprocess.CREATE_NO_WINDOW,timeout=600)
assert result.returncode==0 and 'OMISSIONS accepted=' in log.read_text(encoding='utf-8'),log
metadata=json.loads((destination/'functions.json').read_text())
metadata=list({int(row['start'],16):row for row in previous+metadata}.values())
(destination/'functions.json').write_text(json.dumps(metadata,indent=2))
assert all((destination/(f'{int(row["start"],16):08x}'+'.c')).is_file() for row in metadata)
print('Ghidra omission recovery confirmed:',len(metadata),'functions')
