"""Compile the current presentation/pause module contract; optionally execute on Android."""
from pathlib import Path
import argparse,hashlib,json,os,subprocess

root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial',required=True);args=ap.parse_args()
cfg=json.loads((root/'local-toolchains.json').read_text())
build=root/'build/fps-pause-validation';build.mkdir(parents=True,exist_ok=True)
llvm=Path(cfg['ndk'])/'toolchains/llvm/prebuilt/windows-x86_64'
env=dict(os.environ,TMP=str(build),TEMP=str(build))
sources=[root/'tests/native_fps_pause.c',*[root/'src'/name for name in ['native_fps.c','native_pause.c','native_frame_pacer.c']]]
binary=build/'fps_pause_arm64'
def run(command):
    p=subprocess.run(list(map(str,command)),env=env,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=90)
    assert p.returncode==0,p.stdout+p.stderr
    return p.stdout+p.stderr
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
run([llvm/'bin/clang.exe','--target=aarch64-linux-android29','--sysroot='+str(llvm/'sysroot'),'-std=c11','-O2',
     '-D_POSIX_C_SOURCE=200809L','-Wl,-z,max-page-size=16384','-I'+str(root/'src'),*sources,'-lm','-o',binary])
prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial];remote='/data/local/tmp/nhl07-fps-pause-current'
run(prefix+['push',binary,remote]);run(prefix+['shell','chmod','700',remote])
assert run(prefix+['shell','sha256sum',remote]).split()[0]==sha(binary)
output=run(prefix+['shell',remote]);assert 'FRAME_PACER passed:' in output and 'FPS_PAUSE passed:' in output
log=root/'logs/fps-pause-current-mali.log';log.write_text(output,encoding='utf-8')
apk=json.loads((root/'analysis/apk.json').read_text())
record=dict(artifact_context_apk_sha256=apk['sha256'],serial=args.serial,standalone_arm64_executed=True,failed=0,
    binary_sha256=sha(binary),log_sha256=sha(log),tested_sources={p.relative_to(root).as_posix():sha(p) for p in sources+[Path(__file__)]},
    scope=['1000 fast completed presentation intervals>=1/60second;100slowframes add no wait;no catch-up after stall',
           '30/60/120Hz counter;stale/reset;pause blocks;guest clock frozen;resume excludes background duration'],
    limitations=['Standalone module contract, not a game FPS measurement; weak graphics pause checkpoint has no implementation in this isolated binary',
                 'Actual APK surface recovery is tested separately by window-resume reports'])
(root/'analysis/fps-pause-current-mali.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
print(output,end='')
