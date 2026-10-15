'use strict';
(() => {
 const $=id=>document.getElementById(id);
 const dictionary={
  ru:{mapping:'Назначение кнопок',mappingHint:'Отдельные раскладки для экрана и геймпада',configure:'Настроить',previewMapping:'Назначение кнопок доступно в APK.',islandLabel:'ВЫХОДИ НА АРЕНУ',edition:'NHL 07',play:'ИГРАТЬ',settings:'Настройки',import:'Выбрать ISO',footer:'ТВОЯ АРЕНА. ТВОЯ ПОБЕДА.',preferences:'ТВОЯ ИГРА',aspect:'Формат экрана',aspectHint:'Пропорции игрового изображения',original:'Исходные пропорции',resolution:'Внутреннее разрешение',resolutionHint:'Качество отрисовки игры',standard:'1× · 640 × 480',higher:'2× · 1280 × 960',highest:'3× · 1920 × 1440',touch:'Экранные кнопки',touchHint:'В режиме «Авто» скрыты с геймпадом',auto:'Авто',show:'Показывать',hide:'Скрывать',swap:'Поменять A/B и X/Y',swapHint:'Перестановка кнопок на геймпаде',language:'Язык',languageHint:'Язык приложения',saved:'Настройки сохранены',done:'Готово',help:'Добро пожаловать',helpImport:'Выберите ISO оригинальной USA-версии NHL 07. При импорте файлы игры копируются в приложение.',helpSaves:'После импорта исходный ISO больше не требуется. При обновлении APK выбранный образ, настройки и сохранения остаются доступны.',helpControls:'L1 — Black, R1 — White, L2/R2 — триггеры Xbox. Если буквы кнопок не совпадают, включите перестановку A/B и X/Y.',helpApply:'Настройки применяются при запуске. Сохранения хранятся отдельно от файлов игры. Импорт сохраняет предыдущие файлы.',ready:'Файлы игры готовы',missing:'Для запуска выберите ISO NHL 07 USA',checking:'Проверка выбранного ISO…',saveError:'Не удалось сохранить настройки. Повторите попытку.',shortOriginal:'Исходный формат',shortTouch:'Кнопки: ',shortAuto:'авто',shortShow:'вкл.',shortHide:'выкл.',previewImport:'В APK здесь открывается выбор ISO.',previewPlay:'Предпросмотр. Запуск игры доступен в APK.',close:'Закрыть',menu:'Меню'},
  en:{mapping:'Button assignments',mappingHint:'Separate touch and gamepad layouts',configure:'Configure',previewMapping:'Button assignments are available in the APK.',islandLabel:'ENTER THE ARENA',edition:'NHL 07',play:'PLAY',settings:'Settings',import:'Select ISO',footer:'YOUR ARENA. YOUR VICTORY.',preferences:'YOUR GAME',aspect:'Aspect ratio',aspectHint:'Proportions of the game image',original:'Original proportions',resolution:'Internal resolution',resolutionHint:'Game rendering quality',standard:'1× · 640 × 480',higher:'2× · 1280 × 960',highest:'3× · 1920 × 1440',touch:'Touch controls',touchHint:'Auto hides controls when a gamepad is connected',auto:'Auto',show:'Show',hide:'Hide',swap:'Swap A/B and X/Y',swapHint:'Switch the buttons on your gamepad',language:'Language',languageHint:'Launcher interface language',saved:'Settings saved',done:'Done',help:'Welcome to the arena',helpImport:'Select your original NHL 07 USA ISO. Game data is imported into the application.',helpSaves:'After import, the source ISO is no longer required. APK updates preserve the selected image, settings and saves.',helpControls:'L1 — Black, R1 — White, L2/R2 — Xbox triggers. If button labels differ, enable A/B and X/Y swapping.',helpApply:'Settings are also available during gameplay using ⚙. Game data is imported from your ISO once.',ready:'Game data ready',missing:'Select a NHL 07 USA ISO to play',checking:'Checking selected ISO…',saveError:'Could not save settings. Please try again.',shortOriginal:'Original aspect',shortTouch:'Controls: ',shortAuto:'auto',shortShow:'on',shortHide:'off',previewImport:'The APK opens the ISO picker here.',previewPlay:'Preview. Launching the game is available in the APK.',close:'Close',menu:'Menu'}
 };
 Object.assign(dictionary.ru,{rosters:'Составы команд',rosterHint:'Обновление из ZIP NHL Legacy',manage:'Управление',rosterDescription:'Выберите ZIP Legacy EDGE для Xbox 360 или пакет составов NHL 07. Лаунчер проверит и преобразует базу автоматически.',rosterImport:'Обновить состав из ZIP',rosterUseUpdate:'Включить обновление',rosterOriginal:'Исходные составы',rosterPrevious:'Вернуть предыдущий состав',rosterApply:'Для новых матчей после перезапуска игры. Сохранённые сезоны используют свои составы. Формы, арены и озвучка остаются из NHL 07.',rosterDefault:'Активны исходные составы NHL 07 · 2006–07',rosterActive:'Активный состав: ',rosterStored:'Сохранённое обновление: '});
 Object.assign(dictionary.en,{rosters:'Team rosters',rosterHint:'Update from NHL Legacy ZIP',manage:'Manage',rosterDescription:'Select a Legacy EDGE Xbox 360 ZIP or NHL 07 roster package. The launcher checks and converts the database automatically.',rosterImport:'Update roster from ZIP',rosterUseUpdate:'Enable update',rosterOriginal:'Original rosters',rosterPrevious:'Restore previous roster',rosterApply:'Applies to new matches after restarting the game. Saved seasons keep their own rosters. Uniforms, arenas and commentary remain from NHL 07.',rosterDefault:'Original NHL 07 rosters active · 2006–07',rosterActive:'Active roster: ',rosterStored:'Stored update: ',ready:'Game data ready',helpApply:'Settings apply at launch. Saves are stored separately. Import preserves previous game files.'});
 Object.assign(dictionary.ru,{language:'\u042f\u0437\u044b\u043a \u043b\u0430\u0443\u043d\u0447\u0435\u0440\u0430',gameLanguage:'\u042f\u0437\u044b\u043a \u0438\u0433\u0440\u044b',gameLanguageHint:'\u0422\u0435\u043a\u0441\u0442 \u043c\u0435\u043d\u044e \u0438 \u043f\u043e\u0434\u0441\u043a\u0430\u0437\u043e\u043a \u043f\u043e\u0441\u043b\u0435 \u043f\u0435\u0440\u0435\u0437\u0430\u043f\u0443\u0441\u043a\u0430'});
 Object.assign(dictionary.en,{language:'Launcher language',gameLanguage:'Game language',gameLanguageHint:'Menu and help text after restarting'});
 Object.assign(dictionary.ru,{graphics:'Видеодрайвер',graphicsHint:'Применяется после перезапуска игры',graphicsSystem:'Системный'});
 Object.assign(dictionary.en,{graphics:'Graphics driver',graphicsHint:'Applies after restarting the game',graphicsSystem:'System'});
 const bridge=window.AndroidLauncher;
 let state={language:'ru',gameLanguage:'en',graphicsBackend:0,graphicsAvailable:false,displayAspect:'source',resolution:0,touchControls:0,swapButtons:false,ready:false,busy:false,statusKind:'checking',message:'',progress:-1};
 let activeOverlay=null,lastFocus=null,toastTimer;
 if(bridge){try{state={...state,...JSON.parse(bridge.getState())}}catch(e){state.statusKind='error';state.message='Не удалось прочитать настройки / Could not read settings'}}
 else {try{state={...state,...JSON.parse(localStorage.getItem('nhl07-preview-settings')||'{}')}}catch(e){}state.ready=true;state.statusKind='ready';state.message=''}
 const t=key=>dictionary[state.language==='en'?'en':'ru'][key];
 function toast(message){$('toast').textContent=message;$('toast').hidden=false;clearTimeout(toastTimer);toastTimer=setTimeout(()=>$('toast').hidden=true,3400)}
 function render(){
  document.documentElement.lang=state.language==='en'?'en':'ru';
  document.querySelectorAll('[data-i18n]').forEach(el=>el.textContent=t(el.dataset.i18n));
  document.querySelector('nav').setAttribute('aria-label',t('menu'));
  $('helpOpen').setAttribute('aria-label',t('help'));
  for(const id of ['helpClose','settingsClose'])$(id).setAttribute('aria-label',t('close'));
  $('languageLabel').textContent=state.language==='en'?'EN':'RU';
  $('displayAspect').value=state.displayAspect;$('resolution').value=String(state.resolution);$('touchControls').value=String(state.touchControls);$('swapButtons').checked=state.swapButtons;$('language').value=state.language;
  $('gameLanguage').value=state.gameLanguage||'en';$('gameLanguage').disabled=state.busy;
  $('graphicsField').hidden=!state.graphicsAvailable;$('graphicsBackend').value=String(state.graphicsBackend);$('graphicsBackend').disabled=state.busy;
  $('play').disabled=!state.ready||state.busy;
  $('rosterCurrent').textContent=state.hasRoster&&state.rosterEnabled?t('rosterActive')+state.rosterLabel+(state.rosterDate?' · '+state.rosterDate:''):t('rosterDefault')+(state.hasRoster?'\n'+t('rosterStored')+state.rosterLabel:'');
  $('rosterImport').disabled=state.busy||!state.ready;$('rosterOriginal').disabled=state.busy||!state.hasRoster||!state.rosterEnabled;
  $('rosterUseUpdate').disabled=state.busy||!state.hasRoster||state.rosterEnabled;$('rosterPrevious').disabled=state.busy||!state.hasPreviousRoster;
  $('rosterStatus').textContent=state.message||'';
  for(const id of ['import','languageQuick','settingsOpen','mappingOpen','displayAspect','resolution','touchControls','swapButtons','language'])$(id).disabled=state.busy;
  const kind=state.busy?'busy':state.statusKind;
  $('statusDot').className='status-dot '+(kind==='ready'?'ready':kind==='error'?'error':kind==='busy'||kind==='checking'?'busy':'');
  $('status').textContent=state.message||t(state.statusKind==='ready'?'ready':state.statusKind==='checking'?'checking':'missing');
  $('progressTrack').hidden=!state.busy||state.progress<0;
  $('progressFill').style.width=Math.min(100,Math.max(0,state.progress))+'%';
  const aspect=state.displayAspect==='source'?t('shortOriginal'):state.displayAspect;
  $('summary').replaceChildren(document.createTextNode(aspect),separator(),document.createTextNode(['1× · 640 × 480','2× · 1280 × 960','3× · 1920 × 1440'][state.resolution]||'1× · 640 × 480'),separator(),document.createTextNode(t('shortTouch')+t(['shortAuto','shortShow','shortHide'][state.touchControls]||'shortAuto')));
 }
 function separator(){const el=document.createElement('b');el.textContent='·';return el}
 function save(next){
  const old={...state};state={...state,...next};
  const settings={displayAspect:state.displayAspect,language:state.language,gameLanguage:state.gameLanguage,graphicsBackend:state.graphicsBackend,resolution:state.resolution,touchControls:state.touchControls,swapButtons:state.swapButtons};
  let success=false;
  try{if(bridge)success=bridge.saveSettings(JSON.stringify(settings));else{localStorage.setItem('nhl07-preview-settings',JSON.stringify(settings));success=true}}catch(e){}
  if(!success){state=old;toast(t('saveError'))}
  render();return success;
 }
 function openOverlay(id){if(state.busy)return;lastFocus=document.activeElement;activeOverlay=$(id);activeOverlay.hidden=false;document.querySelector('.app').setAttribute('aria-hidden','true');document.querySelector('.app').inert=true;activeOverlay.querySelector('.close-button').focus()}
 function closeOverlay(){if(!activeOverlay)return false;activeOverlay.hidden=true;activeOverlay=null;document.querySelector('.app').removeAttribute('aria-hidden');document.querySelector('.app').inert=false;if(lastFocus&&lastFocus.isConnected)lastFocus.focus();return true}
 window.handleBack=()=>state.busy?true:closeOverlay();
 window.activateGamepadSelection=()=>{
  let el=document.activeElement;
  if(!el||el===document.body||!['BUTTON','SELECT','INPUT'].includes(el.tagName))el=activeOverlay?activeOverlay.querySelector('.close-button'):$(state.ready?'play':'import');
  if(el&&!el.disabled){el.focus();el.click()}
 };
 window.receiveNativeState=next=>{state={...state,...next};render()};
 $('settingsOpen').addEventListener('click',()=>openOverlay('settingsOverlay'));
 $('rostersOpen').addEventListener('click',()=>{if(state.busy)return;closeOverlay();openOverlay('rostersOverlay')});
 $('rosterImport').addEventListener('click',()=>{if(!state.busy&&bridge)bridge.importRoster()});
 $('rosterOriginal').addEventListener('click',()=>{if(!state.busy&&bridge)bridge.selectRoster(false)});
 $('rosterUseUpdate').addEventListener('click',()=>{if(!state.busy&&bridge)bridge.selectRoster(true)});
 $('rosterPrevious').addEventListener('click',()=>{if(!state.busy&&bridge)bridge.restoreRoster()});
 ['rostersClose','rostersDone'].forEach(id=>$(id).addEventListener('click',()=>{if(!state.busy)closeOverlay()}));
 $('mappingOpen').addEventListener('click',()=>{if(state.busy||!save({}))return;if(bridge)bridge.openControls();else toast(t('previewMapping'))});
 $('helpOpen').addEventListener('click',()=>openOverlay('helpOverlay'));
 ['settingsClose','settingsDone','helpClose','helpDone'].forEach(id=>$(id).addEventListener('click',closeOverlay));
 ['settingsOverlay','helpOverlay'].forEach(id=>$(id).addEventListener('click',event=>{if(event.target===$(id))closeOverlay()}));
 ['displayAspect','resolution','touchControls','swapButtons','language','gameLanguage','graphicsBackend'].forEach(key=>$(key).addEventListener('change',()=>save({[key]:key==='swapButtons'?$(key).checked:['resolution','touchControls','graphicsBackend'].includes(key)?Number($(key).value):$(key).value})));
 $('languageQuick').addEventListener('click',()=>save({language:state.language==='en'?'ru':'en'}));
 $('play').addEventListener('click',()=>{if(!state.ready||state.busy||!save({}))return;if(bridge)bridge.play();else toast(t('previewPlay'))});
 $('import').addEventListener('click',()=>{if(state.busy||!save({}))return;if(bridge)bridge.importDisc();else toast(t('previewImport'))});
 document.addEventListener('keydown',event=>{
  if(event.key==='Escape'){if(closeOverlay())event.preventDefault();return}
  if(event.key==='Tab'&&activeOverlay){const focusable=Array.from(activeOverlay.querySelectorAll('button,select,input')).filter(el=>!el.disabled);const first=focusable[0],last=focusable[focusable.length-1];if(event.shiftKey&&document.activeElement===first){last.focus();event.preventDefault()}else if(!event.shiftKey&&document.activeElement===last){first.focus();event.preventDefault()}}
  if(['ArrowDown','ArrowUp','ArrowLeft','ArrowRight'].includes(event.key)&&document.activeElement.tagName!=='SELECT'){
   const root=activeOverlay||document.querySelector('.app');const items=Array.from(root.querySelectorAll('button,select,input')).filter(el=>!el.disabled&&el.getClientRects().length);const index=items.indexOf(document.activeElement);const direction=event.key==='ArrowUp'||event.key==='ArrowLeft'?-1:1;if(items.length){items[(index+direction+items.length)%items.length].focus();event.preventDefault()}
  }
 });
 render();
})();
