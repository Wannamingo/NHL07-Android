"""Prioritize real XBE call sites; do not turn signature guesses into native stubs."""
from pathlib import Path
from collections import defaultdict
import hashlib
import json
import re

root=Path(__file__).resolve().parents[1]
candidates=json.loads((root/'analysis/xdk-candidates.json').read_text())['candidates']
d3d={int(c['address'],16):c for c in candidates if c['library']=='D3D8'}
calls=defaultdict(list)
for xref in json.loads((root/'analysis/disasm/xrefs.json').read_text()):
    target=int(xref['to'],16); caller=int(xref['from'],16)
    if target in d3d and caller<0x006B8A40 and xref['type'] in ['call','jump']:
        calls[target].append({'site':xref['from'],'kind':xref['type']})
probe=json.loads((root/'analysis/latest-windows-entry.json').read_text())
log=Path(probe['log']).read_text(encoding='utf-8',errors='replace')
report={'input_sha256':hashlib.sha256((root/'input/default.xbe').read_bytes()).hexdigest(),
    'runtime_probe':probe,
    'fault_lines':[line for line in log.splitlines() if line.startswith(('[NHL07-FAULT]','[ACCESS]','[STACK]'))],
    'first_host_api_boundary':{'address':'0x0075E1A0','name':'Direct3D_CreateDevice',
        'game_caller':'0x0055EA11','presentation_parameters':'0x009156E8',
        'returned_device_slot':'0x00915744','xdk_device_global':'0x00785178',
        'xdk_device_storage':'0x00785180','xdk_device_bytes':0x928*4,
        'evidence':['analysis/ghidra-c/ghidra_0110.c:1250','analysis/ghidra-c/ghidra_0138.c:11173'],
        'runtime_call_chain_verified':all(name in log for name in ['sub_0055EA11','sub_0075E1A0','sub_00767360','sub_00769B88']),
        'native_adapter_implemented':False},
    'next_calls_after_success':['GetGammaRamp','SetBackBufferScale','Clear','Swap','SetFlickerFilter',
                               'SetSoftDisplayFilter','GetBackBuffer2','D3DSurface_GetDesc'],
    'candidate_count':len(d3d),'candidates_with_static_game_callers':len(calls),
    'caution':'Static call sites are not runtime coverage; signature identities and ABI still require per-function validation.',
    'interfaces':[{**d3d[address],'game_call_sites':sites} for address,sites in sorted(calls.items(),key=lambda pair:-len(pair[1]))]}
(root/'analysis/graphics-port-map.json').write_text(json.dumps(report,indent=2))
print('D3D candidates:',len(d3d),'with static game callers:',len(calls))

binary=(root/'input/default.xbe').read_bytes()
callback=binary[0x5d7e7f-0x10000:0x5d7ea9-0x10000]
(root/'analysis/recovered-thread-callback.json').write_text(json.dumps({
    'entry':'0x005D7E7F','end':'0x005D7EA9','size':len(callback),
    'bytes':callback.hex(),'sha256':hashlib.sha256(callback).hexdigest(),
    'discovery':'Observed unresolved indirect call during actual Windows execution',
    'xref':'0x005D1DF5 loads this callback as an immediate data pointer',
    'independent_decompilation':'analysis/ghidra-recovered/005d7e7f.c',
    'semantic_validation':'analysis/cpu-differential-validation.json',
    'implementation':'src/overrides.c, selected by src/recomp_manual.c'},indent=2))
