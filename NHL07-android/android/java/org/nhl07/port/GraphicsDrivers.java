package org.nhl07.port;

import android.content.Context;
import android.os.Build;
import java.io.*;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.UUID;

/** App-local driver only. The system graphics installation is never changed. */
final class GraphicsDrivers {
    static final String TURNIP_SHA="3d04277c9aad26c9c886a337979be1e418b7a8ff8414c8f293d4f37757f4ac22";
    static int selected(int mode){return mode==2?2:0;}
    static boolean available(Context context){return new File(context.getApplicationInfo().nativeLibraryDir,"libEGL_angle.so").isFile();}
    static String prepare(Context context,int mode)throws Exception {
        mode=selected(mode);
        if(mode==0)return "";
        if(!available(context))throw new IOException("This build supports only system graphics");
        if(Build.VERSION.SDK_INT<30)throw new IOException("This graphics driver requires Android 11 or newer");
        if(mode==1)return "";
        File directory=new File(context.getFilesDir(),"graphics/turnip-v32");
        if(!directory.isDirectory()&&!directory.mkdirs())throw new IOException("Cannot create driver directory");
        File driver=new File(directory,"libvulkan_freedreno.so");
        if(driver.isFile()&&TURNIP_SHA.equals(hash(driver))){
            if(!driver.setReadOnly())throw new IOException("Cannot protect driver file");
            return directory.getAbsolutePath();
        }
        File temporary=new File(directory,".driver-"+UUID.randomUUID()+".tmp");
        try {
            MessageDigest digest=MessageDigest.getInstance("SHA-256");
            try(InputStream input=context.getAssets().open("graphics/turnip-v32/libvulkan_freedreno.so");FileOutputStream output=new FileOutputStream(temporary)){
                byte[] buffer=new byte[65536];int count;long total=0;
                while((count=input.read(buffer))!=-1){total+=count;if(total>32L*1024*1024)throw new IOException("Driver exceeds size limit");digest.update(buffer,0,count);output.write(buffer,0,count);}
                output.getFD().sync();
            }
            if(!TURNIP_SHA.equals(hex(digest.digest())))throw new IOException("Driver checksum mismatch");
            if(!temporary.setReadOnly())throw new IOException("Cannot protect prepared driver");
            Files.move(temporary.toPath(),driver.toPath(),StandardCopyOption.ATOMIC_MOVE,StandardCopyOption.REPLACE_EXISTING);
            if(!TURNIP_SHA.equals(hash(driver)))throw new IOException("Installed driver checksum mismatch");
        }finally{if(temporary.exists())temporary.delete();}
        return directory.getAbsolutePath();
    }
    private static String hash(File file)throws Exception {
        MessageDigest digest=MessageDigest.getInstance("SHA-256");long total=0;
        try(InputStream input=new FileInputStream(file)){byte[] buffer=new byte[65536];int count;while((count=input.read(buffer))!=-1){total+=count;if(total>32L*1024*1024)return "";digest.update(buffer,0,count);}}
        return hex(digest.digest());
    }
    private static String hex(byte[] bytes){StringBuilder out=new StringBuilder(64);for(byte value:bytes)out.append(String.format(java.util.Locale.ROOT,"%02x",value&255));return out.toString();}
}
