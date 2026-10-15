#include "scaled_upload.h"
#include <EGL/egl.h>
#include <array>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <algorithm>

static unsigned checks;
static void check(bool okay,const char *name){
    if(!okay){std::fprintf(stderr,"SCALED_UPLOAD FAIL %s error=%X\n",name,glGetError());std::exit(1);}++checks;
}
struct Format {GLenum internal,external,type;unsigned bytes;};
static const Format formats[]={{GL_RGB565,GL_RGB,GL_UNSIGNED_SHORT_5_6_5,2},{GL_RGB8,GL_RGB,GL_UNSIGNED_BYTE,3},{GL_RGBA8,GL_RGBA,GL_UNSIGNED_BYTE,4}};
static std::vector<uint8_t> pattern(const Format &f,unsigned width,unsigned height){
    std::vector<uint8_t> result(size_t(width)*height*f.bytes);
    for(unsigned y=0;y<height;y++)for(unsigned x=0;x<width;x++){
        auto *p=result.data()+(size_t(y)*width+x)*f.bytes;
        if(f.bytes==2){uint16_t value=uint16_t(x*911u+y*2081u+(x^y)*97u);std::memcpy(p,&value,2);}
        else{p[0]=uint8_t(x*37+y*73);p[1]=uint8_t(x*131+y*11);p[2]=uint8_t(x*17+y*109);if(f.bytes==4)p[3]=uint8_t(x*61+y*43);}
    }
    return result;
}
static std::vector<uint8_t> replicate(const Format &f,unsigned w,unsigned h,unsigned scale,const std::vector<uint8_t> &logical){
    unsigned nw=w*scale,nh=h*scale;std::vector<uint8_t> native(size_t(nw)*nh*f.bytes);
    for(unsigned y=0;y<nh;y++)for(unsigned x=0;x<nw;x++){
        auto *destination=native.data()+(size_t(y)*nw+x)*f.bytes;
        const auto *source=logical.data()+(size_t(y/scale)*w+x/scale)*f.bytes;
        // Constant copy sizes keep the reference comparable to the existing
        // per-pixel memcpy(..., 4), rather than timing libc calls per pixel.
        switch(f.bytes){case 2:std::memcpy(destination,source,2);break;case 3:std::memcpy(destination,source,3);break;case 4:std::memcpy(destination,source,4);break;}
    }
    return native;
}
static void unpack_defaults(){
    glBindBuffer(GL_PIXEL_UNPACK_BUFFER,0);glPixelStorei(GL_UNPACK_ALIGNMENT,1);glPixelStorei(GL_UNPACK_ROW_LENGTH,0);
    glPixelStorei(GL_UNPACK_SKIP_ROWS,0);glPixelStorei(GL_UNPACK_SKIP_PIXELS,0);
}
static std::vector<uint8_t> pixels(GLuint framebuffer,unsigned width,unsigned height){
    glBindFramebuffer(GL_READ_FRAMEBUFFER,framebuffer);glReadBuffer(GL_COLOR_ATTACHMENT0);glPixelStorei(GL_PACK_ALIGNMENT,1);
    std::vector<uint8_t> result(size_t(width)*height*4);glReadPixels(0,0,width,height,GL_RGBA,GL_UNSIGNED_BYTE,result.data());
    check(glGetError()==GL_NO_ERROR,"read full native GPU pixels");return result;
}
static void baseline_upload(GLuint framebuffer,GLuint texture,const Format &f,unsigned w,unsigned h,unsigned scale,const std::vector<uint8_t> &logical){
    auto native=replicate(f,w,h,scale,logical);unpack_defaults();glBindFramebuffer(GL_FRAMEBUFFER,framebuffer);
    glBindTexture(GL_TEXTURE_2D,texture);glTexImage2D(GL_TEXTURE_2D,0,f.internal,w*scale,h*scale,0,f.external,f.type,native.data());
    glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,texture,0);GLenum color=GL_COLOR_ATTACHMENT0;glDrawBuffers(1,&color);
    check(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE&&glGetError()==GL_NO_ERROR,"CPU replication baseline framebuffer");
}
static uint64_t now(){return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();}
int main(){
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);check(eglInitialize(display,nullptr,nullptr),"EGL initialized");
    EGLint attrs[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint count;check(eglChooseConfig(display,attrs,&config,1,&count)&&count==1,"EGL config");
    EGLint dimensions[]={EGL_WIDTH,16,EGL_HEIGHT,16,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,dimensions);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    check(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context),"EGL current");
    std::printf("SCALED_UPLOAD renderer=%s version=%s\n",glGetString(GL_RENDERER),glGetString(GL_VERSION));
    GLuint baseline_fbo,baseline_texture,target_fbo,target_texture,other_fbo,other_color,sentinel_texture,unpack_buffer,target_second;
    glGenFramebuffers(1,&baseline_fbo);glGenTextures(1,&baseline_texture);glGenFramebuffers(1,&target_fbo);glGenTextures(1,&target_texture);
    glGenFramebuffers(1,&other_fbo);glGenRenderbuffers(1,&other_color);glGenTextures(1,&sentinel_texture);glGenBuffers(1,&unpack_buffer);glGenTextures(1,&target_second);
    glBindFramebuffer(GL_FRAMEBUFFER,other_fbo);glBindRenderbuffer(GL_RENDERBUFFER,other_color);glRenderbufferStorage(GL_RENDERBUFFER,GL_RGBA8,4,4);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_RENDERBUFFER,other_color);check(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"sentinel framebuffer");
    glClearColor(21/255.f,43/255.f,87/255.f,165/255.f);glClear(GL_COLOR_BUFFER_BIT);auto sentinel=pixels(other_fbo,4,4);
    glActiveTexture(GL_TEXTURE0);glBindTexture(GL_TEXTURE_2D,sentinel_texture);
    glBindBuffer(GL_PIXEL_UNPACK_BUFFER,unpack_buffer);glBufferData(GL_PIXEL_UNPACK_BUFFER,65536,nullptr,GL_STREAM_DRAW);unpack_defaults();
    const unsigned sizes[][2]={{1,1},{1,13},{17,1},{7,5},{37,23},{13,9},{7,5}};
    for(const Format &f:formats)for(unsigned scale:{1u,2u,3u})for(const auto &size:sizes)for(bool scissor:{false,true}){
        unsigned w=size[0],h=size[1];auto logical=pattern(f,w,h),logical_before=logical;
        glActiveTexture(GL_TEXTURE3);baseline_upload(baseline_fbo,baseline_texture,f,w,h,scale,logical);auto expected=pixels(baseline_fbo,w*scale,h*scale);
        // A second attachment proves temporary draw-buffer selection does not
        // overwrite either the caller's selection or unrelated color storage.
        glBindFramebuffer(GL_FRAMEBUFFER,target_fbo);
        glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,0,0);
        glBindTexture(GL_TEXTURE_2D,target_second);
        glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA8,w*scale,h*scale,0,GL_RGBA,GL_UNSIGNED_BYTE,nullptr);
        glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT1,GL_TEXTURE_2D,target_second,0);
        std::array<GLenum,2> selection{{GL_NONE,GL_COLOR_ATTACHMENT1}};glDrawBuffers(2,selection.data());
        glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
        glClearColor(0.2f,0.4f,0.6f,0.8f);glClear(GL_COLOR_BUFFER_BIT);
        glBindFramebuffer(GL_READ_FRAMEBUFFER,other_fbo);glBindFramebuffer(GL_DRAW_FRAMEBUFFER,other_fbo);glBindRenderbuffer(GL_RENDERBUFFER,other_color);
        glViewport(3,5,2,7);glScissor(0,0,1,1);if(scissor)glEnable(GL_SCISSOR_TEST);else glDisable(GL_SCISSOR_TEST);
        glColorMask(GL_FALSE,GL_TRUE,GL_FALSE,GL_TRUE);glEnable(GL_BLEND);glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);glEnable(GL_DITHER);
        glPixelStorei(GL_UNPACK_ALIGNMENT,8);glPixelStorei(GL_UNPACK_ROW_LENGTH,w+7);glPixelStorei(GL_UNPACK_SKIP_ROWS,2);glPixelStorei(GL_UNPACK_SKIP_PIXELS,3);
        glBindBuffer(GL_PIXEL_UNPACK_BUFFER,unpack_buffer);
        check(nhl07_scaled_upload(target_fbo,target_texture,f.internal,w,h,scale,f.external,f.type,logical.data()),"same-format logical upload and NEAREST native upscale");
        GLint read,draw,active,texture,renderbuffer,viewport[4],scissor_box[4],alignment,row,skip_rows,skip_pixels,pbo,draw0,draw1;
        GLboolean mask[4];glGetIntegerv(GL_READ_FRAMEBUFFER_BINDING,&read);glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING,&draw);
        glGetIntegerv(GL_ACTIVE_TEXTURE,&active);glGetIntegerv(GL_TEXTURE_BINDING_2D,&texture);glGetIntegerv(GL_RENDERBUFFER_BINDING,&renderbuffer);
        glGetIntegerv(GL_VIEWPORT,viewport);glGetIntegerv(GL_SCISSOR_BOX,scissor_box);glGetBooleanv(GL_COLOR_WRITEMASK,mask);
        glGetIntegerv(GL_UNPACK_ALIGNMENT,&alignment);glGetIntegerv(GL_UNPACK_ROW_LENGTH,&row);glGetIntegerv(GL_UNPACK_SKIP_ROWS,&skip_rows);
        glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&skip_pixels);glGetIntegerv(GL_PIXEL_UNPACK_BUFFER_BINDING,&pbo);
        glGetIntegerv(GL_DRAW_BUFFER0,&draw0);glGetIntegerv(GL_DRAW_BUFFER1,&draw1);
        check(read==GLint(target_fbo)&&draw==GLint(target_fbo),"creation postcondition binds target for reading and drawing");
        check(active==GL_TEXTURE3&&texture==GLint(target_texture),"creation postcondition binds target on unchanged texture unit");
        check(renderbuffer==GLint(other_color),"renderbuffer binding unchanged");
        check(viewport[0]==3&&viewport[1]==5&&viewport[2]==2&&viewport[3]==7,"viewport unchanged");
        check(bool(glIsEnabled(GL_SCISSOR_TEST))==scissor&&scissor_box[0]==0&&scissor_box[1]==0&&scissor_box[2]==1&&scissor_box[3]==1,"scissor enable and box unchanged");
        check(!mask[0]&&mask[1]&&!mask[2]&&mask[3]&&glIsEnabled(GL_BLEND)&&glIsEnabled(GL_DITHER),"write masks, blending and dithering unchanged");
        check(alignment==8&&row==GLint(w+7)&&skip_rows==2&&skip_pixels==3&&pbo==GLint(unpack_buffer),"unpack fields and PBO binding restored");
        check(draw0==GL_NONE&&draw1==GL_COLOR_ATTACHMENT1,"target draw-buffer selections restored");
        auto actual=pixels(target_fbo,w*scale,h*scale);
        if(actual!=expected){unsigned errors=0,maximum=0;for(size_t i=0;i<actual.size();i++)if(actual[i]!=expected[i]){maximum=std::max(maximum,unsigned(std::abs(int(actual[i])-int(expected[i]))));if(errors++<8)std::fprintf(stderr,"UPSCALE_MISMATCH format=%X scale=%u size=%ux%u byte=%zu expected=%u actual=%u\n",f.internal,scale,w,h,i,unsigned(expected[i]),unsigned(actual[i]));}std::fprintf(stderr,"UPSCALE_MISMATCH count=%u maximum=%u\n",errors,maximum);}
        check(actual==expected,"every native pixel byte matches CPU replication and original format upload");
        glReadBuffer(GL_COLOR_ATTACHMENT1);std::vector<uint8_t> second_pixels(size_t(w)*scale*h*scale*4);
        glReadPixels(0,0,w*scale,h*scale,GL_RGBA,GL_UNSIGNED_BYTE,second_pixels.data());
        for(size_t i=0;i<second_pixels.size();i+=4)check(second_pixels[i]==51&&second_pixels[i+1]==102&&second_pixels[i+2]==153&&second_pixels[i+3]==204,"unrelated target attachment retained");
        check(pixels(other_fbo,4,4)==sentinel,"previous framebuffer color retained");check(logical==logical_before,"logical source bytes unchanged");
        glActiveTexture(GL_TEXTURE0);glGetIntegerv(GL_TEXTURE_BINDING_2D,&texture);check(texture==GLint(sentinel_texture),"other texture unit binding retained");
        unpack_defaults();glDisable(GL_BLEND);glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
        check(glGetError()==GL_NO_ERROR,"patterned upload GPU status");
    }
    glBindFramebuffer(GL_FRAMEBUFFER,target_fbo);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT1,GL_TEXTURE_2D,0,0);
    GLenum color=GL_COLOR_ATTACHMENT0;glDrawBuffers(1,&color);glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    constexpr unsigned iterations=12;
    for(const Format &f:formats){
        auto logical=pattern(f,256,256);
        for(unsigned round=1;round<=3;round++){
            baseline_upload(baseline_fbo,baseline_texture,f,256,256,3,logical);glFinish();uint64_t began=now();
            for(unsigned i=0;i<iterations;i++)baseline_upload(baseline_fbo,baseline_texture,f,256,256,3,logical);
            glFinish();double baseline_ms=double(now()-began)/iterations/1e6;
            check(nhl07_scaled_upload(target_fbo,target_texture,f.internal,256,256,3,f.external,f.type,logical.data()),"benchmark warmup");glFinish();began=now();
            for(unsigned i=0;i<iterations;i++)check(nhl07_scaled_upload(target_fbo,target_texture,f.internal,256,256,3,f.external,f.type,logical.data()),"benchmark upscale");
            glFinish();double optimized_ms=double(now()-began)/iterations/1e6;
            std::printf("SCALED_UPLOAD_BENCH format=%X round=%u iterations=%u width=256 height=256 scale=3 baseline_ms=%.6f optimized_ms=%.6f\n",f.internal,round,iterations,baseline_ms,optimized_ms);
        }
    }
    check(!nhl07_scaled_upload(target_fbo,target_texture,GL_RGBA8,0,5,3,GL_RGBA,GL_UNSIGNED_BYTE,sentinel.data()),"zero dimension rejected");
    check(!nhl07_scaled_upload(target_fbo,target_texture,GL_RGB565,5,5,3,GL_RGBA,GL_UNSIGNED_BYTE,sentinel.data()),"mismatched format rejected");
    nhl07_scaled_upload_clear();check(glGetError()==GL_NO_ERROR,"scratch cleanup");
    glDeleteFramebuffers(1,&baseline_fbo);glDeleteTextures(1,&baseline_texture);glDeleteFramebuffers(1,&target_fbo);glDeleteTextures(1,&target_texture);
    glDeleteFramebuffers(1,&other_fbo);glDeleteRenderbuffers(1,&other_color);glDeleteTextures(1,&sentinel_texture);glDeleteBuffers(1,&unpack_buffer);glDeleteTextures(1,&target_second);
    eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);eglDestroyContext(display,context);eglDestroySurface(display,surface);eglTerminate(display);
    std::printf("SCALED_UPLOAD passed=%u failed=0\n",checks);return 0;
}
