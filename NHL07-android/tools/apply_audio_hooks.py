"""Android DirectSound boundary: DSP image, data and original reverb calculator.
Original functions remain compiled under their original names on Windows.
"""
from pathlib import Path
import capstone,hashlib,json,re
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
names={'DirectSoundCreate':3,'IDirectSound_AddRef':1,'IDirectSound_Release':1,
    'IDirectSound_SetMixBinHeadroom':3,'IDirectSound_DownloadEffectsImage':5,
    'IDirectSound_SetI3DL2Listener':3,'IDirectSound_SetEffectData':6,'IDirectSound_GetEffectData':5,
    'IDirectSound_CommitEffectData':1,'IDirectSound_CommitDeferredSettings':1,
    'IDirectSound_CreateSoundBuffer':4,'DirectSoundCreateBuffer':2}
names.update({'DirectSoundDoWork':0,'DirectSoundGetSampleTime':0})
for name,argc in [('AddRef',1),('Release',1),('Play',4),('Stop',1),('Pause',2),('GetStatus',2),
    ('GetCurrentPosition',3),('SetCurrentPosition',2),('SetBufferData',3),('SetFormat',2),('SetPitch',2),
    ('SetFrequency',2),('SetVolume',2),('SetHeadroom',2),('SetMixBins',2),('SetMixBinVolumes',2),
    ('SetLoopRegion',3),('SetPlayRegion',3),('Lock',8),('Unlock',5),('SetEG',2)]:
    names['IDirectSoundBuffer_'+name]=argc
metadata={int(f['start'],16):f for f in json.loads((game/'analysis/ghidra-functions.json').read_text())}
for address,size in [(0x6b8e8b,22),(0x6b8ea1,22)]:
    assert f'RECOVERED {address:08x} bytes={size}' in (game/'logs/ghidra-recover-006b8e8b.log').read_text()
    metadata[address]={'end':hex(address+size)}
for address,log in [(0x6bb189,'ghidra-recover-006bb189.log'),(0x6be083,'ghidra-recover-006be083.log')]:
    assert f'RECOVERED {address:08x} bytes=24' in (game/'logs'/log).read_text()
    metadata[address]={'end':hex(address+24)}
recovery_log=(game/'logs/ghidra-recover-006b8ec1.log').read_text()
for address,size in re.findall(r'RECOVERED ([0-9a-f]{8}) bytes=(\d+)',recovery_log):
    address=int(address,16);metadata[address]={'end':hex(address+int(size))}
assert 'RECOVERED 006b8f19 bytes=16' in (game/'logs/ghidra-recover-006b8f19.log').read_text()
metadata[0x6b8f19]={'end':hex(0x6b8f19+16)}
signatures=json.loads((game/'analysis/xdk-candidates.json').read_text())['candidates'];xbe=json.loads((game/'analysis/xbe.json').read_text())
data=(game/'input/default.xbe').read_bytes();assert hashlib.sha256(data).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
entries=[];hooks=['#include "recomp_types.h"','#include "native_audio.h"']
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
    hooks += [f'    g_eax=nhl07_audio_call(NHL_AUDIO_{name},args);',f'    g_esp+={4+argc*4};','}']
for path in (game/'src/recomp/gen').glob('recomp_*.c'):
    source=path.read_text();changed=source
    for e in entries:
        symbol='sub_'+e['address'][2:];original='void '+symbol+'(void)\n{'
        # Marker keeps reruns idempotent without duplicating preprocessor guards.
        if f'void {symbol}_xbox_apu_original' in changed: continue
        changed=changed.replace(original,'#ifdef __ANDROID__\nvoid '+symbol+'_xbox_apu_original(void)\n#else\nvoid '+symbol+'(void)\n#endif\n{')
    if changed!=source:path.write_text(changed,encoding='utf-8')
(root/'src/native_audio_hooks.c').write_text('\n'.join(hooks)+'\n')
(root/'src/native_audio.h').write_text('#pragma once\n#include <stdint.h>\ntypedef enum {\n'+''.join(' NHL_AUDIO_'+n+',\n' for n in names)+'} NhlAudioApi;\nuint32_t nhl07_audio_call(NhlAudioApi api,const uint32_t *args);\n')
(root/'analysis/native-audio-abi.json').write_text(json.dumps(entries,indent=2))
print('Audited audio interfaces:',len(entries))
address=0x6c744b;f=metadata[address]
section=next(s for s in xbe['sections'] if int(s['virtual_addr'],16)<=address<int(s['virtual_addr'],16)+s['raw_size'])
offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16);code=data[offset:offset+int(f['end'],16)-address]
returns=[i for i in capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32).disasm(code,address) if i.mnemonic=='ret']
assert returns and all(int(i.op_str or '0',0)==8 for i in returns)
(root/'analysis/reverb-bridge-abi.json').write_text(json.dumps({'address':hex(address),'calling_convention':'thiscall: ECX=output pointer slot; stack=(listener flags/parameters, output state); RET 8',
    'sha256':hashlib.sha256(code).hexdigest(),'return_instructions':[hex(i.address) for i in returns],'original_call_site':'0x006BA990'},indent=2))

with (root/'src/native_audio.h').open('a') as out: out.write('uint32_t nhl07_audio_open(void);\nvoid nhl07_audio_close(void);\nuint64_t nhl07_audio_callback_frames(void);\n')
