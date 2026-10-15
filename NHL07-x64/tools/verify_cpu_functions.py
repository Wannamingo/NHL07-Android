"""Compare actual x86 execution with the current compiled C for recovered paths.

Unicorn is used only as an instruction-level test oracle. It is not part of
either game's host runtime. GPU/audio/network behavior is outside this test.
"""
from pathlib import Path
import ctypes
import hashlib
import json
import os
import struct
import subprocess
import sys

root=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(root.parents[1]/'work/nhl07-tools/python'))
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32,UC_HOOK_CODE
from unicorn.x86_const import (UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,
    UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI,
    UC_X86_REG_EIP)

destination=root/'build/cpu-validation'
destination.mkdir(parents=True,exist_ok=True)
source=(root/'src/recomp/gen/recomp_0248.c').read_text()
begin=source.index('void sub_0059DF4F(void)\n{')
end=source.index('\n}\n',begin)+3
body=source[begin:end]
(destination/'decompressor.c').write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n'+body)
(destination/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_cpu_validation C)
add_library(nhl07_cpu_validation SHARED "'''+(root/'tests/cpu_harness.c').as_posix()+'''"
    "'''+(root/'src/overrides.c').as_posix()+'''" decompressor.c)
target_include_directories(nhl07_cpu_validation PRIVATE "'''+(root/'src/recomp/gen').as_posix()+'''")
target_compile_options(nhl07_cpu_validation PRIVATE /utf-8)
''')
cmake='C:/Program Files/CMake/bin/cmake.exe'
env=dict(os.environ,MSBUILDDISABLENODEREUSE='1')
with (root/'logs/cpu-validation-build.log').open('w') as log:
    for command in [[cmake,'-S',str(destination),'-B',str(destination/'native'),'-A','x64'],
                    [cmake,'--build',str(destination/'native'),'--config','Release','--parallel','2']]:
        result=subprocess.run(command,env=env,stdout=log,stderr=subprocess.STDOUT)
        if result.returncode: raise SystemExit('Test DLL build failed; inspect logs/cpu-validation-build.log')
dll=ctypes.CDLL(str(destination/'native/Release/nhl07_cpu_validation.dll'))
dll.nhl07_test_init.argtypes=[ctypes.c_void_p,ctypes.POINTER(ctypes.c_uint32)]
dll.nhl07_test_run.argtypes=[ctypes.c_uint,ctypes.POINTER(ctypes.c_uint32)]
xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
memory_size=0x01000000
image=bytearray(memory_size)
# Both tested routines are in .text, with VA = file offset + 0x10000.
for start,end in [(0x005D7E7F,0x005D7EA9),(0x0059DF4F,0x0059E0FE)]:
    image[start:end]=xbe[start-0x10000:end-0x10000]
for address,value in [(0x008F0000,0x11111111),(0x008F0010,0x22222222),(0x005D1D3A,0x33333333)]:
    image[address:address+6]=b'\xb8'+struct.pack('<I',value)+b'\xc3'
stop=0x00F00000
register_ids=[UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,
              UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI]
results=[]

def compare(name,kind,setup,output_size=0):
    data=bytearray(image)
    regs=[0x12345678,0x12345679,0x1234567A,0x1234567B,0x00F10000,0x00F20000,0x1234567C,0x1234567D]
    struct.pack_into('<I',data,regs[4],stop)
    setup(data,regs[4])
    original=Uc(UC_ARCH_X86,UC_MODE_32)
    original.mem_map(0,memory_size)
    original.mem_write(0,bytes(data))
    for register,value in zip(register_ids,regs): original.reg_write(register,value)
    # Unicorn does not model cache/DMA coherency. Skip only the audited WBINVD;
    # registers and decompressed bytes are still compared, not cache semantics.
    def instruction(uc,address,size,user):
        if address==0x0059E0F4: uc.reg_write(UC_X86_REG_EIP,address+2)
    original.hook_add(UC_HOOK_CODE,instruction)
    entry=0x005D7E7F if kind==0 else 0x0059DF4F
    original.emu_start(entry,stop,timeout=5000000,count=5000000)
    assert original.reg_read(UC_X86_REG_EIP)==stop, 'x86 oracle did not return'
    expected=[original.reg_read(r) for r in register_ids]
    native_memory=(ctypes.c_ubyte*memory_size).from_buffer(data)
    native_regs=(ctypes.c_uint32*8)(*regs)
    dll.nhl07_test_init(native_memory,native_regs)
    dll.nhl07_test_run(kind,native_regs)
    # EBP is function-local in the recompiler. Its separate bridge variable is
    # intentionally not an architectural output register for framed functions.
    indices=range(8) if kind==0 else [0,1,2,3,4,6,7]
    for i in indices:
        assert native_regs[i]==expected[i], (name,'register',i,hex(native_regs[i]),hex(expected[i]))
    if output_size:
        expected_data=bytes(original.mem_read(0x00B00000,output_size))
        assert bytes(data[0x00B00000:0x00B00000+output_size])==expected_data, (name,'output mismatch')
        assert native_regs[0]==output_size, (name,'decoded length mismatch')
    results.append({'case':name,'matched':True,'decoded_bytes':output_size,
        'decoded_sha256':hashlib.sha256(bytes(data[0x00B00000:0x00B00000+output_size])).hexdigest() if output_size else None})

for attached in [0,1]:
    for callbacks in [False,True]:
        def setup(data,stack,attached=attached,callbacks=callbacks):
            struct.pack_into('<I',data,stack+4,attached)
            struct.pack_into('<II',data,0x008E171C,0x008F0000 if callbacks else 0,0x008F0010 if callbacks else 0)
        compare(f'thread_notification_{attached}_callbacks_{callbacks}',0,setup)

for archive in ['rms/rms.viv','preload/fmisc.viv']:
    data=(root/'disc'/archive).read_bytes()
    assert data[:4]==b'BIGF'
    count=int.from_bytes(data[8:12],'big'); position=16
    for _ in range(count):
        offset,length=struct.unpack_from('>II',data,position)
        end=data.index(0,position+8)
        name=data[position+8:end].decode('ascii'); position=end+1
        compressed=data[offset:offset+length]
        if compressed[:2]!=b'\x10\xfb': continue
        decoded_size=int.from_bytes(compressed[2:5],'big')
        assert len(compressed)<0x100000 and decoded_size<0x100000
        def setup(target,stack,compressed=compressed):
            struct.pack_into('<II',target,stack+4,0x00A00000,0x00B00000)
            target[0x00A00000:0x00A00000+len(compressed)]=compressed
        compare(archive+':'+name,1,setup,decoded_size)

report={'oracle':'Unicorn 2.1.4, actual x86 bytes from the supplied XBE',
    'native':'MSVC x64 Release, actual current callback and generated decompressor bodies',
    'scope':'Thread callback: 4 branch cases; decompressor: compressed resources from two original archives',
    'limitations':['WBINVD cache behavior is excluded; only output bytes and registers are compared',
                  'No graphics, audio, network, ARM64 execution or full-game correctness claim',
                  'Framed function EBP is local in generated C; its global bridge value is excluded'],
    'cases':results,'passed':len(results),'failed':0}
(root/'analysis/cpu-differential-validation.json').write_text(json.dumps(report,indent=2))
print('Differential CPU checks passed:',len(results))
