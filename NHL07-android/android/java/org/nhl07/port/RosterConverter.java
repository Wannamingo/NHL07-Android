package org.nhl07.port;

import java.io.*;
import java.nio.charset.Charset;
import java.text.Normalizer;
import java.util.*;
import java.util.zip.InflaterInputStream;
import static org.nhl07.port.EaData.*;

/** Actual Legacy DB -> NHL 07 conversion, performed offline on the device. */
final class RosterConverter {
    static final class Result {final byte[] viv;final int players;Result(byte[] b,int p){viv=b;players=p;}}
    private static Map<String,String> pairs(String value){Map<String,String> m=new LinkedHashMap<>();for(String pair:value.split(",")){String[] p=pair.split(":");m.put(p[0],p[1]);}return m;}
    private static final Map<String,String> SKATER=pairs("BALA:YqOX,PENA:ShqX,SACC:KQBB,WACC:ObeE,FACE:KrwV,ACCE:ckxF,SPEE:bEdA,POTE:koEt,DEKG:iCvN,CHKG:oisw,TOUG:gUBy,PUCK:YqXz,AGIL:pyYq,AGGR:oskO,PASS:oRUd,ENDU:kIjD,INJU:seUB,SPOW:DCvJ,WPOW:Hvje");
    private static final Map<String,String> GOALIE=pairs("BRKA:Nhuq,REBC:SiKH,SREC:oLxj,SPEE:bEdA,POKE:UqhP,INTE:miXH,POTE:koEt,AGIL:pyYq,5HOL:nMNR,PASS:oRUd,ENDU:kIjD,GSH_:DTrq,SSH_:vcIl,GSL_:ejux,SSL_:mshm");
    private static final Map<String,String> LINES=pairs("L1C_:ctKP,L1LW:aAvX,L1RW:pfiv,L1LD:opNr,L1RD:bSAb,L2C_:PufE,L2LW:PGhZ,L2RW:Adsx,L2LD:BvDt,L2RD:OQOd,L3C_:CLEN,L3LW:IkTY,L3RW:TbGw,L3LD:Sxps,L3RD:Jmcc,L4C_:lxRC,L4LW:pOUV,L4RW:mxhB,K1C_:aRgN,K1LW:BWVK,K1LD:bjni,K1RD:AAai,K2C_:tmxm,K2LW:EMLM,K2LD:WZZk,K2RD:FGkk,31C_:bNDE,31LD:rrTM,31RD:kQGw,32C_:oOKP,32LD:GtFK,32RD:VSQu,P1C_:OsHB,P1LW:iXft,P1RW:tIqR,P1LD:sKFN,P1RD:jxQx,P2C_:BnOW,P2LW:Plxr,P2RW:MykP,P2LD:NYLL,P2RD:Onyv,41C_:pPkW,41LW:FMkb,41LD:XBWz,41RD:EGLX,42C_:yoNB,42LW:Auad,42LD:ajIB,42RD:BcVZ,G1__:WPGf,G2__:Imzy,X1__:sNcy,X2__:uklz,S1__:XUMR,S2__:pxVU,S3__:vBOv,S4__:AkyJ,S5__:uAxS");
    private static String norm(String s){return Normalizer.normalize(s.toLowerCase(Locale.ROOT),Normalizer.Form.NFKD).replaceAll("[^\\p{L}\\p{N}]","");}
    private static String identity(Row b,boolean legacy){String first=norm(b.s(legacy?"PedH":"FNME"));return norm(b.s(legacy?"RMbQ":"LNME"))+":"+(first.isEmpty()?"":first.substring(0,1))+":"+(b.n(legacy?"dnFq":"YEAR")+(legacy?1910:1959))+":"+(b.n(legacy?"pLKJ":"MONT")+(legacy?1:0))+":"+(b.n(legacy?"iwsK":"DAY_")+(legacy?1:0));}
    private static String fit(String text,int max){text=text.replace("®","").replace("™","").trim();Charset cs=Charset.forName("windows-1252");if(!cs.newEncoder().canEncode(text))text=Normalizer.normalize(text,Normalizer.Form.NFKD).replaceAll("[^\\x00-\\x7F]","");byte[] b=text.getBytes(cs);return new String(b,0,Math.min(max,b.length),cs);}
    private static int rating(int v){return Math.max(0,Math.min(49,v-14));}
    private static Map<Integer,Row> index(List<Row> rows,String key) throws IOException {Map<Integer,Row> map=new HashMap<>();for(Row r:rows)require(map.put(r.n(key),r)==null,"Повторный идентификатор / Duplicate roster ID");return map;}
    private static Row find(List<Row> rows,String key,int value){for(Row r:rows)if(r.n(key)==value)return r;return null;}
    private static int maximum(List<Row> rows,String key){int max=0;for(Row r:rows)max=Math.max(max,r.n(key));return max;}
    static Result convert(byte[] baseViv,byte[] roster) throws IOException {
        require(roster.length>=48&&ascii(roster,0,10).equals("RosterFile"),"Нужен Xbox RosterFile для NHL Legacy / NHL Legacy Xbox RosterFile required");
        byte[] decoded;try(InputStream in=new InflaterInputStream(new ByteArrayInputStream(roster,48,roster.length-48))){decoded=limited(in,24*1024*1024);}
        Db legacy=new Db(decoded);require(legacy.big&&legacy.tables.size()==39,"Неподдерживаемая версия Legacy / Unsupported Legacy version");
        LinkedHashMap<String,byte[]> files=big(baseViv);Map<String,Db> originals=new LinkedHashMap<>();
        String[] changedNames={"nhl2007.tdb","nhlbioatt.tdb","nhlrost.tdb","nhlonlinerost.tdb"};
        for(String name:changedNames){require(files.containsKey(name),"NHL 07 database missing");originals.put(name,new Db(unpack(files.get(name))));}
        Db db=originals.get("nhl2007.tdb");require(!db.big,"Original Xbox NHL 07 data required");
        List<Row> bios=db.rows("SPBT"),skaters=db.rows("SPAI"),goalies=db.rows("SGAI"),players=db.rows("PLAY"),teams=db.rows("STEA");
        Map<Integer,Row> lb=index(legacy.rows("cPbu"),"zIBw"),li=index(legacy.rows("caBZ"),"qEfv"),lt=index(legacy.rows("ttOk"),"qEfv"),ls=index(legacy.rows("yvSd"),"zIBw"),lg=index(legacy.rows("yuHm"),"zIBw");
        Map<String,Row> identities=new HashMap<>();for(Row b:bios)identities.put(identity(b,false),b);
        Map<String,Integer> stateNames=new HashMap<>();for(Row s:db.rows("SSTT"))stateNames.put(s.s("NAME"),s.n("INDX"));
        Map<Integer,Integer> nation=new HashMap<>(),states=new HashMap<>();
        String[] countries={"0:Canada","14:USA","66:Denmark","67:Finland","68:Norway","69:Sweden","70:Belarus","74:Latvia","76:Russia","78:Austria","82:Czech Republic","84:France","85:Germany","95:Slovakia","97:Switzerland","109:Australia"};
        for(String country:countries){String[] c=country.split(":");nation.put(Integer.parseInt(c[0]),stateNames.get(c[1]));}states.putAll(nation);
        String[] provinces="Alberta,British Columbia,Manitoba,New Brunswick,Newfoundland,Northwest Territories,Nova Scotia,Nunavut,Ontario,Prince Edward Island,Quebec,Saskatchewan,Yukon".split(",");
        String[] usa="Alabama,Alaska,Arizona,Arkansas,California,Colorado,Connecticut,Delaware,DC,Florida,Georgia,Hawaii,Idaho,Illinois,Indiana,Iowa,Kansas,Kentucky,Louisiana,Maine,Maryland,Massachusetts,Michigan,Minnesota,Mississippi,Missouri,Montana,Nebraska,Nevada,New Hampshire,New Jersey,New Mexico,New York,North Carolina,North Dakota,Ohio,Oklahoma,Oregon,Pennsylvania,Rhode Island,South Carolina,South Dakota,Tennessee,Texas,Utah,Vermont,Virginia,Washington,West Virginia,Wisconsin,Wyoming".split(",");
        for(int i=0;i<provinces.length;i++)if(stateNames.containsKey(provinces[i]))states.put(i+1,stateNames.get(provinces[i]));for(int i=0;i<usa.length;i++)if(stateNames.containsKey(usa[i]))states.put(i+15,stateNames.get(usa[i]));
        List<Row> sourceRosters=legacy.rows("ulGe"),newRosters=new ArrayList<>();Map<Integer,int[]> converted=new HashMap<>();int nextBio=maximum(bios,"INDX")+1,nextPlayer=maximum(players,"INDX")+1;
        Row template=db.rows("DPBT").get(0);
        for(int target=0;target<32;target++){
            int source=target==22?229:target==30?226:target==31?228:target;Row sourceTeam=lt.get(source);require(sourceTeam!=null,"В ZIP нет 32 клубов Legacy EDGE / Legacy EDGE 32-team roster required");
            List<Row> selected=new ArrayList<>();for(Row r:sourceRosters)if(r.n("BSXd")==source)selected.add(r);require(selected.size()>=18&&selected.size()<=40,"Некорректный состав клуба / Invalid team size");
            for(Row r:selected){
                Row ix=li.get(r.n("TWSX"));require(ix!=null&&ix.n("BERR")==0,"Missing Legacy player index");Row b=lb.get(ix.n("qFky"));require(b!=null,"Missing Legacy player data");int key=b.n("zIBw");
                if(!converted.containsKey(key)){
                    Row old=identities.get(identity(b,true));int bioId,playerId;Row n;
                    if(old!=null){bioId=old.n("INDX");n=new Row(old);Row p=null;for(Row candidate:players)if(candidate.n("TBLE")==0&&candidate.n("ID__")==bioId){p=candidate;break;}require(p!=null,"Missing NHL 07 index");playerId=p.n("INDX");}
                    else{bioId=nextBio++;playerId=nextPlayer++;n=new Row();for(String field:db.tables.get("SPBT").fields.keySet())n.put(field,template.containsKey(field)?template.get(field):0);n.n("INDX",bioId);Row p=new Row();p.n("TBLE",0);p.n("INDX",playerId);p.n("ID__",bioId);players.add(p);}
                    require(bioId<8192&&playerId<8192,"Слишком много игроков / Too many players");
                    n.put("FNME",fit(b.s("PedH"),20));n.put("LNME",fit(b.s("RMbQ"),20));n.put("CITY",fit(b.s("JzFM"),20));n.n("HEIG",b.n("QBpy"));n.n("WEIG",Math.max(0,Math.min(255,b.n("WZNs")-30)));n.n("HAND",b.n("pkRG"));
                    n.n("POS_",b.n("aljv"));n.n("POSD",1<<b.n("aljv"));n.n("YEAR",Math.max(0,Math.min(63,b.n("dnFq")+1910-1959)));n.n("MONT",b.n("pLKJ")+1);n.n("DAY_",b.n("iwsK")+1);n.n("TEAM",target);n.n("JERS",r.n("tRVs"));n.n("ROOK",0);
                    require(nation.containsKey(b.n("hleL")),"Неизвестный код страны / Unsupported country code: "+b.n("hleL"));n.n("INTL",nation.get(b.n("hleL")));n.n("STAT",states.getOrDefault(b.n("IxvQ"),n.n("INTL")));
                    if(old!=null)bios.set(bios.indexOf(old),n);else bios.add(n);
                    boolean goalie=b.n("aljv")==4;Row attributes=(goalie?lg:ls).get(key);require(attributes!=null,"Missing Legacy ratings");List<Row> rows=goalie?goalies:skaters;Row existing=find(rows,"INDX",bioId);Row a=new Row(existing!=null?existing:db.rows(goalie?"DGAI":"DPAI").get(0));a.n("INDX",bioId);
                    for(Map.Entry<String,String> e:(goalie?GOALIE:SKATER).entrySet())a.n(e.getKey(),rating(attributes.n(e.getValue())));a.n("FIGH",Math.min(3,attributes.n("YqJH")));
                    if(goalie){a.n("STYL",Math.min(3,attributes.n("sFgQ")));a.n("FLOP",0);for(Map.Entry<String,String> e:pairs("POSI:fdgB,PADL:UVkI,CONS:KzvQ").entrySet()){int v=attributes.n(e.getValue())+36;a.n(e.getKey(),v>=85?2:v>=60?1:0);}}
                    else{a.n("PCBI",attributes.n("baRY"));a.n("ODBI",attributes.n("EksY"));a.n("SPBI",attributes.n("hlsv"));a.n("HERO",rating(attributes.n("FUWe")));a.n("PRES",rating(attributes.n("FUWe")));}
                    if(existing!=null)rows.set(rows.indexOf(existing),a);else rows.add(a);converted.put(key,new int[]{bioId,playerId});
                }
                Row nr=new Row();for(String field:originals.get("nhlrost.tdb").tables.get("ROST").fields.keySet())nr.n(field,0);nr.n("TEAM",target);nr.n("INDX",converted.get(key)[1]);nr.n("JERS",r.n("tRVs"));nr.n("CAPT",Math.min(3,r.n("lcCm")));nr.n("DRES",r.n("jZSh")==1?1:0);for(Map.Entry<String,String> e:LINES.entrySet())nr.n(e.getKey(),r.n(e.getValue()));newRosters.add(nr);
            }
            String[] required="G1__,G2__,L1C_,L1LW,L1RW,L1LD,L1RD,L2C_,L2LW,L2RW,L2LD,L2RD,L3C_,L3LW,L3RW,L3LD,L3RD,L4C_,L4LW,L4RW".split(",");
            for(String line:required){int sum=0;for(Row r:newRosters)if(r.n("TEAM")==target)sum+=r.n(line);require(sum==1,"Некорректное звено / Invalid line: "+target+" "+line);}
            Row team=find(teams,"INDX",target);require(team!=null,"Missing target team");String full=source==226?"Vegas Golden Knights":source==228?"Seattle Kraken":source==229?"Utah Mammoth":sourceTeam.s("JkmY");team.put("FNME",fit(full,31));
            // Match the Python reference's title casing for the ASCII club names.
            String shortName=sourceTeam.s("ITNQ").replace('_',' ').toLowerCase(Locale.ROOT);StringBuilder title=new StringBuilder();boolean upper=true;for(char c:shortName.toCharArray()){title.append(upper?Character.toUpperCase(c):c);upper=!Character.isLetterOrDigit(c);}team.put("SNME",fit(title.toString(),32));team.put("ABBR",source==226?"VGK":source==228?"SEA":source==229?"UTA":fit(sourceTeam.s("RPbr"),5));
        }
        Map<String,List<Row>> changed=new LinkedHashMap<>();changed.put("SPBT",bios);changed.put("SPAI",skaters);changed.put("SGAI",goalies);changed.put("PLAY",players);changed.put("STEA",teams);
        List<Row> mainRoster=new ArrayList<>();for(Row r:db.rows("ROST"))if(r.n("TEAM")>=32)mainRoster.add(r);mainRoster.addAll(newRosters);changed.put("ROST",mainRoster);
        for(String name:changedNames){
            Db original=originals.get(name);Map<String,List<Row>> update=new LinkedHashMap<>();
            if(name.equals("nhl2007.tdb"))update.putAll(changed);
            else if(name.equals("nhlbioatt.tdb")){for(Map.Entry<String,List<Row>> e:changed.entrySet())if(original.tables.containsKey(e.getKey()))update.put(e.getKey(),e.getValue());}
            else{List<Row> rosterRows=new ArrayList<>();for(Row r:original.rows("ROST"))if(r.n("TEAM")>=32)rosterRows.add(r);rosterRows.addAll(newRosters);update.put("ROST",rosterRows);}
            byte[] raw=original.rewrite(update),packed=pack(raw);require(Arrays.equals(unpack(packed),raw),"Converted resource did not round-trip");files.put(name,packed);
        }
        return new Result(bigWrite(files),converted.size());
    }
}
