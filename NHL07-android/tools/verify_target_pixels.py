"""Validate guest target pixel storage against independent layout fixtures."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/target-pixels-validation';build.mkdir(parents=True,exist_ok=True)
sources=[root/'tests/render_target_pixels_contract.cpp',root/'src/render_target_pixels.cpp',root/'src/shaders/texture_rgba.cpp',root/'src/shaders/d3d_texture_model.c']
def run(command):
    r=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120,env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'))
    assert r.returncode==0,r.stdout[-3000:]+r.stderr[-3000:]
    return r.stdout+r.stderr
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(target_pixels C CXX)\nset(CMAKE_CXX_STANDARD 17)\nadd_executable(target_pixels '+ ' '.join('"'+p.as_posix()+'"' for p in sources)+')\ntarget_include_directories(target_pixels PRIVATE "'+(root/'src').as_posix()+'")\ntarget_compile_options(target_pixels PRIVATE /utf-8)\n')
run([config['cmake'],'-S',build,'-B',build/'windows','-A','x64']);run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
outputs={'windows_x64':run([build/'windows/Release/target_pixels.exe'])}
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'target_pixels_arm64'
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),*sources,'-static-libstdc++','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote]);outputs['android_arm64']=run(prefix+['shell',remote])
results={}
for arch,output in outputs.items():
    m=re.search(r'TARGET_PIXELS passed=(\d+) failed=0',output);assert m,output;results[arch]={'passed':int(m[1]),'failed':0}
    (root/'logs'/('target-pixels-'+arch+'.log')).write_text(output);print(arch,m[0])
(root/'analysis/target-pixels-validation.json').write_text(json.dumps({'serial':args.serial,'results':results,
    'scope':['All RGB565 words in both row orientations','Independent rectangular Morton/BGRA fixtures for A8R8G8B8/X8R8G8B8, swizzled and padded linear layouts','Existing texture decoder reads the written guest bytes','Untouched row padding and outer guards; invalid formats, depth, dimensions, sizes and strides rejected'],
    'limitations':['CPU packing only; native framebuffer/depth alias requires GPU validation'],
    'tested_sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources+[root/'src/render_target_pixels.h']}},indent=2))
