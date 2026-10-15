package org.nhl07.port;
import android.app.Activity;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.TextView;

/** Edit the persistent overlay without starting or interrupting a match. */
public final class TouchLayoutActivity extends Activity {
    private TouchControlsView controls;
    @Override public void onCreate(Bundle saved){
        super.onCreate(saved);getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN|WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        FrameLayout root=new FrameLayout(this);root.setBackgroundColor(0xff092e45);
        TextView title=new TextView(this);title.setText(getSharedPreferences("controls",MODE_PRIVATE).getString("language","ru").equals("en")?"Touch layout · Drag controls, then save":"Расположение кнопок · Переместите элементы и сохраните");title.setTextColor(0xffd9f5ff);title.setTextSize(16);title.setPadding(24,20,24,20);root.addView(title);
        controls=new TouchControlsView(this,new TouchControlsView.Listener(){public void input(int d,int a,float x,float y,float z,float w){}public void reset(){}public void menu(){}public void settings(){}public void editing(boolean active){if(!active)finish();}});
        controls.setBindings(ControlPreferences.load(getSharedPreferences("controls",MODE_PRIVATE),false));root.addView(controls);setContentView(root);controls.post(()->controls.beginEditing());getWindow().getDecorView().setSystemUiVisibility(5894);
    }
    @Override public void onBackPressed(){controls.cancelEditing();}
    @Override public boolean dispatchKeyEvent(KeyEvent event){if(event.getKeyCode()==KeyEvent.KEYCODE_BUTTON_A){if(event.getAction()==KeyEvent.ACTION_UP)controls.saveEditing();return true;}if(event.getKeyCode()==KeyEvent.KEYCODE_BUTTON_B){if(event.getAction()==KeyEvent.ACTION_UP)controls.cancelEditing();return true;}return super.dispatchKeyEvent(event);}
}
