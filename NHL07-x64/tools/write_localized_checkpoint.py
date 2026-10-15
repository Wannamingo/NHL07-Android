"""Publish the localized build with scenario-specific, matching-hash evidence."""
from pathlib import Path
import datetime,hashlib,json,shutil
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
def read(path):return json.loads(path.read_text(encoding='utf-8'))
def digest(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()
def main():
    apk=read(android/'analysis/apk.json');device=read(android/'analysis/latest-apk-device.json')
    ui=read(android/'analysis/russian-device-validation.json');roster_ui=read(android/'analysis/roster-updater-device-validation.json')
    full=read(android/'analysis/localized-roster-complete-match.json')
    assert digest(apk['apk'])==apk['sha256']==device['apk_sha256']==ui['apk_sha256']==roster_ui['apk_sha256']
    assert full['complete_match_verified'] and full['native_apk_sha256']==apk['native_apk_sha256']
    assert digest(ui['log'])==ui['log_sha256']
    for name,value in ui['screenshots'].items():assert digest(android/'analysis'/name)==value,name
    assert ui['english_main_menu_verified'] and ui['russian_pause_menu_verified'] and ui['club_abbreviations_and_logos_restored']
    assert ui['final_game_language']=='ru'
    validations={}
    for name,project,file in [
        ('launcher',android,'launcher-host-validation.json'),('roster_converter',android,'roster-converter-validation.json'),
        ('localization_assets',android,'localization-assets.json'),('russian_text',root,'localization/russian-text-validation.json'),
        ('first_pixels',android,'gpu-pixel-validation.json'),('first_vertex',android,'gpu-vertex-validation.json'),
        ('cpu_windows',root,'cpu-differential-validation.json'),('cpu_arm64',android,'cpu-arm64-validation.json'),
        ('linker',root,'linker-thunk-validation.json'),('resource_lifetime',root,'resource-lifetime-validation.json')]:
        value=read(project/'analysis'/file);assert value.get('failed',0)==0,name
        for path,sha in value.get('tested_sources',{}).items():assert digest(project/path)==sha,path
        validations[name]=value
    assert validations['localization_assets']['version']==ui['translation_assets_version']
    for name,sha in validations['first_pixels']['capture_hashes'].items():assert digest(android/'analysis'/name)==sha,name
    for name,sha in validations['first_vertex']['inputs_sha256'].items():assert digest(android/'analysis'/name)==sha,name
    assert digest(android/'analysis/first-render.ppm')==validations['first_pixels']['gpu_image_sha256']
    for name,sha in validations['localization_assets']['files'].items():assert digest(android/'android/assets/localization/ru'/name)==sha,name
    assert validations['roster_converter']['converted_viv_sha256']==ui['roster_sha256']
    static=read(root/'analysis/static-recovery.json');windows=read(root/'analysis/windows-build.json')
    assert digest(windows['executable'])==windows['sha256']
    status={'updated_moscow':datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=3))).isoformat(),
        'game':'NHL 07 USA, Original Xbox','input_sha256':digest(root/'input/default.xbe'),
        'apk':apk,'android_build':read(android/'analysis/build.json'),'windows_build':windows,
        'device_probe':device,'russian_device_validation':ui,'roster_updater_device_validation':roster_ui,
        'verified_full_match_checkpoint':full,'current_apk_complete_match_verified':False,
        'static_recovered_function_count':len(static['accepted']),
        'linker_alias_count':validations['linker']['restored_aliases'],
        'validation':validations,'limitations':ui['limitations']}
    previous=root/'analysis/status-before-localization.json'
    if not previous.exists() and (root/'analysis/status.json').exists():shutil.copy2(root/'analysis/status.json',previous)
    (root/'analysis/status.json').write_text(json.dumps(status,ensure_ascii=False,indent=2),encoding='utf-8')
    lines=[
        'NHL 07 — RG477M, сборка 0.3-dev с русским текстом',
        'Обновлено: '+status['updated_moscow'],'',
        'Установлено на RG477M. Выбор: Настройки → Язык игры → Русский / English.',
        'Язык лаунчера выбирается отдельно. Язык игры применяется при следующем запуске.',
        'Проверены английское меню, возврат к русскому, начало матча и русское меню паузы.',
        'Табло EDM/CAR и логотипы исправлены. Кириллица работает в меню и на льду.',
        'Полный матч 7:0 (периоды 2:0, 2:0, 3:0) с русским интерфейсом и новыми составами прошёл на предыдущем APK с тем же нативным ядром.',
        'Его точный APK SHA256: '+full['apk_sha256'],
        'Последний вариант перевода и изменения обработки кнопки меню проверены до активного матча и паузы; полный матч на этом точном APK не заявляется.','',
        'Лаунчер:',
        'Центральное главное меню с выбранной фотографией; разрешение 1×/2×/3×, формат кадра, экранные кнопки, раскладки и редактор размещения.',
        'Обновление составов: Настройки → Составы команд → Управление → Обновить состав из ZIP.',
        'Принимаются ZIP Legacy EDGE для Xbox 360 и подготовленные пакеты NHL 07.',
        'На устройстве проверены импорт, возврат предыдущего состава, исходные составы и повторное включение обновления.',
        'Активен Legacy EDGE 2026–27 V5 от 06.10.2026: 777 игроков, 32 клуба. Старые сохранённые сезоны используют собственные составы.',
        'Формы, арены, логотипы и комментарии остаются от NHL 07; новые игроки используют общие лица.','',
        'Локализация:',
        'Переведены таблицы 6307 пунктов меню, 1771 игрового сообщения и 28 системных диалогов.',
        'Ручные исправления: '+str(validations['russian_text']['human_reviewed_overrides'])+' фраз.',
        'Сохранены служебные вставки имён, чисел, переносы строк и клубные сокращения.',
        'Озвучка и видеоролики английские. Длинные описания частично переведены автоматически и требуют дальнейшей редакторской вычитки.','',
        'Проверки:',
        'Конвертер Java на Windows и Android побайтно совпадает с отдельной реализацией Python. Исходная база на устройстве не изменена.',
        'Оригинальный декомпрессор: по 23 сравнения с x86 на Windows и RG477M.',
        'Первая заставка: 6 GPU-вершин, 1892 цветовых выборки; максимальная ошибка цвета 1/255.',
        'Счётчики ресурсов: по 15360 проверок оригинальных функций и 7680 внутренних приобретений на архитектуру.',
        'Windows EXE собирается и доходит до первого DrawIndexedVertices; графический перенос Windows остаётся незавершённым.','',
        'APK: ../NHL07-RG477M-dev.apk',
        'APK SHA256: '+apk['sha256'],
        'Нативное ядро APK SHA256: '+apk['native_apk_sha256'],
        'В APK включены производные шрифты и таблицы перевода. Полного диска и XBE нет; используются данные выбранного пользователем ISO.',
        'Отчёт: analysis/status.json. Точные сценарии: ../NHL07-android/analysis/russian-device-validation.json и localized-roster-complete-match.json.',
        'Исходные файлы: analysis/source-and-artifact-pin.json. Сохранённые сборки: ../NHL07-android/checkpoints/.','',
        'Осталось проверить: физические кнопки и качество слышимого звука, остальные игровые режимы, сохранение/загрузка сезонов, расписание династии на 32 клуба.',
        'Проверки отдельных сцен и функций не доказывают полную совместимость всей игры. Диагностические остановки неподдержанных функций сохранены.',
        'ISO, исходная распаковка, NFSU/DOA3/Legacy и sources/ не изменялись.']
    for project in [root,android]:(project/'STATUS.txt').write_text('\n'.join(lines)+'\n',encoding='utf-8-sig')
    print(json.dumps({'apk':apk['sha256'],'localization_verified':True,'prior_full_match':full['apk_sha256'],'current_full_match_verified':False},indent=2))
if __name__=='__main__':main()
