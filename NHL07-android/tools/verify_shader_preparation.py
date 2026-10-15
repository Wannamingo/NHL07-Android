"""CPU differential contract for exact, bounded shader source preparation; no ADB."""
from pathlib import Path
import hashlib,json,os,re,subprocess

root=Path(__file__).resolve().parents[1]
config=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/shader-preparation-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
fixture=root/'checkpoints/20261015-inline-capture/draw-failure-state.bin'
test=root/'tests/shader_preparation_contract.cpp'
shader_sources=[root/'src/shaders/shader_vertex.c',root/'src/shaders/shader_pixel.c']
headers=[root/'src/shader_preparation_cache.h',root/'src/shader_preparation_model.h',
         root/'src/shaders/d3d8_vsh.h',root/'src/shaders/d3d8_combiners.h',root/'src/shaders/native_shader_types.h']
includes=[root/'src',root/'src/shaders',root/'vendor/xboxrecomp/src',root/'vendor/xboxrecomp/include',root/'vendor/xboxrecomp/src/d3d',root/'vendor/xboxrecomp/src/platform']
env=dict(os.environ,TEMP=str(build),TMP=str(build),MSBUILDDISABLENODEREUSE='1')
def run(command):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120,env=env)
    assert result.returncode==0,result.stdout+result.stderr
    return result.stdout+result.stderr
source_lines='\n'.join('  "'+p.as_posix()+'"' for p in [test,*shader_sources])
include_lines='\n'.join('  "'+p.as_posix()+'"' for p in includes)
(build/'CMakeLists.txt').write_text('''cmake_minimum_required(VERSION 3.20)
project(nhl07_shader_preparation_validation C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
add_executable(shader_preparation_host\n'''+source_lines+''')
target_include_directories(shader_preparation_host PRIVATE\n'''+include_lines+''')
target_compile_options(shader_preparation_host PRIVATE /utf-8 /O2 /W4)
''',encoding='utf-8')
run([config['cmake'],'-S',build,'-B',build/'windows','-G','Visual Studio 17 2022','-A','x64'])
build_output=run([config['cmake'],'--build',build/'windows','--config','Release','--parallel','2'])
host=build/'windows/Release/shader_preparation_host.exe'
output=run([host,fixture]);print(output,end='')
match=re.search(r'SHADER_PREPARATION passed=(\d+) failed=0 randomized_states=2000 actual_vertex_bytes=(\d+) actual_pixel_bytes=(\d+)',output);assert match
flags=['--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-O2','-fwrapv','-ffp-contract=off','-fno-strict-aliasing']+['-I'+str(p) for p in includes]
objects=[]
for source in shader_sources:
    obj=build/(source.stem+'.o');run([llvm/'bin/clang.exe',*flags,'-c',source,'-o',obj]);objects.append(obj)
arm=build/'shader_preparation_arm64'
run([llvm/'bin/clang++.exe',*flags,'-std=c++17','-Wall','-Wextra','-Werror','-Wl,-z,max-page-size=16384',test,*objects,'-static-libstdc++','-lm','-o',arm])
record=dict(passed=int(match[1]),failed=0,randomized_states=2000,host_executed=True,arm64_compiled=True,arm64_executed=False,
    actual_vertex_bytes=int(match[2]),actual_pixel_bytes=int(match[3]),
    scope=['Production pure VP/PS decoders and actual preparation helper compared with independent original register-state/key construction',
           'Complete parsed VP/normalized PS bytes and original binary pipeline key match, including padding',
           'Captured real shader source and all16BGRA mask bits generate identical PS/VS HLSL; color uniforms do not enter source key',
           'Every supplied VP word and every36PS register included; pointer relocation/address reuse, bounded eviction, clear, 64bit identities and invalid ranges',
           '2000 randomized exact PS/key comparisons and actual VP parse comparisons'],
    limitations=['CPU source preparation only; no GPU pixels or game FPS measured by this tool',
                 'Existing GL program cache and context ownership unchanged; source cache stores no GL objects'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [test,*shader_sources,*headers,root/'src/nv2a_draw.cpp',Path(__file__)]},
    fixture_sha256=hashlib.sha256(fixture.read_bytes()).hexdigest(),
    binaries={p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [host,arm]})
(root/'analysis/shader-preparation-validation.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
(root/'logs/shader-preparation-host-build.log').write_text(build_output,encoding='utf-8')
(root/'logs/shader-preparation-host.log').write_text(output,encoding='utf-8')
