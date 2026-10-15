"""Compare actual original resource-ref routines + native boundary to x86.

Destruction is an identical observable double in both runs. Actual allocation
freeing/GPU waits and host presentation proxies require integration testing.
"""
from pathlib import Path
import argparse,hashlib,itertools,json,os,re,struct,subprocess,sys
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
sys.path.insert(0,str(root.parents[1]/'work/nhl07-tools/python'))
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32,UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI,UC_X86_REG_EIP
config=json.loads((android/'local-toolchains.json').read_text());xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()==config['xbe_sha256']
sections=json.loads((root/'analysis/xbe.json').read_text())['sections']
build=root/'build/resource-lifetime-validation';build.mkdir(parents=True,exist_ok=True)
ids=[UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_EDX,UC_X86_REG_EBX,UC_X86_REG_ESP,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI]
uc=Uc(UC_ARCH_X86,UC_MODE_32);uc.mem_map(0,0x1000000)
original_hashes={};original_bodies={};hook_bodies={}
generated=(root/'src/recomp/gen/recomp_0283.c').read_text();hooks=(root/'src/native_graphics_hooks.c').read_text()
for address in [0x7630a0,0x7630e0]:
    metadata=json.loads((root/'analysis/ghidra-recovered'/f'{address:08x}.json').read_text());end=int(metadata['end'],16)
    section=next(s for s in sections if int(s['virtual_addr'],16)<=address<end<=int(s['virtual_addr'],16)+s['raw_size'])
    offset=int(section['raw_addr'],16)+address-int(section['virtual_addr'],16);code=xbe[offset:offset+end-address]
    uc.mem_write(address,code);original_hashes[hex(address)]=hashlib.sha256(code).hexdigest()
    symbol=f'sub_{address:08X}'
    original_bodies[symbol+'_original_xbox']=re.search(r'void '+symbol+r'_original_xbox\(void\)\n\{.*?\n\}',generated,re.S).group()
    hook_bodies[symbol]=re.search(r'void '+symbol+r'\(void\) \{.*?\n\}',hooks,re.S).group()
# MOV ECX,[ESP+4]; MOV EAX,[900000]; MOV [900004+EAX*4],ECX;
# INC [900000]; RET 4. Records exact recursive destruction order.
uc.mem_write(0x762f80,bytes.fromhex('8b4c2404a100009000890c8504009000ff0500009000c20400'))
release_calls=[0]
def observe_release(engine,address,size,user):
    if address==0x7630e0:release_calls[0]+=1
uc.hook_add(UC_HOOK_CODE,observe_release,begin=0x7630e0,end=0x7630e0)
flags=[0,0x80000,0x100000,0x200000,0x400000,0x780000,0x80000000,0x81000000]
vectors=[]
for op,kind,flag,refs,mode,parent_flag in itertools.product(range(2),range(8),flags,[0,1,2,0x7fff,0xffff],range(6),[0,0x80000,0x780000,0x80000000]):
    common=flag|(kind<<16)|refs;root_object=0xa00000;parent=0xa00020;grand=0xa00040
    block=bytearray(96)
    struct.pack_into('<I',block,0,common)
    struct.pack_into('<I',block,20,parent if mode else 0)
    parent_common=(0x40001 if mode==3 else 0x50000 if mode in [1,5] else 0x50001)|parent_flag
    struct.pack_into('<I',block,32,parent_common)
    struct.pack_into('<I',block,52,grand if mode in [4,5] else 0)
    struct.pack_into('<I',block,64,(0x40000 if mode==5 else 0x40001)|parent_flag)
    uc.mem_write(root_object,bytes(block));uc.mem_write(0x900000,b'\0'*16)
    initial=[0x12345678,0x12345679,0x1234567a,0x1234567b,0xf10000,0xf20000,0x1234567c,0x1234567d]
    for reg,value in zip(ids,initial):uc.reg_write(reg,value)
    uc.mem_write(0xf10000,struct.pack('<II',0xf00000,root_object));release_calls[0]=0
    uc.emu_start(0x7630a0 if op==0 else 0x7630e0,0xf00000,count=2000)
    assert uc.reg_read(UC_X86_REG_EIP)==0xf00000
    expected=[uc.reg_read(reg) for reg in ids]+[struct.unpack('<I',uc.mem_read(a,4))[0] for a in [root_object,parent,grand]]
    expected+=list(struct.unpack('<4I',uc.mem_read(0x900000,16)))+[release_calls[0]]
    vectors.append(struct.pack('<20I',op,common,mode,parent_flag,*expected))
fixture=build/'resource-vectors.bin';fixture.write_bytes(struct.pack('<I',len(vectors))+b''.join(vectors))
original=build/'original_refs.c'
original.write_text('#define RECOMP_GENERATED_CODE\n#include "recomp_funcs.h"\n'+'\n'.join(original_bodies.values()))
boundary=build/'reference_hooks.c'
boundary.write_text('#include "recomp_types.h"\n#include "native_graphics.h"\n'+'\n'.join(hook_bodies.values()))
runner=root/'tests/resource_lifetime_runner.c';include=root/'src/recomp/gen';adapter=root/'src/native_resource_lifetime.c'
sources=[original,boundary,adapter,runner]
def run(command,timeout=180):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout,env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'))
    assert result.returncode==0,result.stdout[-4000:]+result.stderr[-4000:]
    return result.stdout+result.stderr
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(resource C)\nadd_executable(resource '+ ' '.join('"'+p.as_posix()+'"' for p in sources)+')\ntarget_include_directories(resource PRIVATE "'+include.as_posix()+'" "'+(root/'src').as_posix()+'")\ntarget_compile_options(resource PRIVATE /utf-8)\n')
run([config['cmake'],'-S',build,'-B',build/'windows','-A','x64']);run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
outputs={'windows_x64':run([build/'windows/Release/resource.exe',fixture])}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'resource_arm64'
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-Wl,-z,max-page-size=16384','-I'+str(include),'-I'+str(root/'src'),*sources,'-lm','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465'
for p in [binary,fixture]:run(prefix+['push',p,remote+'/'+p.name])
run(prefix+['shell','chmod','700',remote+'/'+binary.name]);outputs['android_arm64']=run(prefix+['shell',remote+'/'+binary.name,remote+'/'+fixture.name])
for architecture,output in outputs.items():
    assert f'RESOURCE_LIFETIME passed={len(vectors)} failed=0' in output
    assert f'RESOURCE_ACQUIRE passed={len(vectors)//2} failed=0' in output
    (root/'logs'/f'resource-lifetime-{architecture}.log').write_text(output)
    print(architecture,output.splitlines()[-1],flush=True)
(root/'analysis/resource-lifetime-validation.json').write_text(json.dumps({'serial':args.serial,'passed_per_architecture':len(vectors),'internal_acquire_passed_per_architecture':len(vectors)//2,'failed':0,
    'scope':'Actual original AddRef/Release bodies through actual graphics hooks and native frame adapter: eight types, eight Common flag layouts, reference boundaries, six parent layouts including three-level recursion, four independent parent flags; all registers, return cleanup, Common words, ordered destruction and release invalidation count.',
    'internal_acquire_scope':'Actual native internal acquisition through original AddRef, preserving all eight caller registers and stack canaries; caller frame contains a device pointer rather than the resource.',
    'limitations':['Destruction is an identical observable dependency double; real GPU waits/allocator frees require integration testing','Low-RAM resource headers in this differential matrix'],
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [adapter,runner,Path(__file__)]},
    'original_x86_sha256':original_hashes,
    'original_function_body_sha256':{name:hashlib.sha256(body.encode()).hexdigest() for name,body in original_bodies.items()},
    'graphics_hook_body_sha256':{name:hashlib.sha256(body.encode()).hexdigest() for name,body in hook_bodies.items()},
    'fixture_sha256':hashlib.sha256(fixture.read_bytes()).hexdigest()},indent=2))
