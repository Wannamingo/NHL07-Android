"""Recover missing entries in the original contiguous E9 linker thunk table.

Each run is anchored by Ghidra's exact five-byte function boundary. Expansion
uses only adjacent complete E9 rel32 instructions in the same executable
file-backed section and the bounded low-address linker region. Only targets
with existing native function bodies are admitted. No runtime instruction
interpretation or unresolved target fallback is introduced.
"""
from pathlib import Path
import argparse,hashlib,json,re,struct
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--apply',action='store_true');args=ap.parse_args()
xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
sections=json.loads((root/'analysis/xbe.json').read_text())['sections']
section=next(s for s in sections if s['name']=='.text');assert section['executable']
base=int(section['virtual_addr'],16);raw=int(section['raw_addr'],16)
lower=base;upper=min(0x40000,base+section['raw_size'])
def code(address):
    if not lower<=address<=upper-5:return b''
    offset=raw+address-base
    return xbe[offset:offset+5]
metadata=json.loads((root/'analysis/ghidra-functions.json').read_text())
metadata += [json.loads(path.read_text()) for path in (root/'analysis/ghidra-recovered').glob('*.json')]
anchors=sorted({int(row['start'],16) for row in metadata if row['body_bytes']==5 and row['ranges']==1
    and int(row['end'],16)-int(row['start'],16)==5 and code(int(row['start'],16))[:1]==b'\xe9'})
seen=set();runs=[];membership={}
for anchor in anchors:
    if anchor in seen:continue
    start=anchor;end=anchor+5
    while code(start-5)[:1]==b'\xe9':start-=5
    while code(end)[:1]==b'\xe9':end+=5
    entries=list(range(start,end,5));seen.update(entries)
    if len(entries)<2:continue
    run={'start':hex(start),'end':hex(end),'ghidra_anchor':hex(anchor),'entries':len(entries),
        'sha256':hashlib.sha256(xbe[raw+start-base:raw+end-base]).hexdigest()}
    runs.append(run)
    for address in entries:membership[address]=run
compiled=set()
for path in (root/'src').rglob('*.c'):
    if path.name in ['recomp_stubs_unresolved.c','recovered_thunks.c']:continue
    compiled.update(int(a,16) for a in re.findall(r'^void sub_([0-9A-F]{8})\(void\)',path.read_text(),re.M))
manual={int(a,16) for a in re.findall(r'if \(xbox_va == 0x([0-9A-F]+)\) return sub_', (root/'src/recomp_manual.c').read_text())}
stub_path=root/'src/recomp/gen/recomp_stubs_unresolved.c';stubs=stub_path.read_text()
stub_addresses={int(a,16) for a in re.findall(r'^void sub_([0-9A-F]{8})\(void\) \{ RECOMP_UNIMPL\("unresolved call target"',stubs,re.M)}
previous=root/'analysis/linker-thunk-recovery.json'
if previous.exists():
    stub_addresses.update(int(row['address'],16) for row in json.loads(previous.read_text()).get('accepted',[]) if row['replaces_direct_call_stub'])
accepted=[];rejected=[]
for address in sorted(membership):
    if address in compiled or address in manual:continue
    original=code(address);assert len(original)==5 and original[0]==0xe9
    target=(address+5+struct.unpack_from('<i',original,1)[0])&0xffffffff
    if target not in compiled:
        rejected.append({'address':hex(address),'target':hex(target),'reason':'No existing native target body'});continue
    accepted.append({'address':hex(address),'target':hex(target),'bytes':original.hex(),
        'original_sha256':hashlib.sha256(original).hexdigest(),'run_anchor':membership[address]['ghidra_anchor'],
        'replaces_direct_call_stub':address in stub_addresses})
if args.apply:
    source='#define RECOMP_GENERATED_CODE\n#include "recomp_funcs.h"\n'
    declared={int(value,16) for value in re.findall(r'void sub_([0-9A-F]{8})\(void\);',(root/'src/recomp/gen/recomp_funcs.h').read_text())}
    source+=''.join(f'extern void sub_{target:08X}(void);\n' for target in sorted({int(row['target'],16) for row in accepted}-declared))
    # Original JMP leaves the caller frame intact; direct stub references must
    # receive the same behavior, as well as runtime indirect dispatch.
    for row in accepted:
        if row['replaces_direct_call_stub']:
            a=int(row['address'],16);target=int(row['target'],16)
            source+=f'void sub_{a:08X}(void) {{ sub_{target:08X}(); }}\n'
            stubs=re.sub(rf'^void sub_{a:08X}\(void\) \{{ RECOMP_UNIMPL[^\n]+\}}\n','',stubs,flags=re.M)
    by_address={int(row['address'],16):int(row['target'],16) for row in accepted}
    for index,run in enumerate(runs):
        source+=f'\nstatic const recomp_func_t thunk_run_{index}[]={{\n'
        for address in range(int(run['start'],16),int(run['end'],16),5):
            target=by_address.get(address)
            source+=f'    sub_{target:08X},\n' if target is not None else '    NULL,\n'
        source+='};\n'
    source+='recomp_func_t nhl07_lookup_linker_thunk(uint32_t address) {\n'
    for index,run in enumerate(runs):
        source+=f'    if(address>={run["start"]}u && address<{run["end"]}u && (address-{run["start"]}u)%5u==0)\n'
        source+=f'        return thunk_run_{index}[(address-{run["start"]}u)/5u];\n'
    source+='    return NULL;\n}\n'
    (root/'src/recovered_thunks.c').write_text(source)
    stub_path.write_text(stubs)
report={'applied':args.apply,'xbe_sha256':hashlib.sha256(xbe).hexdigest(),'region':[hex(lower),hex(upper)],
    'ghidra_anchor_count':len(anchors),'runs':runs,'accepted':accepted,'rejected':rejected,
    'scope':'Exact original E9 tail jumps to existing native bodies, caller frame unchanged; bounded Ghidra-anchored contiguous runs.',
    'limitations':['Not whole-game behavioral validation','Missing target bodies retain their original traps','No arbitrary runtime byte decoding']}
(root/'analysis/linker-thunk-recovery.json').write_text(json.dumps(report,indent=2))
print(json.dumps({'runs':len(runs),'accepted':len(accepted),'rejected':len(rejected),'applied':args.apply}))
