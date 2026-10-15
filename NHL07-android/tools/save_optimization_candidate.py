"""Pin the offline optimization candidate without claiming device validation."""
from pathlib import Path
import datetime,hashlib,json,shutil,subprocess,sys,zipfile
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64');workspace=root.parents[1]
def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()
def read(name):return json.loads((root/'analysis'/name).read_text(encoding='utf-8'))
apk=read('apk.json');version=apk['version'];artifact=root.parent/f'NHL07-RG477M-{version}.apk'
assert sha(artifact)==apk['sha256'] and sha(root/'build/libnhl07_core.so')==apk['native_debug_sha256']
assert version=='0.4.1-rc1' and apk['version_code']==9 and not apk['debuggable'] and apk['signature_verified'] and apk['zip_alignment_16k']
checks={};support_differences={}
required={
    'render-target-validation.json':['src/render_targets.cpp','src/scaled_upload.cpp'],
    'immediate-replay-validation.json':['src/nv2a_draw.cpp'],
    'scaled-upload-validation.json':['src/scaled_upload.cpp'],
    'texture-cache-validation.json':['src/texture_cache.cpp'],
    'render-profile-validation.json':['src/render_profile.cpp'],
    'fps-pause-validation.json':['src/native_frame_pacer.c','src/native_fps.c','src/native_pause.c']}
for name,primary in required.items():
    proof=read(name);assert proof['failed']==0
    for relative in primary:assert sha(root/relative)==proof['tested_sources'][relative],(name,relative)
    changed=[p for p,h in proof['tested_sources'].items() if (root/p).is_file() and sha(root/p)!=h]
    # GPU contracts ran before the configuration defaults changed. Their
    # renderer modules are identical; the final profiler is host-tested above.
    assert all(p=='src/render_profile.cpp' for p in changed),(name,changed)
    if changed:support_differences[name]=changed
    checks[name]={'sha256':sha(root/'analysis'/name),'passed':proof.get('passed'),'failed':0,'primary_sources_unchanged':True}
with zipfile.ZipFile(artifact) as z:
    assert z.testzip() is None
    icon=next(n for n in z.namelist() if n.startswith('res/') and n.endswith('/game_icon.png'))
    assert z.read(icon)==(root/'android/res/drawable-nodpi/game_icon.png').read_bytes()
    assert hashlib.sha256(z.read('lib/arm64-v8a/libnhl07_core.so')).hexdigest()==apk['native_apk_sha256']
cpu=read('cpu-profile-perf1.json');assert cpu['samples']==21222 and cpu['samples_lost']==0
upload=read('scaled-upload-validation.json')['benchmarks']
baseline=read('profile-perf1-paused-baseline.json');active=read('profile-perf1-active-baseline.json')
raw_log=root/'logs/profile-perf1-full.log'
rows=[json.loads(line.split('] ',1)[1]) for line in raw_log.read_text(errors='replace').splitlines() if line.startswith('[NHL07-GPU-PROFILE]')]
surface_rows=[r for r in rows if r['inclusive_stages']['target_set']['calls']]
record={
    'version':version,'version_code':9,'apk':str(artifact),'apk_sha256':apk['sha256'],
    'native_debug_sha256':apk['native_debug_sha256'],'native_apk_sha256':apk['native_apk_sha256'],
    'prepared_at':datetime.datetime.now().astimezone().isoformat(),'installed_on_device':False,
    'device_validation_pending':True,'full_match_verified_on_this_apk':False,'gameplay_fps_improvement_verified':False,
    'device_unavailable_reason':'User unplugged RG477M for charging; continue offline work',
    'last_installed_experiment':{'version':'0.4.1-perf2','apk_sha256':read('apk-perf2.json')['sha256'],'observed':'Normal launch, Russian menu, team selection, match scene and pause before USB disconnection; optimizations disabled; full match not verified'},
    'preserved_baseline':{'version':'0.4.0-rc2','apk_sha256':'7d661514476cc3cca19b7e99a582ee147ae5a405c6e47d9b6258a46302abc988'},
    'defaults':{'frame_limit':60,'gpu_logical_readback':True,'gpu_surface_upscale':True,'draw_preparation_dedup':True,'dirty_surface_cache':False,'profiling':False},
    'checks':checks,'support_source_differences_from_gpu_contracts':support_differences,
    'support_source_note':'Only profiler configuration/defaults changed after GPU checks. Final profiler source is separately tested on Windows. Full APK still requires device integration.',
    'isolated_upload_benchmark':{'baseline_ms_range':[min(r['baseline_ms'] for r in upload),max(r['baseline_ms'] for r in upload)],'optimized_ms_range':[min(r['optimized_ms'] for r in upload),max(r['optimized_ms'] for r in upload)],'rounds_per_format':3,'dimensions':[256,256],'scale':3,'does_not_establish_gameplay_fps':True},
    'baseline_profiles':{'apk_sha256':cpu['apk_sha256'],'paused_fps':baseline['fps'],'active_episode_fps':active['fps'],'paused_texture_compare_ms':baseline['stages_ms']['compare'],'cpu_render_thread_memcmp_self_percent':47.59,'surface_batches':surface_rows,'log_sha256':sha(raw_log),'note':'Different scenes from RC2; never use these values to claim an optimization gain'},
    'pending':['Three alternating runs in the same scene: baseline/downsample/upsample/combined, active match and heavy replay, p95/p99','Full match on this exact APK, exit to Russian menu, sound, settings, live resolution and background/restore','Exact installed APK SHA256 check before each performance run','Season/save-load and 32-team dynasty remain unverified'],
    'rejected_experiment':'Exact NEON byte comparison did not beat libc; it is not included in the texture cache',
    'original_xbe_sha256':sha(game/'input/default.xbe')}
assert record['original_xbe_sha256']=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
(root/'analysis/optimization-candidate.json').write_text(json.dumps(record,indent=2),encoding='utf-8')
status=f'''NHL 07 — RG477M — {version}
Подготовлен отдельный кандидат с оптимизациями. На RG477M этот точный APK ещё не установлен: устройство отключено пользователем для зарядки.
APK: {artifact.name}
SHA256: {apk['sha256']}
ARM64, Android 10+, подпись и выравнивание 16 КБ проверены. Лимит 60 FPS сохранён.

Включено по умолчанию:
• Уменьшение изображения на GPU перед чтением в память: при 3× передаётся исходный размер вместо девятикратного объёма.
• Загрузка внеэкранных поверхностей в исходном размере и увеличение на GPU; сохранены RGB565/RGB8/RGBA8 и точные пиксели.
• Повторное использование неизменных uniform, параметров sampler и одна загрузка immediate-вершин вместо загрузки на каждый атрибут.
• Подробный сбор профиля выключен. Старые файлы экспериментов не меняют новые настройки по умолчанию.
• Исходные текстуры по-прежнему полностью сравниваются; ожидания GPU сохранены.

Проверено на настоящем Mali-G615 RG477M до отключения устройства:
• 38 971 утверждение проверки поверхностей, включая все шесть гостевых форматов, 2×/3×, depth/stencil, обратную запись и состояние GL.
• По 96 661 утверждению рисования в каждом режиме; четыре полных изображения совпадают побайтно.
• 92 306 утверждений отдельной загрузки поверхностей; 232 — кэша текстур и изменений палитр.
• Это проверки модулей, а не полный матч на новом APK.
На Windows: 8 906 проверок включения профилирования, точности статистики p95/p99, смены режимов и сброса неполных партий.

Предрелиз 0.4.0-rc2 сохранён отдельно. Его подтверждённые запуск, матч/выход, русские шрифты, настройки и сворачивание описаны в checkpoints/20261015-prerelease-0.4.0-rc2/STATUS.txt.
Перенос этих результатов на новый APK без повторной проверки не заявляется.

После подключения: установить этот APK поверх текущего, проверить точный хеш, провести сравнение FPS и полный матч, выход, настройки и сворачивание.
Обновление составов: Настройки → Составы команд → Управление → Обновить состав из ZIP.
Импорт из ISO остаётся однократным; прямого чтения ISO во время игры нет. Исходные ISO/XBE и sources/ не изменялись.
Озвучка английская. Сезоны, загрузка сохранений и расписание династии на 32 клуба требуют проверки.
'''
(root/'STATUS.txt').write_text(status,encoding='utf-8')
performance=f'''NHL 07 RG477M — профиль и оптимизации {version}
APK SHA256: {apk['sha256']}
Прирост FPS в самой игре пока не подтверждён: RG477M отключён для зарядки.

Что измерено до отключения
• CPU-профиль отдельной сборки perf1: 21 222 выборки за 19,998 с, потерь нет. На паузе memcmp занимает 47,59% CPU-времени потока игры. Звук выполняется отдельным потоком; его доля не равна задержке кадра.
• В неизменной сцене паузы: {baseline['fps']:.2f} FPS; точная проверка текстур {baseline['stages_ms']['compare']:.2f} мс на кадр, чтений поверхностей нет.
• Другой активный эпизод perf1: {active['fps']:.2f} FPS. Это исходный профиль, его нельзя сравнивать с 23,2 FPS RC2 как прирост.
• Во вступлении к матчу встречались партии с чтением поверхностей около 10 мс/кадр, созданием около 5–6 мс и ожиданием glFinish около 15–16 мс. Эти таймеры вложенные; их нельзя суммировать как независимые доли кадра.

Изолированный тест загрузки 256×256 при 3×, три серии на формат:
• CPU-увеличение + загрузка: {record['isolated_upload_benchmark']['baseline_ms_range'][0]:.3f}–{record['isolated_upload_benchmark']['baseline_ms_range'][1]:.3f} мс.
• Исходная загрузка + GPU-увеличение: {record['isolated_upload_benchmark']['optimized_ms_range'][0]:.3f}–{record['isolated_upload_benchmark']['optimized_ms_range'][1]:.3f} мс.
Это отдельная операция. Декодирование/переворот/упаковка гостевых пикселей исключены; измерение не означает такого же ускорения всего кадра. Порядок baseline-first может зависеть от частоты и нагрева.

Проверка рисования: uniform-загрузки 45→24, immediate-загрузки 51→17, обновления sampler 21→9 на одинаковом тестовом наборе. Полные изображения идентичны.
NEON-сравнение всех байтов не ускорило проверку текстур и не включено в рабочий кэш.

Дальнейший порядок
1. Три чередующихся сравнения baseline/downsample/upsample/combined на одинаковом эпизоде, 3×; отдельно активный матч и тяжёлый повтор.
2. Среднее время кадра, p95/p99 по исходным наносекундам, объёмы чтений/загрузок и количество операций.
3. Полный матч, выход в русское меню, звук, настройки, смена разрешения и сворачивание на точном новом APK.
4. Надёжное отслеживание изменений текстур перед уменьшением числа memcmp; затем профиль горячих функций игры. Удаление glFinish без доказанной зависимости не выполнялось.

tools/benchmark_render_modes.py выполняет три чередующихся серии и сохраняет исходные кадры/профили. Он требует запущенную обычную игру, нужную неподвижную сцену и совпадение хеша установленного APK.
Подробности и ссылки на проверки: analysis/optimization-candidate.json.
'''
(root/'PERFORMANCE.txt').write_text(performance,encoding='utf-8')
subprocess.run([sys.executable,str(game/'tools/pin_sources.py')],check=True)
pin=game/'analysis/source-and-artifact-pin.json';sources=json.loads(pin.read_text())
folder=root/'checkpoints'/('20261015-optimization-'+version);folder.mkdir(exist_ok=True)
evidence=[artifact,artifact.with_suffix('.sha256'),root/'build/libnhl07_core.so',root/'analysis/apk.json',root/'analysis/build.json',pin,root/'STATUS.txt',root/'PERFORMANCE.txt',root/'analysis/optimization-candidate.json',root/'local-toolchains.json',root/'toolchains/recovery-receipt.json']
for name in [*checks,'cpu-profile-perf1.json','cpu-profile-perf1.data','perf1-core.so','perf1-replay.png','profile-perf1-paused-baseline.json','profile-perf1-active-baseline.json','exact-bytes-validation-bench.json','apk-perf1.json','apk-perf2.json']:evidence.append(root/'analysis'/name)
for pattern in ['cpu-profile-perf1*.txt','cpu-profile-perf1*.log','profile-perf1*.log','*render-profile*.log','immediate-replay-dedup-*.log','target-gpu-validation.log','scaled-upload-validation.log','texture-cache-contract.log','apk-verification.txt']:
    evidence.extend((root/'logs').glob(pattern))
for p in {p.resolve() for p in evidence}:
    assert p.is_file(),p;shutil.copy2(p,folder/p.name)
source_zip=folder/'sources.zip'
with zipfile.ZipFile(source_zip,'w',zipfile.ZIP_DEFLATED,compresslevel=6) as z:
    for relative,entry in {x['path']:x for x in sources['files']}.items():
        p=workspace/relative;assert sha(p)==entry['sha256'];z.write(p,relative)
with zipfile.ZipFile(source_zip) as z:assert z.testzip() is None
manifest={'version':version,'apk_sha256':apk['sha256'],'device_integration_pending':True,'source_files':len({x['path'] for x in sources['files']}),'files':{p.name:sha(p) for p in folder.iterdir() if p.is_file() and p.name!='manifest.json'}}
(folder/'manifest.json').write_text(json.dumps(manifest,indent=2),encoding='utf-8')
print(json.dumps({'apk':str(artifact),'sha256':apk['sha256'],'checkpoint':str(folder),'device_test_pending':True},indent=2))
