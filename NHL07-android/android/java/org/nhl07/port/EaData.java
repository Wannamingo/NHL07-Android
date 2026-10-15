package org.nhl07.port;

import java.io.*;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.*;

/** Bounded, offline BIGF / RefPack / DB v8 codec for roster copies. */
final class EaData {
    static void require(boolean v,String m) throws IOException {if(!v)throw new IOException(m);}
    static int u16(byte[] b,int a,boolean big){return big?(b[a]&255)<<8|(b[a+1]&255):(b[a]&255)|(b[a+1]&255)<<8;}
    static int u32(byte[] b,int a,boolean big){return big?(b[a]&255)<<24|(b[a+1]&255)<<16|(b[a+2]&255)<<8|(b[a+3]&255):(b[a]&255)|(b[a+1]&255)<<8|(b[a+2]&255)<<16|(b[a+3]&255)<<24;}
    static void p16(byte[] b,int a,int v,boolean big){for(int i=0;i<2;i++)b[a+i]=(byte)(v>>>(8*(big?1-i:i)));}
    static void p32(byte[] b,int a,int v,boolean big){for(int i=0;i<4;i++)b[a+i]=(byte)(v>>>(8*(big?3-i:i)));}
    static String ascii(byte[] b,int a,int n){return new String(b,a,n,StandardCharsets.US_ASCII);}
    static byte[] limited(InputStream input,int max) throws IOException {
        ByteArrayOutputStream out=new ByteArrayOutputStream();byte[] block=new byte[8192];int n;
        while((n=input.read(block))!=-1){require(out.size()<=max-n,"Файл слишком велик / File too large");out.write(block,0,n);}return out.toByteArray();
    }
    static LinkedHashMap<String,byte[]> big(byte[] data) throws IOException {
        require(data.length>=16&&ascii(data,0,4).equals("BIGF"),"Ожидался архив NHL 07 BIGF / Expected NHL 07 BIGF");
        int count=u32(data,8,true),position=16;require(count>0&&count<10000,"Некорректный список файлов / Invalid archive index");
        LinkedHashMap<String,byte[]> result=new LinkedHashMap<>();
        for(int i=0;i<count;i++){
            require(position<=data.length-9,"Повреждён каталог / Truncated archive index");int offset=u32(data,position,true),size=u32(data,position+4,true),end=position+8;
            while(end<data.length&&data[end]!=0)end++;
            require(end<data.length&&end-position<256&&offset>=16&&size>=0&&offset<=data.length-size,"Повреждён архив / Invalid archive extent");
            String name=ascii(data,position+8,end-position-8);require(!result.containsKey(name),"Повторный файл / Duplicate archive file");
            result.put(name,Arrays.copyOfRange(data,offset,offset+size));position=end+1;
        }return result;
    }
    static byte[] bigWrite(LinkedHashMap<String,byte[]> files) throws IOException {
        int header=16;for(String name:files.keySet())header+=9+name.length();
        ByteArrayOutputStream out=new ByteArrayOutputStream();out.write(new byte[(header+127)&~127]);
        byte[] directory=new byte[header-16];int at=0;
        for(Map.Entry<String,byte[]> entry:files.entrySet()){
            p32(directory,at,out.size(),true);p32(directory,at+4,entry.getValue().length,true);byte[] name=entry.getKey().getBytes(StandardCharsets.US_ASCII);
            System.arraycopy(name,0,directory,at+8,name.length);at+=name.length+9;out.write(entry.getValue());out.write(new byte[(-out.size())&127]);
        }
        byte[] data=out.toByteArray();System.arraycopy("BIGF".getBytes(StandardCharsets.US_ASCII),0,data,0,4);p32(data,4,data.length,false);p32(data,8,files.size(),true);p32(data,12,header,true);System.arraycopy(directory,0,data,16,directory.length);return data;
    }
    static byte[] unpack(byte[] in) throws IOException {
        if(in.length<2||in[0]!=0x10||(in[1]&255)!=0xfb)return in;
        require(in.length>=6,"Повреждён RefPack / Truncated RefPack");int size=(in[2]&255)<<16|(in[3]&255)<<8|(in[4]&255);require(size<=8*1024*1024,"Слишком большой блок / Oversized resource");
        byte[] out=new byte[size];int p=5,q=0;
        while(p<in.length){int t=in[p++]&255,literal,length=0,distance=0;
            if(t<0x80){require(p<in.length,"Truncated RefPack pair");literal=t&3;length=((t&0x1c)>>>2)+3;distance=((t&0x60)<<3)+(in[p++]&255)+1;}
            else if(t<0xc0){require(p<=in.length-2,"Truncated RefPack triple");int b=in[p++]&255;literal=b>>>6;length=(t&63)+4;distance=((b&63)<<8)+(in[p++]&255)+1;}
            else if(t<0xe0){require(p<=in.length-3,"Truncated RefPack quartet");literal=t&3;distance=((t&16)<<12)+((in[p++]&255)<<8)+(in[p++]&255)+1;length=((t&12)<<6)+(in[p++]&255)+5;}
            else literal=t>=0xfc?t&3:((t&31)<<2)+4;
            require(p<=in.length-literal&&q<=out.length-literal,"RefPack literal outside resource");System.arraycopy(in,p,out,q,literal);p+=literal;q+=literal;
            if(t>=0xfc){require(q==size,"RefPack size mismatch");return out;}
            require(distance<=q&&q<=out.length-length,"RefPack match outside resource");for(int i=0;i<length;i++)out[q+i]=out[q+i-distance];q+=length;
        }throw new IOException("Незавершённый RefPack / Unfinished RefPack");
    }
    static byte[] pack(byte[] data) throws IOException {
        require(data.length<1<<24,"Resource too large");ByteArrayOutputStream out=new ByteArrayOutputStream();out.write(0x10);out.write(0xfb);out.write(data.length>>>16);out.write(data.length>>>8);out.write(data.length);int p=0;
        while(data.length-p>=4){int n=Math.min(112,(data.length-p)&~3);out.write(0xe0+(n-4)/4);out.write(data,p,n);p+=n;}out.write(0xfc+data.length-p);out.write(data,p,data.length-p);return out.toByteArray();
    }
    private static final int[] CRC=new int[256];static{for(int i=0;i<256;i++){int v=i<<24;for(int j=0;j<8;j++)v=(v<<1)^((v&0x80000000)!=0?0x04c11db7:0);CRC[i]=v;}}
    static int crc(byte[] data,int a,int n){int v=-1;for(int i=a;i<a+n;i++)v=(v<<8)^CRC[((v>>>24)^(data[i]&255))&255];return v;}
    static final class Field {final int kind,bit,depth;Field(int k,int b,int d){kind=k;bit=b;depth=d;}}
    static final class Row extends LinkedHashMap<String,Object>{
        Row(){}Row(Map<String,Object> other){super(other);}
        int n(String key){return ((Number)get(key)).intValue();}String s(String key){return (String)get(key);}
        void n(String key,int value){put(key,value);}
    }
    static final class Table {
        final Db db;final String name;final int start,record,capacity,written,begin;final LinkedHashMap<String,Field> fields=new LinkedHashMap<>();
        Table(Db database,String key,int offset) throws IOException {
            db=database;name=key;start=offset;require(start>=0&&start<=db.bytes.length-36,"Invalid table header");record=u32(db.bytes,start+4,db.big);capacity=u16(db.bytes,start+16,db.big);written=u16(db.bytes,start+18,db.big);int count=db.bytes[start+24]&255;
            begin=start+36+16*count;require(record>0&&record<=1024&&written<=capacity&&begin<=db.bytes.length&&capacity<=(db.bytes.length-begin)/record,"Invalid table extent");
            require(u32(db.bytes,start+32,db.big)==crc(db.bytes,start,32),"Table header CRC mismatch");
            for(int i=0;i<count;i++){int a=start+36+i*16;int kind=u32(db.bytes,a,db.big),bit=u32(db.bytes,a+4,db.big),depth=u32(db.bytes,a+12,db.big);require(bit>=0&&depth>=0&&bit<=record*8-depth,"Invalid field extent");fields.put(ascii(db.bytes,a+8,4),new Field(kind,bit,depth));}
        }
        List<Row> rows() throws IOException {
            List<Row> result=new ArrayList<>();for(int i=0;i<written;i++){
                int a=begin+i*record;if((db.bytes[a+record-1]&(db.big?1:128))!=0)continue;Row r=new Row();
                for(Map.Entry<String,Field> e:fields.entrySet()){
                    Field f=e.getValue();if(f.kind==0){require((f.bit&7)==0&&(f.depth&7)==0,"Unaligned text field");int end=a+(f.bit+f.depth)/8,p=a+f.bit/8;while(p<end&&db.bytes[p]!=0)p++;r.put(e.getKey(),new String(db.bytes,a+f.bit/8,p-a-f.bit/8,db.charset));}
                    else{require(f.kind==3&&f.depth<=31,"Unsupported roster field");int v=0;for(int j=0;j<f.depth;j++){int p=f.bit+j,b=(db.bytes[a+p/8]>>>(db.big?7-p%8:p%8))&1;if(db.big)v=(v<<1)|b;else v|=b<<j;}r.n(e.getKey(),v);}
                }result.add(r);
            }return result;
        }
        byte[] encode(Row r) throws IOException {
            byte[] data=new byte[record];for(Map.Entry<String,Field> e:fields.entrySet()){
                Field f=e.getValue();Object value=r.get(e.getKey());require(value!=null,"Missing converted field "+e.getKey());
                if(f.kind==0){byte[] text=((String)value).getBytes(db.charset);require(text.length<=f.depth/8,"Text too long for "+e.getKey());System.arraycopy(text,0,data,f.bit/8,text.length);}
                else{int v=((Number)value).intValue();require(v>=0&&((long)v)<(1L<<f.depth),"Converted field out of range: "+name+"."+e.getKey());for(int j=0;j<f.depth;j++){int p=f.bit+j,b=(v>>>(db.big?f.depth-1-j:j))&1;data[p/8]|=b<<(db.big?7-p%8:p%8);}}
            }return data;
        }
    }
    static final class Db {
        final byte[] bytes;final boolean big;final Charset charset;final LinkedHashMap<String,Table> tables=new LinkedHashMap<>();
        Db(byte[] data) throws IOException {
            bytes=data;require(data.length>=28&&data.length<=24*1024*1024&&data[0]=='D'&&data[1]=='B'&&data[2]==0&&data[3]==8,"Несовместимая база составов / Incompatible roster database");big=data[4]!=0;charset=big?StandardCharsets.UTF_8:Charset.forName("windows-1252");int count=u32(data,16,big);
            require(count>0&&count<1000&&28+count*8<=data.length,"Invalid table directory");require(u32(data,20,big)==crc(data,0,20),"Database header CRC mismatch");
            int base=28+count*8;for(int i=0;i<count;i++){int a=24+i*8;String name=ascii(data,a,4);int offset=u32(data,a+4,big);require(offset>=0&&offset<=data.length-base-36&&!tables.containsKey(name),"Invalid table offset");tables.put(name,new Table(this,name,base+offset));}
        }
        List<Row> rows(String key) throws IOException {require(tables.containsKey(key),"Отсутствует таблица / Missing table: "+key);return tables.get(key).rows();}
        byte[] rewrite(Map<String,List<Row>> changes) throws IOException {
            List<Table> ordered=new ArrayList<>(tables.values());ordered.sort(Comparator.comparingInt(t->t.start));Map<String,Integer> ends=new HashMap<>();for(int i=0;i<ordered.size();i++)ends.put(ordered.get(i).name,i+1<ordered.size()?ordered.get(i+1).start:bytes.length);
            ByteArrayOutputStream body=new ByteArrayOutputStream();byte[] directory=new byte[tables.size()*8];int index=0;
            for(Table t:tables.values()){
                byte[] name=t.name.getBytes(StandardCharsets.US_ASCII);System.arraycopy(name,0,directory,index*8,4);p32(directory,index*8+4,body.size(),big);index++;
                List<Row> rows=changes.get(t.name);if(rows==null){body.write(bytes,t.start,ends.get(t.name)-t.start);continue;}
                require(u32(bytes,t.start+12,big)==0,"Compressed DB strings cannot be rewritten");int capacity=Math.max(t.capacity,rows.size());require(capacity<65536,"Too many converted players");
                byte[] header=Arrays.copyOfRange(bytes,t.start,t.start+36);p16(header,16,capacity,big);p16(header,18,rows.size(),big);p16(header,20,0,big);p16(header,22,65535,big);p32(header,32,crc(header,0,32),big);
                ByteArrayOutputStream payload=new ByteArrayOutputStream();payload.write(bytes,t.start+36,t.begin-t.start-36);for(Row row:rows)payload.write(t.encode(row));byte[] empty=new byte[t.record];empty[t.record-1]=(byte)(big?1:128);for(int i=rows.size();i<capacity;i++)payload.write(empty);
                byte[] block=payload.toByteArray(),check=new byte[4];p32(check,0,crc(block,0,block.length),big);body.write(header);body.write(block);body.write(check);
            }
            ByteArrayOutputStream result=new ByteArrayOutputStream();result.write(bytes,0,24);result.write(directory);byte[] check=new byte[4];p32(check,0,crc(directory,0,directory.length),big);result.write(check);body.writeTo(result);byte[] data=result.toByteArray();p32(data,8,data.length,big);p32(data,20,crc(data,0,20),big);new Db(data);return data;
        }
    }
}
