"""Validate signed-short attribute conversion on the actual RG477M GPU."""
from pathlib import Path
import argparse,hashlib,json,re,subprocess
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/vertex-format-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'vertex_format_arm64'
def run(command):
    r=subprocess.run(list(map(str,command)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
    assert r.returncode==0,r.stdout[-4000:]+r.stderr[-4000:]
    return r.stdout+r.stderr
test=root/'tests/vertex_format_gpu_contract.cpp';header=root/'src/vertex_format.h'
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),test,'-static-libstdc++','-lEGL','-lGLESv3','-lm','-o',binary])
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote]);output=run(prefix+['shell',remote]);(root/'logs/vertex-format-validation.log').write_text(output,encoding='utf-8');print(output)
match=re.search(r'VERTEX_FORMAT passed=(\d+) failed=0',output);assert match
(root/'analysis/vertex-format-validation.json').write_text(json.dumps(dict(serial=args.serial,passed=int(match[1]),failed=0,
    scope=['Actual Mali transform feedback: all 65536 signed short words, S1 normalized and S32K integer-valued float conversion, 1-4 components, padded strides and missing component defaults',
        'Observed 0x215 layout; old float and byte layouts; invalid-format rejection'],
    reference='https://raw.githubusercontent.com/xemu-project/xemu/master/hw/xbox/nv2a/pgraph/vertex.c',
    limitations=['Attribute fetch conversion only; complete model rendering and console equivalence remain unverified'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in [test,header,Path(__file__)]}),indent=2))
