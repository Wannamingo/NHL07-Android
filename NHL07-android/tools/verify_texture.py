"""Check all RGB565 words plus padded rows, Morton layout and rejected bounds."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1];config=json.loads((root/'local-toolchains.json').read_text())
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
build=root/'build/texture-validation';build.mkdir(parents=True,exist_ok=True)
sources=[root/'tests/texture_contract.cpp',root/'src/shaders/texture_rgba.cpp',root/'src/shaders/d3d_texture_model.c']
(build/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(texture C CXX)\nset(CMAKE_CXX_STANDARD 17)\nadd_executable(texture '+ ' '.join('"'+p.as_posix()+'"' for p in sources)+')\ntarget_include_directories(texture PRIVATE "'+(root/'src').as_posix()+'")\ntarget_compile_options(texture PRIVATE /utf-8)\n')
with (root/'logs/texture-validation-build.log').open('w') as log:
    for cmd in [[config['cmake'],'-S',build,'-B',build/'native','-A','x64'],[config['cmake'],'--build',build/'native','--config','Release','--parallel','2']]:
        assert subprocess.run(list(map(str,cmd)),env=dict(os.environ,MSBUILDDISABLENODEREUSE='1'),stdout=log,stderr=subprocess.STDOUT).returncode==0
result=subprocess.run([str(build/'native/Release/texture.exe')],capture_output=True,text=True);assert result.returncode==0,result.stdout+result.stderr;print(result.stdout,flush=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'texture_arm64'
cmd=[llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-std=c++17','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),*sources,'-o',binary,'-static-libstdc++']
result=subprocess.run(list(map(str,cmd)),capture_output=True,text=True);assert result.returncode==0,result.stderr[-3000:]
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
def adb(cmd):return subprocess.run(prefix+cmd,check=True,capture_output=True,text=True,timeout=60).stdout
adb(['push',str(binary),remote]);adb(['shell','chmod','700',remote]);output=adb(['shell',remote]);print(output);match=re.search(r'TEXTURE_CONTRACT passed=(\d+) failed=0',output);assert match
(root/'analysis/texture-validation.json').write_text(json.dumps({'serial':args.serial,'passed_per_architecture':int(match[1]),'failed':0,
    'scope':['All 65536 RGB565 words, 5/6-bit channel expansion and opaque alpha','Linear padded rows and insufficient pitch/size rejection','Swizzled 8x8 texture against explicit Morton-index fixture','P8: all 256 ARGB palette indices and 16x16 Morton fixture; missing/short palettes rejected','YUY2/UYVY: 131072 pixels against independent BT.601 floating reference, maximum channel error 1; padded rows, odd width/nonlinear/short pitch/short size rejection'],
    'sources':{p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in sources},
    'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),'console_capture_equivalence':False},indent=2))
