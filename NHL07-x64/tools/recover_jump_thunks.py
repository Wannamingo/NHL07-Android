"""Recover only Ghidra-confirmed, exact five-byte JMP entry thunks."""
from pathlib import Path
import hashlib
import json
import re
import struct

root=Path(__file__).resolve().parents[1]
data=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
metadata=root/'analysis/ghidra-functions.json'
if not metadata.exists():
    raise SystemExit('Export Ghidra function boundaries first')
ghidra={int(f['start'],16):f for f in json.loads(metadata.read_text())}
xbe=json.loads((root/'analysis/xbe.json').read_text())
path=root/'src/recomp/gen/recomp_stubs_unresolved.c'
source=path.read_text()
original=source
unresolved=set(int(x,16) for x in re.findall(r'void sub_([0-9A-Fa-f]{8})\(void\) \{ RECOMP_UNIMPL',source))
dispatch=(root/'src/recomp/gen/recomp_dispatch.c').read_text()
known=set(int(x,16) for x in re.findall(r'\{\s*0x([0-9a-fA-F]+)',dispatch))-unresolved
restored=[]
for address in sorted(unresolved):
    function=ghidra.get(address)
    if not function or function['body_bytes']!=5 or function['ranges']!=1 or int(function['end'],16)!=address+5:
        continue
    section=next((s for s in xbe['sections'] if int(s['virtual_addr'],16)<=address and address+5<=int(s['virtual_addr'],16)+s['raw_size']),None)
    if not section: continue
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16)
    instruction=data[offset:offset+5]
    if instruction[0]!=0xe9: continue
    target=(address+5+struct.unpack_from('<i',instruction,1)[0])&0xffffffff
    if target not in known: continue
    pattern=rf'void sub_{address:08X}\(void\) \{{ RECOMP_UNIMPL[^\n]+\}}'
    body=f'void sub_{address:08X}(void) {{ RECOMP_ITAIL(0x{target:08X}u); }} /* Ghidra-confirmed JMP thunk; original bytes {instruction.hex()} */'
    source,count=re.subn(pattern,lambda _:body,source)
    assert count==1
    restored.append({'start':f'0x{address:08X}','target':f'0x{target:08X}','bytes':instruction.hex()})
if source!=original:
    path.write_text(source,encoding='utf-8')
report=root/'analysis/recovered-jump-thunks.json'
previous=json.loads(report.read_text())['functions'] if report.exists() else []
all_functions={x['start']:x for x in [*previous,*restored]}
report.write_text(json.dumps({'method':'Independent Ghidra entry + exact XBE E9 rel32 + existing translated target',
    'functions':list(all_functions.values()),
    'remaining_unresolved':len(re.findall(r'void sub_[0-9A-Fa-f]{8}\(void\) \{ RECOMP_UNIMPL',source))},indent=2))
print('Recovered JMP entries:',len(restored),'total:',len(all_functions))
