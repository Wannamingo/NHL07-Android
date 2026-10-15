"""Validate actual GLES cache contents, updates, mips and eviction on RG477M."""
from pathlib import Path
import argparse,hashlib,json,os,re,subprocess
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial');ap.add_argument('--build-only',action='store_true');args=ap.parse_args()
if not args.build_only and not args.serial:ap.error('--serial is required unless --build-only is used')
config=json.loads((root/'local-toolchains.json').read_text());build=root/'build/texture-cache-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(config['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64';binary=build/'texture_cache_arm64'
env=dict(os.environ,TMP=str(build),TEMP=str(build))
def run(command):
    r=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
    assert r.returncode==0,r.stdout[-5000:]+r.stderr[-5000:]
    return r.stdout+r.stderr
sources=[root/'tests/texture_cache_contract.cpp',root/'src/texture_cache.cpp',root/'src/shaders/texture_rgba.cpp',root/'src/shaders/d3d_texture_model.c',root/'src/render_profile.cpp']
run([llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),*sources,'-static-libstdc++','-lEGL','-lGLESv3','-lm','-o',binary])
if args.build_only:
    tested=sources+[root/'src/texture_cache.h',Path(__file__)]
    (root/'analysis/texture-cache-contract-build.json').write_text(json.dumps(dict(arm64_compiled=True,arm64_executed=False,gpu_tested=False,
        binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
        tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in tested}),indent=2))
    print('ARM64 texture cache GPU contract compiled; no device execution requested');raise SystemExit(0)
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-438eaeada465/'+binary.name
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote]);output=run(prefix+['shell',remote]);print(output);(root/'logs/texture-cache-contract.log').write_text(output,encoding='utf-8')
match=re.search(r'TEXTURE_CACHE passed=(\d+) failed=0',output);assert match
renderer=re.search(r'TEXTURE_CACHE renderer=(.*)',output);assert renderer
tested=sources+[root/'src/texture_cache.h',Path(__file__)]
(root/'analysis/texture-cache-validation.json').write_text(json.dumps(dict(serial=args.serial,passed=int(match[1]),failed=0,
    renderer=renderer[1].strip(),binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
    log=dict(path=str(root/'logs/texture-cache-contract.log'),sha256=hashlib.sha256((root/'logs/texture-cache-contract.log').read_bytes()).hexdigest()),
    scope=['Actual GPU pixel readback: cache reuse, changed guest pixels and palette-only changes, separate simultaneous palettes',
        'Every mip and last-mip-only mutation, truncated update preserves the prior image',
        'Implicit filtered sampling on actual GPU: NEAREST/LINEAR use base zero despite LOD 3; all four mip filters revalidate and observe changed last mip',
        'Bound stage objects protected during LRU eviction; unused old objects evicted; explicit cleanup'],
    limitations=['Native game performance and all texture formats require integration observation; the unchanged decoder has separate format checks'],
    tested_sources={p.relative_to(root).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in tested}),indent=2))
