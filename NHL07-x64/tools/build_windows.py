from pathlib import Path
import hashlib
import json
import subprocess
import struct

root = Path(__file__).resolve().parents[1]
cmake = 'C:/Program Files/CMake/bin/cmake.exe'
commands = [('configure', [cmake, '-S', root, '-B', root/'build', '-A', 'x64']),
            ('build', [cmake, '--build', root/'build', '--config', 'Release', '--target', 'nhl_07_recomp', '--parallel', '2'])]
for stage, command in commands:
    print(stage, flush=True)
    logfile = root/'logs'/f'{stage}.log'
    with logfile.open('w', encoding='utf-8') as output:
        result = subprocess.run(list(map(str, command)), stdout=output, stderr=subprocess.STDOUT)
    print(logfile.read_text(encoding='utf-8', errors='replace')[-4500:], flush=True)
    if result.returncode:
        raise SystemExit(result.returncode)
exe = root/'build/Release/nhl_07_recomp.exe'
binary=exe.read_bytes()
pe=struct.unpack_from('<I',binary,0x3c)[0]
assert binary[:2]==b'MZ' and binary[pe:pe+4]==b'PE\0\0' and struct.unpack_from('<H',binary,pe+4)[0]==0x8664
info = {'executable': str(exe), 'sha256': hashlib.sha256(binary).hexdigest(),
        'architecture': 'AMD64', 'gameplay_verified': False,
        'warning': 'A successful native build is not evidence of a playable port.'}
(root/'analysis/windows-build.json').write_text(json.dumps(info, indent=2))
