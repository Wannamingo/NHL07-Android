package org.nhl07.port;
import java.io.IOException;
import java.util.*;

/** Update every font copy and its cached archive index in one consistent layer. */
final class LocalizationOverlay {
    static final String[] ORIGINALS={"fe/local.viv","preload/fmisc.viv","preload/fboot.viv","preload/gloadscr.viv","fe/comapt.viv","fe/gameapt.viv","preload/gmisc.viv"};
    static final String[] PATCHES={"frontEnglish.bin","gameEnglish.bin","LOCALE_ENGLISH.loc","fonts.big","game-fonts.big","gamefont.xfn","popupfnt.xfn","subtitle.xfn"};
    private static LinkedHashMap<String,byte[]> archive(Map<String,byte[]> source,String name) throws IOException {
        byte[] data=source.get(name);EaData.require(data!=null,"Missing original resource: "+name);return EaData.big(data);
    }
    private static void replace(Map<String,byte[]> archive,String name,byte[] data) throws IOException {
        EaData.require(archive.containsKey(name)&&data!=null,"Missing localized resource: "+name);archive.put(name,EaData.pack(data));
    }
    private static byte[] header(byte[] archive) throws IOException {
        int n=EaData.u32(archive,12,true);EaData.require(n>=16&&n<=archive.length,"Invalid archive index");return Arrays.copyOf(archive,n);
    }
    static LinkedHashMap<String,byte[]> build(Map<String,byte[]> originals,Map<String,byte[]> patches,byte[] activeFapt) throws IOException {
        LinkedHashMap<String,byte[]> output=new LinkedHashMap<>();
        LinkedHashMap<String,byte[]> local=archive(originals,"fe/local.viv");
        for(String name:new String[]{"frontEnglish.bin","gameEnglish.bin","LOCALE_ENGLISH.loc"})replace(local,name,patches.get(name));
        byte[] locale=EaData.bigWrite(local);output.put("fe/local.viv",locale);
        LinkedHashMap<String,byte[]> fmisc=archive(originals,"preload/fmisc.viv");
        replace(fmisc,"local.bh",header(locale));replace(fmisc,"debugfnt.xfn",patches.get("subtitle.xfn"));output.put("preload/fmisc.viv",EaData.bigWrite(fmisc));
        for(String name:new String[]{"preload/fboot.viv","fe/comapt.viv","fe/gameapt.viv"}){
            LinkedHashMap<String,byte[]> a=archive(originals,name);replace(a,"fonts.big",patches.get(name.equals("fe/gameapt.viv")?"game-fonts.big":"fonts.big"));output.put(name,EaData.bigWrite(a));
        }
        LinkedHashMap<String,byte[]> load=archive(originals,"preload/gloadscr.viv");replace(load,"LOAD_FONT.xfn",patches.get("subtitle.xfn"));output.put("preload/gloadscr.viv",EaData.bigWrite(load));
        // Start with the active roster's index, so the font fix cannot restore
        // an obsolete db.bh and truncate the updated player database.
        LinkedHashMap<String,byte[]> fapt=EaData.big(activeFapt);replace(fapt,"comapt.bh",header(output.get("fe/comapt.viv")));output.put("preload/fapt.viv",EaData.bigWrite(fapt));
        LinkedHashMap<String,byte[]> gmisc=archive(originals,"preload/gmisc.viv");replace(gmisc,"gameapt.bh",header(output.get("fe/gameapt.viv")));output.put("preload/gmisc.viv",EaData.bigWrite(gmisc));
        for(String name:new String[]{"gamefont.xfn","popupfnt.xfn","subtitle.xfn"})output.put("fe/"+name,patches.get(name));
        return output;
    }
}
