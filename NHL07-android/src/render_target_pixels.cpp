#include "render_target_pixels.h"
bool nhl07_store_render_target(const RecompD3dTextureDesc &d,
    const uint8_t *rgba,size_t rgba_bytes,size_t rgba_pitch,bool bottom_up,
    void *destination,size_t destination_bytes) {
    if(!rgba||!destination||!d.width||!d.height||d.width>4096||d.height>4096||d.depth)return false;
    unsigned f=d.format_byte;
    bool rgb565=f==0x05||f==0x11;
    if(!rgb565&&f!=0x06&&f!=0x07&&f!=0x12&&f!=0x1e)return false;
    unsigned bytes=rgb565?2:4;
    size_t row=size_t(d.width)*4;
    if(rgba_pitch<row||rgba_bytes<row||(d.height>1&&rgba_pitch>(rgba_bytes-row)/(d.height-1)))return false;
    size_t pitch=d.linear?d.pitch:size_t(d.width)*bytes;
    if(pitch<size_t(d.width)*bytes||pitch>destination_bytes/d.height)return false;
    if(!d.linear&&((d.width&(d.width-1))||(d.height&(d.height-1))))return false;
    uint32_t mx=0,my=0;
    if(!d.linear)recomp_d3d_texture_swizzle_masks(d.width,d.height,&mx,&my);
    auto *out=static_cast<uint8_t *>(destination);
    for(unsigned y=0;y<d.height;y++)for(unsigned x=0;x<d.width;x++) {
        const uint8_t *p=rgba+size_t(bottom_up?d.height-1-y:y)*rgba_pitch+x*4;
        size_t offset=d.linear?size_t(y)*pitch+x*bytes:size_t(recomp_d3d_texture_swizzle_offset(x,y,mx,my))*bytes;
        if(rgb565) {
            uint16_t value=uint16_t((p[0]>>3)<<11|(p[1]>>2)<<5|(p[2]>>3));
            out[offset]=uint8_t(value);out[offset+1]=uint8_t(value>>8);
        } else {
            out[offset]=p[2];out[offset+1]=p[1];out[offset+2]=p[0];
            out[offset+3]=(f==0x07||f==0x1e)?255:p[3];
        }
    }
    return true;
}
