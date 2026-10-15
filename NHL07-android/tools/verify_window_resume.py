"""Exercise HOME/return on the already running normal game. No relaunch on failure."""
from pathlib import Path
import argparse,datetime,json,re,subprocess,time
from PIL import Image
from installed_identity import require_installed_apk
r=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--serial',required=True);p.add_argument('--cycles',type=int,default=3);a=p.parse_args()
assert 1<=a.cycles<=5
c=json.loads((r/'local-toolchains.json').read_text());prefix=[c['adb'],'-P',str(c['adb_port']),'-s',a.serial]
external='/sdcard/Android/data/org.nhl07.port/files'
def adb(*args):
    q=subprocess.run(prefix+list(args),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=20)
    assert q.returncode==0,q.stdout+q.stderr
    return q.stdout
stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%d-%H%M%SZ')
folder=r/'analysis'/('window-resume-'+stamp);folder.mkdir()
pid=adb('shell','pidof','org.nhl07.port').strip();assert pid
sha=require_installed_apk(r,prefix)
def capture(name):
    window=adb('shell','dumpsys','window')
    focused=[line.strip() for line in window.splitlines() if ('mCurrentFocus=' in line or 'mFocusedApp=' in line) and '=null' not in line]
    assert any('org.nhl07.port/.MainActivity' in line or 'org.nhl07.port/org.nhl07.port.MainActivity' in line for line in focused),'Game is not the foreground window: '+str(focused)
    path=folder/(name+'.png');adb('shell','screencap','-p',external+'/resume-window.png');adb('pull',external+'/resume-window.png',str(path))
    im=Image.open(path).convert('RGB');w,h=im.size
    # Exclude the Android touch controls around the edge. A black game window
    # with live buttons must not pass just because its overlay is visible.
    pix=list(im.crop((int(w*.3),int(h*.2),int(w*.7),int(h*.7))).get_flattened_data())
    fraction=sum(max(v)>24 for v in pix)/len(pix)
    return {'image':str(path),'center_nonblack_fraction':fraction,'foreground':focused}
record={'apk_sha256':sha,'serial':a.serial,'pid':pid,'cycles':[],'passed':False,'scope':'HOME/return only; does not establish a full match or physical input'}
try:
    record['before']=capture('before');assert record['before']['center_nonblack_fraction']>.1,'Game already black before test'
    for cycle in range(a.cycles):
        adb('shell','input','keyevent','KEYCODE_HOME');time.sleep(2)
        adb('shell','am','start','-n','org.nhl07.port/.MainActivity');time.sleep(3)
        same=adb('shell','pidof','org.nhl07.port').strip()==pid
        shot=capture('after-'+str(cycle+1));record['cycles'].append({'same_pid':same,**shot})
        assert same and shot['center_nonblack_fraction']>.1,'Process changed or game image remained black'
    record['passed']=True
finally:
    adb('pull',external+'/startup.log',str(folder/'startup.log'))
    (folder/'report.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
    print(json.dumps(record,indent=2),flush=True)
