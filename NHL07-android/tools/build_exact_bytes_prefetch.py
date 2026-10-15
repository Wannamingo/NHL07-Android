"""Build an isolated ARM64 comparison benchmark; never connect or change the game."""
from pathlib import Path
import hashlib,json,os,subprocess
root=Path(__file__).resolve().parents[1]
cfg=json.loads((root/'local-toolchains.json').read_text())
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
build=root/'build/exact-bytes-prefetch';build.mkdir(parents=True,exist_ok=True)
binary=build/'exact_bytes_prefetch_arm64'
command=[llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),root/'tests/exact_bytes_prefetch_contract.cpp','-static-libstdc++','-lm','-o',binary]
env=dict(os.environ,TMP=str(build),TEMP=str(build))
result=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
assert result.returncode==0,result.stdout+result.stderr
sources=[root/'src/exact_bytes_prefetch.h',root/'src/exact_bytes.h',root/'tests/exact_bytes_prefetch_contract.cpp',Path(__file__)]
report={'binary':str(binary),'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),'built_only':True,'correctness_executed':False,'device_used':False,'game_changed':False,'tested_sources':{str(p.relative_to(root)).replace('\\','/'):hashlib.sha256(p.read_bytes()).hexdigest() for p in sources},'usage':['--contracts-only','--bench-only --quick','--bench-only'],'limitations':['Synthetic texture-size distribution, not a captured frame workload.','No FPS improvement or integration claimed.']}
(build/'build.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps(report,indent=2))
