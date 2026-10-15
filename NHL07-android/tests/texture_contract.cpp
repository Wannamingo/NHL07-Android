#include "shaders/texture_rgba.h"
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
int main() {
    unsigned checks=0;size_t consumed=0;std::vector<uint8_t> rgba,data(2*65536+128,0xcd);
    RecompD3dTextureDesc d{};d.linear=true;d.format_byte=0x11;d.width=256;d.height=256;d.pitch=512;
    for(unsigned i=0;i<65536;i++){data[i*2]=i&255;data[i*2+1]=i>>8;}
    if(!recomp_texture_rgba(d,data.data(),data.size(),nullptr,0,rgba,consumed)||consumed!=2*65536)return 1;
    for(unsigned i=0;i<65536;i++) {
        unsigned r=(i>>11)&31,g=(i>>5)&63,b=i&31;
        unsigned expected[4]={r*8+r/4,g*4+g/16,b*8+b/4,255};
        for(unsigned c=0;c<4;c++)if(rgba[i*4+c]!=expected[c])return 1;
        checks++;
    }
    d.width=7;d.height=3;d.pitch=64;data.assign(192,0xcd);
    for(unsigned y=0;y<3;y++)for(unsigned x=0;x<7;x++){unsigned i=y*7+x;data[y*64+x*2]=i;data[y*64+x*2+1]=0xf8;}
    if(!recomp_texture_rgba(d,data.data(),192,nullptr,0,rgba,consumed)||consumed!=192)return 1;
    for(unsigned i=0;i<21;i++){if(rgba[i*4]!=255||rgba[i*4+2]!=i*8+i/4||rgba[i*4+3]!=255)return 1;checks++;}
    if(recomp_texture_rgba(d,data.data(),191,nullptr,0,rgba,consumed))return 1;checks++;
    d.pitch=12;if(recomp_texture_rgba(d,data.data(),192,nullptr,0,rgba,consumed))return 1;checks++;
    d.linear=false;d.format_byte=0x05;d.width=d.height=8;data.assign(128,0);
    /* Explicit three-bit Morton indexing, independent of production masks. */
    for(unsigned y=0;y<8;y++)for(unsigned x=0;x<8;x++) {
        unsigned p=0;for(unsigned k=0;k<3;k++)p|=((x>>k)&1)<<(k*2)|((y>>k)&1)<<(k*2+1);
        unsigned v=(y*8+x)*1024;data[p*2]=v&255;data[p*2+1]=v>>8;
    }
    if(!recomp_texture_rgba(d,data.data(),128,nullptr,0,rgba,consumed))return 1;
    for(unsigned i=0;i<64;i++){unsigned v=i*1024,r=(v>>11)&31,g=(v>>5)&63,b=v&31;
        if(rgba[i*4]!=r*8+r/4||rgba[i*4+1]!=g*4+g/16||rgba[i*4+2]!=b*8+b/4)return 1;checks++;}
    /* P8: independent Morton fixture and all 256 ARGB palette indices. */
    d.format_byte=0x0b;d.width=d.height=16;data.assign(256,0);
    std::vector<uint8_t> palette(1024);
    for(unsigned i=0;i<256;i++) {
        palette[i*4]=i^0x55;palette[i*4+1]=255-i;
        palette[i*4+2]=i;palette[i*4+3]=i^0xaa;
    }
    for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++) {
        unsigned p=0;for(unsigned k=0;k<4;k++)p|=((x>>k)&1)<<(k*2)|((y>>k)&1)<<(k*2+1);
        data[p]=y*16+x;
    }
    if(!recomp_texture_rgba(d,data.data(),data.size(),palette.data(),palette.size(),rgba,consumed)||consumed!=256)return 1;
    for(unsigned i=0;i<256;i++) {
        if(rgba[i*4]!=i||rgba[i*4+1]!=255-i||rgba[i*4+2]!=(i^0x55)||rgba[i*4+3]!=(i^0xaa))return 1;
        checks++;
    }
    if(recomp_texture_rgba(d,data.data(),data.size(),nullptr,1024,rgba,consumed))return 1;checks++;
    if(recomp_texture_rgba(d,data.data(),data.size(),palette.data(),1023,rgba,consumed))return 1;checks++;
    /* Both packed layouts, independent floating-point BT.601 reference.
       All luma values and 256 chroma combinations, including out-of-range
       clipping. Padded rows have sentinel bytes that must not become pixels. */
    for(unsigned fmt: {0x24u,0x25u}) {
        d.linear=true;d.format_byte=fmt;d.width=256;d.height=256;d.pitch=576;
        data.assign(d.pitch*d.height,0xcd);unsigned yo=fmt==0x24?0:1;
        for(unsigned y=0;y<256;y++)for(unsigned x=0;x<256;x+=2) {
            uint8_t *p=data.data()+y*d.pitch+x*2;
            p[yo]=x;p[yo+2]=x+1;p[1-yo]=y;p[3-yo]=255-y;
        }
        if(!recomp_texture_rgba(d,data.data(),data.size(),nullptr,0,rgba,consumed)||consumed!=data.size())return 1;
        for(unsigned y=0;y<256;y++)for(unsigned x=0;x<256;x++) {
            double c=int(x)-16,u=int(y)-128,v=127-int(y);
            double ref[3]={1.164383*c+1.596027*v,1.164383*c-.391762*u-.812968*v,1.164383*c+2.017232*u};
            for(unsigned ch=0;ch<3;ch++) {
                int expected=std::clamp(int(std::floor(ref[ch]+.5)),0,255);
                if(std::abs(int(rgba[(y*256+x)*4+ch])-expected)>1)return 1;
            }
            if(rgba[(y*256+x)*4+3]!=255)return 1;checks++;
        }
        if(recomp_texture_rgba(d,data.data(),data.size()-1,nullptr,0,rgba,consumed))return 1;checks++;
        d.pitch=511;if(recomp_texture_rgba(d,data.data(),data.size(),nullptr,0,rgba,consumed))return 1;checks++;
        d.pitch=576;d.width=255;if(recomp_texture_rgba(d,data.data(),data.size(),nullptr,0,rgba,consumed))return 1;checks++;
        d.width=256;d.linear=false;if(recomp_texture_rgba(d,data.data(),data.size(),nullptr,0,rgba,consumed))return 1;checks++;
    }
    std::printf("TEXTURE_CONTRACT passed=%u failed=0\n",checks);return 0;
}
