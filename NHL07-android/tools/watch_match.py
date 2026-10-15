"""Collect a bounded live diagnostic run and advance only observed intermissions."""
from pathlib import Path
import argparse,json,subprocess,time,struct,zlib,shutil,datetime
from render_capture import png
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True);ap.add_argument('--seconds',type=int,default=1500);ap.add_argument('--language',choices=['en','ru'],default='en');args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());prefix=[config['adb'],'-P',str(config['adb_port']),'-s',args.serial];external='/sdcard/Android/data/org.nhl07.port/files'
def adb(command,check=True):
    r=subprocess.run(prefix+command,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
    if check:assert r.returncode==0,r.stderr
    return r.stdout
apk_sha256=json.loads((root/'analysis/apk.json').read_text())['sha256']
assert 'timeout=1800;' in adb(['shell','cat',external+'/startup.log']),'Watch requires an explicit 1800-second diagnostic run'
def reference(name):
    data=(root/'analysis'/name).read_bytes();p=8;compressed=bytearray()
    while p<len(data):
        n=struct.unpack_from('>I',data,p)[0];kind=data[p+4:p+8];payload=data[p+8:p+8+n];p+=n+12
        if kind==b'IHDR':
            w,h,depth,color,_,_,interlace=struct.unpack('>IIBBBBB',payload)
            assert (w,h,depth,color,interlace)==(640,480,8,2,0)
        elif kind==b'IDAT':compressed+=payload
    raw=zlib.decompress(compressed);assert all(raw[y*(w*3+1)]==0 for y in range(h))
    return b''.join(raw[y*(w*3+1)+1:(y+1)*(w*3+1)] for y in range(h))
w,h=640,480
names=['russian-first-intermission.png','russian-second-intermission.png'] if args.language=='ru' else ['observed-first-intermission.png']
offsets=[(y*w+x)*3 for y in range(55,74) for x in (range(310,470) if args.language=='ru' else range(375,514))]
def mask(rgb):return [min(rgb[i:i+3])>210 for i in offsets]
expected=[mask(reference(name)) for name in names];folder=root/'analysis'/('match-watch-'+datetime.datetime.now().strftime('%Y%m%d-%H%M%S'));folder.mkdir()
records=[];sent=False;deadline=time.monotonic()+min(1800,max(20,args.seconds))
while time.monotonic()<deadline:
    log=adb(['shell','cat',external+'/startup.log'])
    if any(v in log for v in ['[UNIMPL]','[NHL07-GRAPHICS-MISSING]','[NHL07-RENDER-TARGET-MISSING]','[NHL07-SCENE-ABI]','signal=']):
        (folder/'stop.log').write_text(log,encoding='utf-8');print('Native stop observed; inspect '+str(folder/'stop.log'),flush=True);break
    path=folder/'frame.ppm';adb(['pull',external+'/latest-frame.ppm',str(path)])
    parts=path.read_bytes().split(b'\n',3)
    if len(parts)==4:
        magic,dimensions,maximum,rgb=parts;cw,ch=map(int,dimensions.split())
        if (cw,ch)==(w,h) and len(rgb)==w*h*3:
            actual=mask(rgb);overlap=max(sum(a and b for a,b in zip(actual,m))/max(1,sum(a or b for a,b in zip(actual,m))) for m in expected)
            stamp=datetime.datetime.now().strftime('%H%M%S');name='frame-'+stamp+'.png';png(folder/name,w,h,rgb)
            row={'time':stamp,'image':name,'intermission_text_overlap':overlap};records.append(row)
            print(json.dumps(row),flush=True)
            if overlap>.92 and not sent:
                command=f'{time.time_ns()},96,100';adb(['shell',f"printf '{command}' > {external}/controller-test-command-next.txt"]);adb(['shell','mv',external+'/controller-test-command-next.txt',external+'/controller-test-command.txt']);sent=True;row['synthetic_continue']=True
            elif overlap<.5:sent=False
    (folder/'observations.json').write_text(json.dumps({'apk_sha256':apk_sha256,'complete_match_verified':False,'frames':records},indent=2))
    if not adb(['shell','pidof','org.nhl07.port'],check=False).strip():break
    time.sleep(20)
print('Watch finished; images require inspection; no complete-match claim',flush=True)
