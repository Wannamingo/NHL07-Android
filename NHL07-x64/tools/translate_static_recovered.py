"""Reconcile omitted functions with existing Ghidra boundaries and pseudocode.

Only contiguous executable functions with complete disassembly, an explicit
RET with one cleanup convention, or a verified two-instruction virtual tail
thunk, and no untranslated instruction are accepted.
This is static recovery, not evidence of whole-function behavioral equivalence.
"""
from pathlib import Path
import argparse,hashlib,json,re,sys,struct
import capstone
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--apply',action='store_true');ap.add_argument('--target',action='append',type=lambda value:int(value,16),default=[]);args=ap.parse_args()
sys.path.insert(0,str(root/'vendor/xboxrecomp'))
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator
xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
config.configure_from_xbe(str(root/'input/default.xbe'))
metadata=json.loads((root/'analysis/ghidra-functions.json').read_text())
omissions=root/'analysis/ghidra-omissions/functions.json'
if omissions.exists():
    metadata=list({int(row['start'],16):row for row in metadata+json.loads(omissions.read_text())}.values())
focused=list((root/'analysis/ghidra-recovered').glob('*.json'))
metadata=list({int(row['start'],16):row for row in metadata+[json.loads(path.read_text()) for path in focused]}.values())
sections=json.loads((root/'analysis/xbe.json').read_text())['sections']
database={int(f['start'],16):dict(f,end=int(f['end'],16)) for f in json.loads((root/'analysis/disasm/functions.json').read_text())}
stub_path=root/'src/recomp/gen/recomp_stubs_unresolved.c';stubs=stub_path.read_text()
addresses={int(a,16) for a in re.findall(r'^void sub_([0-9A-F]{8})\(void\) \{ RECOMP_UNIMPL\("unresolved call target"',stubs,re.M)}
report_path=root/'analysis/static-recovery.json'
if report_path.exists():addresses.update(int(row['address'],16) for row in json.loads(report_path.read_text()).get('accepted',[]))
addresses.update(args.target)
runtime={int(row['address'],16) for row in json.loads((root/'analysis/runtime-callbacks.json').read_text())}
pseudocode={}
for path in (root/'analysis/ghidra-c').glob('ghidra_*.c'):
    text=path.read_text();chunk_hash=hashlib.sha256(path.read_bytes()).hexdigest()
    for marker in re.findall(r'/\* XBE address: ([0-9a-f]{8}) \*/',text):
        address=int(marker,16)
        if address in addresses:pseudocode[address]=(path.relative_to(root).as_posix(),chunk_hash)
for path in [*(root/'analysis/ghidra-omissions').glob('*.c'),*(root/'analysis/ghidra-recovered').glob('*.c')]:
    if not re.fullmatch('[0-9a-fA-F]{8}',path.stem):continue
    address=int(path.stem,16)
    if address in addresses:pseudocode[address]=(path.relative_to(root).as_posix(),hashlib.sha256(path.read_bytes()).hexdigest())
cs=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32)
accepted=[];rejected=[];bodies=[]
for record in metadata:
    address=int(record['start'],16);end=int(record['end'],16);size=end-address
    if address not in addresses or address in runtime:continue
    reason=None
    section=next((s for s in sections if s['executable'] and int(s['virtual_addr'],16)<=address and end<=int(s['virtual_addr'],16)+s['raw_size']),None)
    if record['ranges']!=1 or size!=record['body_bytes'] or not 1<=size<=4096:reason='Non-contiguous or oversized body'
    elif not section:reason='Outside executable file-backed section'
    elif address not in pseudocode:reason='No completed Ghidra pseudocode export'
    if reason:rejected.append({'address':hex(address),'reason':reason});continue
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16);code=xbe[offset:offset+size]
    logical_switch=None
    prefix=list(cs.disasm(xbe[offset:offset+24],address))[:4]
    if len(prefix)==4 and [i.mnemonic for i in prefix]==['mov','cmp','ja','jmp']:
        count_match=re.fullmatch(r'eax, (0x[0-9a-f]+|[0-9]+)',prefix[1].op_str)
        table_match=re.fullmatch(r'dword ptr \[eax\*4 \+ (0x[0-9a-f]+)\]',prefix[3].op_str)
        if count_match and table_match:
            count=int(count_match[1],0)+1;table=int(table_match[1],16);terminal=int(prefix[2].op_str,16)
            if 1<=count<=256 and address<terminal<table<=address+4096:
                tail_offset=offset+terminal-address;tail=xbe[tail_offset:tail_offset+3]
                tail_size=1 if tail[0]==0xc3 else 3 if tail[0]==0xc2 else 0
                table_offset=offset+table-address
                targets=struct.unpack_from('<'+str(count)+'I',xbe,table_offset)
                proposed_end=terminal+tail_size
                if tail_size and all(prefix[3].address+prefix[3].size<=t<proposed_end for t in targets):
                    proposed=list(cs.disasm(xbe[offset:offset+proposed_end-address],address))
                    instruction_addresses={i.address for i in proposed}
                    if all(t in instruction_addresses for t in targets):
                        end=proposed_end;size=end-address;code=xbe[offset:offset+size]
                        logical_switch={'table':hex(table),'entries':count,'terminal':hex(terminal),'targets':list(map(hex,targets)),
                            'table_sha256':hashlib.sha256(xbe[table_offset:table_offset+count*4]).hexdigest()}
    instructions=list(cs.disasm(code,address))
    logical_tail=None
    if sum(i.size for i in instructions)==size and instructions[-1].mnemonic!='ret':
        # Ghidra sometimes excludes a shared fall-through MOV/POP + RET
        # while retaining branches to that RET. Admit only a bounded suffix
        # ending at an explicit branch destination, never a guessed next RET.
        dispatcher=(instructions[-1].mnemonic=='jmp' and re.fullmatch(r'dword ptr \[(eax|ecx|edx)\*4 \+ 0x[0-9a-f]+\]',instructions[-1].op_str))
        tail_limit=address+4096 if dispatcher else end+16
        terminals={int(i.op_str,16) for i in instructions if i.mnemonic.startswith('j') and i.mnemonic!='jmp'
            and re.fullmatch('0x[0-9a-f]+',i.op_str) and end<=int(i.op_str,16)<=tail_limit}
        for terminal in sorted(terminals):
            tail=list(cs.disasm(xbe[offset+terminal-address:offset+terminal-address+3],terminal))
            if not tail or tail[0].mnemonic!='ret':continue
            proposed_end=terminal+tail[0].size
            if proposed_end>int(section['virtual_addr'],16)+section['raw_size']:continue
            suffix=list(cs.disasm(xbe[offset+size:offset+proposed_end-address],end))
            proposed=list(cs.disasm(xbe[offset:offset+proposed_end-address],address))
            if sum(i.size for i in suffix)!=proposed_end-end:continue
            if not dispatcher and any(i.mnemonic not in ['mov','pop','add','lea','ret'] for i in suffix):continue
            boundaries={i.address for i in proposed};tables=[];tables_valid=True
            for index,ins in enumerate(proposed):
                match=re.fullmatch(r'dword ptr \[(eax|ecx|edx)\*4 \+ (0x[0-9a-f]+)\]',ins.op_str) if ins.mnemonic=='jmp' else None
                if not match:continue
                counts=[re.fullmatch(match[1]+r', (0x[0-9a-f]+|[0-9]+)',i.op_str) for i in proposed[max(0,index-3):index] if i.mnemonic=='cmp']
                counts=[m for m in counts if m]
                if len(counts)!=1:tables_valid=False;break
                count=int(counts[0][1],0)+1;table=int(match[2],16)
                if not 1<=count<=256 or not proposed_end<=table<address+4096:tables_valid=False;break
                values=struct.unpack_from('<'+str(count)+'I',xbe,offset+table-address)
                if not all(t in boundaries for t in values):tables_valid=False;break
                tables.append({'address':hex(table),'entries':count,'targets':list(map(hex,values))})
            if not tables_valid:continue
            if dispatcher and (not tables or any(not 0<=int(t['address'],16)-proposed_end<=16 for t in tables)):continue
            logical_tail={'ghidra_end':hex(end),'terminal_branch_destination':hex(terminal),
                'suffix_bytes':xbe[offset+size:offset+proposed_end-address].hex(),'tables':tables,
                'kind':'complete_switch_case_region' if dispatcher else 'shared_fallthrough_suffix'}
            end=proposed_end;size=end-address;code=xbe[offset:offset+size];instructions=proposed
            break
    returns={int(i.op_str or '0',0) for i in instructions if i.mnemonic=='ret'}
    # A virtual dispatch thunk has no RET: the selected callee consumes the
    # caller's unchanged frame. Recognize only MOV EAX,[ECX]; JMP [EAX+slot],
    # with an aligned positive vtable slot and no intervening stack mutation.
    virtual_tail=(len(instructions)==2 and instructions[0].mnemonic=='mov'
        and instructions[0].op_str=='eax, dword ptr [ecx]'
        and instructions[1].mnemonic=='jmp'
        and re.fullmatch(r'dword ptr \[eax \+ (0x[0-9a-f]+)\]',instructions[1].op_str))
    if virtual_tail:
        slot=int(virtual_tail[1],16)
        virtual_tail=0<slot<0x1000 and slot%4==0
    if sum(i.size for i in instructions)!=size or not (virtual_tail or (instructions[-1].mnemonic=='ret' and len(returns)==1)):
        rejected.append({'address':hex(address),'reason':'Incomplete disassembly, no terminal RET, or mixed cleanup'});continue
    database[address]={'start':hex(address),'end':end,'size':size,'name':f'sub_{address:08X}'}
    body=FunctionTranslator(xbe,database).translate_function(address,database[address])
    if not body or 'RECOMP_UNIMPL' in body:
        rejected.append({'address':hex(address),'reason':'Translator retained an unsupported instruction'});continue
    bodies.append(body);path,chunk_hash=pseudocode[address]
    accepted.append({'address':hex(address),'end':hex(end),'bytes':size,'instructions':len(instructions),
        'ghidra_body_bytes':record['body_bytes'],'ghidra_end':record['end'],'logical_switch_bounds':logical_switch,
        'logical_fallthrough_tail':logical_tail,
        'original_sha256':hashlib.sha256(code).hexdigest(),'translated_sha256':hashlib.sha256(body.encode()).hexdigest(),
        'ghidra_pseudocode':path,'ghidra_chunk_sha256':chunk_hash,
        'return_stack_cleanup_bytes':None if virtual_tail else returns.pop(),
        'virtual_tail_thunk':bool(virtual_tail)})
report={'accepted':accepted,'rejected':rejected,'applied':args.apply,
    'xbe_sha256':hashlib.sha256(xbe).hexdigest(),
    'ghidra_metadata_sha256':hashlib.sha256((root/'analysis/ghidra-functions.json').read_bytes()).hexdigest(),
    'ghidra_omissions_metadata_sha256':hashlib.sha256(omissions.read_bytes()).hexdigest() if omissions.exists() else None,
    'focused_metadata_sha256':{path.name:hashlib.sha256(path.read_bytes()).hexdigest() for path in focused},
    'limitations':['Function boundaries and complete static translation verified; not differential validation of every recovered function.','Unresolved dependencies and unsupported cases retain explicit diagnostic traps.']}
if args.apply:
    source='#define RECOMP_GENERATED_CODE\n#include "recomp_funcs.h"\n'
    source+=''.join(f'void sub_{int(row["address"],16):08X}(void);\n' for row in accepted)
    source+='\n'.join(bodies)
    source+='\nrecomp_func_t nhl07_lookup_static_recovered(uint32_t address) {\n'
    source+=''.join(f'    if(address=={row["address"]}u)return sub_{int(row["address"],16):08X};\n' for row in accepted)
    source+='    return NULL;\n}\n'
    (root/'src/static_recovered.c').write_text(source,encoding='utf-8')
    for row in accepted:
        stubs=re.sub(rf'^void sub_{int(row["address"],16):08X}\(void\) \{{ RECOMP_UNIMPL[^\n]+\}}\n','',stubs,flags=re.M)
    stub_path.write_text(stubs,encoding='utf-8')
report_path.write_text(json.dumps(report,indent=2))
print(json.dumps({'accepted':len(accepted),'rejected':len(rejected),'applied':args.apply},indent=2))
