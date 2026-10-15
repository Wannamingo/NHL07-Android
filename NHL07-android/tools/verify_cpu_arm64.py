"""Execute original x86 on the host, compare current compiled ARM64 on RG477M."""
from pathlib import Path
import argparse,hashlib,json,struct,subprocess,sys
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
parser=argparse.ArgumentParser();parser.add_argument('--serial',required=True);args=parser.parse_args()
sys.path.insert(0,str(root.parents[1]/'work/nhl07-tools/python'))
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32,UC_HOOK_CODE
from unicorn.x86_const import (UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,
    UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI,UC_X86_REG_EIP)
config=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/cpu-validation';build.mkdir(parents=True,exist_ok=True)
xbe=(game/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()==config['xbe_sha256']
ids=[UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI]
image=bytearray(0x1000000)
for start,end in [(0x5d7e7f,0x5d7ea9),(0x59df4f,0x59e0fe)]: image[start:end]=xbe[start-0x10000:end-0x10000]
for address,value in [(0x8f0000,0x11111111),(0x8f0010,0x22222222),(0x5d1d3a,0x33333333)]:
    image[address:address+6]=b'\xb8'+struct.pack('<I',value)+b'\xc3'
vectors=[];cases=[]
def case(name,kind,attached=0,callbacks=0,compressed=b'',size=0):
    data=bytearray(image)
    regs=[0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
    struct.pack_into('<I',data,regs[4],0xf00000)
    if kind==0:
        struct.pack_into('<I',data,regs[4]+4,attached)
        struct.pack_into('<II',data,0x8e171c,0x8f0000 if callbacks else 0,0x8f0010 if callbacks else 0)
    else:
        struct.pack_into('<II',data,regs[4]+4,0xa00000,0xb00000)
        data[0xa00000:0xa00000+len(compressed)]=compressed
    uc=Uc(UC_ARCH_X86,UC_MODE_32);uc.mem_map(0,len(data));uc.mem_write(0,bytes(data))
    for register,value in zip(ids,regs): uc.reg_write(register,value)
    def skip_cache(u,address,length,unused):
        if address==0x59e0f4: u.reg_write(UC_X86_REG_EIP,address+2)
    uc.hook_add(UC_HOOK_CODE,skip_cache)
    uc.emu_start(0x5d7e7f if kind==0 else 0x59df4f,0xf00000,timeout=5000000,count=5000000)
    assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
    expected=[uc.reg_read(r) for r in ids];output=bytes(uc.mem_read(0xb00000,size)) if size else b''
    vectors.append(struct.pack('<5I',kind,attached,callbacks,len(compressed),size)+struct.pack('<8I',*regs)+
        struct.pack('<8I',*expected)+compressed+output)
    cases.append({'case':name,'decoded_bytes':size,'expected_sha256':hashlib.sha256(output).hexdigest()})
for attached in [0,1]:
    for callbacks in [0,1]: case(f'thread_{attached}_callbacks_{callbacks}',0,attached,callbacks)
for archive in ['rms/rms.viv','preload/fmisc.viv']:
    data=(game/'disc'/archive).read_bytes();assert data[:4]==b'BIGF'
    position=16
    for _ in range(int.from_bytes(data[8:12],'big')):
        offset,length=struct.unpack_from('>II',data,position);end=data.index(0,position+8)
        name=data[position+8:end].decode('ascii');position=end+1;compressed=data[offset:offset+length]
        if compressed[:2]!=b'\x10\xfb': continue
        size=int.from_bytes(compressed[2:5],'big');assert size<0x100000 and len(compressed)<0x100000
        case(archive+':'+name,1,compressed=compressed,size=size)
fixture=build/'cpu-vectors.bin';fixture.write_bytes(struct.pack('<I',len(vectors))+b''.join(vectors))
source=(game/'src/recomp/gen/recomp_0248.c').read_text();begin=source.index('void sub_0059DF4F(void)\n{')
body=source[begin:source.index('\n}\n',begin)+3]
decompressor=build/'decompressor.c';decompressor.write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n'+body)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
binary=build/'nhl07_cpu_test'
command=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),
    '-O2','-fwrapv','-fno-strict-aliasing','-ffp-contract=off','-Wl,-z,max-page-size=16384',
    '-I'+str(game/'src/recomp/gen'),root/'tests/cpu_runner.c',game/'tests/cpu_harness.c',game/'src/overrides.c',decompressor,'-lm','-o',binary]
result=subprocess.run(list(map(str,command)),capture_output=True,text=True)
(root/'logs/cpu-arm64-build.log').write_text(result.stdout+result.stderr)
assert result.returncode==0,result.stderr[-3000:]
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465'
def adb(cmd): return subprocess.run(prefix+cmd,check=True,capture_output=True,text=True,timeout=60).stdout
for p in [binary,fixture]: adb(['push',str(p),remote+'/'])
adb(['shell','chmod','700',remote+'/'+binary.name])
output=adb(['shell',remote+'/'+binary.name,remote+'/'+fixture.name])
assert f'ARM64 differential checks passed: {len(cases)}' in output
(root/'logs/cpu-arm64-validation.log').write_text(output)
report={'serial':args.serial,'oracle':'Unicorn 2.1.4, original x86 instructions from supplied XBE',
    'native':'NDK r30 ARM64 -O2; actual compiled callback/decompressor, executed on connected RG477M',
    'passed':len(cases),'failed':0,'fixture_sha256':hashlib.sha256(fixture.read_bytes()).hexdigest(),
    'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),'cases':cases,
    'limitations':['WBINVD cache semantics excluded','Framed EBP bridge value excluded','Diagnostic input-file observation is a no-op dependency double in this original-decoder test',
                  'No graphics, audio, full-game or performance correctness claim']}
(root/'analysis/cpu-arm64-validation.json').write_text(json.dumps(report,indent=2))
print(output)
