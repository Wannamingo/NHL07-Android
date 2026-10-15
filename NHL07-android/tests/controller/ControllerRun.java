package org.nhl07.test;

import android.app.Activity;
import android.app.Instrumentation;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.SystemClock;
import android.view.InputDevice;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.MotionEvent;
import java.io.File;
import java.io.FileWriter;
import java.nio.file.Files;
import java.nio.charset.StandardCharsets;

/** Separate test APK. Exercises Android mapping and guest handling using
 * synthetic events; it does not validate physical button hardware. */
public final class ControllerRun extends Instrumentation {
    private int seconds=600;
    private boolean capture=true;
    private boolean requirePhysical=false;
    private String requestedLanguage,requestedResolution,requestedGraphics;
    private static String readCommand(File file) throws Exception {return new String(Files.readAllBytes(file.toPath()),StandardCharsets.UTF_8).trim();}
    @Override public void onCreate(Bundle arguments) {super.onCreate(arguments);if(arguments!=null){capture=Boolean.parseBoolean(arguments.getString("capture","true"));seconds=Math.max(30,Math.min(capture?1800:7200,Integer.parseInt(arguments.getString("seconds","600"))));requirePhysical=Boolean.parseBoolean(arguments.getString("require_physical","false"));requestedLanguage=arguments.getString("game_language");requestedResolution=arguments.getString("resolution");requestedGraphics=arguments.getString("graphics_backend");}start();}
    private void applyRequestedSettings(FileWriter writer) throws Exception {
        // Validate all explicit inputs before writing any preference. No
        // implicit setup: omitted options preserve the user's saved values.
        if(requestedLanguage!=null&&!requestedLanguage.equals("ru")&&!requestedLanguage.equals("en"))
            throw new IllegalArgumentException("game_language must be ru or en");
        if(requestedResolution!=null&&!requestedResolution.matches("[123]"))
            throw new IllegalArgumentException("resolution must be 1, 2 or 3");
        if(requestedGraphics!=null&&!requestedGraphics.matches("[012]"))
            throw new IllegalArgumentException("graphics_backend must be 0, 1 or 2");
        SharedPreferences preferences=getTargetContext().getSharedPreferences("controls",0);
        SharedPreferences.Editor editor=preferences.edit();
        if(requestedLanguage!=null){
            writer.write("setup game_language="+requestedLanguage+" previous="+(preferences.contains("gameLanguage")?preferences.getString("gameLanguage","en"):"unset")+"\n");
            editor.putString("gameLanguage",requestedLanguage);
        }
        if(requestedResolution!=null){
            writer.write("setup resolution="+requestedResolution+" previous="+(preferences.contains("resolution")?Integer.toString(preferences.getInt("resolution",0)+1):"unset")+"\n");
            editor.putInt("resolution",Integer.parseInt(requestedResolution)-1);
        }
        if(requestedGraphics!=null){
            writer.write("setup graphics_backend="+requestedGraphics+" previous="+(preferences.contains("graphicsBackend")?Integer.toString(preferences.getInt("graphicsBackend",0)):"unset")+"\n");
            editor.putInt("graphicsBackend",Integer.parseInt(requestedGraphics));
        }
        if(requestedLanguage!=null||requestedResolution!=null||requestedGraphics!=null){
            writer.flush();
            if(!editor.commit())throw new java.io.IOException("Could not commit explicitly requested test settings");
            writer.write("setup committed=true game_language="+preferences.getString("gameLanguage","en")+" resolution="+(preferences.getInt("resolution",0)+1)+" graphics_backend="+preferences.getInt("graphicsBackend",0)+"\n");
        }else writer.write("setup overrides=none\n");
        writer.flush();
    }
    private boolean motion(Activity activity,int controller,float x,float y,float z,float rz) {
        MotionEvent.PointerProperties properties=new MotionEvent.PointerProperties();properties.id=0;
        MotionEvent.PointerCoords coords=new MotionEvent.PointerCoords();coords.setAxisValue(MotionEvent.AXIS_X,x);coords.setAxisValue(MotionEvent.AXIS_Y,y);
        coords.setAxisValue(MotionEvent.AXIS_Z,z);coords.setAxisValue(MotionEvent.AXIS_RZ,rz);
        long now=SystemClock.uptimeMillis();MotionEvent event=MotionEvent.obtain(now,now,MotionEvent.ACTION_MOVE,1,
            new MotionEvent.PointerProperties[]{properties},new MotionEvent.PointerCoords[]{coords},0,0,1,1,controller,0,InputDevice.SOURCE_JOYSTICK,0);
        boolean delivered=activity.dispatchGenericMotionEvent(event);event.recycle();return delivered;
    }
    @Override public void onStart() {
        File directory=getTargetContext().getExternalFilesDir(null);
        File command=new File(directory,"controller-test-command.txt");
        File log=new File(directory,"controller-test.log");
        try(FileWriter writer=new FileWriter(log,false)) {
            writer.write("test_duration_seconds="+seconds+" capture="+capture+" deadline_action=finish_instrumentation\n");writer.flush();
            applyRequestedSettings(writer);
            Activity activity=startActivitySync(new Intent().setClassName("org.nhl07.port","org.nhl07.port.MainActivity")
                .addFlags(Intent.FLAG_ACTIVITY_NEW_TASK).putExtra("probe",capture).putExtra("probe_seconds",seconds));
            int id=-1;
            for(int candidate:InputDevice.getDeviceIds()) {
                InputDevice device=InputDevice.getDevice(candidate);
                if(device!=null&&!device.isVirtual()&&((device.getSources()&InputDevice.SOURCE_GAMEPAD)==InputDevice.SOURCE_GAMEPAD||
                    (device.getSources()&InputDevice.SOURCE_JOYSTICK)==InputDevice.SOURCE_JOYSTICK)){id=candidate;break;}
            }
            // MainActivity uses -1 while no real pad is enumerated. Android's
            // virtual-keyboard id lets this separate APK exercise that normal
            // dispatch/mapping path on phones without altering the game APK.
            // These are synthetic events, never physical hardware validation.
            boolean physical=id>=0;
            final int controller=physical?id:KeyCharacterMap.VIRTUAL_KEYBOARD;
            int touchMode=getTargetContext().getSharedPreferences("controls",0).getInt("touchControls",0);
            writer.write("synthetic=true physical_buttons_tested=false physical_controller_enumerated="+physical+
                " controller="+controller+" event_device="+(physical?"enumerated":"virtual")+" touch_controls="+touchMode+"\n");writer.flush();
            if(!physical&&requirePhysical)throw new IllegalStateException("No physical controller enumerated (require_physical=true)");
            if(!physical&&touchMode==2)throw new IllegalStateException("Virtual controller requires touch controls Auto or On; select that in launcher settings first");
            String previous=command.isFile()?readCommand(command):"";
            long deadline=SystemClock.uptimeMillis()+(seconds-5)*1000L;
            while(SystemClock.uptimeMillis()<deadline) {
                String next=command.isFile()?readCommand(command):previous;
                if(!next.equals(previous)) {
                    String[] fields=next.split(",",-1);
                    if(fields.length==7&&fields[0].matches("[0-9]+")&&fields[1].equals("stick")) {
                        previous=next;float[] axes=new float[4];
                        for(int i=0;i<4;i++){axes[i]=Float.parseFloat(fields[i+2]);if(!Float.isFinite(axes[i])||Math.abs(axes[i])>1)throw new IllegalArgumentException("Unexpected stick value");}
                        int hold=Integer.parseInt(fields[6]);if(hold<100||hold>20000)throw new IllegalArgumentException("Unexpected stick duration");
                        boolean[] delivered={false,false};writer.write("dispatching="+next+" synthetic=true\n");writer.flush();
                        runOnMainSync(()->delivered[0]=motion(activity,controller,axes[0],axes[1],axes[2],axes[3]));SystemClock.sleep(hold);
                        runOnMainSync(()->delivered[1]=motion(activity,controller,0,0,0,0));
                        writer.write("command="+next+" moved="+delivered[0]+" released="+delivered[1]+" synthetic=true\n");writer.flush();continue;
                    }
                    // A command producer may be interrupted while replacing
                    // its file. Ignore incomplete input and keep polling.
                    if((fields.length!=2&&fields.length!=3)||!fields[0].matches("[0-9]+")||!fields[1].matches("[0-9]+")) {
                        SystemClock.sleep(100);continue;
                    }
                    previous=next;
                    int code=Integer.parseInt(fields[1]);
                    int hold=fields.length==3?Integer.parseInt(fields[2]):100;
                    if(hold<100||hold>2000)throw new IllegalArgumentException("Unexpected key duration");
                    if(code!=KeyEvent.KEYCODE_BUTTON_START && code!=KeyEvent.KEYCODE_BUTTON_A && code!=KeyEvent.KEYCODE_BUTTON_B &&
                        code!=KeyEvent.KEYCODE_BUTTON_X && code!=KeyEvent.KEYCODE_BUTTON_Y && code!=KeyEvent.KEYCODE_BUTTON_L1 && code!=KeyEvent.KEYCODE_BUTTON_R1 &&
                        code!=KeyEvent.KEYCODE_BUTTON_L2 && code!=KeyEvent.KEYCODE_BUTTON_R2 &&
                        code!=KeyEvent.KEYCODE_DPAD_UP && code!=KeyEvent.KEYCODE_DPAD_DOWN && code!=KeyEvent.KEYCODE_DPAD_LEFT && code!=KeyEvent.KEYCODE_DPAD_RIGHT)
                        throw new IllegalArgumentException("Unexpected test key");
                    long down=SystemClock.uptimeMillis();boolean[] delivered={false,false};
                    writer.write("dispatching="+next+" synthetic=true\n");writer.flush();
                    runOnMainSync(()->delivered[0]=activity.dispatchKeyEvent(new KeyEvent(down,down,KeyEvent.ACTION_DOWN,code,0,0,controller,0,0,InputDevice.SOURCE_GAMEPAD)));
                    SystemClock.sleep(hold);
                    runOnMainSync(()->delivered[1]=activity.dispatchKeyEvent(new KeyEvent(down,SystemClock.uptimeMillis(),KeyEvent.ACTION_UP,code,0,0,controller,0,0,InputDevice.SOURCE_GAMEPAD)));
                    writer.write("command="+next+" down="+delivered[0]+" up="+delivered[1]+" synthetic=true\n");writer.flush();
                }
                SystemClock.sleep(100);
            }
            writer.write("finished=instrumentation_deadline\n");writer.flush();
            finish(Activity.RESULT_OK,new Bundle());
        } catch(Exception error) {
            try(FileWriter writer=new FileWriter(log,true)){writer.write("ERROR "+error+"\n");}catch(Exception ignored){}
            Bundle result=new Bundle();result.putString("error",error.toString());finish(Activity.RESULT_CANCELED,result);
        }
    }
}
