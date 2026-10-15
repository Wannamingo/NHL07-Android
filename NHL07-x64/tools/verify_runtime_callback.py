"""Original x86 differential oracle for recovered UI arithmetic, Windows + ARM64."""
from pathlib import Path
import argparse,hashlib,json,os,random,re,struct,subprocess,sys
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
sys.path.insert(0,str(root.parents[1]/'work/nhl07-tools/python'))
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI,UC_X86_REG_EIP
build=root/'build/runtime-callback-validation';build.mkdir(parents=True,exist_ok=True)
config=json.loads((android/'local-toolchains.json').read_text());xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()==config['xbe_sha256']
helper=None
for p in (root/'src/recomp/gen').glob('recomp_*.c'):
    match=re.search(r'void sub_0054EFD8\(void\)\n\{.*?\n\}',p.read_text(),re.S)
    if match:helper=match.group();break
assert helper
(build/'multiply.c').write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\n'+helper)
ids=[UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI]
uc=Uc(UC_ARCH_X86,UC_MODE_32);uc.mem_map(0,0x1000000)
for start,end in [(0x556922,0x556a0c),(0x54efd8,0x54f052)]:uc.mem_write(start,xbe[start-0x10000:end-0x10000])
rng=random.Random(0x556922);edge=[0,1,0xffffffff,64,0xffffffc0,0x7fffffff,0x80000000,0x10000,0xffff0000]
pairs=[(a,b) for a in edge for b in edge]+[(rng.getrandbits(32),rng.getrandbits(32)) for _ in range(64)]
vectors=[]
for op in [*range(0x50,0x56),0x5a,0x5b,*range(0x60,0x64),0x8b,0x8c,0,0x8d]:
    for a,b in pairs:
        if op==0x62 and (not b or ((a<<6)&0xffffffff)==0x80000000 and b==0xffffffff):continue
        initial=[0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
        for reg,value in zip(ids,initial):uc.reg_write(reg,value)
        uc.mem_write(0xf10000,struct.pack('<II',0xf00000,0xa00000));uc.mem_write(0xa00004,struct.pack('<I',op));uc.mem_write(0xa00020,struct.pack('<I',0xb00008));uc.mem_write(0xb00000,struct.pack('<II',a,b))
        uc.emu_start(0x556922,0xf00000,count=5000,timeout=1000000)
        assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
        expected=[uc.reg_read(reg) for reg in ids]+[struct.unpack('<I',uc.mem_read(0xb00000,4))[0],struct.unpack('<I',uc.mem_read(0xa00020,4))[0]]
        vectors.append(struct.pack('<13I',op,a,b,*expected))
arithmetic_count=len(vectors)
wrappers=[0x20bd70,0x21e7f0,0x222980,0x381db0];first_calls=[]
for entry in wrappers:
    code=xbe[entry-0x10000:entry-0x10000+30]
    first=entry+8+struct.unpack_from('<i',code,4)[0];first_calls.append(first)
    assert entry+21+struct.unpack_from('<i',code,17)[0]==0x20951
    uc.mem_write(entry,code)
    uc.mem_write(first,b'\xff\x41\x04\xb8'+struct.pack('<I',0xdeadbeef)+b'\xba'+struct.pack('<I',0x11223344)+b'\xc3')
uc.mem_write(0x20951,b'\x8b\x4c\x24\x04\xff\x41\x08\xb8'+struct.pack('<I',0xcafebabe)+b'\xba'+struct.pack('<I',0x55667788)+b'\xc3')
for entry in wrappers:
    for flags in [*range(256),*[0xa5a50000|x for x in range(256)]]:
        this=0xc00000+(flags&255)*16
        initial=[0x12345678,this,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
        for reg,value in zip(ids,initial):uc.reg_write(reg,value)
        uc.mem_write(0xf10000,struct.pack('<II',0xf00000,flags));uc.mem_write(this+4,b'\0'*8)
        uc.emu_start(entry,0xf00000,count=1000)
        assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
        expected=[uc.reg_read(reg) for reg in ids]+list(struct.unpack('<II',uc.mem_read(this+4,8)))
        vectors.append(struct.pack('<13I',entry,flags,this,*expected))
virtual_entry=0x27ef90
uc.mem_write(virtual_entry,xbe[virtual_entry-0x10000:virtual_entry-0x10000+34])
uc.mem_write(0x600000,b'\x8b\x54\x24\x04\xff\x42\x08\xb8'+struct.pack('<I',0xcafebabe)+b'\xc2\x04\x00')
uc.mem_write(0x8fa540,struct.pack('<I',0xd00000));uc.mem_write(0xd00000,struct.pack('<I',0xd00100));uc.mem_write(0xd0011c,struct.pack('<I',0x600000))
for flags in [*range(256),*[0xa5a50000|x for x in range(256)]]:
    this=0xc00000+(flags&255)*16
    initial=[0x12345678,this,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
    for reg,value in zip(ids,initial):uc.reg_write(reg,value)
    uc.mem_write(0xf10000,struct.pack('<II',0xf00000,flags));uc.mem_write(this,b'\0'*12)
    uc.emu_start(virtual_entry,0xf00000,count=1000)
    assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
    expected=[uc.reg_read(reg) for reg in ids]+[struct.unpack('<I',uc.mem_read(this,4))[0],struct.unpack('<I',uc.mem_read(this+8,4))[0]]
    vectors.append(struct.pack('<13I',virtual_entry,flags,this,*expected))
bitset_entry=0x22a270
uc.mem_write(bitset_entry,xbe[bitset_entry-0x10000:0x22a480-0x10000])
settings_pairs=[(selector,value) for selector in [*range(17),0xffffffff,0x80000000] for value in edge]+[(rng.randrange(20),rng.getrandbits(32)) for _ in range(128)]
for selector,value in settings_pairs:
    initial=[0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
    for reg,item in zip(ids,initial):uc.reg_write(reg,item)
    uc.mem_write(0xf10000,struct.pack('<4I',0xf00000,selector,value,0xfeedbeef));uc.mem_write(0x8f6a68,struct.pack('<I',((value^0xead00d07)+selector)&0xffffffff))
    uc.emu_start(bitset_entry,0xf00000,count=1000)
    assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
    expected=[uc.reg_read(reg) for reg in ids]+[struct.unpack('<I',uc.mem_read(0x8f6a68,4))[0],struct.unpack('<I',uc.mem_read(0xf1000c,4))[0]]
    vectors.append(struct.pack('<13I',bitset_entry,selector,value,*expected))
large_settings_entry=0x22a840
uc.mem_write(large_settings_entry,xbe[large_settings_entry-0x10000:0x22ad00-0x10000])
large_pairs=[(selector,value) for selector in [*range(38),0xffffffff,0x80000000] for value in edge]+[(rng.randrange(40),rng.getrandbits(32)) for _ in range(128)]
for selector,value in large_pairs:
    initial=[0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
    for reg,item in zip(ids,initial):uc.reg_write(reg,item)
    uc.mem_write(0xf10000,struct.pack('<3I',0xf00000,selector,value))
    uc.mem_write(0x8f6a08,struct.pack('<5I',*[((value^0xead00d07)+selector+word*0x11111111)&0xffffffff for word in range(5)]))
    uc.emu_start(large_settings_entry,0xf00000,count=1000)
    assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
    expected=[uc.reg_read(reg) for reg in ids]+list(struct.unpack('<5I',uc.mem_read(0x8f6a08,20)))
    vectors.append(struct.pack('<16I',large_settings_entry,selector,value,*expected))
getter_entry=0x1febc0
uc.mem_write(getter_entry,xbe[getter_entry-0x10000:0x1fed58-0x10000])
getter_pairs=[(selector,seed) for selector in [*range(32),0xffffffff,0x80000000] for seed in edge]+[(rng.randrange(35),rng.getrandbits(32)) for _ in range(128)]
for selector,seed in getter_pairs:
    initial=[0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
    for reg,item in zip(ids,initial):uc.reg_write(reg,item)
    uc.mem_write(0xf10000,struct.pack('<II',0xf00000,selector))
    uc.mem_write(0x904b90,struct.pack('<36I',*[(seed^(word*0x11111111))&0xffffffff for word in range(36)]))
    uc.emu_start(getter_entry,0xf00000,count=1000)
    assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
    expected=[uc.reg_read(reg) for reg in ids]+[struct.unpack('<I',uc.mem_read(a,4))[0] for a in [0x904b90,0x904c1c]]
    vectors.append(struct.pack('<13I',getter_entry,selector,seed,*expected))
roster_entries=[0x234590,0x234820]
roster_pairs=[(selector,seed) for selector in [*range(18),0xffffffff,0x80000000] for seed in edge]+[(rng.randrange(20),rng.getrandbits(32)) for _ in range(128)]
for roster_entry in roster_entries:
    end=0x2346c8 if roster_entry==0x234590 else 0x234938
    uc.mem_write(roster_entry,xbe[roster_entry-0x10000:end-0x10000])
    for selector,seed in roster_pairs:
        i=seed&3;j=(seed>>2)&3;k=(seed>>4)&1
        displacement=0x29c+(j+(i+k*2)*18)*36 if roster_entry==0x234590 else 0x149c+(j+(i+k*2)*2)*32
        this=(-displacement)&0xffffffff if seed==0x80000000 else 0xc10000
        destination=(this+displacement)&0xffffffff
        initial=[0x12345678,this,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
        for reg,item in zip(ids,initial):uc.reg_write(reg,item)
        uc.mem_write(0xf10000,struct.pack('<6I',0xf00000,i,j,k,selector,seed))
        uc.mem_write(destination,struct.pack('<9I',*[(seed^(word*0x01010101))&0xffffffff for word in range(9)]))
        uc.emu_start(roster_entry,0xf00000,count=1000)
        assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
        expected=[uc.reg_read(reg) for reg in ids]+list(struct.unpack('<9I',uc.mem_read(destination,36)))
        vectors.append(struct.pack('<20I',roster_entry,selector,seed,*expected))
scene_entry=0x42afc0
scene_targets=[0x13b75,0x21171,0x1287e,0x33d08,0x33385,0x29263]
scene_records=json.loads((root/'analysis/scene-dispatch-bounds.json').read_text())['accepted']
scene_entries=[scene_entry]+[int(row['address'],16) for row in scene_records]
scene_targets=sorted(set(scene_targets+[int(t,16) for row in scene_records for t in row['tail_targets']]))
assert not set(scene_targets).intersection(first_calls+[0x20951]),'Dependency-double collision'
scene_segments=[(0x42afc0,0x42b045,0x42b018)]+[(int(row['address'],16),int(row['data_end'],16),int(row['table'],16)) for row in scene_records]
for begin,end,table in scene_segments:uc.mem_write(begin,xbe[begin-0x10000:end-0x10000])
for target in scene_targets:
    # Identical observable tail-callee doubles. The real dispatcher's stack
    # rewrites, selector mapping and register changes remain original x86.
    uc.mem_write(target,b'\xc7\x05'+struct.pack('<II',0x900000,target)+b'\xc2\x04\x00')
scene_events=sorted({*range(21),0xffffffff,0x80000000,0xffff0001,*[row['selector_bias']+i for row in scene_records for i in range(row['selector_count'])]})
scene_pairs=[(event,seed) for event in scene_events for seed in edge+list(range(8))+[rng.getrandbits(32) for _ in range(16)]]
for scene_entry in scene_entries:
    for event,seed in scene_pairs:
        node=0xa00000+(seed&255)*16;this=0xc10000+(seed&0xffff)*4
        initial=[0x12345678,this,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
        for reg,item in zip(ids,initial):uc.reg_write(reg,item)
        uc.mem_write(0xf10000,struct.pack('<II',0xf00000,node));uc.mem_write(node,struct.pack('<I',event));uc.mem_write(0x900000,b'\0'*4)
        uc.mem_write(this+0x1c,struct.pack('<I',seed&7))
        uc.emu_start(scene_entry,0xf00000,count=1000)
        assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
        expected=[uc.reg_read(reg) for reg in ids]+[struct.unpack('<I',uc.mem_read(a,4))[0] for a in [0x900000,0xf10004]]
        vectors.append(struct.pack('<13I',scene_entry,event,seed,*expected))
fixture=build/'vectors.bin';fixture.write_bytes(struct.pack('<I',len(vectors))+b''.join(v+b'\0'*(80-len(v)) for v in vectors))
callback=re.search(r'void sub_00556922\(void\)\n\{.*?\n\}',(root/'src/runtime_callbacks.c').read_text(),re.S).group()
cleanup='\n'.join(re.search(r'void sub_'+f'{entry:08X}'+r'\(void\)\n\{.*?\n\}',(root/'src/runtime_callbacks.c').read_text(),re.S).group() for entry in wrappers+[virtual_entry,bitset_entry,large_settings_entry])
cleanup+='\n'+re.search(r'void sub_001FEBC0\(void\)\n\{.*?\n\}',(root/'src/static_recovered.c').read_text(),re.S).group()
cleanup+='\n'+re.search(r'void sub_00234590\(void\)\n\{.*?\n\}',(root/'src/static_recovered.c').read_text(),re.S).group()
cleanup+='\n'+re.search(r'void sub_00234820\(void\)\n\{.*?\n\}',(root/'src/static_recovered.c').read_text(),re.S).group()
cleanup+='\n'+'\n'.join(re.search(r'void sub_'+f'{entry:08X}'+r'\(void\)\n\{.*?\n\}',(root/'src/runtime_callbacks.c').read_text(),re.S).group() for entry in scene_entries)
prototypes='void sub_00029D67(void);\nvoid sub_00020951(void);\n'+''.join(f'void sub_{first:08X}(void);\n' for first in first_calls if first!=0x29d67)
prototypes+=''.join(f'void sub_{target:08X}(void);\n' for target in scene_targets)
doubles=''.join(f'void sub_{first:08X}(void){{sub_00029D67();}}\n' for first in first_calls if first!=0x29d67)
doubles+=''.join(f'void sub_{target:08X}(void){{MEM32(0x900000)=0x{target:X};g_esp+=8;}}\n' for target in scene_targets)
lookup=''.join(f'if(a==0x{entry:X})return sub_{entry:08X};' for entry in wrappers+[virtual_entry,bitset_entry,large_settings_entry,getter_entry,*roster_entries,*scene_entries])
lookup+=''.join(f'if(a==0x{target:X})return sub_{target:08X};' for target in scene_targets)
(build/'callback.c').write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_types.h"\nvoid sub_0054EFD8(void);\n'+prototypes+callback+'\n'+cleanup+'\n'+doubles+'\nrecomp_func_t nhl07_lookup_recovered(uint32_t a){'+lookup+'return a==0x556922?sub_00556922:NULL;}\n')
table_values=struct.unpack_from('<15I',xbe,0x22a444-0x10000)
large_table=struct.unpack_from('<36I',xbe,0x22ac70-0x10000)
getter_table=struct.unpack_from('<29I',xbe,0x1fece4-0x10000)
roster_table=struct.unpack_from('<16I',xbe,0x234688-0x10000)
team_table=struct.unpack_from('<14I',xbe,0x234900-0x10000)
with (build/'callback.c').open('a') as stream:
    stream.write('\nvoid initialize_original_tables(void){'+''.join(f'MEM32(0x{0x22a444+i*4:X})=0x{value:X};' for i,value in enumerate(table_values))+''.join(f'MEM32(0x{0x22ac70+i*4:X})=0x{value:X};' for i,value in enumerate(large_table))+''.join(f'MEM32(0x{0x1fece4+i*4:X})=0x{value:X};' for i,value in enumerate(getter_table))+''.join(f'MEM32(0x{0x234688+i*4:X})=0x{value:X};' for i,value in enumerate(roster_table))+'}\n')
    stream.write('void initialize_team_table(void){'+''.join(f'MEM32(0x{0x234900+i*4:X})=0x{value:X};' for i,value in enumerate(team_table))+'}\n')
    stream.write('void initialize_scene_table(void){'+''.join(f'MEM8(0x{table+i:X})=0x{value:X};' for begin,end,table in scene_segments for i,value in enumerate(xbe[table-0x10000:end-0x10000]))+'}\n')
    stream.write('int is_scene_dispatch(uint32_t a){return '+'||'.join(f'a==0x{entry:X}u' for entry in scene_entries)+';}\n')

sources=[root/'tests/runtime_callback_runner.c',build/'callback.c',build/'multiply.c'];include=root/'src/recomp/gen'
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(callback C)\nadd_executable(callback '+ ' '.join('"'+p.as_posix()+'"' for p in sources)+')\ntarget_include_directories(callback PRIVATE "'+include.as_posix()+'")\ntarget_compile_options(callback PRIVATE /utf-8)\n')
with (root/'logs/runtime-callback-build.log').open('w') as log:
    for cmd in [[config['cmake'],'-S',build,'-B',build/'native','-A','x64'],[config['cmake'],'--build',build/'native','--config','Release','--parallel','2']]:
        assert subprocess.run(list(map(str,cmd)),env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'),stdout=log,stderr=subprocess.STDOUT).returncode==0
windows=build/'native/Release/callback.exe';result=subprocess.run([str(windows),str(fixture)],capture_output=True,text=True);assert result.returncode==0,result.stdout+result.stderr;print(result.stdout,flush=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'callback_arm64'
cmd=[llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-fno-strict-aliasing','-ffp-contract=off','-Wl,-z,max-page-size=16384','-I'+str(include),*sources,'-lm','-o',binary]
result=subprocess.run(list(map(str,cmd)),capture_output=True,text=True);assert result.returncode==0,result.stderr[-4000:]
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465'
def adb(cmd):return subprocess.run(prefix+cmd,check=True,capture_output=True,text=True,timeout=60).stdout
for p in [binary,fixture]:adb(['push',str(p),remote+'/'+p.name])
adb(['shell','chmod','700',remote+'/'+binary.name]);output=adb(['shell',remote+'/'+binary.name,remote+'/'+fixture.name]);assert f'passed={len(vectors)} failed=0' in output;print(output)
(root/'logs/runtime-callback-validation.log').write_text(result.stdout+output)
(root/'analysis/runtime-callback-validation.json').write_text(json.dumps({'serial':args.serial,'passed_per_architecture':len(vectors),'failed':0,'oracle':'Unicorn, actual supplied XBE x86 bytes',
    'scope':'16 arithmetic operation codes, signed edge cases and deterministic random operands; 2560 cleanup-wrapper flag cases across five original functions, including an indirect allocator call and vtable store against original x86 with identical observable dependency doubles. Settings bitfield setters: 15 and 36 cases, including all five global state words plus invalid selectors, signed edges and deterministic random values. Registers, return cleanup, conditional deallocation and memory effects.',
    'arithmetic_vectors':arithmetic_count,'cleanup_wrapper_vectors':(len(wrappers)+1)*512,'settings_vectors':len(settings_pairs),'large_settings_vectors':len(large_pairs),
    'match_settings_getter_vectors':len(getter_pairs),
    'roster_setter_vectors':len(roster_pairs)*len(roster_entries),
    'scene_dispatch_vectors':len(scene_pairs)*len(scene_entries),
    'scene_dispatch_scope':f'{len(scene_entries)} original event dispatchers: all table/map inputs, defaults and invalid event IDs, object modes 0..7 including conditional rendering branches; original registers, RET 4, tail destination and stack argument rewrites with identical observable callee doubles.',
    'additional_scope':['Match settings getter: 29 cases, invalid selectors and seeded DWORD/byte state','Two roster/team setters: 16 and 14 cases, invalid selectors, null destination, varied object indices, word truncation/DWORD store and unchanged surrounding bytes'],
    'limitations':['Framed helper EBP bridge excluded','x86 division exceptions excluded','No whole-game correctness claim'],
    'fixture_sha256':hashlib.sha256(fixture.read_bytes()).hexdigest(),'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),
    'runtime_callback_sha256':hashlib.sha256((root/'src/runtime_callbacks.c').read_bytes()).hexdigest(),
    'tested_functions_sha256':{name:hashlib.sha256(body.encode()).hexdigest() for name,body in
        [(m[1],m.group()) for m in re.finditer(r'void (sub_[0-9A-F]{8})\(void\)\n\{.*?\n\}',(build/'callback.c').read_text(),re.S)]}},indent=2))
