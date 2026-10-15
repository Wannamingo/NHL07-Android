package org.nhl07.port;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.util.*;
import java.util.zip.*;
import static org.nhl07.port.EaData.require;

/** In-memory ZIP validation, followed by actual Legacy conversion. */
final class RosterPackage {
    static final String XBE="438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83";
    static final class Prepared {final byte[] viv;final String label,date,sourceHash;final int players;Prepared(byte[] v,String l,String d,String h,int p){viv=v;label=l;date=d;sourceHash=h;players=p;}}
    static String hash(byte[] bytes) throws Exception {StringBuilder out=new StringBuilder();for(byte b:MessageDigest.getInstance("SHA-256").digest(bytes))out.append(String.format(Locale.ROOT,"%02x",b&255));return out.toString();}
    static byte[] archiveIndex(byte[] originalFapt,byte[] convertedDb) throws Exception {
        LinkedHashMap<String,byte[]> entries=EaData.big(originalFapt);require(entries.containsKey("db.bh"),"NHL 07 cached database index missing");
        int length=EaData.u32(convertedDb,12,true);require(length>=16&&length<=convertedDb.length,"Invalid updated BIGF header");
        entries.put("db.bh",EaData.pack(Arrays.copyOf(convertedDb,length)));return EaData.bigWrite(entries);
    }
    static Prepared prepare(InputStream input,byte[] base) throws Exception {
        byte[] archive=EaData.limited(input,12*1024*1024),payload=null,manifest=null;String name=null;int count=0;
        try(ZipInputStream zip=new ZipInputStream(new ByteArrayInputStream(archive))){for(ZipEntry e;(e=zip.getNextEntry())!=null;){
            require(++count<=16,"В ZIP слишком много файлов / Too many ZIP entries");String n=e.getName();
            if(n.startsWith("__MACOSX/")||n.equals(".DS_Store")){EaData.limited(zip,64*1024);continue;}
            require(!e.isDirectory()&&!n.isEmpty()&&n.length()<=80&&!n.contains("/")&&!n.contains("\\")&&!n.contains("..")&&!n.contains(":"),"Недопустимое имя в ZIP / Invalid ZIP name");
            if(n.equals("roster.properties")){require(manifest==null,"Повторное описание / Duplicate manifest");manifest=EaData.limited(zip,16*1024);}
            else{require(payload==null,"В ZIP должен быть один состав / One roster per ZIP required");payload=EaData.limited(zip,8*1024*1024);name=n;}
        }}require(payload!=null,"В ZIP нет состава / Roster missing from ZIP");String digest=hash(payload),label=name,date="";Properties properties=new Properties();
        if(manifest!=null){properties.load(new InputStreamReader(new ByteArrayInputStream(manifest),StandardCharsets.UTF_8));require(name.equals(properties.getProperty("payload"))&&digest.equalsIgnoreCase(properties.getProperty("sha256","")),"Состав не совпадает с описанием / Roster checksum mismatch");label=properties.getProperty("label",label).trim();date=properties.getProperty("rosterDate","").trim();}
        require(!label.isEmpty()&&label.length()<=80&&(date.isEmpty()||date.matches("20[0-9]{2}-[01][0-9]-[0-3][0-9]")),"Некорректное описание / Invalid roster metadata");
        if(payload.length>=10&&EaData.ascii(payload,0,10).equals("RosterFile")){
            require(manifest==null||"NHL-LEGACY-ROSTER-1".equals(properties.getProperty("format")),"Неподдерживаемое описание Legacy / Unsupported Legacy manifest");
            if(digest.equals("acb56eee91e8e6c0944ef33fee2ba85c7fc3f556996541d8256d194700868216")){label="Legacy EDGE 2026–27 · V5";date="2026-10-06";}
            else if(date.isEmpty()&&name.matches("ROSTER [0-9]{14}")){String stamp=name.substring(7);date=stamp.substring(0,4)+"-"+stamp.substring(4,6)+"-"+stamp.substring(6,8);}
            RosterConverter.Result converted=RosterConverter.convert(base,payload);return new Prepared(converted.viv,label,date,digest,converted.players);
        }
        require("NHL07-ROSTER-1".equals(properties.getProperty("format"))&&XBE.equalsIgnoreCase(properties.getProperty("xbeSha256","")),"Выберите ZIP Legacy Xbox 360 или пакет NHL 07 / Select Legacy Xbox 360 ZIP or NHL 07 update package");
        Map<String,byte[]> entries=EaData.big(payload);for(String file:new String[]{"nhl2007.tdb","nhlbioatt.tdb","nhlrost.tdb","nhlonlinerost.tdb"}){require(entries.containsKey(file),"Missing NHL 07 roster resource");EaData.Db db=new EaData.Db(EaData.unpack(entries.get(file)));require(!db.big,"Wrong roster platform");}
        return new Prepared(payload,label,date,digest,0);
    }
}
