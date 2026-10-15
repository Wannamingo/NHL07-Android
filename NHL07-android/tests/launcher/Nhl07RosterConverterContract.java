package org.nhl07.port;
import java.nio.file.*;
import java.util.*;
import java.security.MessageDigest;
public final class Nhl07RosterConverterContract {
    public static void main(String[] args) throws Exception {
        byte[] base=Files.readAllBytes(Paths.get(args[0])),roster=Files.readAllBytes(Paths.get(args[1])),expected=Files.readAllBytes(Paths.get(args[2]));
        byte[] originalBase=base.clone(),originalRoster=roster.clone();
        RosterConverter.Result result=RosterConverter.convert(base,roster);
        if(!Arrays.equals(expected,result.viv)){
            Files.write(Paths.get(args[2]+".java-result"),result.viv);
            throw new AssertionError("Java differs from independent Python conversion");
        }
        if(!Arrays.equals(base,originalBase)||!Arrays.equals(roster,originalRoster))throw new AssertionError("Source altered");
        if(result.players!=777)throw new AssertionError("Unexpected current fixture player count");
        Map<String,byte[]> convertedEntries=EaData.big(result.viv);
        EaData.Db main=new EaData.Db(EaData.unpack(convertedEntries.get("nhl2007.tdb")));
        EaData.Db reset=new EaData.Db(EaData.unpack(convertedEntries.get("nhlrost.tdb")));
        if(!main.rows("ROST").equals(reset.rows("ROST")))throw new AssertionError("Default and reset rosters disagree");
        EaData.Row mcdavid=null;for(EaData.Row row:main.rows("SPBT"))if(row.s("FNME").equals("Connor")&&row.s("LNME").equals("McDavid"))mcdavid=row;
        if(mcdavid==null||mcdavid.n("JERS")!=97||mcdavid.n("YEAR")+1959!=1997)throw new AssertionError("McDavid biography missing");
        // Original NHL 07 data establishes the relation independently of both converters:
        // roster player 1627 -> biography 868 -> Shawn Horcoff (Edmonton's original L1C).
        EaData.Db originalMain=new EaData.Db(EaData.unpack(EaData.big(base).get("nhl2007.tdb")));
        boolean originalRelation=false;for(EaData.Row row:originalMain.rows("PLAY"))if(row.n("INDX")==1627&&row.n("ID__")==868)originalRelation=true;
        boolean originalIdentity=false;for(EaData.Row row:originalMain.rows("SPBT"))if(row.n("INDX")==868&&row.s("LNME").equals("Horcoff"))originalIdentity=true;
        if(!originalRelation||!originalIdentity)throw new AssertionError("Original PLAY relation fixture changed");
        Set<Integer> identifiers=new HashSet<>();for(EaData.Row row:main.rows("PLAY"))if(!identifiers.add(row.n("INDX")))throw new AssertionError("Duplicate runtime player ID");
        int playerId=-1;for(EaData.Row row:main.rows("PLAY"))if(row.n("TBLE")==0&&row.n("ID__")==mcdavid.n("INDX"))playerId=row.n("INDX");
        boolean active=false;for(EaData.Row row:main.rows("ROST"))if(row.n("TEAM")==11&&row.n("INDX")==playerId&&row.n("JERS")==97)active=true;
        if(!active)throw new AssertionError("McDavid not in the actual default Edmonton roster");
        for(int team=0;team<32;team++){int count=0;for(EaData.Row row:main.rows("ROST"))if(row.n("TEAM")==team)count++;if(count<18||count>40)throw new AssertionError("Invalid actual default team size");}
        byte[] fapt=RosterPackage.archiveIndex(Files.readAllBytes(Paths.get(args[4])),result.viv);
        if(!Arrays.equals(fapt,Files.readAllBytes(Paths.get(args[5]))))throw new AssertionError("Cached index archive differs from Python");
        if(!Arrays.equals(EaData.unpack(EaData.big(fapt).get("db.bh")),Arrays.copyOf(result.viv,EaData.u32(result.viv,12,true))))throw new AssertionError("Cached header truncates updated resources");
        Map<String,byte[]> entries=EaData.big(base);int resources=0;
        for(Map.Entry<String,byte[]> e:entries.entrySet()){
            Path decoded=Paths.get(args[3],e.getKey()+".decoded");
            if(Files.exists(decoded)){if(!Arrays.equals(EaData.unpack(e.getValue()),Files.readAllBytes(decoded)))throw new AssertionError("Original x86 decoder mismatch: "+e.getKey());resources++;}
        }
        if(resources!=17)throw new AssertionError("Original resource fixtures missing");
        int malformed=0;
        for(int n:new int[]{0,1,4,5,6,20}){
            byte[] truncated=Arrays.copyOf(entries.get("nhl2007.tdb"),n);
            try{EaData.unpack(truncated);if(n>=2)throw new AssertionError("Truncated RefPack accepted");}catch(java.io.IOException okay){malformed++;}
        }
        byte[] invalid=roster.clone();invalid[0]^=1;
        try{RosterConverter.convert(base,invalid);throw new AssertionError("Wrong game accepted");}catch(java.io.IOException okay){malformed++;}
        System.out.println("NHL07_ROSTER_CONVERTER players="+result.players+" original_resources="+resources+" malformed_rejected="+malformed+" byte_exact_python=true source_unchanged=true default_and_reset_synced=true mcdavid_in_actual_default=true cached_header_exact=true");
    }
}
