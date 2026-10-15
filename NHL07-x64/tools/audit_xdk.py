"""Record signature candidates, preserving uncertainty before native replacement."""
from pathlib import Path
import collections
import hashlib
import json
import re

root=Path(__file__).resolve().parents[1]
raw=(root/'analysis/xdk-symbols.txt').read_bytes()
source=raw.decode('utf-16' if raw.startswith(b'\xff\xfe') else 'utf-8-sig')
functions={int(x['start'],16):x for x in json.loads((root/'analysis/disasm/functions.json').read_text())}
pattern=re.compile(r'^(\w+)__FUN__(\w+)__(\w+)\(([^)]*)\) = 0x([0-9a-f]+)$',re.M)
candidates=[]
for library, convention, name, parameters, address in pattern.findall(source.replace('\r','')):
    value=int(address,16)
    function=functions.get(value)
    candidates.append({'library':library,'name':name,'address':f'0x{value:08X}',
                       'calling_convention':convention,'parameters':parameters,
                       'at_disassembler_function_start':function is not None,
                       'detected_by':function.get('detection_method') if function else None,
                       'native_replacement_verified':False})
record={'xbe_sha256':hashlib.sha256((root/'input/default.xbe').read_bytes()).hexdigest(),
        'candidate_count':len(candidates),'by_library':dict(collections.Counter(x['library'] for x in candidates)),
        'note':'Signature matches are candidates, not proof of correct API identification or ABI.',
        'candidates':candidates}
(root/'analysis/xdk-candidates.json').write_text(json.dumps(record,indent=2))
print('Candidate count:',len(candidates),'at known starts:',sum(x['at_disassembler_function_start'] for x in candidates))
