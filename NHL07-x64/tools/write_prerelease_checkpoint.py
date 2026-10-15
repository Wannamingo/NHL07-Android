"""Publish the RC artifact and only scenarios observed for its exact hash."""
from pathlib import Path
import datetime,hashlib,json,shutil
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
def read(p):return json.loads(p.read_text(encoding='utf-8'))
def sha(p):return hashlib.sha256(Path(p).read_bytes()).hexdigest()
def main():
    apk=read(android/'analysis/apk.json');device=read(android/'analysis/prerelease-device-validation.json');performance=read(android/'analysis/prerelease-performance.json')
    assert apk['sha256']==sha(apk['apk'])==device['apk_sha256']==device['installed_apk_sha256']==performance['apk_sha256']
    assert sha(device['prerelease_apk'])==apk['sha256'];assert sha(device['log'])==device['log_sha256']
    for name,value in device['screenshots'].items():assert sha(android/'analysis'/name)==value,name
    for name in ['launcher-host-validation.json','localization-assets.json','localization-overlay-validation.json','fps-pause-validation.json','platform-contract.json']:
        value=read(android/'analysis'/name);assert value.get('failed',0)==0,name
        for path,digest in value.get('tested_sources',{}).items():assert sha(android/path)==digest,path
    previous=root/'analysis/status-before-rc1.json'
    if not previous.exists():shutil.copy2(root/'analysis/status.json',previous)
    status={'updated_moscow':datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=3))).isoformat(),'game':'NHL 07 USA, Original Xbox','version':device['version'],'apk':apk,'device':device,'performance':performance,
        'current_apk_complete_match_verified':False,'historical_full_match':read(android/'analysis/localized-roster-complete-match.json'),
        'limitations':['No full three-period match verified on this exact RC APK','Other game modes, season save/load and 32-team dynasty scheduling remain unverified','Long Russian descriptions include an offline translation draft; speech and movies remain English','Direct ISO reading is not implemented; game data is imported once']}
    (root/'analysis/status.json').write_text(json.dumps(status,ensure_ascii=False,indent=2),encoding='utf-8')
    lines=['NHL 07 — RG477M — '+device['version'],'Обновлено: '+status['updated_moscow'],'',
        'Предрелизный APK: '+Path(device['prerelease_apk']).name,'SHA256: '+apk['sha256'],
        'Установлен на RG477M. Обновление сохраняет настройки, импортированные данные игры, составы и сохранения.','',
        'Изменения:',
        '• Исправлены квадраты после выхода из матча: обновлены все три архивные копии шрифтов и их индексы.',
        '• Шестерёнка открывает настоящие настройки поверх игры. Разрешение, пропорции, управление и расположение кнопок применяются без перезапуска.',
        '• При сворачивании игра остаётся на паузе; после возвращения восстанавливается окно с прежним игровым состоянием.',
        '• Добавлены FPS справа сверху, ограничение 60 FPS и запрос режима экрана 60 Гц.',
        '• Установлена иконка из присланного изображения; исходные пиксели сохранены.','',
        'Проверки точного RC APK:',*['• '+s for s in device['observed_scenarios']],
        'Точные сценарии, изображения и хеши: ../NHL07-android/analysis/prerelease-device-validation.json.','',
        'Производительность:',*performance['summary_ru'],
        'Измерения и ограничения: ../NHL07-android/analysis/prerelease-performance.json.','',
        'Обновление составов: Настройки → Составы команд → Управление → Обновить состав из ZIP.',
        'Поддерживаются совместимые Legacy EDGE ZIP для Xbox 360 и подготовленные пакеты NHL 07. Присланный ROSTER 20261007011552.zip совпадает с уже использованным источником.',
        'Игра один раз импортирует данные из выбранного ISO. Прямого чтения ISO во время игры пока нет; исходный образ не изменяется.','',
        'Ограничения:',*['• '+s for s in ['Полный матч на этом точном RC APK ещё не подтверждён. Исторический полный матч с новыми составами и русским текстом сохранён отдельно на APK 8651c384… с прежним ядром.','Остальные режимы, сохранение/загрузка сезонов и расписание династии на 32 клуба требуют проверки.','Озвучка и ролики английские; длинные русские описания требуют редакторской вычитки.']],
        'Исходные ISO/XBE, распаковка, references и sources/ сохранены без изменений.']
    for project in [root,android]:(project/'STATUS.txt').write_text('\n'.join(lines)+'\n',encoding='utf-8-sig')
    print(json.dumps({'prerelease':device['prerelease_apk'],'apk_sha256':apk['sha256'],'verified_scenarios':len(device['observed_scenarios'])},indent=2))
if __name__=='__main__':main()
