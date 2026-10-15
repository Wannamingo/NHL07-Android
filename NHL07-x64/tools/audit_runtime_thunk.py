"""Verify the extra runtime-observed thunk before accepting its manual alias."""
from pathlib import Path
import hashlib,json,struct
root=Path(__file__).resolve().parents[1];data=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
records=[]
for address,expected in [(0x589e73,0x596638),(0x251c2,0x1453c0),(0x2709e,0x2c7200)]:
    assert f'RECOVERED {address:08x} bytes=5' in (root/'logs'/f'ghidra-recover-{address:08x}.log').read_text()
    section=next(s for s in json.loads((root/'analysis/xbe.json').read_text())['sections'] if int(s['virtual_addr'],16)<=address<int(s['virtual_addr'],16)+s['raw_size'])
    assert section['executable']
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16);code=data[offset:offset+5]
    assert code[0]==0xe9;target=(address+5+struct.unpack_from('<i',code,1)[0])&0xffffffff
    assert target==expected
    assert f'if (xbox_va == 0x{address:08X}) return sub_{target:08X};' in (root/'src/recomp_manual.c').read_text()
    assert any(f'void sub_{target:08X}(void)' in path.read_text() for path in (root/'src/recomp/gen').glob('recomp_*.c') if path.name!='recomp_stubs_unresolved.c')
    records.append({'address':hex(address),'target':hex(target),'bytes':code.hex(),
        'sha256':hashlib.sha256(code).hexdigest(),'evidence':'Ghidra recovered exact 5-byte entry; original XBE E9 relative target; existing translated target'})
    print(f'Runtime thunk {address:X} -> {target:X} verified')
(root/'analysis/runtime-thunk-audit.json').write_text(json.dumps(records,indent=2))
