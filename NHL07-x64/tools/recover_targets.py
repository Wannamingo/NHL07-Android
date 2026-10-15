"""Ask Ghidra to recover runtime-observed function pointers missed by autoanalysis."""
from pathlib import Path
import json
import subprocess
import sys

root=Path(__file__).resolve().parents[1]
workspace=root.parents[1]
ghidra=workspace/'work/nhl07-tools/ghidra_12.1.4_PUBLIC'
config=json.loads((root.with_name('NHL07-android')/'local-toolchains.json').read_text())
project=json.loads((root/'analysis/ghidra-project-location.json').read_text())['path']
addresses=[f'{int(a,16):08x}' for a in sys.argv[1:]]
if not addresses: raise SystemExit('Supply the exact observed target address(es) in hex.')
command=[Path(config['java'])/'bin/java.exe','-Xmx2G','-Djava.awt.headless=true',
    '-Djava.system.class.loader=ghidra.GhidraClassLoader',
    '-Duser.home='+str(workspace/'work/nhl07-tools/home'),
    '-cp',ghidra/'Ghidra/Framework/Utility/lib/Utility.jar','ghidra.Ghidra',
    'ghidra.app.util.headless.AnalyzeHeadless',project,'NHL07','-process','default.xbe',
    '-noanalysis','-readOnly','-scriptPath',root/'tools/ghidra',
    '-postScript','Nhl07RecoverTargets.java',root/'analysis/ghidra-recovered',*addresses]
log=root/'logs'/('ghidra-recover-'+addresses[0]+'.log')
with log.open('w',encoding='utf-8') as output:
    result=subprocess.run(list(map(str,command)),stdout=output,stderr=subprocess.STDOUT,
        creationflags=subprocess.CREATE_NO_WINDOW,timeout=180)
output=log.read_text(encoding='utf-8',errors='replace')
for address in addresses:
    if 'RECOVERED '+address not in output or not (root/'analysis/ghidra-recovered'/(address+'.c')).is_file():
        raise SystemExit('Ghidra did not confirm recovery; inspect '+str(log))
print('\n'.join(line for line in output.splitlines() if 'RECOVERED ' in line))
raise SystemExit(result.returncode)
