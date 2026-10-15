"""Build isolated actual-GLES stream upload checks; never connect to a device."""
from pathlib import Path
import hashlib,json,os,subprocess
root=Path(__file__).resolve().parents[1]
cfg=json.loads((root/'local-toolchains.json').read_text())
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
build=root/'build/stream-upload-validation';build.mkdir(parents=True,exist_ok=True)
binary=build/'stream_upload_arm64'
sources=[root/'src/stream_upload.cpp',root/'src/stream_upload.h',root/'tests/stream_upload_gpu_contract.cpp',Path(__file__)]
command=[llvm/'bin/clang++.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c++17','-O2','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),sources[0],sources[2],'-static-libstdc++','-lEGL','-lGLESv3','-lm','-o',binary]
result=subprocess.run(list(map(str,command)),env=dict(os.environ,TMP=str(build),TEMP=str(build)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
assert result.returncode==0,result.stdout+result.stderr
report={'binary':str(binary),'binary_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),'built_only':True,'device_used':False,'correctness_executed':False,'game_changed':False,'tested_sources':{str(p.relative_to(root)).replace('\\','/'):hashlib.sha256(p.read_bytes()).hexdigest() for p in sources}}
(build/'build.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps(report,indent=2))
