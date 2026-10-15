package org.nhl07.port;
import java.nio.file.*;
import java.util.*;
public final class Nhl07LocalizationContract {
    public static void main(String[] args) throws Exception {
        LinkedHashMap<String,byte[]> originals=new LinkedHashMap<>(),patches=new LinkedHashMap<>(),snapshots=new LinkedHashMap<>();
        for(String name:LocalizationOverlay.ORIGINALS){byte[] bytes=Files.readAllBytes(Paths.get(args[0],name));originals.put(name,bytes);snapshots.put(name,bytes.clone());}
        for(String name:LocalizationOverlay.PATCHES)patches.put(name,Files.readAllBytes(Paths.get(args[1],name)));
        byte[] fapt=Files.readAllBytes(Paths.get(args[2])),faptCopy=fapt.clone();
        Map<String,byte[]> result=LocalizationOverlay.build(originals,patches,fapt);
        if(result.size()!=11)throw new AssertionError("Incomplete overlay");
        for(String name:originals.keySet())if(!Arrays.equals(originals.get(name),snapshots.get(name)))throw new AssertionError("Original mutated: "+name);
        if(!Arrays.equals(fapt,faptCopy))throw new AssertionError("Roster index mutated");
        if(!Arrays.equals(EaData.big(fapt).get("db.bh"),EaData.big(result.get("preload/fapt.viv")).get("db.bh")))throw new AssertionError("Roster db.bh lost");
        for(Map.Entry<String,byte[]> entry:result.entrySet()){Path path=Paths.get(args[3],entry.getKey());Files.createDirectories(path.getParent());Files.write(path,entry.getValue());}
        System.out.println("NHL07_LOCALIZATION files=11 originals_unchanged=true roster_index_preserved=true");
    }
}
