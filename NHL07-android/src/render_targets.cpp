/* Native framebuffer targets with real guest color writeback. The original
   XDK owns binding references, viewport fields and emitted NV097 state. */
#include "render_targets.h"
#include "render_target_pixels.h"
#include "render_profile.h"
#include "scaled_upload.h"
#include "shaders/texture_rgba.h"
#include <GLES3/gl3.h>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
extern "C" {
#include "recomp_types.h"
void sub_0075BCC0_original_xbox(void);
void nhl07_invalidate_vertex_cache(void);
}
namespace {
constexpr uint32_t device=0x785180u;
GLuint back_fbo,back_depth_object,offscreen_fbo,offscreen_color,offscreen_depth;
struct ReadbackTarget {GLuint framebuffer=0,color=0;unsigned width=0,height=0;};
ReadbackTarget readback_targets[3];
uint32_t back_surface,depth_surface,active_color,active_depth;
unsigned back_width,back_height,target_width,target_height;
unsigned resolution_scale=1;
bool original_state,back_depth_attached=true,back_color_dirty;
bool offscreen_color_dirty=true;
std::vector<uint8_t> offscreen_published;
RecompD3dTextureDesc active_desc{};
size_t active_span;
[[noreturn]] void missing(const char *reason,uint32_t value=0){
    std::fprintf(stderr,"[NHL07-RENDER-TARGET-MISSING] %s value=%08X\n",reason,value);std::abort();
}
void require(bool okay,const char *reason,uint32_t value=0){if(!okay)missing(reason,value);}
void check(const char *where){GLenum error=glGetError();require(error==GL_NO_ERROR,where,error);}
void *guest(uint32_t address,size_t bytes){
    bool low=address>=0x10000u&&uint64_t(address)+bytes<=0x4000000u;
    bool physical=address>=0x80000000u&&uint64_t(address)+bytes<=0x84000000u;
    require(low||physical,"guest surface pointer",address);
    return reinterpret_cast<void *>(g_xbox_mem_offset+uintptr_t(address));
}
RecompD3dTextureDesc describe(uint32_t surface,size_t &span){
    guest(surface,24);require((MEM32(surface)&0x70000u)==0x50000u,"surface type",MEM32(surface));
    uint32_t format=MEM32(surface+12),size=MEM32(surface+16),f=(format>>8)&255;
    require(((format>>4)&15)==2&&!(format&4),"non-2D surface",format);
    RecompD3dTextureDesc desc{};
    require(recomp_d3d_texture_describe(format,size,MEM32(surface+4),MEM8(0x776820u+f),&desc),"surface description",surface);
    require(desc.render_target&&!desc.depth,"color render capability",f);
    bool rgb565=f==0x05||f==0x11;
    require(rgb565||f==0x06||f==0x07||f==0x12||f==0x1e,"color surface format",f);
    require(desc.width&&desc.height&&desc.width<=4096&&desc.height<=4096,"surface dimensions",format);
    unsigned bytes=rgb565?2:4;
    require(desc.bits_per_pixel==bytes*8,"surface bit depth",desc.bits_per_pixel);
    if(desc.linear)require(desc.pitch>=desc.width*bytes,"surface pitch",desc.pitch);
    span=desc.linear?size_t(desc.pitch)*desc.height:size_t(desc.width)*desc.height*bytes;
    require(span<=0x4000000u&&uint64_t(desc.data)+span<=0x4000000u,"surface memory span",desc.data);
    guest(0x80000000u|desc.data,span);return desc;
}
void delete_offscreen(){
    if(offscreen_fbo)glDeleteFramebuffers(1,&offscreen_fbo);
    if(offscreen_color)glDeleteTextures(1,&offscreen_color);
    if(offscreen_depth)glDeleteRenderbuffers(1,&offscreen_depth);
    offscreen_fbo=offscreen_color=offscreen_depth=0;
    offscreen_color_dirty=true;offscreen_published.clear();
}
void copy_depth(bool to_back){
    Nhl07ProfileScope profile(NHL07_PROFILE_DEPTH_COPY);
    if(!offscreen_depth)return;
    GLboolean scissor=glIsEnabled(GL_SCISSOR_TEST);glDisable(GL_SCISSOR_TEST);
    // A smaller color target aliases the top-left region of the original
    // screen depth surface. GL attachments use bottom-left coordinates.
    glBindFramebuffer(GL_FRAMEBUFFER,back_fbo);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,back_depth_object);
    glBindFramebuffer(GL_READ_FRAMEBUFFER,to_back?offscreen_fbo:back_fbo);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER,to_back?back_fbo:offscreen_fbo);
    int y=int((back_height-target_height)*resolution_scale),w=int(target_width*resolution_scale),h=int(target_height*resolution_scale),bh=int(back_height*resolution_scale);
    if(to_back)glBlitFramebuffer(0,0,w,h,0,y,w,bh,GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT,GL_NEAREST);
    else glBlitFramebuffer(0,y,w,bh,0,0,w,h,GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT,GL_NEAREST);
    check("depth alias copy");
    glBindFramebuffer(GL_FRAMEBUFFER,back_fbo);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,back_depth_attached?back_depth_object:0);
    glBindFramebuffer(GL_FRAMEBUFFER,offscreen_fbo);
    if(scissor)glEnable(GL_SCISSOR_TEST);
}
void create_offscreen(const RecompD3dTextureDesc &desc,size_t span,uint32_t depth){
    Nhl07ProfileScope profile(NHL07_PROFILE_TARGET_CREATE);
    std::vector<uint8_t> rgba;size_t consumed=0;
    require(recomp_texture_rgba(desc,guest(0x80000000u|desc.data,span),span,nullptr,0,rgba,consumed),"initial surface decode",desc.format_byte);
    unsigned native_width=desc.width*resolution_scale,native_height=desc.height*resolution_scale;
    const char *setting=std::getenv("NHL07_TARGET_GPU_UPSAMPLE");bool gpu=resolution_scale>1&&setting&&std::strcmp(setting,"1")==0;
    unsigned upload_width=gpu?desc.width:native_width,upload_height=gpu?desc.height:native_height;
    std::vector<uint8_t> flipped(size_t(upload_width)*upload_height*4);size_t row=size_t(upload_width)*4;
    if(gpu){for(unsigned y=0;y<desc.height;++y)std::memcpy(flipped.data()+size_t(y)*row,rgba.data()+size_t(desc.height-1-y)*row,row);}
    else for(unsigned y=0;y<native_height;y++)for(unsigned x=0;x<native_width;x++)
        std::memcpy(flipped.data()+(size_t(y)*native_width+x)*4,rgba.data()+(size_t(desc.height-1-y/resolution_scale)*desc.width+x/resolution_scale)*4,4);
    glGenFramebuffers(1,&offscreen_fbo);glBindFramebuffer(GL_FRAMEBUFFER,offscreen_fbo);
    glGenTextures(1,&offscreen_color);glBindTexture(GL_TEXTURE_2D,offscreen_color);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glPixelStorei(GL_UNPACK_ALIGNMENT,1);
    bool rgb565=desc.format_byte==0x05||desc.format_byte==0x11;
    bool alpha=desc.format_byte==0x06||desc.format_byte==0x12;
    if(rgb565){
        auto linear=desc;linear.width=upload_width;linear.height=upload_height;linear.linear=true;linear.pitch=upload_width*2;linear.format_byte=0x11;
        std::vector<uint8_t> packed(size_t(upload_width)*upload_height*2);
        require(nhl07_store_render_target(linear,flipped.data(),flipped.size(),row,false,packed.data(),packed.size()),"initial RGB565 encode");
        if(gpu)require(nhl07_scaled_upload(offscreen_fbo,offscreen_color,GL_RGB565,desc.width,desc.height,resolution_scale,GL_RGB,GL_UNSIGNED_SHORT_5_6_5,packed.data()),"logical RGB565 upload");
        else glTexImage2D(GL_TEXTURE_2D,0,GL_RGB565,native_width,native_height,0,GL_RGB,GL_UNSIGNED_SHORT_5_6_5,packed.data());
        nhl07_profile_bytes(NHL07_PROFILE_TARGET_CREATE,packed.size());
    }else if(alpha){
        if(gpu)require(nhl07_scaled_upload(offscreen_fbo,offscreen_color,GL_RGBA8,desc.width,desc.height,resolution_scale,GL_RGBA,GL_UNSIGNED_BYTE,flipped.data()),"logical RGBA8 upload");
        else glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA8,native_width,native_height,0,GL_RGBA,GL_UNSIGNED_BYTE,flipped.data());
        nhl07_profile_bytes(NHL07_PROFILE_TARGET_CREATE,flipped.size());
    }
    else{
        std::vector<uint8_t> rgb(size_t(upload_width)*upload_height*3);
        for(size_t p=0;p<rgb.size()/3;p++)std::memcpy(rgb.data()+p*3,flipped.data()+p*4,3);
        if(gpu)require(nhl07_scaled_upload(offscreen_fbo,offscreen_color,GL_RGB8,desc.width,desc.height,resolution_scale,GL_RGB,GL_UNSIGNED_BYTE,rgb.data()),"logical RGB8 upload");
        else glTexImage2D(GL_TEXTURE_2D,0,GL_RGB8,native_width,native_height,0,GL_RGB,GL_UNSIGNED_BYTE,rgb.data());
        nhl07_profile_bytes(NHL07_PROFILE_TARGET_CREATE,rgb.size());
    }
    glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,offscreen_color,0);
    if(depth){
        require(depth==depth_surface&&back_depth_object,"ordinary depth surface",depth);
        require(desc.width<=back_width&&desc.height<=back_height,"depth alias dimensions",depth);
        glGenRenderbuffers(1,&offscreen_depth);glBindRenderbuffer(GL_RENDERBUFFER,offscreen_depth);
        glRenderbufferStorage(GL_RENDERBUFFER,GL_DEPTH24_STENCIL8,native_width,native_height);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,offscreen_depth);
    }
    require(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"offscreen framebuffer",glCheckFramebufferStatus(GL_FRAMEBUFFER));
    check("offscreen creation");copy_depth(false);
}
GLenum readback_format(GLuint framebuffer){
    // These attachments are created here and in native_graphics.c. Avoid
    // driver queries for the two production paths with known storage formats.
    if(framebuffer&&framebuffer==back_fbo)return GL_RGBA8;
    if(framebuffer&&framebuffer==offscreen_fbo){
        unsigned f=active_desc.format_byte;
        if(f==0x05||f==0x11)return GL_RGB565;
        return f==0x06||f==0x12?GL_RGBA8:GL_RGB8;
    }
    // The GPU contract also exercises independent FBOs. Unknown future
    // formats keep the original readback rather than changing their conversion.
    GLenum attachment=framebuffer?GL_COLOR_ATTACHMENT0:GL_BACK;
    auto query=[&](GLenum name){GLint value=0;glGetFramebufferAttachmentParameteriv(GL_READ_FRAMEBUFFER,attachment,name,&value);return value;};
    GLint type=query(GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE),encoding=query(GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING);
    GLint r=query(GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE),g=query(GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE);
    GLint b=query(GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE),a=query(GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE);
    check("readback source format");
    if(type!=GL_UNSIGNED_NORMALIZED||encoding!=GL_LINEAR)return 0;
    if(r==5&&g==6&&b==5&&a==0)return GL_RGB565;
    if(r==8&&g==8&&b==8&&a==0)return GL_RGB8;
    if(r==8&&g==8&&b==8&&a==8)return GL_RGBA8;
    return 0;
}
}
extern "C" void nhl07_targets_configure_scale(unsigned scale){require(scale>=1&&scale<=3,"resolution scale",scale);resolution_scale=scale;}
extern "C" unsigned nhl07_targets_scale(void){return resolution_scale;}
extern "C" void nhl07_targets_replace_back(unsigned framebuffer,unsigned depth_object,unsigned scale){
    bool offscreen=offscreen_fbo!=0;delete_offscreen();back_fbo=framebuffer;back_depth_object=depth_object;resolution_scale=scale;back_color_dirty=true;
    glBindFramebuffer(GL_FRAMEBUFFER,back_fbo);glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,back_depth_attached?back_depth_object:0);
    if(offscreen)create_offscreen(active_desc,active_span,active_depth);
}
extern "C" void nhl07_targets_read_pixels(unsigned width,unsigned height,uint8_t *rgba){
    Nhl07ProfileScope profile(NHL07_PROFILE_READ_PIXELS);
    glPixelStorei(GL_PACK_ALIGNMENT,1);
    if(resolution_scale==1){
        nhl07_profile_bytes(NHL07_PROFILE_READ_PIXELS,size_t(width)*height*4);
        glReadPixels(0,0,width,height,GL_RGBA,GL_UNSIGNED_BYTE,rgba);return;
    }
    const char *setting=std::getenv("NHL07_TARGET_GPU_DOWNSAMPLE");
    if(setting&&std::strcmp(setting,"1")==0){
        GLint saved_read;
        glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&saved_read);
        GLenum format=readback_format(GLuint(saved_read));
        if(format){
            GLint saved_draw,saved_renderbuffer;
            glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&saved_draw);
            glGetIntegerv(GL_RENDERBUFFER_BINDING,&saved_renderbuffer);
            GLboolean scissor=glIsEnabled(GL_SCISSOR_TEST);
            auto &scratch=readback_targets[format==GL_RGB565?0:format==GL_RGB8?1:2];
            if(!scratch.framebuffer){glGenFramebuffers(1,&scratch.framebuffer);glGenRenderbuffers(1,&scratch.color);}
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER,scratch.framebuffer);
            if(width>scratch.width||height>scratch.height){
                // Each format retains its largest storage, so alternating
                // presentation/offscreen sizes and formats does not reallocate.
                scratch.width=std::max(width,scratch.width);scratch.height=std::max(height,scratch.height);
                glBindRenderbuffer(GL_RENDERBUFFER,scratch.color);
                // RGB565 must remain RGB565: converting it to RGBA8 before
                // ReadPixels changes the driver's 5/6-bit expansion rounding.
                glRenderbufferStorage(GL_RENDERBUFFER,format,scratch.width,scratch.height);
                glFramebufferRenderbuffer(GL_DRAW_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_RENDERBUFFER,scratch.color);
                require(glCheckFramebufferStatus(GL_DRAW_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"logical readback framebuffer");
            }
            // Map each logical pixel center to the native center sample used by
            // the CPU path: floor((x + 0.5) * scale) == x*scale + scale/2.
            // Blits ignore viewport and write masks, but must bypass a guest scissor.
            glDisable(GL_SCISSOR_TEST);
            glBlitFramebuffer(0,0,width*resolution_scale,height*resolution_scale,
                0,0,width,height,GL_COLOR_BUFFER_BIT,GL_NEAREST);
            check("logical readback downsample");
            glBindFramebuffer(GL_READ_FRAMEBUFFER,scratch.framebuffer);
            nhl07_profile_bytes(NHL07_PROFILE_READ_PIXELS,size_t(width)*height*4);
            glReadPixels(0,0,width,height,GL_RGBA,GL_UNSIGNED_BYTE,rgba);
            check("logical readback pixels");
            glBindFramebuffer(GL_READ_FRAMEBUFFER,GLuint(saved_read));
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER,GLuint(saved_draw));
            glBindRenderbuffer(GL_RENDERBUFFER,GLuint(saved_renderbuffer));
            if(scissor)glEnable(GL_SCISSOR_TEST);
            return;
        }
    }
    nhl07_profile_bytes(NHL07_PROFILE_READ_PIXELS,size_t(width)*height*resolution_scale*resolution_scale*4);
    unsigned nw=width*resolution_scale,nh=height*resolution_scale;std::vector<uint8_t> native(size_t(nw)*nh*4);
    glReadPixels(0,0,nw,nh,GL_RGBA,GL_UNSIGNED_BYTE,native.data());
    for(unsigned y=0;y<height;y++)for(unsigned x=0;x<width;x++)
        std::memcpy(rgba+(size_t(y)*width+x)*4,native.data()+(size_t(y*resolution_scale+resolution_scale/2)*nw+x*resolution_scale+resolution_scale/2)*4,4);
}
extern "C" void nhl07_targets_initialize(unsigned framebuffer,unsigned depth_object,unsigned width,unsigned height,uint32_t back,uint32_t depth){
    back_fbo=framebuffer;back_depth_object=depth_object;back_width=target_width=width;back_height=target_height=height;
    back_surface=active_color=back;depth_surface=active_depth=depth;original_state=false;back_depth_attached=depth!=0;
    back_color_dirty=true;
}
extern "C" void nhl07_targets_color_changed(void){if(offscreen_fbo)offscreen_color_dirty=true;else back_color_dirty=true;}
extern "C" void nhl07_targets_prepare_texture(uint32_t address){
    if(!back_surface)return;
    uint32_t base=MEM32(back_surface+4);
    size_t provisional_span=size_t(back_width)*back_height*4;
    if(address<base||uint64_t(address)>=uint64_t(base)+provisional_span||!back_color_dirty)return;
    size_t span=0;auto desc=describe(back_surface,span);
    require(desc.data!=0,"presentation physical storage",back_surface);
    GLint saved_read,saved_draw;glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&saved_read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&saved_draw);
    glBindFramebuffer(GL_READ_FRAMEBUFFER,back_fbo);
    std::vector<uint8_t> pixels(size_t(back_width)*back_height*4);glPixelStorei(GL_PACK_ALIGNMENT,1);
    nhl07_targets_read_pixels(back_width,back_height,pixels.data());check("presentation texture readback");
    require(nhl07_store_render_target(desc,pixels.data(),pixels.size(),size_t(back_width)*4,true,
        guest(0x80000000u|desc.data,span),span),"presentation texture writeback",desc.format_byte);
    glBindFramebuffer(GL_READ_FRAMEBUFFER,GLuint(saved_read));glBindFramebuffer(GL_DRAW_FRAMEBUFFER,GLuint(saved_draw));
    check("presentation readback binding restore");back_color_dirty=false;
    static unsigned copies;
    if(++copies<=8||copies%600==0)std::fprintf(stderr,"[NHL07-BACK-TEXTURE] copied=%u data=%08X size=%ux%u\n",copies,desc.data,desc.width,desc.height);
}
extern "C" void nhl07_targets_flush(void){
    Nhl07ProfileScope profile(NHL07_PROFILE_TARGET_FLUSH);
    if(!offscreen_fbo)return;
    glBindFramebuffer(GL_FRAMEBUFFER,offscreen_fbo);
    const char *setting=std::getenv("NHL07_TARGET_DIRTY_CACHE");bool cache=setting&&std::strcmp(setting,"1")==0;
    auto *destination=static_cast<uint8_t *>(guest(0x80000000u|active_desc.data,active_span));
    if(cache&&!offscreen_color_dirty&&offscreen_published.size()==active_span){
        // A CPU writer may have changed the guest bytes since the prior flush.
        // Re-publish the GPU-owned pixels just as the uncached path does, but
        // retain current linear-row padding, which the encoder never writes.
        if(active_desc.linear){
            size_t row=size_t(active_desc.width)*(active_desc.bits_per_pixel/8);
            for(unsigned y=0;y<active_desc.height;y++)std::memcpy(destination+size_t(y)*active_desc.pitch,
                offscreen_published.data()+size_t(y)*active_desc.pitch,row);
        }else std::memcpy(destination,offscreen_published.data(),active_span);
    }else{
        std::vector<uint8_t> pixels(size_t(target_width)*target_height*4);
        nhl07_targets_read_pixels(target_width,target_height,pixels.data());check("surface readback");
        {
            Nhl07ProfileScope encode_profile(NHL07_PROFILE_TARGET_ENCODE);
            require(nhl07_store_render_target(active_desc,pixels.data(),pixels.size(),size_t(target_width)*4,true,
                destination,active_span),"surface writeback",active_desc.format_byte);
        }
        if(cache)offscreen_published.assign(destination,destination+active_span);else offscreen_published.clear();
        offscreen_color_dirty=false;
    }
    // Depth/stencil can change independently, including through depth-only
    // Clear calls. Color caching must not skip their publication or the
    // existing guest vertex-data invalidation.
    nhl07_invalidate_vertex_cache();copy_depth(true);
    std::fprintf(stderr,"[NHL07-RENDER-TARGET] writeback surface=%08X data=%08X size=%ux%u\n",active_color,active_desc.data,target_width,target_height);
}
extern "C" void nhl07_targets_set(uint32_t color,uint32_t depth){
    Nhl07ProfileScope profile(NHL07_PROFILE_TARGET_SET);
    if(!color)color=MEM32(device+0x1a04);
    std::fprintf(stderr,"[NHL07-RENDER-TARGET] requested color=%08X depth=%08X\n",color,depth);
    require(color!=0,"null color surface");
    require(!depth||depth==depth_surface,"ordinary depth surface",depth);
    RecompD3dTextureDesc desc{};size_t span=0;
    bool offscreen=color!=back_surface;
    if(offscreen)desc=describe(color,span);
    if(!original_state&&!offscreen&&depth==depth_surface){glBindFramebuffer(GL_FRAMEBUFFER,back_fbo);return;}
    nhl07_targets_flush();
    if(!original_state){
        // Native presentation proxies start with public ownership. Add the
        // binding references expected by original SetRenderTarget before it
        // releases the prior current color/depth pair.
        MEM32(back_surface)=(MEM32(back_surface)&~0x780000u)|0x80000u;
        if(depth_surface)MEM32(depth_surface)=(MEM32(depth_surface)&~0x780000u)|0x80000u;
        original_state=true;
    }
    uint32_t sp=g_esp;sub_0075BCC0_original_xbox();
    require(g_esp==sp+12u,"original SetRenderTarget RET 8");g_esp=sp;
    require(MEM32(device+0x1a04)==color&&MEM32(device+0x1a08)==depth,"original target state",color);
    delete_offscreen();active_color=color;active_depth=depth;
    if(offscreen){
        active_desc=desc;active_span=span;target_width=desc.width;target_height=desc.height;
        create_offscreen(desc,span,depth);
        std::fprintf(stderr,"[NHL07-RENDER-TARGET] bound surface=%08X format=%02X size=%ux%u linear=%u data=%08X\n",color,desc.format_byte,target_width,target_height,desc.linear,desc.data);
    }else{
        target_width=back_width;target_height=back_height;back_depth_attached=depth!=0;
        glBindFramebuffer(GL_FRAMEBUFFER,back_fbo);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,depth?back_depth_object:0);
        check("presentation target restore");
    }
}
extern "C" unsigned nhl07_targets_framebuffer(void){return offscreen_fbo?offscreen_fbo:back_fbo;}
extern "C" unsigned nhl07_targets_width(void){return target_width;}
extern "C" unsigned nhl07_targets_height(void){return target_height;}
extern "C" int nhl07_targets_original_state(void){return original_state;}
extern "C" int nhl07_targets_alpha(void){return !offscreen_fbo||active_desc.format_byte==0x06||active_desc.format_byte==0x12;}
extern "C" int nhl07_targets_rgb565(void){return offscreen_fbo&&(active_desc.format_byte==0x05||active_desc.format_byte==0x11);}
