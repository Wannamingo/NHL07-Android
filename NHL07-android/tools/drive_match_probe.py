"""Repeat the established Play Now test in an already-running ControllerRun.

Synthetic events only. This never relaunches the application or asserts gameplay.
"""
from pathlib import Path
import argparse,json,re,subprocess,time,struct,zlib
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);ap.add_argument('--observe-seconds',type=int,default=40);ap.add_argument('--from-menu',action='store_true');ap.add_argument('--settings-only',action='store_true');args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial]
external='/sdcard/Android/data/org.nhl07.port/files'
def adb(command):
    result=subprocess.run(prefix+command,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
    assert result.returncode==0,result.stdout+result.stderr
    return result.stdout
def log():return adb(['shell','cat',external+'/startup.log'])
def stopped(value):return '[UNIMPL]' in value or '[NHL07-GRAPHICS-MISSING]' in value or '[NHL07-SCENE-ABI]' in value or 'signal=' in value or '[ICALL] Failed' in value
def reference(name):
    data=(root/'analysis'/name).read_bytes();position=8;compressed=bytearray();width=height=0
    while position<len(data):
        n=struct.unpack_from('>I',data,position)[0];kind=data[position+4:position+8];payload=data[position+8:position+8+n];position+=n+12
        if kind==b'IHDR':width,height,depth,color,_,_,interlace=struct.unpack('>IIBBBBB',payload);assert (depth,color,interlace)==(8,2,0)
        elif kind==b'IDAT':compressed+=payload
    raw=zlib.decompress(compressed);stride=width*3+1;assert all(raw[y*stride]==0 for y in range(height))
    return width,height,b''.join(raw[y*stride+1:(y+1)*stride] for y in range(height))
def frame():
    path=root/'build/driver-frame.ppm';adb(['pull',external+'/latest-frame.ppm',str(path)])
    parts=path.read_bytes().split(b'\n',3)
    if len(parts)!=4:return None
    kind,size,maximum,rgb=parts;width,height=map(int,size.split())
    return (width,height,rgb) if kind==b'P6' and maximum==b'255' and len(rgb)==width*height*3 else None
def wait_screen(name,rect,seconds=60,mode='bright'):
    width,height,expected=reference(name);left,top,right,bottom=rect;deadline=time.monotonic()+seconds
    offsets=[(y*width+x)*3 for y in range(top,bottom) for x in range(left,right)]
    def mask(rgb):return [sum(rgb[i:i+3])<360 if mode=='dark' else min(rgb[i:i+3])>210 for i in offsets]
    expected_mask=mask(expected)
    while time.monotonic()<deadline:
        assert not stopped(log()),'Game stopped while waiting for '+name
        current=frame()
        if current and current[:2]==(width,height):
            actual_mask=mask(current[2]);union=sum(a or b for a,b in zip(actual_mask,expected_mask))
            overlap=sum(a and b for a,b in zip(actual_mask,expected_mask))/max(1,union)
            if overlap>.9:print(f'screen={name} text_mask_overlap={overlap:.3f}',flush=True);return
        time.sleep(.5)
    raise RuntimeError('Expected screen did not appear: '+name)
def send(key):
    value=log();assert not stopped(value),'Game stopped before '+key
    code=dict(start=108,a=96,right=22)[key];command=f'{time.time_ns()},{code}'
    adb(['shell',f"printf '{command},{500 if key=='start' else 100}' > {external}/controller-test-command-next.txt"])
    adb(['shell','mv',external+'/controller-test-command-next.txt',external+'/controller-test-command.txt'])
    print('synthetic key='+key,flush=True);time.sleep(4)
assert 'synthetic=true' in adb(['shell','cat',external+'/controller-test.log']),'ControllerRun must already be active'
if not args.from_menu:
    deadline=time.monotonic()+45
    while time.monotonic()<deadline:
        value=log();assert not stopped(value),'Game stopped during startup'
        if '[NHL07-MOVIE] CPU texture frame published=20' in value:break
        time.sleep(1)
    else:raise RuntimeError('Intro was not ready within the test startup window')
    for attempt in range(6):
        send('start')
        try:wait_screen('observed-menu.png',(71,174,158,190),seconds=8,mode='dark');break
        except RuntimeError:
            if attempt==5:raise
else:wait_screen('observed-menu.png',(71,174,158,190),mode='dark')
send('a');wait_screen('observed-team-selection.png',(70,32,290,60))
send('right');send('a');wait_screen('observed-home-jersey.png',(345,84,568,125))
send('a');send('start');wait_screen('observed-quick-settings.png',(70,32,320,60))
if args.settings_only:
    subprocess.run([__import__('sys').executable,str(root/'tools/live_snapshot.py'),'--serial',args.serial],check=True)
    print('Stopped at actual Quick Settings; match not started',flush=True);raise SystemExit(0)
send('a')
deadline=time.monotonic()+args.observe_seconds
while time.monotonic()<deadline:
    value=log()
    if stopped(value) or not adb(['shell','pidof','org.nhl07.port']).strip():break
    time.sleep(1)
(root/'logs/live-startup.log').write_text(value,encoding='utf-8')
subprocess.run([__import__('sys').executable,str(root/'tools/live_snapshot.py'),'--serial',args.serial],check=True)
assert 'preload\\gscene.viv' in value,'Menu route did not reach scene loading; inspect the captured frame'
print('MATCH_PROBE finished; inspect actual frame and stop marker; gameplay unverified',flush=True)
