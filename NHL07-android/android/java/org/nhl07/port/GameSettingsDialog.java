package org.nhl07.port;
import android.app.Dialog;
import android.content.SharedPreferences;
import android.graphics.Color;
import android.view.*;
import android.widget.*;

/** Settings share the game window, so opening them cannot destroy its Surface. */
final class GameSettingsDialog extends Dialog {
    interface Closed {void close(boolean editLayout);}
    private final MainActivity activity;private final SharedPreferences preferences;private final Closed closed;
    private LinearLayout root,rows;private TextView status;private boolean english,building,mapping,editLayout;
    GameSettingsDialog(MainActivity a,Closed listener){super(a,android.R.style.Theme_Material_NoActionBar);activity=a;closed=listener;preferences=a.getSharedPreferences("controls",0);setOnDismissListener(d->closed.close(editLayout));}
    private int dp(float v){return Math.round(v*getContext().getResources().getDisplayMetrics().density);}
    private String text(String ru,String en){return english?en:ru;}
    private TextView label(String s,int size){TextView v=new TextView(getContext());v.setText(s);v.setTextColor(0xffeaf7ff);v.setTextSize(size);return v;}
    private Button button(String s){Button v=new Button(getContext());v.setText(s);v.setAllCaps(false);return v;}
    @Override public void show(){super.show();getWindow().addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);getWindow().setLayout(-1,-1);getWindow().getDecorView().setSystemUiVisibility(5894);build(false,false);}
    private void scaffold(String title){
        building=true;english="en".equals(preferences.getString("language","ru"));
        root=new LinearLayout(getContext());root.setOrientation(1);root.setPadding(dp(24),dp(16),dp(24),dp(12));root.setBackgroundColor(0xff071e30);root.addView(label(title,24));
        ScrollView scroll=new ScrollView(getContext());rows=new LinearLayout(getContext());rows.setOrientation(1);scroll.addView(rows);root.addView(scroll,new LinearLayout.LayoutParams(-1,0,1));setContentView(root);
    }
    private void footer(String title,Runnable action){LinearLayout footer=new LinearLayout(getContext());footer.setGravity(Gravity.CENTER_VERTICAL);status=label(text("Настройки сохраняются автоматически","Settings save automatically"),12);footer.addView(status,new LinearLayout.LayoutParams(0,dp(54),1));Button done=button(title);footer.addView(done,new LinearLayout.LayoutParams(dp(220),dp(54)));done.setOnClickListener(v->action.run());root.addView(footer);building=false;}
    private boolean save(SharedPreferences.Editor e){boolean ok=e.commit();if(status!=null)status.setText(ok?text("Сохранено","Saved"):text("Ошибка сохранения","Save failed"));return ok;}
    private interface Selection {void change(int position);}
    private void choice(String title,String[] values,int initial,Selection listener){
        LinearLayout row=new LinearLayout(getContext());row.setGravity(Gravity.CENTER_VERTICAL);TextView name=label(title,15);name.setGravity(Gravity.CENTER_VERTICAL);row.addView(name,new LinearLayout.LayoutParams(0,dp(58),1));
        Spinner select=new Spinner(getContext());select.setContentDescription(title);ArrayAdapter<String> adapter=new ArrayAdapter<>(getContext(),android.R.layout.simple_spinner_item,values);adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);select.setAdapter(adapter);select.setSelection(Math.max(0,Math.min(values.length-1,initial)));row.addView(select,new LinearLayout.LayoutParams(0,dp(58),1));rows.addView(row);
        select.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener(){int previous=initial;public void onNothingSelected(AdapterView<?> p){}public void onItemSelected(AdapterView<?> p,View v,int position,long id){if(building||position==previous)return;previous=position;listener.change(position);}});
    }
    private void action(String title,Runnable callback){Button b=button(title);rows.addView(b,new LinearLayout.LayoutParams(-1,dp(54)));b.setOnClickListener(v->callback.run());}
    private void build(boolean assignments,boolean pad){
        english="en".equals(preferences.getString("language","ru"));mapping=assignments;scaffold(text(assignments?"Назначение кнопок":"Настройки во время игры",assignments?"Button assignments":"In-game settings"));
        if(assignments){
            choice(text("Устройство","Device"),new String[]{text("Экранные кнопки","Touch controls"),text("Геймпад","Gamepad")},pad?1:0,p->build(true,p==1));
            String[] names={"↑","↓","←","→","Start","Select","L3","R3","A","B","X","Y","L1","R1","L2","R2"};
            String[] actions=english?new String[]{"Disabled","D-pad ↑","D-pad ↓","D-pad ←","D-pad →","Start · pause","Back","Left stick click","Right stick click","A","B","X","Y","Black","White","Left trigger (LT)","Right trigger (RT)","Game menu ≡"}:new String[]{"Не назначено","Крестовина ↑","Крестовина ↓","Крестовина ←","Крестовина →","Start · пауза","Back","Нажатие левого стика","Нажатие правого стика","A","B","X","Y","Black","White","Левый триггер (LT)","Правый триггер (RT)","Меню игры ≡"};
            int[] values=ControlPreferences.load(preferences,pad);
            for(int s:new int[]{8,9,10,11,12,13,14,15,4,5,6,7,0,1,2,3}){final int slot=s;choice(names[s],actions,values[s],p->{boolean ok=ControlPreferences.save(preferences,pad,slot,p);status.setText(ok?text("Сохранено","Saved"):text("Ошибка сохранения","Save failed"));});}
            action(text("Сбросить назначения","Reset assignments"),()->{ControlPreferences.reset(preferences,pad);build(true,pad);});footer(text("Готово","Done"),()->build(false,false));return;
        }
        TextView hint=label(text("Игра на паузе. Управление и формат экрана применятся при возвращении. Язык игры — при следующем запуске.","Game paused. Controls and aspect ratio apply on return. Game language applies on the next launch."),13);hint.setPadding(0,dp(10),0,dp(12));rows.addView(hint);
        choice(text("Внутреннее разрешение","Internal resolution"),new String[]{"1× · 640 × 480","2× · 1280 × 960","3× · 1920 × 1440"},preferences.getInt("resolution",0),p->save(preferences.edit().putInt("resolution",p)));
        if(GraphicsDrivers.available(activity))choice(text("Видеодрайвер · после перезапуска","Graphics driver · next launch"),new String[]{text("Системный","System"),"Turnip V32 · Adreno"},GraphicsDrivers.selected(preferences.getInt("graphicsBackend",0))==2?1:0,p->save(preferences.edit().putInt("graphicsBackend",p==1?2:0)));
        String aspect=LauncherActivity.savedAspect(preferences);choice(text("Формат изображения","Aspect ratio"),new String[]{text("Исходные пропорции","Original proportions"),"4:3","16:9"},"16:9".equals(aspect)?2:"4:3".equals(aspect)?1:0,p->save(preferences.edit().putString("displayAspect",new String[]{"source","4:3","16:9"}[p])));
        choice(text("Экранные кнопки","Touch controls"),new String[]{text("Авто — скрывать с геймпадом","Auto — hide with gamepad"),text("Показывать","Show"),text("Скрывать","Hide")},preferences.getInt("touchControls",0),p->save(preferences.edit().putInt("touchControls",p)));
        CheckBox swap=new CheckBox(getContext());swap.setText(text("Поменять A/B и X/Y на геймпаде","Swap gamepad A/B and X/Y"));swap.setTextColor(Color.WHITE);swap.setChecked(preferences.getBoolean("swapButtons",false));rows.addView(swap,new LinearLayout.LayoutParams(-1,dp(56)));swap.setOnCheckedChangeListener((v,on)->save(preferences.edit().putBoolean("swapButtons",on)));
        choice(text("Язык приложения","App language"),new String[]{"Русский","English"},english?1:0,p->{if(save(preferences.edit().putString("language",p==1?"en":"ru")))build(false,false);});
        choice(text("Язык игры · после перезапуска","Game language · next launch"),new String[]{"English","Русский"},"ru".equals(preferences.getString("gameLanguage","en"))?1:0,p->save(preferences.edit().putString("gameLanguage",p==1?"ru":"en")));
        action(text("Назначение кнопок экрана и геймпада","Touch and gamepad button assignments"),()->build(true,false));
        action(text("Расположение экранных элементов","Touch control positions"),()->{editLayout=true;dismiss();});
        TextView roster=label(text("Составы команд обновляются в лаунчере после выхода из игры.","Update rosters in the launcher after exiting the game."),13);roster.setPadding(0,dp(12),0,dp(12));rows.addView(roster);
        footer(text("Продолжить игру","Resume game"),this::dismiss);
    }
    @Override public void onBackPressed(){if(mapping)build(false,false);else dismiss();}
    @Override public boolean dispatchKeyEvent(KeyEvent e){int code=e.getKeyCode();if(code==KeyEvent.KEYCODE_BUTTON_B){if(e.getAction()==KeyEvent.ACTION_UP)onBackPressed();return true;}if(code==KeyEvent.KEYCODE_BUTTON_A)return super.dispatchKeyEvent(new KeyEvent(e.getDownTime(),e.getEventTime(),e.getAction(),KeyEvent.KEYCODE_DPAD_CENTER,e.getRepeatCount(),e.getMetaState(),e.getDeviceId(),e.getScanCode(),e.getFlags(),e.getSource()));return super.dispatchKeyEvent(e);}
}
