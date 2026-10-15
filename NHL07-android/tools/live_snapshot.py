"""Inspect only this game's frame/log, optionally dispatch a test command.

Requires the separately installed ControllerRun instrumentation for synthetic
keys. Never claims physical button validation or relaunches the application.
"""
from pathlib import Path
import argparse,json,subprocess,time
from render_capture import png
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True)
input_group=ap.add_mutually_exclusive_group()
input_group.add_argument('--key',choices=['start','a','b','x','y','l1','r1','l2','r2','up','down','left','right'])
input_group.add_argument('--sticks',nargs=4,type=float,metavar=('X','Y','Z','RZ'))
ap.add_argument('--hold-ms',type=int,default=100)
args=ap.parse_args();config=json.loads((root/'local-toolchains.json').read_text())
prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial]
external='/sdcard/Android/data/org.nhl07.port/files'
def adb(command,check=True):
    result=subprocess.run(prefix+command,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
    if check:assert result.returncode==0,result.stdout+result.stderr
    return result.stdout
def require_foreground():
    state=adb(['shell','dumpsys','window'])
    focused=[line for line in state.splitlines() if ('mCurrentFocus=' in line or 'mFocusedApp=' in line) and '=null' not in line]
    assert any('org.nhl07.port/.MainActivity' in line or 'org.nhl07.port/org.nhl07.port.MainActivity' in line for line in focused),'Game is not the foreground window'
if args.key or args.sticks is not None:
    assert adb(['shell','pidof','org.nhl07.port'],check=False).strip(),'No live game process; do not dispatch into a finished test'
    require_foreground()
    assert 100<=args.hold_ms<=(2000 if args.key else 20000)
    if args.key:
        code=dict(start=108,a=96,b=97,x=99,y=100,l1=102,r1=103,l2=104,r2=105,up=19,down=20,left=21,right=22)[args.key]
        command=f'{time.time_ns()},{code},{args.hold_ms}'
    else:
        import math
        assert all(math.isfinite(n) and -1<=n<=1 for n in args.sticks)
        command=f'{time.time_ns()},stick,'+','.join(map(str,args.sticks))+f',{args.hold_ms}'
    adb(['shell',f"printf '{command}' > {external}/controller-test-command-next.txt"])
    adb(['shell','mv',external+'/controller-test-command-next.txt',external+'/controller-test-command.txt'])
    time.sleep(args.hold_ms/1000+3)
    acknowledged=adb(['shell','cat',external+'/controller-test.log'])
    assert 'command='+command in acknowledged,'Instrumentation did not acknowledge the synthetic input'
adb(['pull',external+'/startup.log',str(root/'logs/live-startup.log')])
log=(root/'logs/live-startup.log').read_text(encoding='utf-8')
normal='timeout=0;' in log
if normal:
    # Normal launches have no GPU diagnostic captures; never show a stale PPM
    # left by a previous test as if it came from the current process.
    require_foreground()
    picture=root/'analysis/live-window.png';adb(['shell','screencap','-p',external+'/live-window.png']);adb(['pull',external+'/live-window.png',str(picture)])
else:
    p=root/'analysis/live-frame.ppm';adb(['pull',external+'/latest-frame.ppm',str(p)])
    for attempt in range(5):
        try:
            magic,size,maximum,rgb=p.read_bytes().split(b'\n',3);w,h=map(int,size.split())
            if magic==b'P6' and maximum==b'255' and len(rgb)==w*h*3:break
        except ValueError:pass
        time.sleep(.2);adb(['pull',external+'/latest-frame.ppm',str(p)])
    else:raise RuntimeError('Renderer capture remained incomplete after five reads')
    picture=p.with_suffix('.png');png(picture,w,h,rgb)
stops=[line for line in log.splitlines() if '[UNIMPL]' in line or '[ICALL] Failed' in line or line.startswith('signal=')]
print(json.dumps({'image':str(picture),'normal_launch':normal,'process_alive':bool(adb(['shell','pidof','org.nhl07.port'],check=False).strip()),'stop':stops,'log_tail':log.splitlines()[-4:]},indent=2))
