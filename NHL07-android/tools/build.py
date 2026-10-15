from pathlib import Path
import hashlib
import json
import os
import subprocess
import struct
import sys

root=Path(__file__).resolve().parents[1]
config=json.loads((root/'local-toolchains.json').read_text())
build=root/'build'
temp=build/'tmp'; temp.mkdir(parents=True,exist_ok=True)
env=dict(os.environ,TEMP=str(temp),TMP=str(temp))
commands=[('configure',[config['cmake'],'-S',root,'-B',build,'-G','Ninja',
    '-DCMAKE_MAKE_PROGRAM='+config['ninja'],
    '-DCMAKE_TOOLCHAIN_FILE='+str(Path(config['ndk'])/'build/cmake/android.toolchain.cmake'),
    '-DANDROID_ABI=arm64-v8a','-DANDROID_PLATFORM=android-29','-DCMAKE_BUILD_TYPE=RelWithDebInfo',
    '-DNHL07_CUSTOM_GRAPHICS='+('ON' if '--custom-graphics' in sys.argv else 'OFF')]),
    ('build',[config['cmake'],'--build',build,'--target','nhl07_core','nhl07_probe','--parallel','2'])]
if '--fresh' in sys.argv:commands[0][1].append('--fresh')
for label,command in commands:
    print(label,flush=True)
    logfile=root/'logs'/f'{label}.log'
    with logfile.open('w',encoding='utf-8') as output:
        result=subprocess.run(list(map(str,command)),env=env,stdout=output,stderr=subprocess.STDOUT)
    print(logfile.read_text(encoding='utf-8',errors='replace')[-5000:],flush=True)
    if result.returncode: raise SystemExit(result.returncode)
binary=build/'libnhl07_core.so'
data=binary.read_bytes()
assert data[:5]==b'\x7fELF\x02' and struct.unpack_from('<H',data,18)[0]==183
probe=build/'nhl07_probe'
probe_data=probe.read_bytes()
assert probe_data[:5]==b'\x7fELF\x02' and struct.unpack_from('<H',probe_data,18)[0]==183
(root/'analysis/build.json').write_text(json.dumps({'artifact':str(binary),'sha256':hashlib.sha256(data).hexdigest(),
    'probe':str(probe),'probe_sha256':hashlib.sha256(probe_data).hexdigest(),
    'machine':'ELF64 AArch64','custom_graphics':'--custom-graphics' in sys.argv,'device_tested':False,'gameplay_verified':False,
    'kind':'Native ARM64 core; build success does not establish startup or gameplay for this exact artifact'},indent=2))
