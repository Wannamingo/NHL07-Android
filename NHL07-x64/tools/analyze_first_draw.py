"""Decode saved first-draw inputs and compare Windows/ARM64 guest graphics data."""
from pathlib import Path
import collections,hashlib,json,re,struct
root=Path(__file__).resolve().parents[1];android=root.with_name('NHL07-android')
registers={int(value,16):name for name,value in re.findall(r'^#   define\s+(NV097_[A-Z0-9_]+)\s+(0x[0-9A-Fa-f]+)\s*$',
    (root/'vendor/xboxrecomp/src/nv2a/nv2a_regs.h').read_text(),re.M)}
results={};inputs={}
for platform,folder in [('windows',root/'logs'),('android',android/'analysis')]:
    capture=json.loads((folder/'first-draw.json').read_text());memory=(folder/'first-draw-ram.bin').read_bytes()
    physical=(folder/'first-draw-contiguous.bin').read_bytes();assert len(physical)==0x4000000
    assert len(memory)==0x4000000-0x10000
    def data(address,size):
        if 0x80000000<=address and address+size<=0x84000000:
            return physical[address-0x80000000:address-0x80000000+size]
        address=(address&0xfffffff)-capture['memory_base']
        assert address>=0 and address+size<=len(memory)
        return memory[address:address+size]
    def words(address,count): return list(struct.unpack('<'+'I'*count,data(address,count*4)))
    command_data=data(capture['push_begin'],capture['push_end']-capture['push_begin'])
    commands=list(struct.unpack('<'+'I'*(len(command_data)//4),command_data));packets=[];position=0;states={}
    while position<len(commands):
        offset=position;header=commands[position];position+=1
        kind=header&0xe0030003
        assert kind in [0,0x40000000],(platform,offset,hex(header))
        count=(header>>18)&0x7ff;method=header&0x1ffc;subchannel=(header>>13)&7
        assert position+count<=len(commands)
        values=commands[position:position+count];position+=count
        packets.append({'offset_bytes':offset*4,'method':hex(method),'name':registers.get(method),'count':count,
            'incrementing':kind==0,'subchannel':subchannel,'data':[hex(x) for x in values]})
        for i,value in enumerate(values): states[method+(i*4 if kind==0 else 0)]=value
    indices=list(struct.unpack('<'+'H'*capture['index_count'],data(capture['indices'],capture['index_count']*2)))
    streams=[];stream_bytes=[]
    for i in range(16):
        stride,unknown,resource=words(0x787620+i*12,3)
        if not resource: continue
        common,pointer,lock=words(resource,3);size=(max(indices)+1)*stride
        # Registered resources carry physical offsets into the contiguous window.
        payload=data(pointer|0x80000000,size);stream_bytes.append(payload)
        streams.append({'index':i,'stride':stride,'resource':hex(resource),'data':hex(pointer),'common':hex(common),
            'referenced_bytes':size,'sha256':hashlib.sha256(payload).hexdigest(),
            'vertices_hex':[payload[j:j+stride].hex() for j in range(0,size,stride)]})
    shader_pointer,shader_handle=words(0x785180+0x1e5*4,2)
    shader=words(shader_pointer,16) if shader_pointer else []
    results[platform]={'capture':capture,'indices':indices,'streams':streams,
        'snapshot_sha256':{'ram':hashlib.sha256(memory).hexdigest(),'contiguous':hashlib.sha256(physical).hexdigest()},
        'vertex_shader_pointer':hex(shader_pointer),'vertex_shader_handle':hex(shader_handle),
        'vertex_shader_header':[hex(x) for x in shader],
        'packet_count':len(packets),'command_bytes':len(command_data),
        'command_sha256':hashlib.sha256(command_data).hexdigest(),
        'packets':packets,'last_method_values':{hex(k):hex(v) for k,v in sorted(states.items())}}
    inputs[platform]=(command_data,indices,stream_bytes,shader)
same={key:inputs['windows'][i]==inputs['android'][i] for i,key in enumerate(['commands','indices','vertex_streams','shader_header'])}
report={'scope':'Input equivalence before the first DrawIndexedVertices; GPU rendering is validated separately',
    'cross_architecture_equal':same,'captures':results}
(root/'analysis/first-draw-analysis.json').write_text(json.dumps(report,indent=2))
print(json.dumps({'cross_architecture_equal':same,'draw':{k:{key:v[key] for key in ['indices','streams','vertex_shader_handle','vertex_shader_header','packet_count','command_bytes']} for k,v in results.items()}},indent=2))
