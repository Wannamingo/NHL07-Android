"""NHL 07 BIGF/RefPack and DB checksum helpers for separate mod copies."""
from pathlib import Path
import ctypes,struct

def big_entries(data):
    assert data[:4]==b'BIGF'
    count=int.from_bytes(data[8:12],'big');assert count<10000
    position=16;result={}
    for _ in range(count):
        offset,length=struct.unpack_from('>II',data,position)
        end=data.index(0,position+8)
        name=data[position+8:end].decode('ascii');position=end+1
        assert offset>=16 and offset+length<=len(data) and name not in result
        result[name]=data[offset:offset+length]
    return result

def big_write(entries):
    header_size=16+sum(9+len(k.encode('ascii')) for k in entries)
    out=bytearray((header_size+127)&~127);directory=bytearray()
    for name,data in entries.items():
        directory+=struct.pack('>II',len(out),len(data))+name.encode('ascii')+b'\0'
        out+=data
        out+=bytes((-len(out))%128)
    struct.pack_into('<I',out,4,len(out))
    out[:4]=b'BIGF';struct.pack_into('>II',out,8,len(entries),header_size)
    out[16:16+len(directory)]=directory
    return bytes(out)

def refpack_literal(data):
    assert len(data)<1<<24
    out=bytearray(b'\x10\xfb'+len(data).to_bytes(3,'big'));position=0
    while len(data)-position>=4:
        count=min(112,(len(data)-position)&~3)
        out.append(0xe0+(count-4)//4);out+=data[position:position+count];position+=count
    out.append(0xfc+len(data)-position);out+=data[position:]
    return bytes(out)

def original_decompress(data):
    """Actual recompiled original NHL 07 decoder, previously checked vs x86."""
    if data[:2]!=b'\x10\xfb':return data
    root=Path(__file__).resolve().parents[1]
    dll=ctypes.CDLL(str(root/'build/cpu-validation/native/Release/nhl07_cpu_validation.dll'))
    dll.nhl07_test_init.argtypes=[ctypes.c_void_p,ctypes.POINTER(ctypes.c_uint32)]
    dll.nhl07_test_run.argtypes=[ctypes.c_uint,ctypes.POINTER(ctypes.c_uint32)]
    size=int.from_bytes(data[2:5],'big')
    assert len(data)<0x300000 and size<0x300000
    memory=bytearray(0x1800000)
    memory[0x1000000:0x1000000+len(data)]=data
    struct.pack_into('<III',memory,0xf10000,0xf00000,0x1000000,0x1400000)
    registers=(ctypes.c_uint32*8)(0,0,0,0,0xf10000,0xf20000,0,0)
    dll.nhl07_test_init((ctypes.c_ubyte*len(memory)).from_buffer(memory),registers)
    dll.nhl07_test_run(1,registers)
    assert registers[0]==size
    return bytes(memory[0x1400000:0x1400000+size])

_crc_table=[]
for i in range(256):
    value=i<<24
    for _ in range(8):value=((value<<1)^(0x04c11db7 if value&0x80000000 else 0))&0xffffffff
    _crc_table.append(value)
def fifa_crc(data):
    value=0xffffffff
    for byte in data:value=((value<<8)&0xffffffff)^_crc_table[((value>>24)^byte)&255]
    return value
