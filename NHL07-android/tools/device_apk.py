"""Install/run only org.nhl07.port on the explicitly selected ADB device."""
from pathlib import Path
import argparse,datetime,hashlib,json,re,subprocess,time
root=Path(__file__).resolve().parents[1]
ap=argparse.ArgumentParser();ap.add_argument('--serial',required=True)
ap.add_argument('--install',action='store_true');ap.add_argument('--copy-disc',action='store_true')
ap.add_argument('--collect',action='store_true',help='Collect an externally launched diagnostic run without relaunching it')
ap.add_argument('--run',action='store_true');ap.add_argument('--timeout-seconds',type=int,default=30,choices=range(30,1801));args=ap.parse_args()
config=json.loads((root/'local-toolchains.json').read_text());apk=json.loads((root/'analysis/apk.json').read_text())
assert hashlib.sha256(Path(apk['apk']).read_bytes()).hexdigest()==apk['sha256']
prefix=[config['adb'],'-P',str(config.get('adb_port',5037)),'-s',args.serial]
def adb(command,timeout=60,check=True):
    r=subprocess.run(prefix+command,check=check,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=timeout)
    return r.stdout+r.stderr
external='/sdcard/Android/data/org.nhl07.port/files'
remote='/data/local/tmp/nhl07-438eaeada465'
record={'serial':args.serial,'apk_sha256':apk['sha256'],'gameplay_verified':False,'timeout_seconds':args.timeout_seconds}
if args.install:
    record['install']=adb(['install','-r',apk['apk']],timeout=120).strip()
    print(record['install'],flush=True)
    adb(['shell','am','start','-W','-n','org.nhl07.port/.LauncherActivity'])
    adb(['shell','am','force-stop','org.nhl07.port'])
if args.copy_disc:
    adb(['shell','mkdir','-p',external])
    adb(['shell','cp',remote+'/default.xbe',external+'/default.xbe'])
    adb(['shell','cp','-r',remote+'/disc',external+'/'],timeout=300)
    actual=adb(['shell','sha256sum',external+'/default.xbe']).split()[0]
    assert actual==config['xbe_sha256']
    record['disc_copy']='Device-local copy of already deployed game data'
if args.run:
    adb(['shell','am','force-stop','org.nhl07.port'])
    record['launch']=adb(['shell','am','start','-W','-n','org.nhl07.port/.MainActivity','--ez','probe','true','--ei','probe_seconds',str(args.timeout_seconds)])
    # Poll process, not logcat for unrelated applications. Native watchdog: 30s.
    for _ in range(args.timeout_seconds+5):
        time.sleep(1)
        if not adb(['shell','pidof','org.nhl07.port'],check=False).strip(): break
if args.run or args.collect:
    stamp=datetime.datetime.now().strftime('%Y%m%d-%H%M%S')
    log=root/'logs'/('apk-device-'+stamp+'.log')
    content=adb(['shell','cat',external+'/startup.log'],check=False)
    log.write_text(content,encoding='utf-8')
    record.update(log=str(log),native_entry_reached='[NHL07-ARM64]' in content,
        window_created='surface=window' in content,presented='present 1;' in content,
        pixel_readback_matched='clear readback=FF000000 expected=FF000000' in content)
    if '[NHL07-DRAW-CAPTURE] contiguous bytes=67108864 expected=67108864' in content:
        snapshots={}
        for name in ['first-draw.json','first-draw-ram.bin','first-draw-contiguous.bin']:
            destination=root/'analysis'/name
            adb(['pull',external+'/'+name,str(destination)])
            snapshots[name]=hashlib.sha256(destination.read_bytes()).hexdigest()
        record['first_draw_snapshots']=snapshots
    if '[NHL07-NATIVE-DRAW] first GPU readback' in content:
        captures={}
        for name in ['first-render.ppm','first-render.json','first-vertex-feedback.bin',
                     'pipeline-1.vs.hlsl','pipeline-1.ps.hlsl','pipeline-1.vs.glsl','pipeline-1.ps.glsl']:
            destination=root/'analysis'/name
            adb(['pull',external+'/'+name,str(destination)])
            captures[name]=hashlib.sha256(destination.read_bytes()).hexdigest()
        record['native_render_captures']=captures
    record['android_controller_detected']='Android controller connected=1' in content
    if '[NHL07-GPU-FAILURE-CAPTURE]' in content:
        captures={}
        for name in ['draw-failure-ram.bin','draw-failure-physical.bin','draw-failure-state.bin','draw-failure-push.bin','draw-failure.json']:
            destination=root/'analysis'/name;adb(['pull',external+'/'+name,str(destination)])
            captures[name]=hashlib.sha256(destination.read_bytes()).hexdigest()
        record['gpu_failure_captures']=captures
    probe_directories=re.findall(r'\[NHL07-TEXTURE-PROBES\] directory=([^\r\n]+)',content)
    if probe_directories:
        remote_probes=probe_directories[-1]
        assert re.fullmatch(r'(?:/sdcard|/storage/emulated/0)/Android/data/org\.nhl07\.port/files/texture-probes-[0-9]+',remote_probes)
        remote_probes=external+'/'+remote_probes.rsplit('/',1)[-1]
        destination=root/'analysis'/('texture-probes-'+stamp)
        transfer=adb(['pull',remote_probes,str(destination)],timeout=120,check=False)
        if (destination/'index.tsv').is_file():
            record['texture_probes']={'directory':str(destination),'images':len(list(destination.glob('*.ppm'))),
                'index_sha256':hashlib.sha256((destination/'index.tsv').read_bytes()).hexdigest()}
        else:
            record['texture_probes']={'unavailable':transfer.strip(),'remote_directory':remote_probes}
    record['controller_opened_by_game']='game opened Android controller port 0' in content
    record['aaudio_opened']='AAudio output opened: 48000 Hz float stereo' in content
    record['game_audio_verified']=False
    record['voice_buffers_created']='[NHL07-VOICE] created' in content
    record['surround_buffer_playing']='channels=6 rate=48000' in content and '[NHL07-VOICE] play' in content
    record['original_audio_worker_started']='ctx1=0x0058B030' in content
    record['nonzero_audio_output_observed']='[NHL07-AUDIO-RENDER] first nonzero output' in content
    record['native_draws_observed']=max([0]+[int(n) for n in re.findall(r'native_draws=(\d+)',content)])
    record['presents_observed']=max([0]+[int(n) for n in re.findall(r'present (\d+);',content)])
    record['intro_vp6_opened']="movies\\ntsc\\EAeng.vp6" in content
    stops=re.findall(r'REACHED: `([^`]+)` at (0x[0-9A-Fa-f]+)',content)
    if stops:record['stop']={'reason':stops[-1][0],'guest_address':stops[-1][1]}
    graphics_stops=re.findall(r'\[NHL07-GRAPHICS-MISSING\] ([^\n]+)',content)
    if graphics_stops:record['stop']={'reason':'native graphics boundary','detail':graphics_stops[-1].strip()}
    target_stops=re.findall(r'\[NHL07-RENDER-TARGET-MISSING\] ([^\n]+)',content)
    if target_stops:record['stop']={'reason':'native render target boundary','detail':target_stops[-1].strip()}
    signals=re.findall(r'signal=([0-9A-F]{8})',content)
    if signals:record['signal']=int(signals[-1],16)
    if signals and int(signals[-1],16)==14:record['stop']={'reason':'diagnostic watchdog timeout','seconds':args.timeout_seconds}
    if 'stop' not in record:record['stop']={'reason':'externally controlled diagnostic snapshot; no stop marker observed'}
    record['movie_textures_published']=max([0]+[int(n) for n in re.findall(r'CPU texture frame published=(\d+)',content)])
    record['clock_samples']=[dict(zip(['ea_ticks','ea_frequency','kernel_ms'],map(int,values))) for values in re.findall(r'EA ticks=(\d+) frequency=(\d+) kernel_ms=(\d+)',content)]
    if '[NHL07-FRAME] captured' in content:
        captures={}
        for name in ['latest-frame.ppm','latest-frame.json']:
            destination=root/'analysis'/name;adb(['pull',external+'/'+name,str(destination)])
            captures[name]=hashlib.sha256(destination.read_bytes()).hexdigest()
        record['latest_frame_captures']=captures
    record['dsp_image_loaded']='[NHL07-DSP] DownloadEffectsImage loaded' in content
    record['dsp_zero_frame_executed']='zero frame executed instructions=' in content
    if 'original DSP image captured bytes=' in content:
        captures={}
        for name in ['first-dsp-image.bin','first-dsp-image.json']:
            destination=root/'analysis'/name
            adb(['pull',external+'/'+name,str(destination)])
            captures[name]=hashlib.sha256(destination.read_bytes()).hexdigest()
        record['dsp_captures']=captures
    if record['dsp_image_loaded']:
        captures={}
        for name in ['dsp-loaded-program.bin','dsp-loaded-state.bin']:
            destination=root/'analysis'/name
            adb(['pull',external+'/'+name,str(destination)])
            captures[name]=hashlib.sha256(destination.read_bytes()).hexdigest()
        record['dsp_runtime_snapshots']=captures
    (root/'analysis/latest-apk-device.json').write_text(json.dumps(record,indent=2))
    print(json.dumps(record,indent=2));print(content[-2200:])
