"""Keep NHL's packed video-texture decoder after importing shared utilities."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
path=root/'src/shaders/texture_rgba.cpp'
source=path.read_text()
marker='    unsigned f=desc.format_byte;\n'
addition='''    // NV20 LC_CR8YB8CB8YA8 / LC_YB8CR8YA8CB8 are linear packed 4:2:2.
    // BT.601 limited-range integer matrix, matching the existing D3D8 path:
    // https://learn.microsoft.com/en-us/windows/win32/medfound/recommended-8-bit-yuv-formats-for-video-rendering
    if(f==0x24 || f==0x25) {
        if(!desc.linear || (desc.width&1) || desc.pitch<desc.width*2) return false;
        consumed=size_t(desc.pitch)*desc.height;
        if(consumed>bytes) return false;
        unsigned yo=f==0x24?0:1;
        for(unsigned y=0;y<desc.height;++y) for(unsigned x=0;x<desc.width;x+=2) {
            const uint8_t *pair=source+size_t(y)*desc.pitch+x*2;
            int u=int(pair[1-yo])-128,v=int(pair[3-yo])-128;
            for(unsigned k=0;k<2;++k) {
                int c=int(pair[k*2+yo])-16;
                uint8_t *out=rgba.data()+(size_t(y)*desc.width+x+k)*4;
                out[0]=std::clamp((298*c+409*v+128)>>8,0,255);
                out[1]=std::clamp((298*c-100*u-208*v+128)>>8,0,255);
                out[2]=std::clamp((298*c+516*u+128)>>8,0,255);out[3]=255;
            }
        }
        return true;
    }
'''
assert marker in source
if addition not in source:
    source=source.replace(marker,marker+addition)
    path.write_text(source,encoding='utf-8')
print('Packed YUY2/UYVY video texture decoder preserved')
