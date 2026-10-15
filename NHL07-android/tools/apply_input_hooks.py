"""Android XPP boundary: replace USB hardware services with Android input.
Original functions remain compiled under their original names on Windows.
"""
from pathlib import Path
import capstone,hashlib,json
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
names={'XInitDevices':2,'XGetDevices':1,'XGetDeviceChanges':3,'XGetDeviceEnumerationStatus':0,
    'XInputOpen':4,'XInputClose':1,'XInputGetCapabilities':2,'XInputGetState':2,'XInputPoll':1,'XInputSetState':2}
metadata={int(f['start'],16):f for f in json.loads((game/'analysis/ghidra-functions.json').read_text())}
assert 'RECOVERED 007a4fa1 bytes=89' in (game/'logs/ghidra-recover-007a4fa1.log').read_text()
metadata[0x7a4fa1]={'end':hex(0x7a4fa1+89)}
signatures=json.loads((game/'analysis/xdk-candidates.json').read_text())['candidates'];xbe=json.loads((game/'analysis/xbe.json').read_text())
data=(game/'input/default.xbe').read_bytes();assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
entries=[];hooks=['#include "recomp_types.h"','#include "native_input.h"']
for name,argc in names.items():
    candidate=next(c for c in signatures if c['name']==name);address=int(candidate['address'],16);f=metadata[address]
    section=next(s for s in xbe['sections'] if int(s['virtual_addr'],16)<=address<int(s['virtual_addr'],16)+s['raw_size'])
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16);code=data[offset:offset+int(f['end'],16)-address]
    ins=list(capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32).disasm(code,address));returns=[i for i in ins if i.mnemonic=='ret']
    assert candidate['calling_convention']=='stdcall' and candidate['parameters'].count('psh ')==argc
    assert returns and all(int(i.op_str or '0',0)==argc*4 for i in returns),(name,[i.op_str for i in returns])
    entries.append({'name':name,'address':candidate['address'],'argc':argc,'sha256':hashlib.sha256(code).hexdigest(),'ret':[hex(i.address) for i in returns]})
    hooks += [f'void sub_{address:08X}(void) {{',f'    uint32_t args[{max(argc,1)}]={{0}};']
    hooks += [f'    args[{i}]=MEM32(g_esp+{4+i*4});' for i in range(argc)]
    hooks += [f'    g_eax=nhl07_input_call(NHL_INPUT_{name},args);',f'    g_esp+={4+argc*4};','}']
for path in (game/'src/recomp/gen').glob('recomp_*.c'):
    source=path.read_text();changed=source
    for e in entries:
        symbol='sub_'+e['address'][2:];original='void '+symbol+'(void)\n{'
        # Marker keeps reruns idempotent without duplicating preprocessor guards.
        if f'void {symbol}_xbox_usb_original' in changed: continue
        changed=changed.replace(original,'#ifdef __ANDROID__\nvoid '+symbol+'_xbox_usb_original(void)\n#else\nvoid '+symbol+'(void)\n#endif\n{')
    if changed!=source:path.write_text(changed,encoding='utf-8')
(root/'src/native_input_hooks.c').write_text('\n'.join(hooks)+'\n')
(root/'src/native_input.h').write_text('#pragma once\n#include <stdint.h>\ntypedef enum {\n'+''.join(' NHL_INPUT_'+n+',\n' for n in names)+'} NhlInputApi;\nuint32_t nhl07_input_call(NhlInputApi api,const uint32_t *args);\n')
(root/'analysis/native-input-abi.json').write_text(json.dumps(entries,indent=2))
print('Audited input interfaces:',len(entries))
