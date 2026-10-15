"""Recover NHL 07 DSP effect programs using independently decompiled XDK routines.

Ghidra: 6C13FD container, 6C877C generator, 6C88C0 seed, 6C8992 decoder.
The original x86 decoder runs in isolated Unicorn memory as a byte oracle.
No DSP instructions are executed and no game-audio correctness is claimed.
"""
from pathlib import Path
import hashlib,json,struct,sys
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
sys.path.insert(0,str(root.parents[1]/'work/nhl07-tools/python'))
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_EIP,UC_X86_REG_EAX
def digest(b):return hashlib.sha256(b).hexdigest()
xbe=(game/'input/default.xbe').read_bytes();assert digest(xbe)=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
sections=json.loads((game/'analysis/xbe.json').read_text())['sections']
def xbe_bytes(va,size):
    s=next(s for s in sections if int(s['virtual_addr'],16)<=va and va+size<=int(s['virtual_addr'],16)+s['raw_size'])
    at=int(s['raw_addr'],16)+va-int(s['virtual_addr'],16);return xbe[at:at+size]
image=(root/'analysis/first-dsp-image.bin').read_bytes();capture=json.loads((root/'analysis/first-dsp-image.json').read_text())
assert image==xbe_bytes(int(capture['image_guest_address'],16),len(image)), 'Runtime DSP differs from supplied XBE'
uc=Uc(UC_ARCH_X86,UC_MODE_32);uc.mem_map(0,0x1000000)
for s in sections:uc.mem_write(int(s['virtual_addr'],16),xbe[int(s['raw_addr'],16):int(s['raw_addr'],16)+s['raw_size']])
def original(va,args):
    stack=0xf10000;stop=0xf00000
    uc.mem_write(stack,struct.pack('<'+'I'*(1+len(args)),stop,*args));uc.reg_write(UC_X86_REG_ESP,stack)
    uc.emu_start(va,stop,timeout=5000000,count=10000000)
    assert uc.reg_read(UC_X86_REG_EIP)==stop and uc.reg_read(UC_X86_REG_ESP)==stack+4+4*len(args)
    return uc.reg_read(UC_X86_REG_EAX)
def step(lo,hi):return ((lo>>1)|(hi<<31))&0xffffffff, (((((lo<<2)^lo)<<1)^lo)<<28 ^ hi)&0x80000000 | hi>>1
state=step(0x49de12ba,0x7fa49bca)
for _ in range(80):state=step(*state)
seed=struct.pack('<II',*state)
original(0x6c88c0,[0xb30000]);assert bytes(uc.mem_read(0xb30000,8))==seed
checks=[]
def decode(key,data,name):
    current=step(*state);result=bytearray()
    for i,byte in enumerate(data):
        current=step(*current);base=seed[i&7]
        result.append(base^(current[0]&255)^((byte-key[i&7]*base)&255))
    uc.mem_write(0xb00000,data);uc.mem_write(0xb20000,key)
    assert original(0x6c8992,[0xb20000,0xb00000,len(data),0xb00000,0])==0
    oracle=bytes(uc.mem_read(0xb00000,len(data)))
    assert oracle==result, name+' independent decoder differs from x86'
    checks.append({'name':name,'bytes':len(data),'sha256':digest(result)})
    return bytes(result)
header=struct.unpack_from('<6I',image,0x800)
descriptor_offset=0x818+(header[1]+header[3])*4
count,scratch_bytes=struct.unpack_from('<2I',image,descriptor_offset)
assert 0<count<=64 and descriptor_offset+8+count*40==len(image)
descriptor_size=8+count*32
keys=decode(seed,image[descriptor_offset+descriptor_size:], 'effect_keys')
destination=root/'analysis/dsp';destination.mkdir(exist_ok=True)
programs=[];code_at=0x818
for i in range(count):
    words=struct.unpack_from('<8I',image,descriptor_offset+8+i*32)
    code_offset,code_bytes,data_offset,data_bytes,y_offset,y_bytes,scratch_offset,scratch_size=words
    assert code_offset==code_at and code_bytes%4==0 and code_offset+code_bytes<=header[2]
    assert data_offset>=header[2] and data_offset+data_bytes<=descriptor_offset
    code=decode(keys[i*8:i*8+8],image[code_offset:code_offset+code_bytes],f'effect_{i:02d}')
    data=image[data_offset:data_offset+data_bytes]
    (destination/f'effect-{i:02d}.code.bin').write_bytes(code)
    (destination/f'effect-{i:02d}.state.bin').write_bytes(data)
    instruction_words=struct.unpack('<'+'I'*(len(code)//4),code)
    (destination/f'effect-{i:02d}.words.txt').write_text('\n'.join(f'{j:04x}: {word:08x}' for j,word in enumerate(instruction_words))+'\n')
    programs.append({'index':i,'code_offset':hex(code_offset),'code_bytes':code_bytes,'code_sha256':digest(code),
        'state_offset':hex(data_offset),'state_bytes':data_bytes,'state_sha256':digest(data),
        'y_offset':hex(y_offset),'y_bytes':y_bytes,'scratch_offset':hex(scratch_offset),'scratch_bytes':scratch_size,
        'words_with_nonzero_high_byte':sum(w>0xffffff for w in instruction_words)})
    code_at+=code_bytes
assert code_at<=header[2] and header[2]-code_at<=4
report={'image_sha256':digest(image),'runtime_matches_original_xbe':True,'image_bytes':len(image),'header_words':[hex(x) for x in header],
    'descriptor_offset':hex(descriptor_offset),'effect_count':count,'scratch_bytes':scratch_bytes,'code_bytes':code_at-0x818,
    'uninterpreted_code_trailer':image[code_at:header[2]].hex(),
    'decryption':'Independent Python from Ghidra, byte-for-byte checked against original x86 in Unicorn',
    'seed_matches_x86':True,'decoder_checks':checks,'effects':programs,
    'not_validated':['DSP instruction semantics or execution','Effect names and graph routing','Game audio playback']}
(root/'analysis/dsp-analysis.json').write_text(json.dumps(report,indent=2))
print(f'Recovered {count} DSP programs, {code_at-0x818} code bytes; {len(checks)} original-x86 comparisons passed')
