"""Retain original network code under audit names; route public startup to an explicit error."""
from pathlib import Path
import hashlib
import json
import re

root=Path(__file__).resolve().parents[1]
data=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
info=json.loads((root/'analysis/xbe.json').read_text())
ghidra={int(x['start'],16):x for x in json.loads((root/'analysis/ghidra-functions.json').read_text())}
evidence=[]
for address,size,pop in [(0x006ed20e,23,4),(0x006ed225,27,8)]:
    assert address in ghidra
    section=next(s for s in info['sections'] if int(s['virtual_addr'],16)<=address<int(s['virtual_addr'],16)+s['raw_size'])
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16)
    code=data[offset:offset+size]
    assert code[-3:]==bytes([0xc2,pop,0]), 'Unexpected calling convention'
    name=f'sub_{address:08X}'
    found=0
    for path in (root/'src/recomp/gen').glob('recomp_*.c'):
        source=path.read_text()
        old=f'void {name}(void)\n{{'
        if old in source:
            source=source.replace(old,f'void {name}_original_xbox(void)\n{{')
            path.write_text(source,encoding='utf-8')
            found+=1
    evidence.append({'address':f'0x{address:08X}','bytes':code.hex(),'stack_argument_bytes':pop,
                     'result':'WSASYSNOTREADY (10091), explicit unsupported-network failure',
                     'original_bodies_renamed_this_run':found})
(root/'analysis/network-offline-boundary.json').write_text(json.dumps(evidence,indent=2))
print('Public network startup now reports unavailability explicitly')
