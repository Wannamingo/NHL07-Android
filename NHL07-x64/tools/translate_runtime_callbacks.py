"""Translate exact runtime entries independently recovered by Ghidra.

This adds real function bodies, without regenerating or weakening bulk traps.
"""
from pathlib import Path
import hashlib,json,re,sys,struct
import capstone
root=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(root/'vendor/xboxrecomp'))
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator
xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
config.configure_from_xbe(str(root/'input/default.xbe'))
database={int(f['start'],16):dict(f,end=int(f['end'],16)) for f in json.loads((root/'analysis/disasm/functions.json').read_text())}
sections=json.loads((root/'analysis/xbe.json').read_text())['sections']
entries=[(0x556922,0x556a0c,234,'ghidra-recover-00556922.log'),(0x180990,0x180faf,1556,'ghidra-recover-00180990.log'),
    (0x597efa,0x597f0c,18,'ghidra-recover-00597efa.log'),(0x373d00,0x373d3c,60,'ghidra-recover-00373d00.log'),
    (0x4eff45,0x4eff59,20,'ghidra-recover-004eff45.log'),
    (0x20bd70,0x20bd8e,30,'ghidra-recover-0020bd70.log'),
    (0x21e7f0,0x21e80e,30,'ghidra-recover-0021e7f0.log'),
    (0x222980,0x22299e,30,'ghidra-recover-00222980.log'),
    (0x381db0,0x381dce,30,'ghidra-recover-00222980.log'),
    (0x27ef90,0x27efb2,34,'ghidra-recover-0027ef90.log'),
    (0x207a30,0x207a31,1,'ghidra-recover-00207a30.log'),
    (0x22ae30,0x22ae31,1,'ghidra-recover-00207a30.log'),
    (0x3dcb30,0x3dcb31,1,'ghidra-recover-00207a30.log'),
    (0x22a270,0x22a443,467,'ghidra-recover-0022a270.log'),
    (0x22a840,0x22ac70,1064,'ghidra-recover-0022a840.log'),
    (0x230070,0x230288,532,'ghidra-recover-00230070.log'),
    (0x2318e0,0x231ebd,20,'ghidra-recover-002318e0.log'),
    (0x42afc0,0x42b015,550,'ghidra-recover-0042afc0.log')]
records=[];bodies=[]
from audit_scene_dispatchers import audit
scene_by_address={int(row['address'],16):row for row in audit()['accepted']}
entries += [(address,int(row['end'],16),row['ghidra_body_bytes'],None) for address,row in scene_by_address.items()]
for address,end,body_bytes,log in entries:
    size=end-address
    if address not in scene_by_address:
        assert f'RECOVERED {address:08x} bytes={body_bytes}' in (root/'logs'/log).read_text()
    if body_bytes!=size:
        detail=root/'analysis/ghidra-recovered'/f'{address:08x}.json'
        metadata=json.loads(detail.read_text()) if detail.exists() else next(f for f in json.loads((root/'analysis/ghidra-functions.json').read_text()) if int(f['start'],16)==address)
        if address in scene_by_address:
            assert metadata==scene_by_address[address]['ghidra_metadata']
        elif address==0x42afc0:
            # Ghidra merged six tail callees into seven disjoint ranges and
            # omitted the local RET arm. Translate only the original entry's
            # compact dispatcher, retaining its real tail calls separately.
            assert int(metadata['end'],16)==0x42b012 and metadata['body_bytes']==550 and metadata['ranges']==7
            assert xbe[0x42b012-0x10000:0x42b015-0x10000]==bytes.fromhex('c20400')
            table=struct.unpack_from('<7I',xbe,0x42b018-0x10000)
            mapping=xbe[0x42b034-0x10000:0x42b045-0x10000]
            assert all(0x42afda<=target<end for target in table)
            assert len(mapping)==17 and max(mapping)<len(table)
        elif address==0x22a840:
            # Ghidra omitted the final fall-through MOV [8F6A18],EAX; RET 8.
            # The original default branch also lands on that RET. Include the
            # exact eight bytes, and differential-test every switch case.
            assert int(metadata['end'],16)==0x22ac68 and metadata['body_bytes']==1064
            assert xbe[0x22ac68-0x10000:0x22ac70-0x10000]==bytes.fromhex('a3186a8f00c20800')
        elif address==0x230070:
            assert int(metadata['end'],16)==0x230284 and metadata['body_bytes']==532
            assert xbe[0x230284-0x10000:0x230288-0x10000]==bytes.fromhex('5ec20c00')
        elif address==0x2318e0:
            # Ghidra attached only the 20-byte dispatcher to this function;
            # its own decompilation follows all 29 table targets. Recover the
            # complete original case region, ending at the shared RET 16.
            assert int(metadata['end'],16)==0x2318f4 and metadata['body_bytes']==20
            targets=struct.unpack_from('<29I',xbe,0x231ec0-0x10000)
            assert all(0x2318f4<=target<0x231ebd for target in targets)
            assert xbe[0x231eba-0x10000:0x231ebd-0x10000]==bytes.fromhex('c21000')
        else:assert int(metadata['end'],16)==end and metadata['body_bytes']==body_bytes
    section=next(s for s in sections if int(s['virtual_addr'],16)<=address<int(s['virtual_addr'],16)+s['raw_size'])
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16)
    code=xbe[offset:offset+size]
    instructions=list(capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32).disasm(code,address))
    assert sum(i.size for i in instructions)==size and instructions[-1].mnemonic=='ret'
    returns={int(i.op_str or '0',0) for i in instructions if i.mnemonic=='ret'}
    assert len(returns)==1
    assert not any(int(f['start'],16)==address for f in json.loads((root/'analysis/disasm/functions.json').read_text()))
    database[address]={'start':hex(address),'end':address+size,'size':size,'name':f'sub_{address:08X}'}
    body=FunctionTranslator(xbe,database).translate_function(address,database[address])
    if address==0x42afc0 or address in scene_by_address:
        # Some original low linker entries were omitted from the generated
        # C symbol set. Dispatch their original addresses through the audited
        # linker map, preserving the unchanged guest caller frame.
        body=re.sub(r'sub_([0-9A-F]{8})\(\); return; /\* tail jmp 0x[0-9A-F]+ \*/',
            lambda m:f'RECOMP_ITAIL(0x{m[1]}u); return; /* original tail jmp */',body)
    assert body and 'RECOMP_UNIMPL' not in body
    bodies.append(body)
    records.append({'address':hex(address),'end':hex(end),'bytes':size,'ghidra_body_bytes':body_bytes,'instructions':len(instructions),
        'original_sha256':hashlib.sha256(code).hexdigest(),'translated_sha256':hashlib.sha256(body.encode()).hexdigest(),
        'ghidra_log':log,'scene_dispatch_audit':scene_by_address.get(address),'return_stack_cleanup_bytes':returns.pop()})
source='#define RECOMP_GENERATED_CODE\n#include "recomp_funcs.h"\n'+ '\n'.join(bodies)
source+='\nrecomp_func_t nhl07_lookup_recovered(uint32_t address) {\n'
source+=''.join(f'    if(address==0x{a:08X}u)return sub_{a:08X};\n' for a,_,_,_ in entries)
source+='    return NULL;\n}\n'
(root/'src/runtime_callbacks.c').write_text(source,encoding='utf-8')
(root/'analysis/runtime-callbacks.json').write_text(json.dumps(records,indent=2))
stubs=root/'src/recomp/gen/recomp_stubs_unresolved.c';original=stubs.read_text();changed=original
for address,_,_,_ in entries:
    changed=re.sub(rf'^void sub_{address:08X}\(void\) \{{ RECOMP_UNIMPL[^\n]+\}}\n','',changed,flags=re.M)
if changed!=original:stubs.write_text(changed,encoding='utf-8')
print('Ghidra-confirmed runtime callbacks translated:',len(entries))
