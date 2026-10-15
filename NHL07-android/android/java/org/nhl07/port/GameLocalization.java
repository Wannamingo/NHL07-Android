package org.nhl07.port;
import android.content.Context;
import java.io.*;
import java.nio.channels.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

/** Build the Russian read-only overlay from the user's disc and text patches. */
final class GameLocalization {
    private static byte[] read(File f,int limit) throws IOException {try(InputStream in=new FileInputStream(f)){return EaData.limited(in,limit);}}
    private static byte[] asset(Context c,String name) throws IOException {try(InputStream in=c.getAssets().open("localization/ru/"+name)){return EaData.limited(in,1024*1024);}}
    private static void write(File f,byte[] bytes) throws IOException {File p=f.getParentFile();if(!p.isDirectory()&&!p.mkdirs())throw new IOException("Could not create translation directory");try(FileOutputStream out=new FileOutputStream(f)){out.write(bytes);out.getFD().sync();}}
    static void prepare(Context c,boolean rosterEnabled) throws Exception {
        File base=c.getExternalFilesDir(null);if(base==null)throw new IOException("Storage unavailable");File directory=new File(base,"mods/localization");if(!directory.isDirectory()&&!directory.mkdirs())throw new IOException("Could not create translation storage");
        try(RandomAccessFile file=new RandomAccessFile(new File(directory,"prepare.lock"),"rw");FileChannel channel=file.getChannel();FileLock lock=channel.tryLock()){
            if(lock==null)throw new IOException("Translation preparation already running");
            LinkedHashMap<String,byte[]> originals=new LinkedHashMap<>(),patches=new LinkedHashMap<>();
            StringBuilder fingerprint=new StringBuilder("overlay-v2:").append(new String(asset(c,"version.txt"),StandardCharsets.US_ASCII).trim());
            for(String name:LocalizationOverlay.ORIGINALS){byte[] bytes=read(new File(base,"disc/"+name),16*1024*1024);originals.put(name,bytes);fingerprint.append(':').append(RosterPackage.hash(bytes));}
            byte[] activeFapt=read(new File(base,rosterEnabled?"mods/rosters/current/preload/fapt.viv":"disc/preload/fapt.viv"),8*1024*1024);
            String version=fingerprint.append(':').append(RosterPackage.hash(activeFapt)).toString();
            File current=new File(directory,"current"),versionFile=new File(current,"version.txt");boolean complete=true;
            for(String path:new String[]{"fe/local.viv","fe/gamefont.xfn","fe/popupfnt.xfn","fe/subtitle.xfn","preload/fmisc.viv","preload/fboot.viv","preload/gloadscr.viv","fe/comapt.viv","fe/gameapt.viv","preload/fapt.viv","preload/gmisc.viv"})complete&=new File(current,path).isFile();
            if(complete&&versionFile.isFile()&&version.equals(new String(read(versionFile,1024),StandardCharsets.US_ASCII).trim()))return;
            for(String name:LocalizationOverlay.PATCHES)patches.put(name,asset(c,name));
            LinkedHashMap<String,byte[]> output=LocalizationOverlay.build(originals,patches,activeFapt);
            String stamp=Long.toString(System.currentTimeMillis());File stage=new File(directory,"stage-"+stamp);if(!stage.mkdirs())throw new IOException("Could not stage translation");
            for(Map.Entry<String,byte[]> entry:output.entrySet())write(new File(stage,entry.getKey()),entry.getValue());
            write(new File(stage,"version.txt"),version.getBytes(StandardCharsets.US_ASCII));
            File backup=new File(directory,"previous-"+stamp);boolean old=current.exists();if(old&&!current.renameTo(backup))throw new IOException("Could not preserve previous translation");
            if(!stage.renameTo(current)){if(old)backup.renameTo(current);throw new IOException("Could not install translation");}
        }
    }
}
