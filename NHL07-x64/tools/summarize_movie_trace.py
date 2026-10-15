"""Save actual movie requests and controller calls from the latest tested APK."""
from pathlib import Path
import json,re
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
device=json.loads((android/'analysis/latest-apk-device.json').read_text())
log=Path(device['log']).read_text(encoding='utf-8')
markers=['[NHL07-MOVIE-CLOCK]','[NHL07-MOVIE-PLAYER]','[NHL07-MOVIE-REQUEST]','[NHL07-INPUT-CALL]','[NHL07-VP6-DECODE]']
observed={marker:[line for line in log.splitlines() if line.startswith(marker)] for marker in markers}
requests={};delays=[]
for line in observed['[NHL07-MOVIE-REQUEST]']:
    values=dict(re.findall(r'(\w+)=([^ ]+)',line));stage=int(values['stage']);poll=int(values['poll'])
    if stage==1:requests[poll]=values
    elif poll in requests:
        before=requests[poll];ticks=int(values['EA'])-int(before['EA'])
        delays.append({'poll':poll,'requested_frame':int(before['value'],16),
            'returned_guest_pointer':values['value'],'EA_tick_delta':ticks,
            'approximate_call_seconds':ticks/60,
            'scope':'Whole decoder request including any I/O/synchronization; not isolated codec CPU time'})
report={'apk_sha256':device['apk_sha256'],'log':device['log'],'observed_calls':observed,
    'request_delays':delays,'decode_times_ms':[float(x) for x in re.findall(r'\[NHL07-VP6-DECODE\].*milliseconds=([0-9.]+)',log)],
    'movie_publications_logged':device['movie_textures_published'],
    'logging':'Latest APK logs every texture publication; readiness/player/request traces first 4 then every 60th call.',
    'findings':['EA software ticks advance; readiness can be positive.',
        'Audio mutex starvation fixed: DSP executes outside voice/control lock; measured baseline waits up to 2668ms. Original VP6 decodes and Demo.vp6 now renders using packed YUY2.',
        'Game calls XGetDevices and sees port 0; XInputOpen is not observed yet.' if not device['controller_opened_by_game'] else 'Game opened native controller.'],
    'menu_evidence':'observed-menu.json: user confirmation and actual GPU menu capture',
    'not_validated':['Performance across all VP6 frames','Physical button hardware in match','Complete match']}
(root/'analysis/movie-clock-trace.json').write_text(json.dumps(report,indent=2))
print(json.dumps({'requests':delays,'controller_opened':device['controller_opened_by_game']},indent=2))
