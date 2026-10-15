"""Read EA DB v8 packed records without altering the reference database.

Offsets/layout are independently documented in Celtian/fifa-t3db format.md.
NHL 07 uses LE/LSB packed integers; NHL Legacy uses BE/MSB integers.
"""
from pathlib import Path
import struct

class Table:
    def __init__(self,db,name,start):
        self.db,self.name,self.start=db,name,start
        self.record_size=db.u32(start+4)
        self.capacity=db.u16(start+16)
        self.count=db.u16(start+18)
        self.field_count=db.data[start+24]
        self.fields={}
        for i in range(self.field_count):
            a=start+36+i*16
            kind,bit=db.u32(a),db.u32(a+4)
            code=db.data[a+8:a+12].decode('ascii')
            depth=db.u32(a+12)
            assert bit+depth<=self.record_size*8,(name,code,bit,depth)
            self.fields[code]=(kind,bit,depth)
        self.data_start=start+36+16*self.field_count
        assert self.count<=self.capacity and self.data_start+self.capacity*self.record_size<=len(db.data)
    def raw(self,index):
        assert 0<=index<self.capacity
        a=self.data_start+index*self.record_size
        return self.db.data[a:a+self.record_size]
    def row(self,index):
        raw=self.raw(index);integer=int.from_bytes(raw,self.db.byteorder)
        row={}
        for code,(kind,bit,depth) in self.fields.items():
            if kind==0:
                assert not bit%8 and not depth%8
                row[code]=raw[bit//8:(bit+depth)//8].split(b'\0')[0].decode(self.db.encoding)
            else:
                shift=bit if self.db.byteorder=='little' else self.record_size*8-bit-depth
                row[code]=(integer>>shift)&((1<<depth)-1)
        return row
    def rows(self):
        # Cancelled slots can occur before live rows. The header's live count
        # is not a bound on physical slot indices in community-edited files.
        invalid=0x80 if self.db.byteorder=='little' else 1
        rows=[self.row(i) for i in range(self.count) if not(self.raw(i)[-1]&invalid)]
        return rows
    def encode(self,row):
        raw=bytearray(self.record_size);integer=0
        for code,(kind,bit,depth) in self.fields.items():
            value=row.get(code,0)
            if kind==0:
                value=str(value).encode(self.db.encoding)
                assert len(value)<=depth//8,(self.name,code,value,depth)
                raw[bit//8:bit//8+len(value)]=value
            else:
                assert isinstance(value,int) and 0<=value<1<<depth,(self.name,code,value,depth)
                shift=bit if self.db.byteorder=='little' else self.record_size*8-bit-depth
                integer|=value<<shift
        packed=integer.to_bytes(self.record_size,self.db.byteorder)
        return bytes(a|b for a,b in zip(raw,packed))

class Database:
    def __init__(self,data):
        self.data=bytes(data)
        assert self.data[:4]==b'DB\0\x08'
        self.byteorder='big' if self.data[4] else 'little'
        self.encoding='utf-8' if self.data[4] else 'cp1252'
        self.prefix='>' if self.data[4] else '<'
        count=self.u32(16);assert 1<=count<1000
        self.tables={}
        table_base=28+count*8
        for i in range(count):
            a=24+i*8;name=self.data[a:a+4].decode('ascii')
            self.tables[name]=Table(self,name,table_base+self.u32(a+4))
    def u32(self,a):return struct.unpack_from(self.prefix+'I',self.data,a)[0]
    def u16(self,a):return struct.unpack_from(self.prefix+'H',self.data,a)[0]
    @classmethod
    def read(cls,path):return cls(Path(path).read_bytes())
    def rewrite(self,changes):
        from game_archives import fifa_crc
        assert self.u32(20)==fifa_crc(self.data[:20]),'Header CRC differs from documented format'
        count=len(self.tables);base=28+8*count
        ordered=sorted(self.tables.values(),key=lambda t:t.start)
        ends={t.name:(ordered[i+1].start if i+1<len(ordered) else len(self.data)) for i,t in enumerate(ordered)}
        table_bytes={}
        for name,t in self.tables.items():
            if name not in changes:table_bytes[name]=self.data[t.start:ends[name]];continue
            assert self.u32(t.start+12)==0,'Compressed strings require a separate writer'
            rows=changes[name];capacity=max(t.capacity,len(rows))
            assert capacity<65536
            header=bytearray(self.data[t.start:t.start+36])
            struct.pack_into(self.prefix+'HHHH',header,16,capacity,len(rows),0,0xffff)
            struct.pack_into(self.prefix+'I',header,32,fifa_crc(header[:32]))
            fields=self.data[t.start+36:t.data_start]
            empty=bytearray(t.record_size);empty[-1]=0x80 if self.byteorder=='little' else 1
            records=b''.join(t.encode(row) for row in rows)+bytes(empty)*(capacity-len(rows))
            payload=fields+records
            table_bytes[name]=bytes(header)+payload+struct.pack(self.prefix+'I',fifa_crc(payload))
        header=bytearray(self.data[:24]);directory=bytearray();body=bytearray()
        for name in self.tables:
            directory+=name.encode('ascii')+struct.pack(self.prefix+'I',len(body))
            body+=table_bytes[name]
        result=header+directory+struct.pack(self.prefix+'I',fifa_crc(directory))+body
        struct.pack_into(self.prefix+'I',result,8,len(result))
        struct.pack_into(self.prefix+'I',result,20,fifa_crc(result[:20]))
        # Independently reparse every changed field and row, not just byte lengths.
        parsed=Database(result)
        for name,rows in changes.items():
            assert parsed.tables[name].count==len(rows)
            for actual,expected in zip(parsed.tables[name].rows(),rows):
                assert actual==expected,(name,actual,expected)
        return bytes(result)

if __name__=='__main__':
    import json
    root=Path(__file__).resolve().parents[1]/'analysis/rosters'
    annotations=json.loads((root/'legacy-field-annotations.json').read_text())
    mapping={x['field']:x['property'] for x in annotations}
    for file in ['legacy-2026-27.db','nhl2007.tdb.decoded','nhlrost.tdb.decoded','nhlbioatt.tdb.decoded','nhlplayers.tdb.decoded']:
        db=Database.read(root/file)
        print(file,db.byteorder)
        for name,t in db.tables.items():
            print(name,t.record_size,t.count,t.capacity,','.join(mapping.get(f,f) for f in t.fields))
        if file.startswith('legacy'):
            for name in ['cPbu','yvSd','yuHm','caBZ']:
                t=db.tables[name]
                rows=t.rows()
                for i,r in enumerate(rows):
                    if r.get('RMbQ') in ['McDavid','Crosby','Ovechkin'] or i<2:
                        print('sample',name,i,json.dumps({mapping.get(k,k):v for k,v in r.items()}))
