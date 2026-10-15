"""Bounded normal-window observation; advance only twice-confirmed intermissions.

Requires the separate ControllerRun instrumentation (capture=false). Does not
enable GPU captures, restart the game, or claim physical-button/full-match QA.
Run with the bundled Python/Pillow runtime. --self-test performs no ADB calls.
"""
from pathlib import Path
import argparse,datetime,io,json,re,subprocess,time
from PIL import Image,ImageFilter
from installed_identity import require_installed_apk

ROOT=Path(__file__).resolve().parents[1]
EXTERNAL='/sdcard/Android/data/org.nhl07.port/files'
REFERENCES=['russian-first-intermission.png','russian-second-intermission.png']
ROI=(310,55,470,74)
PNG_SIGNATURE=b'\x89PNG\r\n\x1a\n'

def decode_screencap(data):
    # Some Samsung screencap builds print a warning before the binary image.
    # Remove only that prefix; CRLF normalization would corrupt PNG contents.
    offset=data.find(PNG_SIGNATURE)
    if offset<0:raise ValueError('screencap output has no complete PNG signature')
    raw=data[offset:];image=Image.open(io.BytesIO(raw));image.load()
    return raw,image,offset

def normalize(image,aspect):
    image=image.convert('RGB');w,h=image.size
    if aspect=='full':box=(0,0,w,h)
    else:
        rw,rh=map(int,aspect.split(':'));cw=w;ch=w*rh//rw
        if ch>h:ch=h;cw=h*rw//rh
        # Native presentation centers the fitted viewport; PNG origin is top.
        left=(w-cw)//2;top=(h-ch+1)//2
        box=(left,top,left+cw,top+ch)
    return image.crop(box).resize((640,480),Image.Resampling.BILINEAR),box

def text_mask(image):
    # Presentation resampling changes thin white glyph cores drastically. A
    # small equal blur on both images preserves the complete word silhouette.
    data=image.convert('RGB').crop(ROI).filter(ImageFilter.GaussianBlur(1.2)).tobytes()
    return [min(data[i:i+3])>100 for i in range(0,len(data),3)]

def overlap(actual,expected):
    return sum(a and b for a,b in zip(actual,expected))/max(1,sum(a or b for a,b in zip(actual,expected)))

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--serial');ap.add_argument('--seconds',type=int,default=900)
    ap.add_argument('--aspect',choices=['4:3','16:9','full'],default='4:3');ap.add_argument('--threshold',type=float,default=.92)
    ap.add_argument('--self-test',action='store_true');args=ap.parse_args()
    expected=[text_mask(Image.open(ROOT/'analysis'/name)) for name in REFERENCES]
    if args.self_test:
        sample=io.BytesIO();Image.new('RGB',(3,2),(30,80,190)).save(sample,format='PNG');valid=sample.getvalue()
        prefix=b'WARNING: Samsung screencap message\r\n'
        cleaned,decoded,removed=decode_screencap(prefix+valid)
        assert cleaned==valid and removed==len(prefix) and decoded.size==(3,2)
        assert cleaned.startswith(PNG_SIGNATURE),'PNG CRLF signature must remain byte exact'
        for invalid in [b'not a PNG',prefix+PNG_SIGNATURE[:-1],prefix+PNG_SIGNATURE]:
            try:decode_screencap(invalid)
            except (ValueError,OSError):pass
            else:raise AssertionError('Truncated/non-PNG capture unexpectedly accepted')
        for name,mask in zip(REFERENCES,expected):
            reference=Image.open(ROOT/'analysis'/name).convert('RGB')
            assert overlap(text_mask(reference),mask)==1
            letterbox=Image.new('RGB',(2400,1080));letterbox.paste(reference.resize((1440,1080),Image.Resampling.BILINEAR),(480,0))
            normalized,box=normalize(letterbox,'4:3');score=overlap(text_mask(normalized),mask)
            assert box==(480,0,1920,1080) and score>.92,(name,box,score)
            phone=reference.resize((2160,1584),Image.Resampling.BILINEAR)
            phone_normalized,phone_box=normalize(phone,'full');phone_score=overlap(text_mask(phone_normalized),mask)
            assert phone_box==(0,0,2160,1584) and phone_score>.92,(name,phone_box,phone_score)
            assert overlap(text_mask(Image.new('RGB',(640,480))),mask)==0
            print(json.dumps({'reference':name,'letterbox_roundtrip_iou':score,'trifold_full_roundtrip_iou':phone_score}),flush=True)
        print('Offline PNG prefix/truncation and mask/viewport checks passed; no ADB used',flush=True);return
    if not args.serial:ap.error('--serial required unless --self-test')
    if not .92<=args.threshold<=1:ap.error('--threshold must be between .92 and 1')
    duration=max(40,min(900,args.seconds))
    config=json.loads((ROOT/'local-toolchains.json').read_text());prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial]
    def adb(command,check=True,binary=False):
        result=subprocess.run(prefix+command,capture_output=True,timeout=30)
        if check:assert result.returncode==0,(result.stdout+result.stderr).decode('utf-8','replace')
        return result.stdout if binary else result.stdout.decode('utf-8','replace')
    def require_foreground():
        state=adb(['shell','dumpsys','window'])
        focused=[line for line in state.splitlines() if ('mCurrentFocus=' in line or 'mFocusedApp=' in line) and '=null' not in line]
        assert any('org.nhl07.port/.MainActivity' in line or 'org.nhl07.port/org.nhl07.port.MainActivity' in line for line in focused),'Game is not the foreground window'
    pid=adb(['shell','pidof','org.nhl07.port']).strip();assert pid,'No live game process'
    apk_sha=require_installed_apk(ROOT,prefix)
    metadata=json.loads((ROOT/'analysis/apk.json').read_text())
    startup=adb(['shell','cat',EXTERNAL+'/startup.log']);assert 'timeout=0;' in startup,'Requires normal launch with capture=false'
    controller=adb(['shell','cat',EXTERNAL+'/controller-test.log'])
    assert 'synthetic=true physical_buttons_tested=false' in controller,'ControllerRun harness is not ready'
    stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%d-%H%M%SZ')
    safe=lambda value:re.sub(r'[^a-zA-Z0-9_.-]','_',str(value))
    folder=ROOT/'analysis'/('window-match-'+safe(metadata.get('version','unknown'))+'-'+safe(args.serial)+'-'+stamp);folder.mkdir()
    report={'apk_sha256':apk_sha,'version':metadata.get('version'),'serial':args.serial,'pid':pid,'normal_launch':True,
        'diagnostic_capture':False,'physical_buttons_tested':False,'complete_match_verified':False,'audio_verified':False,
        'seconds_limit':duration,'interval_seconds':20,'aspect':args.aspect,'threshold':args.threshold,
        'reference_images':REFERENCES,'roi':ROI,'mask_processing':'RGB minimum after Gaussian blur radius 1.2 > 100','observations':[],
        'limitations':['Screenshots and logs require inspection; this watcher cannot prove completion or sound quality',
            'Synthetic A is sent only after the same intermission header exceeds the threshold on two consecutive observations']}
    def save():
        (folder/'observations.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
    print(json.dumps({'folder':str(folder),'apk_sha256':apk_sha,'pid':pid}),flush=True)
    start=time.monotonic();deadline=start+duration;next_sample=start;pending=None;count=0;locked=False;clear_count=0
    try:
        while time.monotonic()<deadline:
            remaining=next_sample-time.monotonic()
            if remaining>0:time.sleep(min(20,remaining));continue
            assert adb(['shell','pidof','org.nhl07.port'],check=False).strip()==pid,'Game process stopped or restarted'
            require_foreground()
            tail=adb(['shell','tail','-n','120',EXTERNAL+'/startup.log']);(folder/'latest-startup-tail.log').write_text(tail,encoding='utf-8')
            if any(marker in tail for marker in ['[UNIMPL]','[ICALL] Failed','[NHL07-GRAPHICS-MISSING]','[NHL07-RENDER-TARGET-MISSING]','[NHL07-SCENE-ABI]','signal=']):
                report['stop_reason']='Native stop marker observed';break
            raw,window,prefix_bytes=decode_screencap(adb(['exec-out','screencap','-p'],binary=True));image,box=normalize(window,args.aspect)
            index=len(report['observations']);name=f'frame-{index:04d}.png';image.save(folder/name)
            (folder/'latest-window.png').write_bytes(raw)
            if index==0:(folder/'first-window.png').write_bytes(raw)
            scores=[overlap(text_mask(image),mask) for mask in expected];best=max(range(len(scores)),key=scores.__getitem__)
            row={'elapsed_seconds':round(time.monotonic()-start,2),'image':name,'window_size':window.size,'viewport':box,'screencap_stdout_prefix_bytes':prefix_bytes,
                'header_iou':dict(zip(REFERENCES,scores)),'synthetic_continue':False}
            report['observations'].append(row)
            if scores[best]>args.threshold and not locked:
                count=count+1 if pending==best else 1;pending=best
                if count>=2:
                    assert adb(['shell','pidof','org.nhl07.port']).strip()==pid,'Game changed before synthetic input'
                    require_foreground()
                    command=f'{time.time_ns()},96,100'
                    adb(['shell',f"printf '{command}' > {EXTERNAL}/controller-test-command-next.txt"])
                    adb(['shell','mv',EXTERNAL+'/controller-test-command-next.txt',EXTERNAL+'/controller-test-command.txt'])
                    time.sleep(.3);ack_deadline=time.monotonic()+3;ack=''
                    while time.monotonic()<ack_deadline:
                        ack=adb(['shell','tail','-n','30',EXTERNAL+'/controller-test.log'])
                        if 'command='+command in ack:break
                        time.sleep(.2)
                    line=next((line for line in ack.splitlines() if 'command='+command in line),'')
                    row['synthetic_continue']=True;row['command']=command;row['acknowledgement']=line
                    (folder/'latest-controller-test.log').write_text(ack,encoding='utf-8')
                    assert 'down=true up=true' in line,'Synthetic continue lacked successful down/up ACK'
                    locked=True;clear_count=0;pending=None;count=0
            else:pending=None;count=0
            if max(scores)<.5:
                clear_count+=1
                if clear_count>=2:locked=False
            else:clear_count=0
            print(json.dumps(row),flush=True);save();next_sample+=20
        report.setdefault('stop_reason','Observation time limit reached')
    except (Exception,KeyboardInterrupt) as error:
        report['stop_reason']=type(error).__name__+': '+str(error);print(report['stop_reason'],flush=True)
    finally:
        report['observed_seconds']=round(time.monotonic()-start,2);save()
    print('Watch finished; inspect images and logs. No complete-match claim. '+str(folder),flush=True)

if __name__=='__main__':main()
