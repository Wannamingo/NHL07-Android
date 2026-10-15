package org.nhl07.port;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.WindowManager;
import android.webkit.JavascriptInterface;
import android.webkit.WebResourceRequest;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.Toast;
import java.io.File;
import java.util.Properties;
import org.json.JSONObject;

/** Offline launcher. Preferences are committed before starting the game. */
public final class LauncherActivity extends Activity {
    private static final String PAGE="file:///android_asset/launcher/index.html";
    private SharedPreferences preferences;
    private WebView web;
    private boolean loaded,destroyed;
    private volatile boolean busy;
    private volatile String message="";
    private volatile int progress=-1;
    static String savedAspect(SharedPreferences p){String v=p.getString("displayAspect","source");return v.equals("4:3")||v.equals("16:9")?v:"source";}
    private boolean english(){return "en".equals(preferences.getString("language","ru"));}
    private String text(String ru,String en){return english()?en:ru;}
    private boolean ready(){File root=getExternalFilesDir(null);return root!=null&&new File(root,"default.xbe").isFile()&&new File(root,"disc/rms/rms.viv").isFile();}
    @Override public void onCreate(Bundle state){
        super.onCreate(state);preferences=getSharedPreferences("controls",MODE_PRIVATE);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        web=new WebView(this);WebSettings s=web.getSettings();s.setJavaScriptEnabled(true);s.setDomStorageEnabled(false);
        s.setAllowFileAccess(false);s.setAllowContentAccess(false);s.setAllowFileAccessFromFileURLs(false);s.setAllowUniversalAccessFromFileURLs(false);
        s.setBlockNetworkLoads(true);s.setMixedContentMode(WebSettings.MIXED_CONTENT_NEVER_ALLOW);s.setUseWideViewPort(true);s.setLoadWithOverviewMode(true);
        web.addJavascriptInterface(new Bridge(),"AndroidLauncher");
        web.setWebViewClient(new WebViewClient(){
            @Override public boolean shouldOverrideUrlLoading(WebView v,WebResourceRequest r){return true;}
            @Override public boolean shouldOverrideUrlLoading(WebView v,String url){return true;}
            @Override public void onPageFinished(WebView v,String url){if(PAGE.equals(url)){loaded=true;push();}}
        });setContentView(web);web.loadUrl(PAGE);immersive();
    }
    private JSONObject state(){JSONObject v=new JSONObject();try{
        v.put("language",english()?"en":"ru");v.put("displayAspect",savedAspect(preferences));v.put("resolution",Math.max(0,Math.min(2,preferences.getInt("resolution",0))));
        v.put("gameLanguage","ru".equals(preferences.getString("gameLanguage","en"))?"ru":"en");
        v.put("graphicsAvailable",GraphicsDrivers.available(this));v.put("graphicsBackend",GraphicsDrivers.available(this)?GraphicsDrivers.selected(preferences.getInt("graphicsBackend",0)):0);
        v.put("touchControls",Math.max(0,Math.min(2,preferences.getInt("touchControls",0))));v.put("swapButtons",preferences.getBoolean("swapButtons",false));
        v.put("ready",ready());v.put("busy",busy);v.put("message",message);v.put("statusKind",ready()?"ready":"missing");v.put("progress",progress);
        Properties roster=RosterStore.info(this);v.put("hasRoster",RosterStore.installed(this));v.put("hasPreviousRoster",RosterStore.previous(this));
        v.put("rosterEnabled",preferences.getBoolean("rosterEnabled",true));v.put("rosterLabel",roster.getProperty("label",""));v.put("rosterDate",roster.getProperty("rosterDate",""));
    }catch(Exception ignored){}return v;}
    private void push(){if(loaded&&!destroyed)web.evaluateJavascript("window.receiveNativeState("+state()+");",null);}
    private final class Bridge {
        @JavascriptInterface public String getState(){return state().toString();}
        @JavascriptInterface public boolean saveSettings(String value){
            if(busy||value==null||value.length()>2048)return false;
            try{JSONObject v=new JSONObject(value);String aspect=v.getString("displayAspect"),language=v.getString("language"),gameLanguage=v.optString("gameLanguage","en");int resolution=v.getInt("resolution"),touch=v.getInt("touchControls");
                if(!(aspect.equals("source")||aspect.equals("4:3")||aspect.equals("16:9"))||!(language.equals("ru")||language.equals("en"))||resolution<0||resolution>2||touch<0||touch>2)return false;
                if(!(gameLanguage.equals("en")||gameLanguage.equals("ru")))return false;
                int graphics=v.optInt("graphicsBackend",0);if(graphics<0||graphics>2)return false;
                boolean ok=preferences.edit().putString("displayAspect",aspect).putString("language",language).putString("gameLanguage",gameLanguage).putInt("resolution",resolution).putInt("touchControls",touch).putBoolean("swapButtons",v.getBoolean("swapButtons")).putInt("graphicsBackend",graphics).commit();
                if(ok)runOnUiThread(()->push());return ok;
            }catch(Exception invalid){return false;}
        }
        @JavascriptInterface public void play(){runOnUiThread(()->{if(!busy&&ready())startActivity(new Intent(LauncherActivity.this,MainActivity.class));});}
        @JavascriptInterface public void openControls(){runOnUiThread(()->{if(!busy)startActivity(new Intent(LauncherActivity.this,ControlMappingActivity.class));});}
        @JavascriptInterface public void importDisc(){runOnUiThread(()->{
            if(busy)return;Intent i=new Intent(Intent.ACTION_OPEN_DOCUMENT).setType("*/*").addCategory(Intent.CATEGORY_OPENABLE).addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
            try{startActivityForResult(i,1);}catch(Exception error){message=text("Не удалось открыть выбор файла.","The file picker is unavailable.");push();}
        });}
        @JavascriptInterface public void importRoster(){runOnUiThread(()->{
            if(busy||!ready())return;Intent i=new Intent(Intent.ACTION_OPEN_DOCUMENT).setType("*/*").addCategory(Intent.CATEGORY_OPENABLE).addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
            try{RosterStore.gameStopped(LauncherActivity.this);startActivityForResult(i,2);}catch(Exception error){message=error.getMessage();push();}
        });}
        @JavascriptInterface public void selectRoster(boolean enabled){runOnUiThread(()->{
            if(busy)return;try{RosterStore.gameStopped(LauncherActivity.this);preferences.edit().putBoolean("rosterEnabled",enabled).commit();message=text("Состав применяется при следующем запуске.","Roster applies at the next launch.");}catch(Exception error){message=error.getMessage();}push();
        });}
        @JavascriptInterface public void restoreRoster(){runOnUiThread(()->{
            if(busy)return;busy=true;push();new Thread(()->{try{RosterStore.restorePrevious(LauncherActivity.this);message=text("Предыдущий состав восстановлен.","Previous roster restored.");}catch(Exception error){message=error.getMessage();}busy=false;runOnUiThread(()->push());},"NHL07-Roster-Restore").start();
        });}
    }
    @Override protected void onActivityResult(int request,int result,Intent intent){
        super.onActivityResult(request,result,intent);if((request!=1&&request!=2)||result!=RESULT_OK||intent==null||busy)return;Uri uri=intent.getData();if(uri==null)return;
        if(request==2){
            busy=true;message=text("Проверка и преобразование состава…","Checking and converting roster…");push();
            new Thread(()->{try{RosterPackage.Prepared p=RosterStore.install(this,uri);message=text("Состав установлен: ","Roster installed: ")+p.label+(p.players>0?" · "+p.players+text(" игроков"," players"):"");}catch(Exception error){message=text("Обновление не установлено: ","Update not installed: ")+error.getMessage();}busy=false;progress=-1;runOnUiThread(()->push());},"NHL07-Roster-Import").start();return;
        }
        busy=true;message=text("Проверка NHL 07 USA…","Checking NHL 07 USA…");push();
        new Thread(()->{
            try{DiscImporter.importIso(this,uri,(done,total)->{progress=(int)(done*100/Math.max(1,total));runOnUiThread(()->{message=text("Импорт файлов игры: ","Importing game data: ")+progress+"%";push();});});message=text("Файлы NHL 07 установлены.","NHL 07 game data installed.");}
            catch(Exception error){message=text("Импорт не завершён: ","Import failed: ")+error.getMessage();}
            busy=false;progress=-1;runOnUiThread(()->push());
        },"NHL07-Import").start();
    }
    private void immersive(){getWindow().getDecorView().setSystemUiVisibility(5894);}
    @Override protected void onResume(){super.onResume();preferences=getSharedPreferences("controls",MODE_PRIVATE|MODE_MULTI_PROCESS);if(web!=null)push();immersive();}
    @Override public void onWindowFocusChanged(boolean focus){super.onWindowFocusChanged(focus);if(focus)immersive();}
    @Override public void onBackPressed(){if(busy){Toast.makeText(this,text("Дождитесь завершения импорта.","Wait for the import to finish."),Toast.LENGTH_SHORT).show();return;}web.evaluateJavascript("window.handleBack&&window.handleBack()",result->{if(!"true".equals(result))finish();});}
    @Override public boolean dispatchKeyEvent(KeyEvent event){
        int code=event.getKeyCode();if(code==KeyEvent.KEYCODE_BUTTON_A){if(event.getAction()==KeyEvent.ACTION_UP)web.evaluateJavascript("window.activateGamepadSelection()",null);return true;}
        if(code==KeyEvent.KEYCODE_BUTTON_B){if(event.getAction()==KeyEvent.ACTION_UP)onBackPressed();return true;}return super.dispatchKeyEvent(event);
    }
    @Override protected void onDestroy(){destroyed=true;if(web!=null){web.removeJavascriptInterface("AndroidLauncher");web.destroy();}super.onDestroy();}
}
