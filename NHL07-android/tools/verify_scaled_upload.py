"""Check exact full-resolution native pixels and logical-upload timing on RG477M."""
from pathlib import Path
import argparse,hashlib,json,re,subprocess
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/scaled-upload-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'scaled_upload_arm64'
sources=[root/'tests/scaled_upload_contract.cpp',root/'src/scaled_upload.cpp']
def run(command):
    result=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=180)
    assert result.returncode==0,result.stdout[-8000:]+result.stderr[-8000:]
    return result.stdout+result.stderr
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),*sources,'-static-libstdc++','-lEGL','-lGLESv3','-lm','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote]);output=run(prefix+['shell',remote])
(root/'logs/scaled-upload-validation.log').write_text(output,encoding='utf-8');match=re.search(r'SCALED_UPLOAD passed=(\d+) failed=0',output);assert match,output[-8000:]
renderer=next(line for line in output.splitlines() if line.startswith('SCALED_UPLOAD renderer='));print(renderer);print(match[0])
benchmarks=[]
for line in output.splitlines():
    if line.startswith('SCALED_UPLOAD_BENCH '):
        values=dict(re.findall(r'(\w+)=([^ ]+)',line));record={key:(value if key=='format' else float(value) if key.endswith('_ms') else int(value)) for key,value in values.items()}
        benchmarks.append(record);print(line)
assert len(benchmarks)==9
tested=sources+[root/'src/scaled_upload.h',Path(__file__)]
(root/'analysis/scaled-upload-validation.json').write_text(json.dumps(dict(serial=args.serial,passed=int(match[1]),failed=0,renderer=renderer,
    scope=['Every native GPU pixel compared byte-for-byte against CPU texel replication for RGB565/RGB8/RGBA8 and scales 1/2/3',
        'Asymmetric channels and alpha, narrow 1xN/Nx1 and changing dimensions and formats',
        'Scissor, viewport, color masks, blending/dithering, active texture, renderbuffer, unpack fields/PBO and multiple draw-buffer selections',
        'Unrelated target attachment, prior framebuffer, other texture-unit binding and logical source storage retained',
        'Three rounds per format at 256x256/3x; timed CPU replication+native upload versus logical upload+GPU upscale, each timing drained with glFinish'],
    limitations=['This isolates the upload helper; create_offscreen preparation, depth aliases and live game integration require separate checks',
        'Benchmark excludes guest decode/flip/format packing and does not establish gameplay FPS; fixed baseline-first order can include thermal/frequency drift'],
    benchmarks=benchmarks,tested_sources={path.relative_to(root).as_posix():hashlib.sha256(path.read_bytes()).hexdigest() for path in tested}),indent=2),encoding='utf-8')
