package org.nhl07.port;
import android.app.Activity;
import android.content.SharedPreferences;
import android.hardware.input.InputManager;
import android.os.Bundle;
import android.app.AlertDialog;
import android.graphics.Color;
import java.util.Locale;
import android.view.*;
import android.widget.*;
import java.io.File;

/** Original native game surface, with persistent Android input preferences. */
public final class MainActivity extends Activity implements SurfaceHolder.Callback,InputManager.InputDeviceListener {
    static{System.loadLibrary("nhl07_core");}
    private static native int runGame(Surface surface,String directory,String saves,int seconds);
    private static native void configureDisplay(int scale,int aspect);
    private static native void configureRoster(boolean enabled);
    private static native void configureGameLanguage(boolean russian);
    private static native void configureGraphicsBackend(int mode,String libraryDirectory,String driverDirectory);
    private static native int nativeConsumeBackendFailure();
    private static native float nativeGetFps();
    private static native void nativePause(boolean paused);
    private static native void nativeReplaceSurface(Surface surface);
    private static native boolean nativeSuspendSurface();
    private static native int nativeConsumeDisplayFailure();
    private static native void updateController(boolean present,int buttons,int[] analog,int[] axes);
    private View surface;private SurfaceView surfaceView;private PersistentGameTextureView persistentSurface;private Surface gameSurface;private TouchControlsView touch;private InputManager input;private File data;
    private boolean started,russian,rosterEnabled,resumed,surfaceReady,menuPulse;private int menuPulseGeneration;private int controller=-1,hat,touchDigital,touchAnalog,touchMode;
    private AlertDialog gameMenu;private GameSettingsDialog settings;
    private TextView fpsView;
    private final android.os.Handler handler=new android.os.Handler(android.os.Looper.getMainLooper());
    private final Runnable fpsUpdate=new Runnable(){public void run(){if(fpsView==null)return;float fps=nativeGetFps();fpsView.setText(fps>0?String.format(Locale.US,"%.0f FPS",fps):"-- FPS");int retained=nativeConsumeDisplayFailure();if(retained!=0){getSharedPreferences("controls",MODE_PRIVATE).edit().putInt("resolution",retained-1).commit();Toast.makeText(MainActivity.this,text("Не удалось изменить разрешение. Сохранено прежнее.","Could not change resolution. Previous resolution retained."),Toast.LENGTH_LONG).show();}int failedBackend=nativeConsumeBackendFailure();if(failedBackend!=0){getSharedPreferences("controls",MODE_PRIVATE).edit().putInt("graphicsBackend",0).commit();Toast.makeText(MainActivity.this,text("\u0412\u0438\u0434\u0435\u043e\u0434\u0440\u0430\u0439\u0432\u0435\u0440 \u043d\u0435 \u0437\u0430\u043f\u0443\u0441\u0442\u0438\u043b\u0441\u044f. \u0412\u043a\u043b\u044e\u0447\u0451\u043d \u0441\u0438\u0441\u0442\u0435\u043c\u043d\u044b\u0439.","Graphics driver could not start. Using system graphics."),Toast.LENGTH_LONG).show();}handler.postDelayed(this,500);}};
    private boolean english(){return "en".equals(getSharedPreferences("controls",MODE_PRIVATE).getString("language","ru"));}
    private String text(String ru,String en){return english()?en:ru;}
    private int[] bindings;private final boolean[] keys=new boolean[16];
    private final int[] padAxes=new int[4],touchAxes=new int[4],triggers=new int[2];
    @Override public void onCreate(Bundle state){
        super.onCreate(state);getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON|WindowManager.LayoutParams.FLAG_FULLSCREEN);
        SharedPreferences p=getSharedPreferences("controls",MODE_PRIVATE);bindings=ControlPreferences.load(p,true);touchMode=p.getInt("touchControls",0);
        rosterEnabled=p.getBoolean("rosterEnabled",true)&&RosterStore.installed(this);configureRoster(rosterEnabled);
        russian="ru".equals(p.getString("gameLanguage","en"));configureGameLanguage(russian);
        String aspect=LauncherActivity.savedAspect(p);configureDisplay(Math.max(1,Math.min(3,p.getInt("resolution",0)+1)),aspect.equals("16:9")?2:aspect.equals("4:3")?1:0);
        data=getExternalFilesDir(null);FrameLayout frame=new FrameLayout(this);
        if(GraphicsDrivers.available(this)&&GraphicsDrivers.selected(p.getInt("graphicsBackend",0))==2){
            persistentSurface=new PersistentGameTextureView(this);surface=persistentSurface;
            persistentSurface.setCallback(new PersistentGameTextureView.Callback(){
                public void onSurfaceReady(Surface value,boolean reused){gameSurface=value;surfaceReady=true;if(!started)startGame();updatePause();}
                public void onSurfaceUnavailable(){surfaceReady=false;updatePause();if(started&&isFinishing())android.os.Process.killProcess(android.os.Process.myPid());}
            });
        }else{surfaceView=new SurfaceView(this);surface=surfaceView;surfaceView.getHolder().addCallback(this);}
        frame.addView(surface);
        touch=new TouchControlsView(this,new TouchControlsView.Listener(){
            public void input(int digital,int analog,float lx,float ly,float rx,float ry){touchDigital=digital;touchAnalog=analog;touchAxes[0]=stick(lx);touchAxes[1]=stick(ly);touchAxes[2]=stick(rx);touchAxes[3]=stick(ry);publish();}
            public void reset(){touchDigital=touchAnalog=0;java.util.Arrays.fill(touchAxes,0);publish();}
            public void menu(){showGameMenu();}public void settings(){openSettings();}public void editing(boolean active){updatePause();if(fpsView!=null)fpsView.setVisibility(active?View.GONE:View.VISIBLE);}
        });touch.setBindings(ControlPreferences.load(p,false));frame.addView(touch);setContentView(frame);
        int margin=Math.round(6*getResources().getDisplayMetrics().density);fpsView=new TextView(this);fpsView.setTextColor(Color.WHITE);fpsView.setTextSize(12);fpsView.setShadowLayer(2,1,1,Color.BLACK);fpsView.setPadding(margin,margin,margin,margin);fpsView.setBackgroundColor(0x66000000);fpsView.setFocusable(false);fpsView.setClickable(false);fpsView.setText("-- FPS");
        FrameLayout.LayoutParams fp=new FrameLayout.LayoutParams(-2,-2,Gravity.TOP|Gravity.RIGHT);fp.setMargins(margin,margin,margin,margin);frame.addView(fpsView,fp);
        input=(InputManager)getSystemService(INPUT_SERVICE);input.registerInputDeviceListener(this,null);refreshController();immersive();
        request60Hz();
    }
    private void refreshController(){
        int found=-1;for(int id:InputDevice.getDeviceIds()){InputDevice d=InputDevice.getDevice(id);if(d!=null&&!d.isVirtual()&&((d.getSources()&InputDevice.SOURCE_GAMEPAD)==InputDevice.SOURCE_GAMEPAD||(d.getSources()&InputDevice.SOURCE_JOYSTICK)==InputDevice.SOURCE_JOYSTICK)){found=id;break;}}
        if(controller!=found){controller=found;java.util.Arrays.fill(keys,false);java.util.Arrays.fill(padAxes,0);java.util.Arrays.fill(triggers,0);hat=0;}
        if(touch!=null)touch.setControlsVisible(touchMode==1||(touchMode==0&&controller<0));publish();
        android.util.Log.i("NHL07-INPUT","Controller id="+controller+(controller>=0?" name="+InputDevice.getDevice(controller).getName():""));
    }
    private void publish(){
        if(bindings==null)return;
        if(gameMenu!=null||settings!=null||(touch!=null&&touch.isEditing())||!resumed){updateController(controller>=0||touchMode!=2,0,new int[8],new int[4]);return;}
        int digital=touchDigital|(menuPulse?16:0);int[] analog=new int[8],axes=new int[4];
        for(int i=0;i<8;i++)if((touchAnalog&(1<<i))!=0)analog[i]=255;
        for(int s=0;s<16;s++){
            int pressure=keys[s]||(s<4&&(hat&(1<<s))!=0)?255:0;if(s>=14)pressure=Math.max(pressure,triggers[s-14]);
            int action=bindings[s];if(pressure==0)continue;digital|=ControlBindings.digital(action);
            int mask=ControlBindings.analog(action);for(int i=0;i<8;i++)if((mask&(1<<i))!=0)analog[i]=Math.max(analog[i],pressure);
        }
        for(int i=0;i<4;i++)axes[i]=Math.abs(touchAxes[i])>Math.abs(padAxes[i])?touchAxes[i]:padAxes[i];
        updateController(controller>=0||touchMode!=2,digital,analog,axes);
    }
    private void pulseStart(){menuPulse=true;int generation=++menuPulseGeneration;publish();surface.postDelayed(()->{if(generation==menuPulseGeneration){menuPulse=false;publish();}},250);}
    private static int slot(int c){switch(c){case KeyEvent.KEYCODE_DPAD_UP:return 0;case KeyEvent.KEYCODE_DPAD_DOWN:return 1;case KeyEvent.KEYCODE_DPAD_LEFT:return 2;case KeyEvent.KEYCODE_DPAD_RIGHT:return 3;case KeyEvent.KEYCODE_BUTTON_START:return 4;case KeyEvent.KEYCODE_BUTTON_SELECT:return 5;case KeyEvent.KEYCODE_BUTTON_THUMBL:return 6;case KeyEvent.KEYCODE_BUTTON_THUMBR:return 7;case KeyEvent.KEYCODE_BUTTON_A:return 8;case KeyEvent.KEYCODE_BUTTON_B:return 9;case KeyEvent.KEYCODE_BUTTON_X:return 10;case KeyEvent.KEYCODE_BUTTON_Y:return 11;case KeyEvent.KEYCODE_BUTTON_L1:return 12;case KeyEvent.KEYCODE_BUTTON_R1:return 13;case KeyEvent.KEYCODE_BUTTON_L2:return 14;case KeyEvent.KEYCODE_BUTTON_R2:return 15;default:return -1;}}
    @Override public boolean dispatchKeyEvent(KeyEvent event){
        int code=event.getKeyCode();boolean down=event.getAction()==KeyEvent.ACTION_DOWN;
        if(code==KeyEvent.KEYCODE_BACK){if(down&&event.getRepeatCount()==0)onBackPressed();return true;}
        if(touch!=null&&touch.isEditing()){
            if(down&&event.getRepeatCount()==0){if(code==KeyEvent.KEYCODE_BUTTON_SELECT)touch.cancelEditing();else if(code==KeyEvent.KEYCODE_BUTTON_START)touch.saveEditing();}
            if(slot(code)>=0)return true;
        }
        if(event.getDeviceId()!=controller)return super.dispatchKeyEvent(event);int s=slot(event.getKeyCode());if(s<0)return super.dispatchKeyEvent(event);
        if(bindings[s]==ControlBindings.MENU){if(down&&!keys[s]&&event.getRepeatCount()==0)showGameMenu();keys[s]=down;return true;}
        keys[s]=down;publish();return true;
    }
    private static int stick(float v){return Math.max(-32768,Math.min(32767,Math.round(v*32767)));}
    @Override public boolean onGenericMotionEvent(MotionEvent e){
        if(e.getDeviceId()!=controller||e.getAction()!=MotionEvent.ACTION_MOVE)return super.onGenericMotionEvent(e);
        padAxes[0]=stick(e.getAxisValue(MotionEvent.AXIS_X));padAxes[1]=stick(-e.getAxisValue(MotionEvent.AXIS_Y));padAxes[2]=stick(e.getAxisValue(MotionEvent.AXIS_Z));padAxes[3]=stick(-e.getAxisValue(MotionEvent.AXIS_RZ));
        for(int i=0;i<2;i++){int value=Math.round(255*Math.max(e.getAxisValue(i==0?MotionEvent.AXIS_LTRIGGER:MotionEvent.AXIS_RTRIGGER),e.getAxisValue(i==0?MotionEvent.AXIS_BRAKE:MotionEvent.AXIS_GAS)));if(value>127&&triggers[i]<=127&&!keys[14+i]&&bindings[14+i]==ControlBindings.MENU)showGameMenu();triggers[i]=value;}
        float x=e.getAxisValue(MotionEvent.AXIS_HAT_X),y=e.getAxisValue(MotionEvent.AXIS_HAT_Y);hat=(y<-.5f?1:0)|(y>.5f?2:0)|(x<-.5f?4:0)|(x>.5f?8:0);publish();return true;
    }
    private void startGame(){
        if(started||gameSurface==null||!gameSurface.isValid())return;
        if(data==null||!new File(data,"default.xbe").isFile()||!new File(data,"disc/rms/rms.viv").isFile()){Toast.makeText(this,"Выберите ISO в лаунчере / Select ISO in the launcher",Toast.LENGTH_LONG).show();finish();return;}
        started=true;new Thread(()->{int seconds=getIntent().getBooleanExtra("probe",false)?Math.max(30,Math.min(1800,getIntent().getIntExtra("probe_seconds",30))):0;
            int graphics=GraphicsDrivers.available(this)?GraphicsDrivers.selected(getSharedPreferences("controls",MODE_PRIVATE).getInt("graphicsBackend",0)):0;String driver="";
            try{driver=GraphicsDrivers.prepare(this,graphics);}catch(Exception failure){
                android.util.Log.e("NHL07Backend","Driver preparation failed",failure);graphics=0;
                getSharedPreferences("controls",MODE_PRIVATE).edit().putInt("graphicsBackend",0).commit();
                runOnUiThread(()->Toast.makeText(this,text("Видеодрайвер не подготовлен. Включён системный.","Could not prepare graphics driver. Using system graphics."),Toast.LENGTH_LONG).show());
            }
            configureGraphicsBackend(graphics,getApplicationInfo().nativeLibraryDir,driver);
            if(russian)try{GameLocalization.prepare(this,rosterEnabled);}catch(Exception error){runOnUiThread(()->{Toast.makeText(this,"Не удалось подготовить русский текст: "+error.getMessage(),Toast.LENGTH_LONG).show();finish();});return;}
            runGame(gameSurface,data.getAbsolutePath(),new File(getFilesDir(),"saves").getAbsolutePath(),seconds);runOnUiThread(()->finish());},"NHL07").start();
    }
    @Override public void surfaceCreated(SurfaceHolder h){gameSurface=h.getSurface();surfaceReady=true;if(started)nativeReplaceSurface(h.getSurface());else startGame();updatePause();}
    @Override public void surfaceChanged(SurfaceHolder h,int format,int width,int height){}
    @Override public void surfaceDestroyed(SurfaceHolder h){surfaceReady=false;updatePause();if(started&&isFinishing())android.os.Process.killProcess(android.os.Process.myPid());}
    @Override public void onInputDeviceAdded(int id){refreshController();}@Override public void onInputDeviceRemoved(int id){refreshController();}@Override public void onInputDeviceChanged(int id){refreshController();}
    private void immersive(){getWindow().getDecorView().setSystemUiVisibility(5894);}
    private void request60Hz(){Display d=getWindowManager().getDefaultDisplay();Display.Mode current=d.getMode(),best=null;float difference=2;for(Display.Mode mode:d.getSupportedModes()){float delta=Math.abs(mode.getRefreshRate()-60);if(mode.getPhysicalWidth()==current.getPhysicalWidth()&&mode.getPhysicalHeight()==current.getPhysicalHeight()&&delta<difference){best=mode;difference=delta;}}WindowManager.LayoutParams p=getWindow().getAttributes();p.preferredRefreshRate=60;if(best!=null)p.preferredDisplayModeId=best.getModeId();getWindow().setAttributes(p);}
    @Override public void onWindowFocusChanged(boolean focused){super.onWindowFocusChanged(focused);if(focused)immersive();}
    private void clearInput(){menuPulse=false;++menuPulseGeneration;java.util.Arrays.fill(keys,false);java.util.Arrays.fill(padAxes,0);java.util.Arrays.fill(triggers,0);hat=0;if(touch!=null)touch.clear();publish();}
    private void updatePause(){nativePause(!resumed||!surfaceReady||gameMenu!=null||settings!=null||(touch!=null&&touch.isEditing()));publish();}
    private void reloadControls(){SharedPreferences p=getSharedPreferences("controls",MODE_PRIVATE);bindings=ControlPreferences.load(p,true);touchMode=p.getInt("touchControls",0);touch.setBindings(ControlPreferences.load(p,false));touch.setLanguage(english());String aspect=LauncherActivity.savedAspect(p);configureDisplay(p.getInt("resolution",0)+1,"16:9".equals(aspect)?2:"4:3".equals(aspect)?1:0);refreshController();clearInput();}
    private void openSettings(){
        if(isFinishing()||settings!=null)return;if(touch.isEditing())touch.cancelEditing();clearInput();
        settings=new GameSettingsDialog(this,edit->{settings=null;reloadControls();if(edit)touch.beginEditing();updatePause();immersive();});updatePause();settings.show();
    }
    private void showGameMenu(){
        if(isFinishing()||gameMenu!=null||settings!=null)return;if(touch.isEditing()){touch.cancelEditing();return;}clearInput();
        gameMenu=new AlertDialog.Builder(this).setTitle(text("Игра","Game")).setItems(english()?new String[]{"Resume game","Settings","Touch control positions","Return to app menu"}:new String[]{"Продолжить игру","Настройки","Расположение экранных элементов","Выйти в меню приложения"},(dialog,which)->{if(which==1)openSettings();else if(which==2)touch.beginEditing();else if(which==3)finish();}).create();
        gameMenu.setOnDismissListener(dialog->{gameMenu=null;clearInput();updatePause();});updatePause();gameMenu.show();
    }
    @Override public void onBackPressed(){if(touch!=null&&touch.isEditing())touch.cancelEditing();else showGameMenu();}
    @Override protected void onResume(){super.onResume();resumed=true;handler.removeCallbacks(fpsUpdate);handler.post(fpsUpdate);updatePause();}
    @Override protected void onPause(){resumed=false;handler.removeCallbacks(fpsUpdate);clearInput();updatePause();super.onPause();}
    @Override protected void onDestroy(){handler.removeCallbacksAndMessages(null);fpsView=null;if(persistentSurface!=null&&started&&isFinishing())android.os.Process.killProcess(android.os.Process.myPid());if(input!=null)input.unregisterInputDeviceListener(this);super.onDestroy();}
}
