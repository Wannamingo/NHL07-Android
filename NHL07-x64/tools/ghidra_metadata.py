from pathlib import Path
import json
import subprocess

root=Path(__file__).resolve().parents[1]
workspace=root.parents[1]
ghidra=workspace/'work/nhl07-tools/ghidra_12.1.4_PUBLIC'
config=json.loads((workspace/'outputs/NFSU-android/local-toolchains.json').read_text())
project=json.loads((root/'analysis/ghidra-project-location.json').read_text())['path']
command=[Path(config['java'])/'bin/java.exe','-Xmx2G','-Djava.awt.headless=true',
         '-Djava.system.class.loader=ghidra.GhidraClassLoader',
         '-Duser.home='+str(workspace/'work/nhl07-tools/home'),
         '-cp',ghidra/'Ghidra/Framework/Utility/lib/Utility.jar','ghidra.Ghidra',
         'ghidra.app.util.headless.AnalyzeHeadless',project,'NHL07','-process','default.xbe',
         '-noanalysis','-readOnly','-scriptPath',root/'tools/ghidra',
         '-postScript','Nhl07ExportFunctions.java',root/'analysis/ghidra-functions.json']
with (root/'logs/ghidra-metadata.log').open('w',encoding='utf-8') as output:
    result=subprocess.run(list(map(str,command)),stdout=output,stderr=subprocess.STDOUT,creationflags=subprocess.CREATE_NO_WINDOW)
print('Metadata export exit',result.returncode)
raise SystemExit(result.returncode)
