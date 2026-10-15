#include <EGL/egl.h>
#include <GLES3/gl3.h>
#include <sys/mman.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "render_targets.h"
#include "render_target_pixels.h"
#include "scaled_upload.h"
#include "shaders/texture_rgba.h"
extern "C" {
#include "recomp_types.h"
ptrdiff_t g_xbox_mem_offset;
uint32_t g_xbox_code_lo,g_xbox_code_hi;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
}
static unsigned passed,invalidations,original_calls;
static void check(bool okay,const char *name){if(!okay){std::fprintf(stderr,"TARGET_GPU FAIL %s error=%X\n",name,glGetError());std::exit(1);}++passed;}
extern "C" void nhl07_invalidate_vertex_cache(void){++invalidations;}
/* The GPU contract isolates native attachment behavior. Original XDK
   reference/state execution is covered separately and by live integration. */
extern "C" void sub_0075BCC0_original_xbox(void){
    uint32_t color=MEM32(g_esp+4),depth=MEM32(g_esp+8);if(!color)color=MEM32(0x785180+0x1a04);
    MEM32(0x785180+0x1a04)=color;MEM32(0x785180+0x1a08)=depth;g_eax=0;g_esp+=12;++original_calls;
}
static void set_target(uint32_t color,uint32_t depth){
    uint32_t sp=g_esp;MEM32(sp)=0x12345678;MEM32(sp+4)=color;MEM32(sp+8)=depth;
    nhl07_targets_set(color,depth);check(g_esp==sp,"native target adapter preserves hook frame");
}
static unsigned morton(unsigned x,unsigned y){return (x&1)|((y&1)<<1)|((x&2)<<1)|((y&2)<<2)|((x&4)<<2);}
static std::vector<uint8_t> read_pixels(unsigned w,unsigned h){std::vector<uint8_t> result(size_t(w)*h*4);glReadPixels(0,0,w,h,GL_RGBA,GL_UNSIGNED_BYTE,result.data());check(glGetError()==GL_NO_ERROR,"GPU readback");return result;}
static void match_top_rows(const std::vector<uint8_t> &gl,const std::vector<uint8_t> &expected,unsigned w,unsigned h,int tolerance){
    for(unsigned y=0;y<h;y++)for(unsigned x=0;x<w;x++)for(unsigned lane=0;lane<4;lane++){
        int actual=gl[((h-1-y)*w+x)*4+lane],reference=expected[(y*w+x)*4+lane];
        check(std::abs(actual-reference)<=tolerance,"GPU rows/channels match logical pixels");
    }
}
static GLuint shader(GLenum type,const char *source){GLuint object=glCreateShader(type);glShaderSource(object,1,&source,nullptr);glCompileShader(object);GLint ok;glGetShaderiv(object,GL_COMPILE_STATUS,&ok);check(ok,"contract shader compiled");return object;}
static GLuint white_program(){
    const char *vs="#version 300 es\nvoid main(){vec2 p=vec2((gl_VertexID<<1)&2,gl_VertexID&2);gl_Position=vec4(p*2.0-1.0,0.0,1.0);}";
    const char *ps="#version 300 es\nprecision highp float;out vec4 color;void main(){color=vec4(1.0);}";
    GLuint v=shader(GL_VERTEX_SHADER,vs),p=shader(GL_FRAGMENT_SHADER,ps),program=glCreateProgram();
    glAttachShader(program,v);glAttachShader(program,p);glLinkProgram(program);GLint okay;glGetProgramiv(program,GL_LINK_STATUS,&okay);check(okay,"contract program linked");glDeleteShader(v);glDeleteShader(p);return program;
}
static void downsample_contract(){
    GLint saved_read,saved_draw,saved_renderbuffer,saved_active,saved_texture,saved_texture3,saved_unpack,saved_viewport[4],saved_scissor[4];
    GLboolean saved_mask[4],saved_scissor_enabled=glIsEnabled(GL_SCISSOR_TEST);
    glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&saved_read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&saved_draw);
    glGetIntegerv(GL_RENDERBUFFER_BINDING,&saved_renderbuffer);glGetIntegerv(GL_ACTIVE_TEXTURE,&saved_active);
    glGetIntegerv(GL_TEXTURE_BINDING_2D,&saved_texture);glGetIntegerv(GL_UNPACK_ALIGNMENT,&saved_unpack);
    glGetIntegerv(GL_VIEWPORT,saved_viewport);glGetIntegerv(GL_SCISSOR_BOX,saved_scissor);glGetBooleanv(GL_COLOR_WRITEMASK,saved_mask);
    unsigned saved_scale=nhl07_targets_scale();
    GLuint source_fbo,source_texture,other_fbo,other_color;
    glGenFramebuffers(1,&source_fbo);glGenTextures(1,&source_texture);
    glGenFramebuffers(1,&other_fbo);glGenRenderbuffers(1,&other_color);
    glBindFramebuffer(GL_FRAMEBUFFER,other_fbo);glBindRenderbuffer(GL_RENDERBUFFER,other_color);
    glRenderbufferStorage(GL_RENDERBUFFER,GL_RGBA8,4,4);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_RENDERBUFFER,other_color);
    check(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"downsample sentinel framebuffer");
    glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    glClearColor(21/255.f,43/255.f,87/255.f,165/255.f);glClear(GL_COLOR_BUFFER_BIT);
    auto sentinel=read_pixels(4,4);
    glActiveTexture(GL_TEXTURE3);glGetIntegerv(GL_TEXTURE_BINDING_2D,&saved_texture3);
    glBindTexture(GL_TEXTURE_2D,source_texture);glPixelStorei(GL_UNPACK_ALIGNMENT,1);
    // Every native pixel differs, including adjacent 2x texels and alpha.
    // Comparing solid scaled blocks would not detect a wrong center sample.
    for(unsigned scale:{1u,2u,3u})for(GLenum format:{GL_RGB565,GL_RGB8,GL_RGBA8}){
        nhl07_targets_configure_scale(scale);
        constexpr unsigned logical_width=37,logical_height=23;
        unsigned nw=logical_width*scale,nh=logical_height*scale;
        std::vector<uint8_t> bytes(size_t(nw)*nh*(format==GL_RGBA8?4:format==GL_RGB8?3:2));
        for(unsigned y=0;y<nh;y++)for(unsigned x=0;x<nw;x++){
            size_t p=size_t(y)*nw+x;
            if(format==GL_RGB565){
                uint16_t value=uint16_t(x*911u+y*2081u+(x^y)*97u);
                std::memcpy(bytes.data()+p*2,&value,2);
            }else{
                unsigned channels=format==GL_RGBA8?4:3;
                bytes[p*channels]=uint8_t(x*37+y*73);
                bytes[p*channels+1]=uint8_t(x*131+y*11);
                bytes[p*channels+2]=uint8_t(x*17+y*109);
                if(channels==4)bytes[p*channels+3]=uint8_t(x*61+y*43);
            }
        }
        glBindTexture(GL_TEXTURE_2D,source_texture);
        glTexImage2D(GL_TEXTURE_2D,0,format,nw,nh,0,format==GL_RGBA8?GL_RGBA:GL_RGB,
            format==GL_RGB565?GL_UNSIGNED_SHORT_5_6_5:GL_UNSIGNED_BYTE,bytes.data());
        glBindFramebuffer(GL_READ_FRAMEBUFFER,source_fbo);
        glFramebufferTexture2D(GL_READ_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,source_texture,0);
        check(glCheckFramebufferStatus(GL_READ_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"pattern framebuffer format");
        // Increasing and decreasing dimensions exercise scratch growth and
        // reuse; the actual source allocation remains large enough for all.
        const unsigned sizes[][2]={{7,5},{31,19},{13,9},{37,23},{7,5}};
        for(const auto &size:sizes)for(bool scissor:{false,true}){
            unsigned w=size[0],h=size[1];
            glBindFramebuffer(GL_READ_FRAMEBUFFER,source_fbo);glBindFramebuffer(GL_DRAW_FRAMEBUFFER,other_fbo);
            glBindRenderbuffer(GL_RENDERBUFFER,other_color);glViewport(3,5,2,7);glScissor(0,0,1,1);
            if(scissor)glEnable(GL_SCISSOR_TEST);else glDisable(GL_SCISSOR_TEST);
            glColorMask(GL_FALSE,GL_TRUE,GL_FALSE,GL_TRUE);
            auto native=read_pixels(w*scale,h*scale);std::vector<uint8_t> expected(size_t(w)*h*4);
            for(unsigned y=0;y<h;y++)for(unsigned x=0;x<w;x++)
                std::memcpy(expected.data()+(size_t(y)*w+x)*4,
                    native.data()+(size_t(y*scale+scale/2)*(w*scale)+x*scale+scale/2)*4,4);
            std::vector<uint8_t> baseline(expected.size()),optimized(expected.size());
            unsetenv("NHL07_TARGET_GPU_DOWNSAMPLE");nhl07_targets_read_pixels(w,h,baseline.data());
            check(baseline==expected,"default readback matches independent native center sampling");
            setenv("NHL07_TARGET_GPU_DOWNSAMPLE","1",1);nhl07_targets_read_pixels(w,h,optimized.data());
            if(optimized!=baseline){
                unsigned mismatches=0,maximum_error=0;
                for(size_t p=0;p<baseline.size();p++)if(baseline[p]!=optimized[p]){
                    maximum_error=std::max(maximum_error,unsigned(std::abs(int(baseline[p])-int(optimized[p]))));
                    if(mismatches<8)std::fprintf(stderr,"DOWNSAMPLE_MISMATCH scale=%u format=%04X size=%ux%u scissor=%u x=%zu y=%zu channel=%zu expected=%u actual=%u\n",
                        scale,format,w,h,unsigned(scissor),(p/4)%w,(p/4)/w,p%4,unsigned(baseline[p]),unsigned(optimized[p]));
                    ++mismatches;
                }
                std::fprintf(stderr,"DOWNSAMPLE_MISMATCH count=%u maximum_error=%u\n",mismatches,maximum_error);
            }
            check(optimized==baseline,"GPU downsample is byte-exact for patterned RGB565/RGB8/RGBA8");
            GLint actual_read,actual_draw,actual_renderbuffer,actual_active,actual_texture,actual_viewport[4],actual_scissor[4],read_buffer,draw_buffer;
            GLboolean actual_mask[4];
            glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&actual_read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&actual_draw);
            glGetIntegerv(GL_RENDERBUFFER_BINDING,&actual_renderbuffer);glGetIntegerv(GL_ACTIVE_TEXTURE,&actual_active);
            glGetIntegerv(GL_TEXTURE_BINDING_2D,&actual_texture);glGetIntegerv(GL_VIEWPORT,actual_viewport);
            glGetIntegerv(GL_SCISSOR_BOX,actual_scissor);glGetBooleanv(GL_COLOR_WRITEMASK,actual_mask);
            glGetIntegerv(GL_READ_BUFFER,&read_buffer);glGetIntegerv(GL_DRAW_BUFFER0,&draw_buffer);
            check(actual_read==GLint(source_fbo)&&actual_draw==GLint(other_fbo),"downsample restores distinct framebuffer bindings");
            check(actual_renderbuffer==GLint(other_color),"downsample restores renderbuffer binding");
            check(actual_active==GL_TEXTURE3&&actual_texture==GLint(source_texture),"downsample preserves texture unit and binding");
            check(bool(glIsEnabled(GL_SCISSOR_TEST))==scissor&&actual_scissor[0]==0&&actual_scissor[1]==0&&actual_scissor[2]==1&&actual_scissor[3]==1,"downsample preserves scissor enable and rectangle");
            check(actual_viewport[0]==3&&actual_viewport[1]==5&&actual_viewport[2]==2&&actual_viewport[3]==7,"downsample preserves viewport");
            check(!actual_mask[0]&&actual_mask[1]&&!actual_mask[2]&&actual_mask[3],"downsample preserves color write masks");
            check(read_buffer==GL_COLOR_ATTACHMENT0&&draw_buffer==GL_COLOR_ATTACHMENT0,"downsample preserves source and destination buffer selection");
            check(read_pixels(w*scale,h*scale)==native,"downsample does not modify source native pixels");
            glBindFramebuffer(GL_READ_FRAMEBUFFER,other_fbo);check(read_pixels(4,4)==sentinel,"downsample does not modify prior draw framebuffer");
            check(glGetError()==GL_NO_ERROR,"downsample patterned GPU status");
        }
    }
    unsetenv("NHL07_TARGET_GPU_DOWNSAMPLE");nhl07_targets_configure_scale(saved_scale);
    glBindFramebuffer(GL_READ_FRAMEBUFFER,GLuint(saved_read));glBindFramebuffer(GL_DRAW_FRAMEBUFFER,GLuint(saved_draw));
    glBindRenderbuffer(GL_RENDERBUFFER,GLuint(saved_renderbuffer));
    glBindTexture(GL_TEXTURE_2D,GLuint(saved_texture3));glActiveTexture(GLenum(saved_active));glBindTexture(GL_TEXTURE_2D,GLuint(saved_texture));
    glPixelStorei(GL_UNPACK_ALIGNMENT,saved_unpack);glViewport(saved_viewport[0],saved_viewport[1],saved_viewport[2],saved_viewport[3]);
    glScissor(saved_scissor[0],saved_scissor[1],saved_scissor[2],saved_scissor[3]);if(saved_scissor_enabled)glEnable(GL_SCISSOR_TEST);else glDisable(GL_SCISSOR_TEST);
    glColorMask(saved_mask[0],saved_mask[1],saved_mask[2],saved_mask[3]);
    glDeleteFramebuffers(1,&source_fbo);glDeleteTextures(1,&source_texture);glDeleteFramebuffers(1,&other_fbo);glDeleteRenderbuffers(1,&other_color);
}
static void upsample_contract(GLuint fbo,GLuint &color,GLuint &depth,uint32_t back,uint32_t z,uint32_t target){
    unsigned sequence=0;
    setenv("NHL07_TARGET_DIRTY_CACHE","0",1);
    for(unsigned scale:{2u,3u}){
        set_target(back,z);glBindFramebuffer(GL_FRAMEBUFFER,fbo);glDeleteTextures(1,&color);glDeleteRenderbuffers(1,&depth);
        glGenTextures(1,&color);glBindTexture(GL_TEXTURE_2D,color);glTexStorage2D(GL_TEXTURE_2D,1,GL_RGBA8,16*scale,16*scale);
        glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,color,0);
        glGenRenderbuffers(1,&depth);glBindRenderbuffer(GL_RENDERBUFFER,depth);glRenderbufferStorage(GL_RENDERBUFFER,GL_DEPTH24_STENCIL8,16*scale,16*scale);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,depth);
        nhl07_targets_configure_scale(scale);nhl07_targets_initialize(fbo,depth,16,16,back,z);
        glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
        glClearColor(17/255.f,34/255.f,51/255.f,68/255.f);glClearDepthf(.7f);glClearStencil(3);
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        auto back_reference=read_pixels(16*scale,16*scale);
        for(unsigned format:{0x06u,0x07u,0x12u,0x1eu,0x05u,0x11u})for(bool depth_alias:{false,true})for(const char *downsample_mode:{"0","1"}){
            setenv("NHL07_TARGET_GPU_DOWNSAMPLE",downsample_mode,1);
            bool rgb565=format==0x05||format==0x11,linear=format==0x12||format==0x1e||format==0x11;
            unsigned bytes=rgb565?2:4;size_t span=linear?256:8*4*bytes;
            uint32_t physical=0x300000+sequence++*0x1000;auto *data=reinterpret_cast<uint8_t *>(g_xbox_mem_offset+0x80000000ull+physical);
            std::memset(data-16,0xcd,span+32);
            for(unsigned y=0;y<4;y++)for(unsigned x=0;x<8;x++){
                size_t offset=linear?y*64+x*bytes:morton(x,y)*bytes;
                if(rgb565){uint16_t value=uint16_t(x*911u+y*2081u+(x^y)*97u);std::memcpy(data+offset,&value,2);}
                else{data[offset]=uint8_t(x*17+y*109);data[offset+1]=uint8_t(x*131+y*11);data[offset+2]=uint8_t(x*37+y*73);data[offset+3]=uint8_t(x*61+y*43);}
            }
            std::vector<uint8_t> original(data,data+span),baseline_native,baseline_writeback;
            MEM32(target)=0x01050001;MEM32(target+4)=physical;MEM32(target+8)=0;
            MEM32(target+12)=(3u<<20)|(2u<<24)|(1u<<16)|(format<<8)|0x22u;MEM32(target+16)=linear?0x3007:0;MEM32(target+20)=0;
            for(const char *upsample_mode:{"0","1"}){
                std::memcpy(data,original.data(),span);setenv("NHL07_TARGET_GPU_UPSAMPLE",upsample_mode,1);
                glActiveTexture(GL_TEXTURE3);glViewport(3,5,2,7);glEnable(GL_SCISSOR_TEST);glScissor(1,1,1,1);
                glColorMask(GL_FALSE,GL_TRUE,GL_FALSE,GL_TRUE);
                set_target(target,depth_alias?z:0);
                GLint read,draw,active,viewport[4],scissor[4];GLboolean mask[4];
                glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&draw);glGetIntegerv(GL_ACTIVE_TEXTURE,&active);
                glGetIntegerv(GL_VIEWPORT,viewport);glGetIntegerv(GL_SCISSOR_BOX,scissor);glGetBooleanv(GL_COLOR_WRITEMASK,mask);
                check(read==GLint(nhl07_targets_framebuffer())&&draw==read,"upsample integration leaves both target framebuffer bindings");
                check(active==GL_TEXTURE3&&viewport[0]==3&&viewport[1]==5&&viewport[2]==2&&viewport[3]==7,"upsample integration retains active unit and viewport");
                check(glIsEnabled(GL_SCISSOR_TEST)&&scissor[0]==1&&scissor[1]==1&&scissor[2]==1&&scissor[3]==1,"upsample integration retains guest scissor state");
                check(!mask[0]&&mask[1]&&!mask[2]&&mask[3],"upsample integration retains color masks");
                check(std::memcmp(data,original.data(),span)==0,"target creation retains guest pixels and padding");
                auto native=read_pixels(8*scale,4*scale);
                if(upsample_mode[0]=='0')baseline_native=native;
                else check(native==baseline_native,"actual six-format create_offscreen GPU upscale matches every native CPU-path pixel");
                set_target(back,z);
                if(upsample_mode[0]=='0')baseline_writeback.assign(data,data+span);
                else check(std::equal(baseline_writeback.begin(),baseline_writeback.end(),data),"actual GPU-upscaled target guest writeback matches CPU path with both downsample modes");
                check(read_pixels(16*scale,16*scale)==back_reference,"target creation and publication retain presentation color pixels");
                if(linear)for(unsigned y=0;y<4;y++)for(unsigned i=8*bytes;i<64;i++)check(data[y*64+i]==0xcd,"upscaled target publication retains linear row padding");
                for(unsigned i=0;i<16;i++){check(data[-int(i)-1]==0xcd,"upscaled target prefix guard");check(data[span+i]==0xcd,"upscaled target suffix guard");}
                check(glGetError()==GL_NO_ERROR,"actual upsample integration GPU status");
            }
        }
    }
    unsetenv("NHL07_TARGET_GPU_UPSAMPLE");unsetenv("NHL07_TARGET_GPU_DOWNSAMPLE");
    glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glActiveTexture(GL_TEXTURE0);
}
int main(int argc,char **argv){
    if(argc!=2)return 2;
    void *ram=mmap(nullptr,0x84000000ull,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);check(ram!=MAP_FAILED,"reserved guest address space");
    check(mprotect(static_cast<char *>(ram)+0x10000,0x3ff0000,PROT_READ|PROT_WRITE)==0,"low RAM mapping");
    check(mprotect(static_cast<char *>(ram)+0x80000000ull,0x4000000,PROT_READ|PROT_WRITE)==0,"distinct physical mapping");
    g_xbox_mem_offset=reinterpret_cast<ptrdiff_t>(ram);g_esp=0x100000;
    FILE *file=std::fopen(argv[1],"rb");if(!file)return 2;check(std::fread(static_cast<char *>(ram)+0x776820,1,256,file)==256,"actual XBE format descriptor table");std::fclose(file);
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);check(eglInitialize(display,nullptr,nullptr),"EGL initialized");
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_DEPTH_SIZE,24,EGL_STENCIL_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint count;check(eglChooseConfig(display,attributes,&config,1,&count)&&count==1,"EGL config");
    EGLint size[]={EGL_WIDTH,16,EGL_HEIGHT,16,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface drawable=eglCreatePbufferSurface(display,config,size);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    check(drawable!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,drawable,drawable,context),"EGL current");
    std::printf("TARGET_GPU renderer=%s version=%s\n",glGetString(GL_RENDERER),glGetString(GL_VERSION));
    GLuint fbo,color,depth;glGenFramebuffers(1,&fbo);glBindFramebuffer(GL_FRAMEBUFFER,fbo);
    glGenTextures(1,&color);glBindTexture(GL_TEXTURE_2D,color);glTexStorage2D(GL_TEXTURE_2D,1,GL_RGBA8,16,16);
    glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,color,0);
    glGenRenderbuffers(1,&depth);glBindRenderbuffer(GL_RENDERBUFFER,depth);glRenderbufferStorage(GL_RENDERBUFFER,GL_DEPTH24_STENCIL8,16,16);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,depth);check(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"native back framebuffer");
    constexpr uint32_t back=0xa00000,z=0xa00020,target=0xa00100;
    MEM32(back)=MEM32(z)=0x50001;MEM32(back+12)=0x11222;MEM32(z+12)=0x12a22;MEM32(back+16)=MEM32(z+16)=0xf00f;
    MEM32(0x785180+0x1a04)=back;MEM32(0x785180+0x1a08)=z;
    nhl07_targets_initialize(fbo,depth,16,16,back,z);
    set_target(back,z);check(!nhl07_targets_original_state()&&original_calls==0,"verified initial presentation path retained");
    GLuint program=white_program(),vao;glGenVertexArrays(1,&vao);glBindVertexArray(vao);
    unsigned sequence=0;
    for(unsigned format:{0x06u,0x07u,0x12u,0x1eu,0x05u,0x11u})for(bool depth_alias:{false,true}){
        glBindFramebuffer(GL_FRAMEBUFFER,fbo);glDisable(GL_SCISSOR_TEST);glDisable(GL_BLEND);glDisable(GL_STENCIL_TEST);glDisable(GL_DEPTH_TEST);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(0xff);
        glClearColor(17/255.f,34/255.f,51/255.f,68/255.f);glClearDepthf(.7f);glClearStencil(3);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        RecompD3dTextureDesc desc{};desc.width=8;desc.height=4;desc.format_byte=format;desc.linear=format==0x12||format==0x1e||format==0x11;desc.pitch=64;
        bool rgb565=format==0x05||format==0x11,alpha=format==0x06||format==0x12;unsigned bytes=rgb565?2:4;
        size_t span=desc.linear?256:8*4*bytes;uint32_t physical=0x100000+sequence++*0x1000;
        auto *data=reinterpret_cast<uint8_t *>(g_xbox_mem_offset+0x80000000ull+physical);std::memset(data-16,0xcd,span+32);
        std::vector<uint8_t> expected(8*4*4);
        for(unsigned y=0;y<4;y++)for(unsigned x=0;x<8;x++){
            uint8_t r=uint8_t(x*31+y*17),g=uint8_t(x*13+y*47),b=uint8_t(x*7+y*61),a=uint8_t(x*29+y*53);
            size_t offset=desc.linear?y*64+x*bytes:morton(x,y)*bytes;
            if(rgb565){uint16_t v=uint16_t((r>>3)<<11|(g>>2)<<5|(b>>3));data[offset]=uint8_t(v);data[offset+1]=uint8_t(v>>8);r=uint8_t(((v>>11)<<3)|((v>>11)>>2));g=uint8_t((((v>>5)&63)<<2)|(((v>>5)&63)>>4));b=uint8_t(((v&31)<<3)|((v&31)>>2));a=255;}
            else{data[offset]=b;data[offset+1]=g;data[offset+2]=r;data[offset+3]=alpha?a:255;a=alpha?a:255;}
            auto p=expected.data()+(y*8+x)*4;p[0]=r;p[1]=g;p[2]=b;p[3]=a;
        }
        MEM32(target)=0x01050001;MEM32(target+4)=physical;MEM32(target+8)=0;
        MEM32(target+12)=(3u<<20)|(2u<<24)|(1u<<16)|(format<<8)|0x22u;MEM32(target+16)=desc.linear?0x3007:0;MEM32(target+20)=0;
        set_target(target,depth_alias?z:0);
        check(nhl07_targets_width()==8&&nhl07_targets_height()==4,"target dimensions");
        match_top_rows(read_pixels(8,4),expected,8,4,rgb565?1:0);
        glDisable(GL_SCISSOR_TEST);glDepthMask(GL_TRUE);glStencilMask(0xff);glClearDepthf(.2f);glClearStencil(6);glClear(GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        glEnable(GL_SCISSOR_TEST);glScissor(1,3,3,1);glClearColor(1,0,0,64/255.f);glClear(GL_COLOR_BUFFER_BIT);
        for(unsigned x=1;x<4;x++){auto p=expected.data()+x*4;p[0]=255;p[1]=p[2]=0;p[3]=alpha?64:255;}
        glScissor(4,0,2,2);glClearColor(0,1,0,128/255.f);glClear(GL_COLOR_BUFFER_BIT);
        for(unsigned y=2;y<4;y++)for(unsigned x=4;x<6;x++){auto p=expected.data()+(y*8+x)*4;p[0]=0;p[1]=255;p[2]=0;p[3]=alpha?128:255;}
        nhl07_targets_color_changed();
        for(const char *cache_mode:{"0","1"}){
            setenv("NHL07_TARGET_DIRTY_CACHE",cache_mode,1);
            glDisable(GL_SCISSOR_TEST);glDepthMask(GL_TRUE);glStencilMask(0xff);
            glClearDepthf(.8f);glClearStencil(1);glClear(GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
            nhl07_targets_flush();
            std::vector<uint8_t> published;size_t published_bytes=0;
            check(recomp_texture_rgba(desc,data,span,nullptr,0,published,published_bytes)&&published==expected,
                "baseline/cached first flush publishes GPU colors");
            // Clean GPU color still owns its guest pixel storage. CPU edits
            // must be overwritten on the next flush, while row padding keeps
            // the CPU's latest bytes. Neither behavior can be inferred solely
            // from a GPU color-dirty bit.
            std::memset(data,0x5a,span);
            glDisable(GL_SCISSOR_TEST);glDepthMask(GL_TRUE);glStencilMask(0xff);
            glClearDepthf(.2f);glClearStencil(6);glClear(GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
            unsigned before_invalidations=invalidations;nhl07_targets_flush();
            check(invalidations==before_invalidations+1,"clean-color flush still invalidates guest vertex data");
            check(recomp_texture_rgba(desc,data,span,nullptr,0,published,published_bytes)&&published==expected,
                "clean-color flush republishes GPU pixels over CPU changes");
            if(desc.linear)for(unsigned y=0;y<4;y++)for(unsigned i=8*bytes;i<64;i++){
                check(data[y*64+i]==0x5a,"clean-color flush preserves latest CPU row padding");data[y*64+i]=0xcd;
            }
            if(depth_alias){
                GLuint active_fbo=nhl07_targets_framebuffer();glBindFramebuffer(GL_FRAMEBUFFER,fbo);
                glDisable(GL_SCISSOR_TEST);glDisable(GL_STENCIL_TEST);glEnable(GL_DEPTH_TEST);glDepthFunc(GL_LESS);glDepthMask(GL_FALSE);
                glViewport(0,0,16,16);glUseProgram(program);glDrawArrays(GL_TRIANGLES,0,3);
                auto clean_depth=read_pixels(16,16);
                for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++){
                    auto p=clean_depth.data()+((15-y)*16+x)*4;bool aliased=x<8&&y<4;
                    check(aliased?(p[0]==17&&p[1]==34&&p[2]==51):(p[0]==255&&p[1]==255&&p[2]==255),
                        "clean-color flush publishes depth-only changes before later color writes");
                }
                glDisable(GL_DEPTH_TEST);glClearColor(17/255.f,34/255.f,51/255.f,68/255.f);glClear(GL_COLOR_BUFFER_BIT);
                glEnable(GL_STENCIL_TEST);glStencilFunc(GL_EQUAL,6,0xff);glStencilMask(0);glStencilOp(GL_KEEP,GL_KEEP,GL_KEEP);
                glDrawArrays(GL_TRIANGLES,0,3);auto clean_stencil=read_pixels(16,16);
                for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++){
                    auto p=clean_stencil.data()+((15-y)*16+x)*4;bool aliased=x<8&&y<4;
                    check(aliased?(p[0]==255&&p[1]==255&&p[2]==255):(p[0]==17&&p[1]==34&&p[2]==51),
                        "clean-color flush publishes stencil-only changes before later color writes");
                }
                glDisable(GL_STENCIL_TEST);glClearColor(17/255.f,34/255.f,51/255.f,68/255.f);glClear(GL_COLOR_BUFFER_BIT);
                glDepthMask(GL_TRUE);glStencilMask(0xff);glBindFramebuffer(GL_FRAMEBUFFER,active_fbo);
            }
            glEnable(GL_SCISSOR_TEST);glScissor(0,3,1,1);
            glClearColor(cache_mode[0]=='1'?1.f:0.f,0,1,192/255.f);glClear(GL_COLOR_BUFFER_BIT);
            nhl07_targets_color_changed();
            expected[0]=cache_mode[0]=='1'?255:0;expected[1]=0;expected[2]=255;expected[3]=alpha?192:255;
            nhl07_targets_flush();
            check(recomp_texture_rgba(desc,data,span,nullptr,0,published,published_bytes)&&published==expected,
                "changed color after clean flush publishes fresh GPU pixels");
        }
        // Leave a small scissor enabled to prove it cannot clip depth alias
        // copies into the differently sized presentation framebuffer.
        glScissor(1,3,3,1);set_target(back,z);
        check(nhl07_targets_framebuffer()==fbo,"presentation target restored");
        std::vector<uint8_t> decoded;size_t consumed=0;check(recomp_texture_rgba(desc,data,span,nullptr,0,decoded,consumed),"guest target decoded after GPU writeback");
        check(decoded==expected,"GPU writeback orientation/format preserves texture pixels");
        if(desc.linear)for(unsigned y=0;y<4;y++)for(unsigned i=8*bytes;i<64;i++)check(data[y*64+i]==0xcd,"GPU writeback preserves row padding");
        for(unsigned i=0;i<16;i++){check(data[-int(i)-1]==0xcd,"GPU prefix guard");check(data[span+i]==0xcd,"GPU suffix guard");}
        auto back_pixels=read_pixels(16,16);for(size_t p=0;p<back_pixels.size()/4;p++)check(back_pixels[p*4]==17&&back_pixels[p*4+1]==34&&back_pixels[p*4+2]==51&&back_pixels[p*4+3]==68,"color target does not overwrite backbuffer");
        if(depth_alias){
            glDisable(GL_SCISSOR_TEST);glDisable(GL_BLEND);glDisable(GL_STENCIL_TEST);glEnable(GL_DEPTH_TEST);glDepthFunc(GL_LESS);glDepthMask(GL_FALSE);
            glViewport(0,0,16,16);glUseProgram(program);glDrawArrays(GL_TRIANGLES,0,3);
            auto visible=read_pixels(16,16);
            for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++){
                auto p=visible.data()+((15-y)*16+x)*4;bool aliased=x<8&&y<4;
                check(aliased?(p[0]==17&&p[1]==34&&p[2]==51):(p[0]==255&&p[1]==255&&p[2]==255),"depth alias top-left region preserved");
            }
            glDisable(GL_DEPTH_TEST);glClearColor(17/255.f,34/255.f,51/255.f,68/255.f);glClear(GL_COLOR_BUFFER_BIT);
            glEnable(GL_STENCIL_TEST);glStencilFunc(GL_EQUAL,6,0xff);glStencilMask(0);glStencilOp(GL_KEEP,GL_KEEP,GL_KEEP);glDrawArrays(GL_TRIANGLES,0,3);
            visible=read_pixels(16,16);
            for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++){
                auto p=visible.data()+((15-y)*16+x)*4;bool aliased=x<8&&y<4;
                check(aliased?(p[0]==255&&p[1]==255&&p[2]==255):(p[0]==17&&p[1]==34&&p[2]==51),"stencil alias top-left region preserved");
            }
        }
        glDisable(GL_STENCIL_TEST);glDisable(GL_DEPTH_TEST);set_target(target,0);
        match_top_rows(read_pixels(8,4),expected,8,4,rgb565?1:0);set_target(back,z);
        check(glGetError()==GL_NO_ERROR,"target switch GPU status");
    }
    setenv("NHL07_TARGET_DIRTY_CACHE","0",1);
    // The game samples its presentation surface for cinematic effects.
    // Readback must publish its actual pixels, including while a smaller
    // target is bound, and must preserve both framebuffer bindings.
    constexpr uint32_t back_data=0x200000;MEM32(back+4)=back_data;
    auto *back_bytes=reinterpret_cast<uint8_t *>(g_xbox_mem_offset+0x80000000ull+back_data);
    std::memset(back_bytes-16,0xcd,16*16*4+32);
    set_target(back,z);glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    glClearColor(17/255.f,34/255.f,51/255.f,68/255.f);glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_SCISSOR_TEST);glScissor(3,12,4,3);glClearColor(1,0,0,128/255.f);glClear(GL_COLOR_BUFFER_BIT);
    nhl07_targets_color_changed();auto back_reference=read_pixels(16,16);
    set_target(target,0);GLint before_read,before_draw,after_read,after_draw;
    glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&before_read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&before_draw);
    nhl07_targets_prepare_texture(back_data);
    glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&after_read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&after_draw);
    check(before_read==after_read&&before_draw==after_draw,"presentation texture copy restores both active framebuffer bindings");
    RecompD3dTextureDesc back_desc{};back_desc.width=back_desc.height=16;back_desc.pitch=64;back_desc.linear=true;back_desc.format_byte=0x12;
    std::vector<uint8_t> back_decoded;size_t used;
    check(recomp_texture_rgba(back_desc,back_bytes,1024,nullptr,0,back_decoded,used),"presentation alias bytes decode");
    match_top_rows(back_reference,back_decoded,16,16,0);
    for(unsigned i=0;i<16;i++){check(back_bytes[-int(i)-1]==0xcd,"presentation prefix guard");check(back_bytes[1024+i]==0xcd,"presentation suffix guard");}
    back_bytes[0]=0xee;nhl07_targets_prepare_texture(back_data);
    check(back_bytes[0]==0xee,"unchanged presentation avoids redundant readback");
    glDisable(GL_SCISSOR_TEST);glClearColor(0,1,0,1);glClear(GL_COLOR_BUFFER_BIT);nhl07_targets_color_changed();
    nhl07_targets_prepare_texture(back_data);check(back_bytes[0]==0xee,"offscreen drawing does not mark presentation dirty");
    set_target(back,z);glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glClearColor(0,0,1,1);glClear(GL_COLOR_BUFFER_BIT);nhl07_targets_color_changed();
    nhl07_targets_prepare_texture(back_data);
    for(unsigned p=0;p<256;p++)check(back_bytes[p*4]==255&&back_bytes[p*4+1]==0&&back_bytes[p*4+2]==0&&back_bytes[p*4+3]==255,"changed presentation publishes latest BGRA pixels");
    for(unsigned scale:{2u,3u})for(const char *downsample_mode:{"0","1"}){
        setenv("NHL07_TARGET_GPU_DOWNSAMPLE",downsample_mode,1);
        nhl07_targets_configure_scale(scale);glBindFramebuffer(GL_FRAMEBUFFER,fbo);glDeleteTextures(1,&color);glDeleteRenderbuffers(1,&depth);
        glGenTextures(1,&color);glBindTexture(GL_TEXTURE_2D,color);glTexStorage2D(GL_TEXTURE_2D,1,GL_RGBA8,16*scale,16*scale);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,color,0);
        glGenRenderbuffers(1,&depth);glBindRenderbuffer(GL_RENDERBUFFER,depth);glRenderbufferStorage(GL_RENDERBUFFER,GL_DEPTH24_STENCIL8,16*scale,16*scale);glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,depth);
        nhl07_targets_initialize(fbo,depth,16,16,back,z);check(nhl07_targets_scale()==scale,"active internal render scale");
        glDisable(GL_SCISSOR_TEST);glDisable(GL_DEPTH_TEST);glDisable(GL_STENCIL_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
        glClearColor(1,0,0,1);glClearDepthf(.7f);glClearStencil(3);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        glEnable(GL_SCISSOR_TEST);glScissor(2*scale,12*scale,3*scale,3*scale);glClearColor(0,1,0,1);glClear(GL_COLOR_BUFFER_BIT);nhl07_targets_color_changed();
        std::vector<uint8_t> logical(1024);nhl07_targets_read_pixels(16,16,logical.data());check(glGetError()==GL_NO_ERROR,"scaled native framebuffer logical readback");
        for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++){
            auto p=logical.data()+((15-y)*16+x)*4;bool green=x>=2&&x<5&&y>=1&&y<4;
            check(p[0]==(green?0:255)&&p[1]==(green?255:0)&&p[2]==0&&p[3]==255,"2x/3x readback preserves logical rows and channels");
        }
        nhl07_targets_prepare_texture(back_data);check(recomp_texture_rgba(back_desc,back_bytes,1024,nullptr,0,back_decoded,used),"scaled presentation alias decode");match_top_rows(logical,back_decoded,16,16,0);
        set_target(target,z);GLint native_depth_width;glGetRenderbufferParameteriv(GL_RENDERBUFFER,GL_RENDERBUFFER_WIDTH,&native_depth_width);
        check(native_depth_width==int(8*scale)&&nhl07_targets_width()==8&&nhl07_targets_height()==4,"offscreen storage scales while guest dimensions stay original");
        glDisable(GL_SCISSOR_TEST);glDepthMask(GL_TRUE);glStencilMask(255);glClearDepthf(.2f);glClearStencil(6);glClear(GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        set_target(back,z);glDisable(GL_SCISSOR_TEST);glDisable(GL_STENCIL_TEST);glEnable(GL_DEPTH_TEST);glDepthFunc(GL_LESS);glDepthMask(GL_FALSE);glUseProgram(program);glViewport(0,0,16*scale,16*scale);glDrawArrays(GL_TRIANGLES,0,3);
        nhl07_targets_read_pixels(16,16,logical.data());check(glGetError()==GL_NO_ERROR,"scaled shared-depth draw and readback");
        for(unsigned y=0;y<16;y++)for(unsigned x=0;x<16;x++){
            auto p=logical.data()+((15-y)*16+x)*4;bool aliased=x<8&&y<4;
            check(aliased?p[2]==0:(p[0]==255&&p[1]==255&&p[2]==255),"2x/3x depth alias keeps top-left guest region");
        }
    }
    unsetenv("NHL07_TARGET_GPU_DOWNSAMPLE");
    check(invalidations>=24&&original_calls>=48,"writeback and original state delegation exercised");
    upsample_contract(fbo,color,depth,back,z,target);
    downsample_contract();
    nhl07_scaled_upload_clear();
    glDeleteProgram(program);glDeleteVertexArrays(1,&vao);eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);eglDestroyContext(display,context);eglDestroySurface(display,drawable);eglTerminate(display);
    munmap(ram,0x84000000ull);std::printf("TARGET_GPU passed=%u failed=0\n",passed);return 0;
}
