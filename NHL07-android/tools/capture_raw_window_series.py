"""Short functional screenshot sequence using raw RGBA screencap, never FPS QA.

Uses only the foreground NHL07 window and the explicitly selected device.
Offline inspection: --inspect analysis/raw-screen.bin --width 2160 --height 1584.
"""
from pathlib import Path
import argparse,datetime,json,re,struct,subprocess,time
from PIL import Image
from installed_identity import require_installed_apk

ROOT=Path(__file__).resolve().parents[1]

def decode_raw(data,width,height):
    if not 1<=width<=8192 or not 1<=height<=8192:raise ValueError('Expected dimensions outside supported range')
    pair=struct.pack('<II',width,height);offset=data.find(pair)
    if offset<0:raise ValueError('Expected width/height pair missing from raw screencap')
    if len(data)<offset+12:raise ValueError('Truncated raw screenshot header')
    fmt=struct.unpack_from('<I',data,offset+8)[0]
    if fmt!=1:raise ValueError('Expected RGBA8888 raw screenshot format 1, received '+str(fmt))
    payload_bytes=width*height*4
    header=next((size for size in (16,12) if len(data)-offset-size==payload_bytes),None)
    if header is None:raise ValueError('Raw screenshot payload length does not match expected RGBA pixels (12/16-byte header)')
    image=Image.frombytes('RGBA',(width,height),data[offset+header:])
    return image,{'width':width,'height':height,'format':fmt,'stdout_prefix_bytes':offset,'header_bytes':header,
        'dataspace':struct.unpack_from('<I',data,offset+12)[0] if header==16 else None,'payload_bytes':payload_bytes}

def self_test():
    pixels=bytes([255,0,0,255,0,255,0,255,0,0,255,255,30,80,190,255])
    prefix=b'Samsung warning before raw screenshot\r\n'
    for header in [struct.pack('<III',2,2,1),struct.pack('<IIII',2,2,1,142671872)]:
        image,info=decode_raw(prefix+header+pixels,2,2)
        assert image.tobytes()==pixels and info['header_bytes']==len(header) and info['stdout_prefix_bytes']==len(prefix)
    for invalid in [b'not raw',struct.pack('<II',2,2),struct.pack('<III',2,2,2)+pixels,
                    struct.pack('<III',2,2,1)+pixels[:-1],struct.pack('<IIII',2,2,1,0)+pixels+b'x']:
        try:decode_raw(invalid,2,2)
        except ValueError:pass
        else:raise AssertionError('Invalid raw capture accepted')
    print('RAW_CAPTURE offline 12/16-byte headers, prefix, pixel order and rejection checks passed')

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial');ap.add_argument('--width',type=int);ap.add_argument('--height',type=int)
    ap.add_argument('--label',default='raw-window');ap.add_argument('--seconds',type=float,default=60);ap.add_argument('--interval',type=float,default=.3)
    ap.add_argument('--inspect',type=Path);ap.add_argument('--self-test',action='store_true');args=ap.parse_args()
    if args.self_test:self_test();return
    if args.width is None or args.height is None:ap.error('--width and --height required')
    if args.inspect:
        _,info=decode_raw(args.inspect.read_bytes(),args.width,args.height);print(json.dumps(info,indent=2));return
    if not args.serial:ap.error('--serial required for device capture')
    duration=max(.3,min(60,args.seconds));interval=max(.05,min(1,args.interval))
    cfg=json.loads((ROOT/'local-toolchains.json').read_text());prefix=[cfg['adb'],'-P',str(cfg['adb_port']),'-s',args.serial]
    def adb(*command):
        result=subprocess.run(prefix+list(command),capture_output=True,timeout=15)
        assert result.returncode==0,result.stderr.decode('utf-8','replace')
        return result.stdout
    def foreground():
        # Read only the focused window identity, never another app's content.
        text=adb('shell','dumpsys','window').decode('utf-8','replace')
        focused=[line for line in text.splitlines() if 'mCurrentFocus=' in line and not line.strip().endswith('=null')]
        if not focused:focused=[line for line in text.splitlines() if 'mFocusedApp=' in line and not line.strip().endswith('=null')]
        return bool(focused) and all('org.nhl07.port/' in line for line in focused)
    sha=require_installed_apk(ROOT,prefix);pid=adb('shell','pidof','org.nhl07.port').decode().strip();assert pid,'No live NHL07 process'
    assert foreground(),'NHL07 is not the focused window; no screenshot taken'
    metadata=json.loads((ROOT/'analysis/apk.json').read_text());safe=lambda value:re.sub(r'[^a-zA-Z0-9_.-]','_',str(value))
    stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%d-%H%M%SZ')
    folder=ROOT/'analysis'/(safe(args.label)+'-'+safe(metadata.get('version','unknown'))+'-'+safe(args.serial)+'-'+stamp);folder.mkdir()
    record={'serial':args.serial,'version':metadata.get('version'),'apk_sha256':sha,'pid':pid,'functional_capture_only':True,
        'fps_benchmark':False,'requested_interval_seconds':interval,'seconds_limit':duration,'normalization':'full window resized to 640x480',
        'frames':[],'limitations':['Screen capture affects runtime; sample cadence is not game FPS','Screenshots require visual inspection']}
    def save():(folder/'record.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
    print(json.dumps({'folder':str(folder),'pid':pid,'apk_sha256':sha}),flush=True)
    start=time.monotonic();deadline=start+duration;next_sample=start
    try:
        while time.monotonic()<deadline:
            remaining=next_sample-time.monotonic()
            if remaining>0:time.sleep(min(remaining,1));continue
            assert adb('shell','pidof','org.nhl07.port').decode().strip()==pid,'NHL07 process changed'
            assert foreground(),'NHL07 lost focus; no further screenshots taken'
            began=time.monotonic();raw=adb('exec-out','screencap');image,info=decode_raw(raw,args.width,args.height)
            name=f'frame-{len(record["frames"]):04d}.png'
            image.resize((640,480),Image.Resampling.BILINEAR).convert('RGB').save(folder/name,compress_level=1)
            row={'image':name,'elapsed_seconds':round(began-start,3),'capture_seconds':round(time.monotonic()-began,3),**info}
            record['frames'].append(row);save();print(json.dumps(row),flush=True);next_sample+=interval
        record['stop_reason']='Capture time limit reached'
    except (Exception,KeyboardInterrupt) as error:
        record['stop_reason']=type(error).__name__+': '+str(error);print(record['stop_reason'],flush=True)
    finally:
        record['observed_seconds']=round(time.monotonic()-start,3);save()
    print(str(folder),flush=True)

if __name__=='__main__':main()
