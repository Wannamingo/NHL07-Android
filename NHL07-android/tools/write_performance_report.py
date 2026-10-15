"""Summarize measured frame batches separately from optimization hypotheses."""
from pathlib import Path
import hashlib,json,re
root=Path(__file__).resolve().parents[1];apk=json.loads((root/'analysis/apk.json').read_text());samples={}
for label in ['rc1-paused-1x','rc1-paused-2x','rc1-paused-3x','rc2-active-3x']:
    p=root/'analysis'/('fps-'+label+'.json');v=json.loads(p.read_text());assert not v['diagnostic_capture'];samples[label]=v
assert samples['rc2-active-3x']['apk_sha256']==apk['sha256']
log=(root/'logs/prerelease-rc2.log').read_text(encoding='utf-8')
normal_menu=[float(v) for v in re.findall(r'\[NHL07-FRAME-TIMING\] frames=300 fps=([\d.]+).*?scale=3 diagnostic=0',log) if float(v)>55]
assert normal_menu and max(normal_menu)<60.2
paused=[samples['rc1-paused-'+str(s)+'x'] for s in [1,2,3]];active=samples['rc2-active-3x']
assert len({v['apk_sha256'] for v in paused})==1
spread=max(v['weighted_fps'] for v in paused)-min(v['weighted_fps'] for v in paused)
assert all(v['average_ms']['limiter_ms']<.05 for v in paused)
summary=['Сравнение разрешений на предыдущем кандидате RC1, одинаковая сцена с оригинальным меню паузы; без GPU-захвата:']
for v in paused:summary.append(f"{v['scale']}×: {v['weighted_fps']:.1f} FPS; {v['measured_frames']} измеренных кадров, партии {v['batch_min_fps']:.1f}–{v['batch_max_fps']:.1f} FPS.")
summary.append(f"RC2, активный игровой эпизод, 3×: {active['weighted_fps']:.1f} FPS; партии {active['batch_min_fps']:.1f}–{active['batch_max_fps']:.1f} FPS.")
summary+=['Лимит: 60 FPS. Ожидание добавляется только кадрам, готовым раньше 1/60 секунды; для длинных кадров дополнительной задержки нет.','Снижение разрешения на сравнительной сцене практически не помогло. Это не разделяет время процессора и видеочипа; точные горячие функции ещё не измерены.']
candidates=[
    {'priority':1,'area':'Подготовка и отправка буферов вершин, индексов и uniform','evidence':'nv2a_draw.cpp вызывает glBufferData для uniform и атрибутов/индексов при каждом draw.','next_step':'Измерить стоимость; затем проверить общий потоковый буфер/кольцо и повторное использование неизменных данных.'},
    {'priority':2,'area':'Повторная настройка графического состояния','evidence':'raster() и texture() повторяют GL state/sampler вызовы для каждого draw.','next_step':'Кэшировать неизменившееся состояние с явным сбросом после внешних GL операций и смены render target.'},
    {'priority':3,'area':'Проверка содержимого уже закэшированных текстур','evidence':'texture_cache.cpp делает полный memcmp исходных данных на каждом cache hit. В статичной сцене число загрузок текстур не менялось, а число cache hit росло.','next_step':'Профилировать сравнения; исследовать версии ресурсов и точную инвалидизацию при записи. Не пропускать проверки вслепую.'},
    {'priority':4,'area':'Ожидания GPU','evidence':'NV097 WAIT_FOR_IDLE/FLIP_STALL вызывают glFinish.','next_step':'Измерить частоту и ожидание. Менять синхронизацию только после проверки порядка команд и CPU readback.'}]
report={'apk_sha256':apk['sha256'],'resolution_comparison_baseline_apk_sha256':paused[0]['apk_sha256'],'fps_limit':60,'frame_period_ns':16666667,'requested_refresh_hz':60,'normal_menu_cap_observed':True,'same_scene_fps_spread':spread,'samples':samples,'summary_ru':summary,'optimization_candidates':candidates,
    'performance_optimization_applied':False,'changes_applied':'60 FPS pacing and requested 60 Hz display mode; profiling counters',
    'limitations':['Same-scene comparison uses the original pause overlay, so it excludes active AI/physics work','The active episode uses changing cameras and action; it is not a controlled replay','RC1 and RC2 active episodes differ; their FPS cannot measure a performance change between builds','Batch ranges are averages of 300 frames, not instantaneous frame-rate bounds','No per-function CPU sampling or separate GPU timer measurements yet','No promise of stable 60 FPS in all gameplay scenes'],
    'source_files_sha256':{n:hashlib.sha256((root/n).read_bytes()).hexdigest() for n in ['src/native_graphics.c','src/native_frame_pacer.c','src/nv2a_draw.cpp','src/texture_cache.cpp']}}
(root/'analysis/prerelease-performance.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
lines=['NHL 07 RG477M — производительность 0.4.0-rc2','APK SHA256: '+apk['sha256'],'',*summary,'','Кандидаты для следующей оптимизации (эффект пока не измерен):']
for v in candidates:lines+=['',str(v['priority'])+'. '+v['area'],v['evidence'],v['next_step']]
lines+=['','Порядок проверки изменений: отдельная экспериментальная сборка → сравнение CPU/GPU времени → проверка изображения и вывода оригинальных функций → матч, выход в меню и сворачивание. Предрелизный APK закреплён отдельно.','Понижение разрешения не предлагается как решение, достаточное для устойчивых 60 FPS.']
(root/'PERFORMANCE.txt').write_text('\n'.join(lines)+'\n',encoding='utf-8-sig');print('\n'.join(summary))
