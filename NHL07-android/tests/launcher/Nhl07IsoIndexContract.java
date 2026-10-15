package org.nhl07.port;
import java.io.*;
import java.nio.file.*;
import java.security.MessageDigest;
import java.util.*;
public final class Nhl07IsoIndexContract {
    public static void main(String[] args) throws Exception {
        int checks=0;try(RandomAccessFile file=new RandomAccessFile(args[0],"r")){
            XboxIso iso=new XboxIso(file.getChannel());Map<String,XboxIso.Entry> index=iso.index();
            List<String> expected=Files.readAllLines(Paths.get(args[1]));if(index.size()!=expected.size())throw new AssertionError("file count");checks++;
            for(String line:expected){String[] fields=line.split("\t");XboxIso.Entry entry=index.get(fields[0]);if(entry==null||entry.offset!=Long.parseLong(fields[1])||entry.size!=Long.parseLong(fields[2]))throw new AssertionError("index mismatch: "+fields[0]);checks++;}
            MessageDigest hash=MessageDigest.getInstance("SHA-256");byte[] bytes=new byte[65536];try(InputStream in=iso.open(index.get("default.xbe"))){for(int n;(n=in.read(bytes))!=-1;)hash.update(bytes,0,n);}
            StringBuilder digest=new StringBuilder();for(byte b:hash.digest())digest.append(String.format(Locale.ROOT,"%02x",b&255));
            if(!digest.toString().equals("438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83"))throw new AssertionError("XBE readback mismatch");checks++;
        }
        System.out.println("NHL07_ISO_INDEX passed="+checks+" failed=0; actual original ISO, independent inventory and XBE SHA256");
    }
}
