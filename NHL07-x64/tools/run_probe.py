"""Run the actual translated entry with a bounded diagnostic timeout."""
from pathlib import Path
import datetime
import hashlib
import json
import os
import subprocess

root = Path(__file__).resolve().parents[1]
exe = root/'build/Release/nhl_07_recomp.exe'
stamp = datetime.datetime.now().strftime('%Y%m%d-%H%M%S')
logfile = root/'logs'/f'windows-entry-{stamp}.log'
env = dict(os.environ, RECOMP_WATCHDOG_SECS='15', RECOMP_UNIMPL_TRAP='1')
started = datetime.datetime.now().isoformat()
with logfile.open('w', encoding='utf-8') as output:
    process = subprocess.Popen([str(exe)], cwd=root, env=env, stdout=output,
                               stderr=subprocess.STDOUT, creationflags=subprocess.CREATE_NO_WINDOW)
    try:
        code = process.wait(timeout=45)
        timed_out = False
    except subprocess.TimeoutExpired:
        process.kill()
        code = process.wait()
        timed_out = True
record = {'started': started, 'executable_sha256': hashlib.sha256(exe.read_bytes()).hexdigest(),
          'log': str(logfile), 'returncode': code, 'timed_out': timed_out,
          'gameplay_verified': False}
(root/'analysis/latest-windows-entry.json').write_text(json.dumps(record, indent=2))
print(json.dumps(record, indent=2))
print(logfile.read_text(encoding='utf-8',errors='replace')[-6500:])
