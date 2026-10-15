"""Independent Python evaluator of Kelvin microcode versus real Mali transform feedback.
Limited to the instructions actually present in NHL 07's first vertex program.
No generated HLSL/GLSL or shader translator code is used as the oracle.
Encoding reference: https://envytools.readthedocs.io/en/latest/hw/graph/xf/isa.html
"""
from pathlib import Path
import hashlib,json,math,struct
root=Path(__file__).resolve().parents[1];folder=root/'analysis'
capture=json.loads((folder/'first-draw.json').read_text())
ram=(folder/'first-draw-ram.bin').read_bytes();physical=(folder/'first-draw-contiguous.bin').read_bytes()
def data(address,size):
    if address>=0x80000000: return physical[address-0x80000000:address-0x80000000+size]
    return ram[address-0x10000:address-0x10000+size]
def word(address): return struct.unpack('<I',data(address,4))[0]
def f32(x): return struct.unpack('<f',struct.pack('<f',x))[0]
def flt(x): return struct.unpack('<f',struct.pack('<I',x))[0]
cmd=struct.unpack('<'+'I'*((capture['push_end']-capture['push_begin'])//4),data(capture['push_begin'],capture['push_end']-capture['push_begin']))
registers={};code=[0]*544;constants=[0]*768;position=0;pc=cc=0
while position<len(cmd):
    header=cmd[position];position+=1;n=(header>>18)&0x7ff;method=header&0x1ffc
    assert header&0xe0030003 in [0,0x40000000]
    for i in range(n):
        m=method+(0 if header&0x40000000 else i*4);v=cmd[position];position+=1;registers[m]=v
        if m==0x1e9c: pc=v*4
        elif m==0x1ea4: cc=v*4
        elif 0xb00<=m<0xb80: code[pc]=v;pc+=1
        elif 0xb80<=m<0xc00: constants[cc]=v;cc+=1
constants=[list(map(flt,constants[i:i+4])) for i in range(0,768,4)]
indices=struct.unpack('<'+'H'*capture['index_count'],data(capture['indices'],capture['index_count']*2))
gpu=(folder/'first-vertex-feedback.bin').read_bytes();assert len(gpu)==48*(max(indices)+1)
observed_opcodes=set();results=[];max_error=0
for vertex in range(max(indices)+1):
    inputs=[]
    for index in range(16):
        fmt=registers.get(0x1760+4*index,0);size=(fmt>>4)&15;typ=fmt&15;stride=fmt>>8
        v=[0.,0.,0.,1.]
        if size:
            address=0x80000000|registers[0x1720+4*index];b=data(address+stride*vertex,size*(4 if typ==2 else 1))
            if typ==2: v[:size]=struct.unpack('<'+'f'*size,b)
            else:
                assert typ in [0,4];v[:size]=[x/255 for x in b]
                if typ==0: v=[v[2],v[1],v[0],v[3]]
        inputs.append(v)
    temps=[[0.]*4 for _ in range(13)];outputs={0:[0.,0.,0.,1.],3:[0.,0.,0.,1.],9:[0.,0.,0.,1.]}
    temps[12]=outputs[0]
    for index in range(registers[0x1ea0],136):
        w=code[index*4:index*4+4]
        # Kelvin instruction is a 96-bit integer in words 3,2,1 (word 0 padding).
        bits=w[3]|(w[2]<<32)|(w[1]<<64)
        def field(start,length):return (bits>>start)&((1<<length)-1)
        def source(start):
            packed=field(start,15);mux=packed&3;number=(packed>>2)&15
            if mux==1: value=temps[number]
            elif mux==2: value=inputs[field(73,4)]
            elif mux==3: value=constants[field(77,8)]
            else: raise AssertionError('Invalid source')
            assert not field(1,1),'Relative constants outside this validation scope'
            return [f32(value[(packed>>(6+shift))&3]*(-1 if packed&0x4000 else 1)) for shift in [6,4,2,0]]
        mac=field(85,4);ilu=field(89,3);mv=iv=None;observed_opcodes.add((mac,ilu))
        if mac==1: mv=source(58)
        elif mac==2: mv=[f32(a*b) for a,b in zip(source(58),source(43))]
        elif mac==4: mv=[f32(f32(a*b)+c) for a,b,c in zip(source(58),source(43),source(28))]
        elif mac==7:
            values=[f32(a*b) for a,b in zip(source(58),source(43))];total=0.
            for x in values:total=f32(total+x)
            mv=[total]*4
        else: assert mac==0,mac
        if ilu==1: iv=source(28)
        elif ilu==3:
            value=f32(1/source(28)[0]);magnitude=min(max(abs(value),2**-64),2**64)
            iv=[f32(math.copysign(magnitude,value))]*4
        else: assert ilu==0,ilu
        def write(destination,mask,value):
            for c in range(4):
                if mask&(8>>c): destination[c]=value[c]
        # Parallel MAC/ILU reads finish before either unit writes.
        temp=field(20,4)
        if mv is not None and not (ilu and temp==1):write(temps[temp],field(24,4),mv)
        if iv is not None:write(temps[1 if mac else temp],field(16,4),iv)
        if field(12,4):
            assert field(11,1)==1
            destination=field(3,8);assert destination in outputs,destination
            write(outputs[destination],field(12,4),iv if field(2,1) else mv)
        if field(0,1): break
    dev=0x785180;wf=lambda off:flt(word(dev+off))
    scale=[word(dev+0xee8)*wf(0x95c)*.5,word(dev+0xeec)*wf(0x960)*-.5,(wf(0xef4)-wf(0xef0))*wf(0x948)]
    offset=[word(dev+0xee0)*wf(0x95c)+wf(0xef8)+scale[0],word(dev+0xee4)*wf(0x960)+wf(0xefc)-scale[1],wf(0xef0)*wf(0x948)]
    out=outputs[0];clip=[f32(f32(f32(out[i]-offset[i])/scale[i])*out[3]) for i in range(3)]+[out[3]]
    clip[2]=f32(f32(clip[2]*2)-clip[3]) # D3D [0,W] to OpenGL [-W,W]
    expected=clip+[min(max(x,0),1) for x in outputs[3]]+outputs[9]
    actual=list(struct.unpack_from('<12f',gpu,vertex*48));error=max(abs(a-b) for a,b in zip(expected,actual));max_error=max(max_error,error)
    assert error<2e-6,(vertex,error,expected,actual)
    results.append({'vertex':vertex,'expected':expected,'gpu':actual,'max_absolute_error':error})
report={'scope':'First vertex shader only; independent Kelvin evaluator vs Mali transform feedback',
    'passed':len(results),'float_components':len(results)*12,'max_absolute_error':max_error,'tolerance':2e-6,
    'source':'https://envytools.readthedocs.io/en/latest/hw/graph/xf/isa.html',
    'opcodes':sorted(observed_opcodes),'results':results,
    'inputs_sha256':{n:hashlib.sha256((folder/n).read_bytes()).hexdigest() for n in ['first-draw-ram.bin','first-draw-contiguous.bin','first-vertex-feedback.bin']}}
(folder/'gpu-vertex-validation.json').write_text(json.dumps(report,indent=2))
print('PASS:',len(results),'GPU vertices,',len(results)*12,'components; maximum error',max_error)
