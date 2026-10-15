package org.nhl07.port;
import android.app.ActivityManager;
import android.content.Context;
import android.net.Uri;
import java.io.*;
import java.nio.channels.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

/** Transactional roster overlays. Original disc and saves are never rewritten. */
final class RosterStore {
    private static File root(Context c) throws IOException {File base=c.getExternalFilesDir(null);if(base==null)throw new IOException("Хранилище недоступно / Storage unavailable");File r=new File(base,"mods/rosters");if(!r.isDirectory()&&!r.mkdirs())throw new IOException("Could not create roster directory");return r;}
    static void gameStopped(Context c) throws IOException {ActivityManager am=(ActivityManager)c.getSystemService(Context.ACTIVITY_SERVICE);List<ActivityManager.RunningAppProcessInfo> list=am.getRunningAppProcesses();if(list!=null)for(ActivityManager.RunningAppProcessInfo p:list)if(p.processName.equals("org.nhl07.port"))throw new IOException("Сначала завершите игру / Close the game first");}
    static Properties info(Context c){Properties p=new Properties();try{File f=new File(root(c),"current/roster.properties");if(f.isFile()&&f.length()<=16384)try(Reader r=new InputStreamReader(new FileInputStream(f),StandardCharsets.UTF_8)){p.load(r);}}catch(Exception ignored){}return p;}
    private static boolean valid(File dir){try{Properties p=new Properties();try(Reader r=new InputStreamReader(new FileInputStream(new File(dir,"roster.properties")),StandardCharsets.UTF_8)){p.load(r);}return "3".equals(p.getProperty("converterRevision"))&&new File(dir,"db/db.viv").isFile()&&new File(dir,"preload/fapt.viv").isFile();}catch(Exception e){return false;}}
    static boolean installed(Context c){try{return valid(new File(root(c),"current"));}catch(Exception e){return false;}}
    static boolean previous(Context c){try{return valid(new File(root(c),"previous"));}catch(Exception e){return false;}}
    static RosterPackage.Prepared install(Context context,Uri uri) throws Exception {
        gameStopped(context);File directory=root(context);
        try(RandomAccessFile lockFile=new RandomAccessFile(new File(directory,"install.lock"),"rw");FileChannel channel=lockFile.getChannel();FileLock lock=channel.tryLock()){
            if(lock==null)throw new IOException("Обновление уже выполняется / Update already running");
            File base=context.getExternalFilesDir(null);byte[] original;
            try(InputStream in=new FileInputStream(new File(base,"disc/db/db.viv"))){original=EaData.limited(in,8*1024*1024);}
            RosterPackage.Prepared p;try(InputStream input=context.getContentResolver().openInputStream(uri)){if(input==null)throw new IOException("ZIP недоступен / ZIP unavailable");p=RosterPackage.prepare(input,original);}
            gameStopped(context);String stamp=Long.toString(System.currentTimeMillis());File stage=new File(directory,"stage-"+stamp),db=new File(stage,"db");if(!db.mkdirs())throw new IOException("Could not create update directory");
            try(FileOutputStream out=new FileOutputStream(new File(db,"db.viv"))){out.write(p.viv);out.getFD().sync();}
            installIndex(context,stage,p.viv);
            Properties meta=new Properties();meta.setProperty("label",p.label);meta.setProperty("rosterDate",p.date);meta.setProperty("sourceSha256",p.sourceHash);meta.setProperty("sha256",RosterPackage.hash(p.viv));meta.setProperty("players",Integer.toString(p.players));
            meta.setProperty("converterRevision","3");
            try(FileOutputStream out=new FileOutputStream(new File(stage,"roster.properties"))){Writer writer=new OutputStreamWriter(out,StandardCharsets.UTF_8);meta.store(writer,"NHL 07 roster overlay");writer.flush();out.getFD().sync();}
            File current=new File(directory,"current"),previous=new File(directory,"previous");boolean old=current.exists();
            if(previous.exists()&&!previous.renameTo(new File(directory,"history-"+stamp)))throw new IOException("Could not preserve previous update");
            if(old&&!current.renameTo(previous))throw new IOException("Could not preserve current update");
            if(!stage.renameTo(current)){if(old)previous.renameTo(current);throw new IOException("Could not activate roster update");}
            context.getSharedPreferences("controls",Context.MODE_PRIVATE).edit().putBoolean("rosterEnabled",true).commit();return p;
        }
    }
    private static void installIndex(Context context,File overlay,byte[] database) throws Exception {
        byte[] original;try(InputStream in=new FileInputStream(new File(context.getExternalFilesDir(null),"disc/preload/fapt.viv"))){original=EaData.limited(in,8*1024*1024);}
        byte[] updated=RosterPackage.archiveIndex(original,database);File preload=new File(overlay,"preload");if(!preload.isDirectory()&&!preload.mkdirs())throw new IOException("Could not create cached index directory");
        try(FileOutputStream out=new FileOutputStream(new File(preload,"fapt.viv"))){out.write(updated);out.getFD().sync();}
    }
    static void restorePrevious(Context c) throws Exception {
        gameStopped(c);File directory=root(c);
        try(RandomAccessFile file=new RandomAccessFile(new File(directory,"install.lock"),"rw");FileChannel channel=file.getChannel();FileLock lock=channel.tryLock()){
            if(lock==null)throw new IOException("Update busy");File current=new File(directory,"current"),previous=new File(directory,"previous"),temp=new File(directory,"swap-"+System.currentTimeMillis());
            if(previous(c)&&!new File(previous,"preload/fapt.viv").isFile()){byte[] data;try(InputStream in=new FileInputStream(new File(previous,"db/db.viv"))){data=EaData.limited(in,8*1024*1024);}installIndex(c,previous,data);}
            if(!previous(c)||!current.renameTo(temp))throw new IOException("Нет предыдущей версии / No previous version");
            if(!previous.renameTo(current)){temp.renameTo(current);throw new IOException("Could not restore previous update");}
            if(!temp.renameTo(previous)){if(current.renameTo(previous))temp.renameTo(current);throw new IOException("Could not preserve current update");}
            c.getSharedPreferences("controls",Context.MODE_PRIVATE).edit().putBoolean("rosterEnabled",true).commit();
        }
    }
}
