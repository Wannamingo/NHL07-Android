"""Compare the 14-function original reverb calculator against original x86."""
from pathlib import Path
import ctypes,hashlib,json,os,re,struct,subprocess,sys
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64');build=root/'build/reverb-validation';build.mkdir(exist_ok=True)
sys.path.insert(0,str(root.parents[1]/'work/nhl07-tools/python'))
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_ECX,UC_X86_REG_EIP,UC_X86_REG_FPCW
functions={}
for path in (game/'src/recomp/gen').glob('recomp_*.c'):
    for match in re.finditer(r'void (sub_[0-9A-F]{8})\(void\)\n\{.*?\n\}',path.read_text(),re.S):functions[match[1]]=match[0]
pending=['sub_006C744B'];selected={}
while pending:
    name=pending.pop()
    if name in selected:continue
    body=functions[name];assert 'RECOMP_UNIMPL' not in body and 'RECOMP_ICALL' not in body and 'RECOMP_ITAIL' not in body
    selected[name]=body;pending.extend(set(re.findall(r'\bsub_[0-9A-F]{8}\b',body))-{name})
assert len(selected)==14
(build/'calculator.c').write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n'+
    '\n'.join('void '+n+'(void);' for n in selected)+'\n'+'\n'.join(selected.values()))
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_reverb_validation C)
add_library(reverb_test SHARED "'''+(root/'tests/reverb_harness.c').as_posix()+'''" calculator.c)
target_include_directories(reverb_test PRIVATE "'''+(game/'src/recomp/gen').as_posix()+'''")
target_compile_options(reverb_test PRIVATE /utf-8 /fp:strict /W0)
''')
config=json.loads((root/'local-toolchains.json').read_text());env=dict(os.environ,MSBUILDDISABLENODEREUSE='1')
with (root/'logs/reverb-validation-build.log').open('w') as log:
    for command in [[config['cmake'],'-S',build,'-B',build/'native','-A','x64'],[config['cmake'],'--build',build/'native','--config','Release','--parallel','2']]:
        result=subprocess.run(list(map(str,command)),env=env,stdout=log,stderr=subprocess.STDOUT)
        if result.returncode:raise SystemExit('Calculator build failed; see reverb-validation-build.log')
dll=ctypes.CDLL(str(build/'native/Release/reverb_test.dll'));dll.nhl07_reverb_test.argtypes=[ctypes.c_void_p,ctypes.c_uint32,ctypes.POINTER(ctypes.c_uint32)]
xbe=(game/'input/default.xbe').read_bytes();assert hashlib.sha256(xbe).hexdigest()==config['xbe_sha256']
image=bytearray(0x1000000)
for section in json.loads((game/'analysis/xbe.json').read_text())['sections']:
    at=int(section['virtual_addr'],16);offset=int(section['raw_addr'],16);image[at:at+section['raw_size']]=xbe[offset:offset+section['raw_size']]
def f(value):return struct.unpack('<I',struct.pack('<f',value))[0]
def w(address):return struct.unpack_from('<I',image,address)[0]
default=[-10000&0xffffffff,-10000&0xffffffff,0,w(0x7a9980),w(0x7a9980),-10000&0xffffffff,0,-10000&0xffffffff,0,0,0,w(0x87cfa4)]
presets=[('game_initial',default),('small_room',[(-1000)&0xffffffff,(-100)&0xffffffff,f(0),f(1.49),f(.83),(-2602)&0xffffffff,f(.007),200,f(.011),f(100),f(100),f(5000)]),
    ('large_hall',[(-1000)&0xffffffff,(-500)&0xffffffff,f(0),f(7.24),f(.33),(-1166)&0xffffffff,f(.02),16,f(.03),f(100),f(100),f(5000)])]
initial=(root/'analysis/dsp/effect-00.state.bin').read_bytes()[:0x118];cases=[];fixture=[]
for name,params in presets:
    for cw in [0x007f,0x027f,0x037f]:
        data=bytearray(image);data[0xb00000:0xb00118]=initial;struct.pack_into('<13I',data,0xb10000,0xfff,*params)
        struct.pack_into('<3I',data,0xf10000,0xf00000,0xb10000,0xb00000)
        uc=Uc(UC_ARCH_X86,UC_MODE_32);uc.mem_map(0,len(data));uc.mem_write(0,bytes(data))
        uc.reg_write(UC_X86_REG_ESP,0xf10000);uc.reg_write(UC_X86_REG_ECX,0xb30000);uc.reg_write(UC_X86_REG_FPCW,cw)
        uc.emu_start(0x6c744b,0xf00000,timeout=5000000,count=1000000)
        assert uc.reg_read(UC_X86_REG_EIP)==0xf00000 and uc.reg_read(UC_X86_REG_ESP)==0xf1000c
        expected=bytes(uc.mem_read(0xb00000,0x220));esp=ctypes.c_uint32()
        memory=(ctypes.c_ubyte*len(data)).from_buffer(data);dll.nhl07_reverb_test(memory,cw,ctypes.byref(esp))
        actual=bytes(data[0xb00000:0xb00220]);diff=[(i,struct.unpack_from('<I',expected,i)[0],struct.unpack_from('<I',actual,i)[0]) for i in range(0,len(actual),4) if actual[i:i+4]!=expected[i:i+4]]
        case={'name':name,'control_word':hex(cw),'stack_matches':esp.value==0xf1000c,'matched':not diff,'different_words':diff,
            'x86_sha256':hashlib.sha256(expected).hexdigest(),'native_sha256':hashlib.sha256(actual).hexdigest()};cases.append(case)
        print(name,hex(cw),'PASS' if not diff else 'FAIL',diff[:6],flush=True)
        fixture.append(struct.pack('<I13I',cw,0xfff,*params)+expected)
(build/'reverb-vectors.bin').write_bytes(struct.pack('<I',len(fixture))+b''.join(fixture))
(build/'memory.bin').write_bytes(image)
(build/'initial-state.bin').write_bytes(initial)
report={'oracle':'Original x86 6C744B + 13 callees in Unicorn','native':'Same 14 translated functions, MSVC x64 /fp:strict',
    'passed':sum(c['matched'] and c['stack_matches'] for c in cases),'failed':sum(not c['matched'] or not c['stack_matches'] for c in cases),'cases':cases,
    'source_functions':{n:hashlib.sha256(b.encode()).hexdigest() for n,b in selected.items()},'original_game_parameters':[hex(x) for x in default]}
(root/'analysis/reverb-windows-validation.json').write_text(json.dumps(report,indent=2));assert report['failed']==0,'Reverb calculator differs; do not integrate'
