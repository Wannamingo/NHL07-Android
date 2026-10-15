package org.nhl07.port;
import android.app.ActivityManager;
import android.content.Context;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import java.io.*;
import java.security.MessageDigest;
import java.util.Map;

/** Stage and verify the selected original disc; preserve the previous data. */
final class DiscImporter {
    interface Progress{void update(long done,long total);}
    static void importIso(Context context,Uri uri,Progress progress) throws Exception {
        ActivityManager manager=(ActivityManager)context.getSystemService(Context.ACTIVITY_SERVICE);
        if(manager.getRunningAppProcesses()!=null)for(ActivityManager.RunningAppProcessInfo process:manager.getRunningAppProcesses())
            if(process.processName.equals("org.nhl07.port"))throw new IOException("Сначала завершите игру / Close the game first");
        File root=context.getExternalFilesDir(null);if(root==null)throw new IOException("Хранилище недоступно / Storage unavailable");
        ParcelFileDescriptor descriptor=context.getContentResolver().openFileDescriptor(uri,"r");if(descriptor==null)throw new IOException("ISO недоступен / ISO unavailable");
        try(ParcelFileDescriptor.AutoCloseInputStream stream=new ParcelFileDescriptor.AutoCloseInputStream(descriptor)){
            XboxIso iso=new XboxIso(stream.getChannel());Map<String,XboxIso.Entry> files=iso.index();XboxIso.Entry executable=null;long total=0;
            for(Map.Entry<String,XboxIso.Entry> item:files.entrySet()){
                if(item.getKey().equalsIgnoreCase("default.xbe"))executable=item.getValue();
                total=Math.addExact(total,item.getValue().size);
            }
            if(executable==null||executable.size!=9302016)throw new IOException("Нужен оригинальный NHL 07 USA / Original NHL 07 USA required");
            MessageDigest hash=MessageDigest.getInstance("SHA-256");byte[] buffer=new byte[1024*1024];
            try(InputStream input=iso.open(executable)){for(int n;(n=input.read(buffer))!=-1;)hash.update(buffer,0,n);}
            StringBuilder digest=new StringBuilder();for(byte b:hash.digest())digest.append(String.format(java.util.Locale.ROOT,"%02x",b&255));
            if(!digest.toString().equals("438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83"))throw new IOException("Эта версия NHL 07 не поддерживается / Unsupported NHL 07 version");
            if(total>32L*1024*1024*1024||root.getUsableSpace()<total+64L*1024*1024)throw new IOException("Недостаточно места для импорта / Not enough space to import");
            long stamp=System.currentTimeMillis();File stage=new File(root,".iso-import-"+stamp),disc=new File(stage,"disc");
            if(!disc.mkdirs())throw new IOException("Не удалось создать каталог / Could not create import directory");
            long done=0;String safe=stage.getCanonicalPath()+File.separator;
            for(Map.Entry<String,XboxIso.Entry> item:files.entrySet()){
                File output=item.getKey().equalsIgnoreCase("default.xbe")?new File(stage,"default.xbe"):new File(disc,item.getKey());
                if(!output.getCanonicalPath().startsWith(safe))throw new IOException("Недопустимый путь ISO / Invalid ISO path");
                File parent=output.getParentFile();if(!parent.isDirectory()&&!parent.mkdirs())throw new IOException("Не удалось создать папку / Could not create directory");
                try(InputStream input=iso.open(item.getValue());FileOutputStream out=new FileOutputStream(output)){
                    for(int n;(n=input.read(buffer))!=-1;){out.write(buffer,0,n);done+=n;progress.update(done,total);}out.getFD().sync();
                }
            }
            if(!new File(disc,"rms/rms.viv").isFile())throw new IOException("В образе нет данных NHL 07 / NHL 07 data missing");
            File installed=new File(root,"disc"),backup=new File(root,"disc-before-"+stamp);boolean had=installed.exists();
            if(had&&!installed.renameTo(backup))throw new IOException("Не удалось сохранить прежние файлы / Could not preserve previous files");
            if(!disc.renameTo(installed)){if(had)backup.renameTo(installed);throw new IOException("Не удалось установить файлы / Could not install game data");}
            File oldXbe=new File(root,"default.xbe"),savedXbe=new File(root,"default-before-"+stamp+".xbe");
            if(oldXbe.exists()&&!oldXbe.renameTo(savedXbe)){installed.renameTo(disc);if(had)backup.renameTo(installed);throw new IOException("Не удалось сохранить прежний XBE / Could not preserve previous executable");}
            if(!new File(stage,"default.xbe").renameTo(oldXbe)){
                savedXbe.renameTo(oldXbe);installed.renameTo(disc);if(had)backup.renameTo(installed);throw new IOException("Не удалось установить XBE / Could not install executable");
            }
        }
    }
}
