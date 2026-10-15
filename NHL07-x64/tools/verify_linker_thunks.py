"""Native dispatch validation against original XBE E9 targets on both CPUs.

Target bodies are observable dependency doubles. This tests restored address
selection, holes, alignment and direct thunk forwarding, not target behavior.
"""
from pathlib import Path
import argparse,hashlib,json,os,struct,subprocess
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((android/'local-toolchains.json').read_text())
report=json.loads((root/'analysis/linker-thunk-recovery.json').read_text());assert report['applied']
build=root/'build/linker-validation';build.mkdir(parents=True,exist_ok=True)
xbe=(root/'input/default.xbe').read_bytes();assert hashlib.sha256(xbe).hexdigest()==report['xbe_sha256']
section=next(s for s in json.loads((root/'analysis/xbe.json').read_text())['sections'] if s['name']=='.text')
base=int(section['virtual_addr'],16);raw=int(section['raw_addr'],16)
accepted={int(row['address'],16):int(row['target'],16) for row in report['accepted']}
vectors=[]
for run in report['runs']:
    for address in range(int(run['start'],16),int(run['end'],16),5):
        offset=raw+address-base;assert xbe[offset]==0xe9
        target=(address+5+struct.unpack_from('<i',xbe,offset+1)[0])&0xffffffff
        if address in accepted:assert accepted[address]==target
        vectors.extend([(address,accepted.get(address,0)),*[(address+d,0) for d in range(1,5)]])
vectors.extend((a,0) for a in [0,1,0x10000,0xffffffff,0x80000000,0x40000,0x936a40])
fixture=build/'vectors.bin';fixture.write_bytes(struct.pack('<I',len(vectors))+b''.join(struct.pack('<II',*v) for v in vectors))
targets=sorted(set(accepted.values()))
direct=[row for row in report['accepted'] if row['replaces_direct_call_stub']]
doubles=build/'target_doubles.c'
doubles.write_text('#include <stdint.h>\nvolatile uint32_t observed_target;\n'+''.join(f'void sub_{t:08X}(void){{observed_target=0x{t:08X}u;}}\n' for t in targets))
runner=build/'runner.c'
runner.write_text('#include "recomp_funcs.h"\n#include <stdio.h>\nextern volatile uint32_t observed_target;\nextern recomp_func_t nhl07_lookup_linker_thunk(uint32_t);\n'
    +'int main(int argc,char **argv){if(argc!=2)return 2;FILE *f=fopen(argv[1],"rb");if(!f)return 2;uint32_t count,passed=0,v[2];if(fread(&count,4,1,f)!=1)return 2;\n'
    +'for(uint32_t i=0;i<count;i++){if(fread(v,4,2,f)!=2)return 2;recomp_func_t fn=nhl07_lookup_linker_thunk(v[0]);observed_target=0;\n'
    +'if(fn)fn();if(observed_target!=v[1]||((fn==NULL)!=(v[1]==0))){fprintf(stderr,"address=%08X actual=%08X expected=%08X\\n",v[0],observed_target,v[1]);return 1;}passed++;}\n'
    +''.join(f'observed_target=0;sub_{int(r["address"],16):08X}();if(observed_target!={r["target"]}u)return 1;passed++;\n' for r in direct)
    +'fclose(f);printf("LINKER_THUNKS passed=%u failed=0\\n",passed);return 0;}\n')
sources=[root/'src/recovered_thunks.c',doubles,runner];include=root/'src/recomp/gen'
def run(command,timeout=180):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout,env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'))
    assert result.returncode==0,result.stdout[-3000:]+result.stderr[-3000:]
    return result.stdout+result.stderr
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(thunks C)\nadd_executable(thunks '+ ' '.join('"'+p.as_posix()+'"' for p in sources)+')\ntarget_include_directories(thunks PRIVATE "'+include.as_posix()+'")\ntarget_compile_options(thunks PRIVATE /utf-8)\n')
run([config['cmake'],'-S',build,'-B',build/'windows','-A','x64']);run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
outputs={'windows_x64':run([build/'windows/Release/thunks.exe',fixture])}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'thunks_arm64'
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-Wl,-z,max-page-size=16384','-I'+str(include),*sources,'-lm','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465'
for p in [binary,fixture]:run(prefix+['push',p,remote+'/'+p.name])
run(prefix+['shell','chmod','700',remote+'/'+binary.name]);outputs['android_arm64']=run(prefix+['shell',remote+'/'+binary.name,remote+'/'+fixture.name])
count=len(vectors)+len(direct)
for architecture,output in outputs.items():
    assert f'LINKER_THUNKS passed={count} failed=0' in output,output
    (root/'logs'/f'linker-thunks-{architecture}.log').write_text(output);print(architecture,output.strip(),flush=True)
(root/'analysis/linker-thunk-validation.json').write_text(json.dumps({'serial':args.serial,'passed_per_architecture':count,'failed':0,
    'restored_aliases':len(accepted),'direct_call_wrappers':len(direct),'original_table_entries':sum(r['entries'] for r in report['runs']),
    'scope':'Actual generated native lookup against original E9 rel32 destinations: every table entry, each of four unaligned addresses, existing-entry holes, absent target holes, invalid outer addresses, direct wrapper forwarding.',
    'limits':['Observable target doubles: original callee bodies not behaviorally validated by this test','No whole-game correctness claim'],
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [root/'src/recovered_thunks.c',Path(__file__)]},
    'fixture_sha256':hashlib.sha256(fixture.read_bytes()).hexdigest()},indent=2))
