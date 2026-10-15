"""Run Ghidra's independent analysis and export decompiled pseudocode."""
from pathlib import Path
import json
import os
import subprocess
import tempfile
import shutil

root = Path(__file__).resolve().parents[1]
workspace = root.parents[1]
ghidra = workspace / 'work/nhl07-tools/ghidra_12.1.4_PUBLIC'
config = json.loads((workspace/'outputs/NFSU-android/local-toolchains.json').read_text())
java = Path(config['java'])/'bin/java.exe'
home = workspace/'work/nhl07-tools/home'
home.mkdir(exist_ok=True)
project = Path(tempfile.gettempdir())/'NHL07-ghidra-438eaeada465'
project.mkdir(exist_ok=True)
(root/'analysis/ghidra-project-location.json').write_text(json.dumps({'path': str(project)}, indent=2))
command = [java, '-Xmx4G', '-XX:ParallelGCThreads=2', '-XX:CICompilerCount=2',
           '-Djava.awt.headless=true', '-Djava.system.class.loader=ghidra.GhidraClassLoader',
           '-Duser.home='+str(home), '-cp', ghidra/'Ghidra/Framework/Utility/lib/Utility.jar',
           'ghidra.Ghidra', 'ghidra.app.util.headless.AnalyzeHeadless',
           project, 'NHL07', '-import', root/'input/default.xbe',
           '-loader', 'BinaryLoader', '-processor', 'x86:LE:32:default', '-cspec', 'windows',
           '-scriptPath', root/'tools/ghidra',
           '-preScript', 'Nhl07LoadXbe.java', root/'input/default.xbe',
           '-postScript', 'Nhl07ExportC.java', root/'analysis/ghidra-c',
           '-analysisTimeoutPerFile', '600', '-max-cpu', '2',
           '-log', root/'logs/ghidra.log', '-scriptlog', root/'logs/ghidra-script.log']
with (root/'logs/ghidra-direct-console.log').open('w', encoding='utf-8') as output:
    result = subprocess.run(list(map(str, command)), stdout=output, stderr=subprocess.STDOUT,
                            creationflags=subprocess.CREATE_NO_WINDOW)
print('Ghidra exit:', result.returncode)
if result.returncode == 0:
    shutil.make_archive(str(root/'analysis/NHL07-ghidra-project'), 'zip', project)
print((root/'logs/ghidra-direct-console.log').read_text(encoding='utf-8',errors='replace')[-4500:])
raise SystemExit(result.returncode)
