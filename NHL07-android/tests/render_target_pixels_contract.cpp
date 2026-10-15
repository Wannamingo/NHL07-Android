#include "render_target_pixels.h"
#include "shaders/texture_rgba.h"
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <limits>
static unsigned passed;
static void check(bool okay,const char *name){if(!okay){std::fprintf(stderr,"TARGET_PIXELS FAIL %s\n",name);std::exit(1);}++passed;}
static uint8_t expand5(unsigned v){return uint8_t((v<<3)|(v>>2));}
static uint8_t expand6(unsigned v){return uint8_t((v<<2)|(v>>4));}
static unsigned rectangular_morton(unsigned x,unsigned y){return (x&1)|((y&1)<<1)|((x&2)<<1)|((y&2)<<2)|((x&4)<<2);}
int main(){
    RecompD3dTextureDesc d{};d.width=d.height=256;d.bits_per_pixel=16;d.format_byte=0x11;d.linear=true;d.pitch=512;
    std::vector<uint8_t> rgba(65536*4),packed(65536*2+32,0xcd);
    for(unsigned v=0;v<65536;v++){rgba[v*4]=expand5(v>>11);rgba[v*4+1]=expand6((v>>5)&63);rgba[v*4+2]=expand5(v&31);rgba[v*4+3]=uint8_t(v);}
    for(bool bottom:{false,true}){
        check(nhl07_store_render_target(d,rgba.data(),rgba.size(),1024,bottom,packed.data()+16,packed.size()-32),"RGB565 encode");
        for(unsigned y=0;y<256;y++)for(unsigned x=0;x<256;x++){
            unsigned expected=(bottom?255-y:y)*256+x,offset=16+(y*256+x)*2;
            check((unsigned(packed[offset])|unsigned(packed[offset+1])<<8)==expected,"all RGB565 words and orientation");
        }
        for(unsigned i=0;i<16;i++){check(packed[i]==0xcd,"prefix guard");check(packed[packed.size()-1-i]==0xcd,"suffix guard");}
    }
    for(unsigned f:{0x06u,0x07u,0x12u,0x1eu})for(bool bottom:{false,true}){
        d={};d.width=8;d.height=4;d.bits_per_pixel=32;d.format_byte=f;d.linear=f==0x12||f==0x1e;d.pitch=64;
        std::vector<uint8_t> source(48*4,0x77),target((d.linear?256:128)+32,0xcd);
        for(unsigned y=0;y<4;y++)for(unsigned x=0;x<8;x++){
            auto p=source.data()+y*48+x*4;p[0]=uint8_t(x*37+y*13);p[1]=uint8_t(x*11+y*67);p[2]=uint8_t(x*19+y*23);p[3]=uint8_t(x*11+y*73);
        }
        check(nhl07_store_render_target(d,source.data(),source.size(),48,bottom,target.data()+16,target.size()-32),"32-bit store");
        for(unsigned y=0;y<4;y++)for(unsigned x=0;x<8;x++){
            const uint8_t *input=source.data()+(bottom?3-y:y)*48+x*4;
            unsigned offset=16+(d.linear?y*64+x*4:rectangular_morton(x,y)*4);
            check(target[offset]==input[2]&&target[offset+1]==input[1]&&target[offset+2]==input[0],"independent BGRA/Morton fixture");
            check(target[offset+3]==((f==0x07||f==0x1e)?255:input[3]),"alpha or unused X channel");
        }
        if(d.linear)for(unsigned y=0;y<4;y++)for(unsigned i=32;i<64;i++)check(target[16+y*64+i]==0xcd,"row padding unchanged");
        for(unsigned i=0;i<16;i++){check(target[i]==0xcd,"32-bit prefix guard");check(target[target.size()-1-i]==0xcd,"32-bit suffix guard");}
        std::vector<uint8_t> decoded;size_t consumed=0;
        check(recomp_texture_rgba(d,target.data()+16,target.size()-32,nullptr,0,decoded,consumed),"existing decoder reads written texture");
        for(unsigned y=0;y<4;y++)for(unsigned x=0;x<8;x++){
            const uint8_t *input=source.data()+(bottom?3-y:y)*48+x*4;auto output=decoded.data()+(y*8+x)*4;
            check(std::memcmp(input,output,3)==0&&output[3]==((f==0x07||f==0x1e)?255:input[3]),"texture sample roundtrip");
        }
    }
    d={};d.width=8;d.height=4;d.format_byte=0x06;d.bits_per_pixel=32;
    std::vector<uint8_t> source(128,1),target(128,0xcd),before=target;
    auto reject=[&](RecompD3dTextureDesc value,const uint8_t *src,size_t src_bytes,size_t pitch,void *dst,size_t dst_bytes){
        check(!nhl07_store_render_target(value,src,src_bytes,pitch,false,dst,dst_bytes),"invalid transfer rejected");
        check(target==before,"invalid transfer leaves target untouched");
    };
    reject(d,nullptr,128,32,target.data(),128);reject(d,source.data(),128,32,nullptr,128);
    reject(d,source.data(),127,32,target.data(),128);reject(d,source.data(),128,31,target.data(),128);
    reject(d,source.data(),128,32,target.data(),127);reject(d,source.data(),128,std::numeric_limits<size_t>::max(),target.data(),128);
    auto bad=d;bad.width=0;reject(bad,source.data(),128,32,target.data(),128);
    bad=d;bad.width=7;reject(bad,source.data(),128,32,target.data(),128);
    bad=d;bad.depth=true;reject(bad,source.data(),128,32,target.data(),128);
    bad=d;bad.format_byte=0x0c;reject(bad,source.data(),128,32,target.data(),128);
    bad=d;bad.linear=true;bad.pitch=31;reject(bad,source.data(),128,32,target.data(),128);
    std::printf("TARGET_PIXELS passed=%u failed=0\n",passed);return 0;
}
