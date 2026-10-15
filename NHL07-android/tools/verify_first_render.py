"""Compare real GPU pixels with an independent DXT5 + bilinear CPU reference.
This validates the first splash pipeline, not exact NV2A rasterization or later frames.
"""
from pathlib import Path
from functools import lru_cache
import hashlib,json,math,struct
root=Path(__file__).resolve().parents[1];folder=root/'analysis'
capture=json.loads((folder/'first-draw.json').read_text())
ram=(folder/'first-draw-ram.bin').read_bytes();memory=(folder/'first-draw-contiguous.bin').read_bytes()
def data(address,size):
    if address>=0x80000000:return memory[address-0x80000000:address-0x80000000+size]
    return ram[address-0x10000:address-0x10000+size]
commands=struct.unpack('<'+'I'*((capture['push_end']-capture['push_begin'])//4),data(capture['push_begin'],capture['push_end']-capture['push_begin']))
state={};position=0
while position<len(commands):
    header=commands[position];position+=1;n=(header>>18)&0x7ff;method=header&0x1ffc
    assert header&0xe0030003 in [0,0x40000000]
    for i in range(n):state[method+(0 if header&0x40000000 else i*4)]=commands[position];position+=1
indices=struct.unpack('<'+'H'*capture['index_count'],data(capture['indices'],capture['index_count']*2))
assert state[0x1b04]==0x09910f29 and list(indices)==list(range(6))
assert state[0xac0]==0xc4c80000 and state[0x260]==0xd4d81010 # color*texture, including alpha
assert state[0x288]==12 and state[0x28c]==0x1c80 # final combiner R0
offset=state[0x1b00];width=height=512
texture=memory[offset:offset+width*height]
@lru_cache(None)
def texel(x,y):
    x%=width;y%=height;block=texture[((y//4)*(width//4)+x//4)*16:][:16];p=(y%4)*4+x%4
    a0,a1=block[:2];alpha=[a0,a1]
    if a0>a1:alpha.extend(((8-i)*a0+(i-1)*a1)//7 for i in range(2,8))
    else:alpha.extend(((6-i)*a0+(i-1)*a1)//5 for i in range(2,6));alpha.extend([0,255])
    av=alpha[(int.from_bytes(block[2:8],'little')>>(p*3))&7]
    def rgb565(c):
        r=(c>>11)&31;g=(c>>5)&63;b=c&31
        return [(r<<3)|(r>>2),(g<<2)|(g>>4),(b<<3)|(b>>2)]
    c0,c1,selectors=struct.unpack_from('<HHI',block,8);a,b=rgb565(c0),rgb565(c1)
    colors=[a,b,[(2*u+v)//3 for u,v in zip(a,b)],[(u+2*v)//3 for u,v in zip(a,b)]]
    return colors[(selectors>>(p*2))&3]+[av]
kind,dimensions,limit,pixels=(folder/'first-render.ppm').read_bytes().split(b'\n',3)
assert (kind,dimensions,limit)==(b'P6',b'640 480',b'255')
results=[]
points=[(x,y) for y in range(23,470,11) for x in range(29,626,13)]+[(0,0),(25,20),(626,470),(639,479),(400,19),(300,475)]
for x,y in points:
    expected=[0.,0.,0.]
    if 26<=x<626 and 20<=y<470:
        tx=(x+.5-26)*width/600-.5;ty=(y+.5-20)*height/450-.5
        ix=math.floor(tx);iy=math.floor(ty);fx=tx-ix;fy=ty-iy
        samples=[texel(ix,iy),texel(ix+1,iy),texel(ix,iy+1),texel(ix+1,iy+1)]
        weights=[(1-fx)*(1-fy),fx*(1-fy),(1-fx)*fy,fx*fy]
        rgba=[sum(s[c]*w for s,w in zip(samples,weights)) for c in range(4)]
        expected=[round(value*rgba[3]/255) for value in rgba[:3]]
    actual=list(pixels[(y*640+x)*3:(y*640+x)*3+3]);error=max(abs(a-b) for a,b in zip(expected,actual))
    results.append({'x':x,'y':y,'error':error,'expected':expected,'actual':actual})
worst=max(results,key=lambda x:x['error']);assert worst['error']<=2,worst
record={'scope':'First splash: independent DXT5 decode, bilinear sampling, color/alpha and image orientation',
    'samples_passed':len(results),'maximum_channel_error':worst['error'],'tolerance_8bit':2,'worst_sample':worst,
    'texture_sha256':hashlib.sha256(texture).hexdigest(),'gpu_image_sha256':hashlib.sha256((folder/'first-render.ppm').read_bytes()).hexdigest(),
    'capture_hashes':{n:hashlib.sha256((folder/n).read_bytes()).hexdigest() for n in ['first-draw.json','first-draw-ram.bin','first-draw-contiguous.bin']},
    'not_validated':['console-exact rasterization','later shaders or frames','gameplay']}
(folder/'gpu-pixel-validation.json').write_text(json.dumps(record,indent=2))
print('PASS:',len(results),'GPU pixel samples; maximum 8-bit channel error:',worst['error'])
