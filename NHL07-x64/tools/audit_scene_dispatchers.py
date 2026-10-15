"""Prove compact event dispatchers independently of Ghidra's merged tails.

Only the exact original MOV/MOV/DEC-or-ADD/CMP/JA/(optional MOVZX)/JMP prefix
is recognized. Every mapped arm is traversed to RET 4 or an external tail
jump without changing stack depth. Ghidra must independently recover and
decompile each entry. Tail callees remain separate native functions.
"""
from pathlib import Path
import argparse,hashlib,json,re,struct,subprocess,sys
import capstone
root=Path(__file__).resolve().parents[1]
def audit(recover=False):
    xbe=(root/'input/default.xbe').read_bytes()
    assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
    section=next(s for s in json.loads((root/'analysis/xbe.json').read_text())['sections'] if s['name']=='.text')
    base=int(section['virtual_addr'],16);raw=int(section['raw_addr'],16);limit=base+section['raw_size']
    def data(a,n):
        assert base<=a and a+n<=limit
        return xbe[raw+a-base:raw+a-base+n]
    cs=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32)
    stubs=(root/'src/recomp/gen/recomp_stubs_unresolved.c').read_text()
    candidates={int(a,16) for a in re.findall(r'^void sub_([0-9A-F]{8})\(void\) \{ RECOMP_UNIMPL\("unresolved call target"',stubs,re.M)}
    report_path=root/'analysis/scene-dispatch-bounds.json'
    if report_path.exists():candidates.update(int(r['address'],16) for r in json.loads(report_path.read_text())['accepted'])
    prefixes={}
    for a in sorted(candidates):
        if not base<=a<limit-64:continue
        ins=list(cs.disasm(data(a,40),a))[:7]
        if len(ins)<6 or [i.mnemonic for i in ins[:2]]!=['mov','mov']:continue
        if ins[0].op_str!='eax, dword ptr [esp + 4]' or ins[1].op_str!='edx, dword ptr [eax]':continue
        if not ((ins[2].mnemonic=='dec' and ins[2].op_str=='edx') or (ins[2].mnemonic=='add' and ins[2].op_str=='edx, -2')):continue
        direct=ins[5].mnemonic=='jmp'
        ins=ins[:6] if direct else ins
        if [i.mnemonic for i in ins[3:]]!=(['cmp','ja','jmp'] if direct else ['cmp','ja','movzx','jmp']):continue
        count=re.fullmatch(r'edx, (0x[0-9a-f]+|[0-9]+)',ins[3].op_str)
        mapping=None if direct else re.fullmatch(r'edx, byte ptr \[edx \+ (0x[0-9a-f]+)\]',ins[5].op_str)
        table=re.fullmatch(r'dword ptr \[edx\*4 \+ (0x[0-9a-f]+)\]',ins[-1].op_str)
        if not count or (not direct and not mapping) or not table:continue
        prefixes[a]=(ins,int(count[1],0)+1,None if direct else int(mapping[1],16),int(table[1],16))
    missing=[a for a in prefixes if not (root/'analysis/ghidra-recovered'/f'{a:08x}.json').is_file()]
    if recover and missing:
        subprocess.run([sys.executable,str(root/'tools/recover_targets.py'),*[f'{a:08x}' for a in missing]],check=True,timeout=240)
    accepted=[];rejected=[]
    for a,(prefix,count,map_address,table_address) in prefixes.items():
        try:
            detail=root/'analysis/ghidra-recovered'/f'{a:08x}.json'
            pseudo=detail.with_suffix('.c');assert detail.is_file() and pseudo.is_file(),'Ghidra confirmation missing'
            metadata=json.loads(detail.read_text());assert int(metadata['start'],16)==a
            assert 1<=count<=256 and a<table_address<a+1024,'Table bounds'
            mapping=data(map_address,count) if map_address is not None else b''
            entries=max(mapping)+1 if mapping else count
            assert entries<=256,'Table entry count'
            if map_address is not None:
                assert table_address<map_address<a+1024 and 0<=map_address-(table_address+entries*4)<=15,'Map/table adjacency'
            targets=struct.unpack('<'+str(entries)+'I',data(table_address,entries*4))
            case_start=prefix[-1].address+prefix[-1].size
            default=int(prefix[4].op_str,16)
            assert all(case_start<=t<table_address for t in [*targets,default]),'Case bounds'
            visited={i.address:i for i in prefix};pending=[(t,0) for t in {*targets,default}]
            depths={};tails=set();returns=0
            while pending:
                pc,depth=pending.pop()
                if pc in depths:
                    assert depths[pc]==depth,'Inconsistent stack join'
                    continue
                assert case_start<=pc<table_address,'Flow outside case region'
                decoded=list(cs.disasm(data(pc,min(15,table_address-pc)),pc,count=1));assert decoded,'Incomplete instruction'
                i=decoded[0];visited[pc]=i;depths[pc]=depth
                assert i.mnemonic not in ['call','int','int3','retf','iret'],'Not a compact tail dispatcher'
                if i.mnemonic=='ret':
                    assert int(i.op_str or '0',0)==4 and depth==0,'Return ABI';returns+=1;continue
                if i.mnemonic=='jmp':
                    assert re.fullmatch('0x[0-9a-f]+',i.op_str),'Indirect case tail'
                    target=int(i.op_str,16)
                    if a<=target<table_address:pending.append((target,depth))
                    else:assert depth==0,'Tail stack depth';tails.add(target)
                    continue
                if i.mnemonic.startswith('j'):
                    assert re.fullmatch('0x[0-9a-f]+',i.op_str),'Unrecognized branch'
                    pending.append((int(i.op_str,16),depth))
                if i.mnemonic=='push':depth-=4
                elif i.mnemonic=='pop':depth+=4
                elif i.mnemonic in ['add','sub'] and i.op_str.startswith('esp, '):
                    amount=int(i.op_str.split(', ')[1],0);depth+=amount if i.mnemonic=='add' else -amount
                else:assert not re.match(r'esp(?:,|$)',i.op_str),'Untracked stack write'
                pending.append((pc+i.size,depth))
            assert returns,'No local RET arm'
            end=max(i.address+i.size for i in visited.values());code=data(a,end-a)
            complete=list(cs.disasm(code,a));boundaries={i.address for i in complete}
            assert sum(i.size for i in complete)==len(code) and complete[-1].mnemonic=='ret','Incomplete bounded body'
            assert all(pc in boundaries for pc in visited),'Overlapping instruction boundaries'
            accepted.append({'address':hex(a),'end':hex(end),'bytes':len(code),'ghidra_body_bytes':metadata['body_bytes'],
                'ghidra_metadata':metadata,'metadata_sha256':hashlib.sha256(detail.read_bytes()).hexdigest(),
                'pseudocode_sha256':hashlib.sha256(pseudo.read_bytes()).hexdigest(),'original_sha256':hashlib.sha256(code).hexdigest(),
                'table':hex(table_address),'targets':list(map(hex,targets)),'mapping':hex(map_address) if map_address is not None else None,'mapping_bytes':mapping.hex(),
                'data_end':hex(map_address+count if map_address is not None else table_address+entries*4),
                'selector_bias':1 if prefix[2].mnemonic=='dec' else 2,'selector_count':count,
                'table_bytes':data(table_address,entries*4).hex(),'tail_targets':list(map(hex,sorted(tails))),
                'reachable_instructions':len(visited),'return_stack_cleanup_bytes':4})
        except (AssertionError,ValueError,IndexError,struct.error) as error:
            rejected.append({'address':hex(a),'reason':str(error)})
    report={'accepted':accepted,'rejected':rejected,'scope':'Exact compact event-dispatch prefix, completed Ghidra entry, bounded map/table, all reachable arms, consistent zero tail stack depth and RET 4.',
        'limitations':['Native tail-callee behavior not validated by static CFG audit','Does not accept arbitrary non-contiguous Ghidra functions']}
    report_path.write_text(json.dumps(report,indent=2))
    return report
if __name__=='__main__':
    ap=argparse.ArgumentParser();ap.add_argument('--recover',action='store_true');args=ap.parse_args()
    r=audit(args.recover);print(json.dumps({'accepted':len(r['accepted']),'rejected':r['rejected']},indent=2))
