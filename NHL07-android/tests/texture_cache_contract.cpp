#include "texture_cache.h"
#include <EGL/egl.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
static unsigned checks;static GLuint framebuffer;
static void verify(bool okay,const char *name){if(!okay){std::fprintf(stderr,"TEXTURE_CACHE FAIL %s error=%x\n",name,glGetError());std::exit(1);}++checks;}
static std::vector<uint8_t> pixels(GLuint texture,unsigned level,unsigned width,unsigned height){
    glBindFramebuffer(GL_FRAMEBUFFER,framebuffer);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,texture,level);
    verify(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"cached mip framebuffer complete");
    std::vector<uint8_t> bytes(size_t(width)*height*4);glReadPixels(0,0,width,height,GL_RGBA,GL_UNSIGNED_BYTE,bytes.data());verify(glGetError()==GL_NO_ERROR,"cached pixels readback");return bytes;
}
static void solid(GLuint texture,unsigned level,unsigned width,unsigned height,unsigned r,unsigned g,unsigned b){
    auto bytes=pixels(texture,level,width,height);for(size_t i=0;i<bytes.size();i+=4)verify(bytes[i]==r&&bytes[i+1]==g&&bytes[i+2]==b&&bytes[i+3]==255,"decoded cached pixels match independent color");
}
static GLuint shader(GLenum type,const char *source){
    GLuint object=glCreateShader(type);glShaderSource(object,1,&source,nullptr);glCompileShader(object);
    GLint okay=0;glGetShaderiv(object,GL_COMPILE_STATUS,&okay);verify(okay==GL_TRUE,"mip sampling shader compiles");return object;
}
static void mip_scope_pixels(Nhl07TextureCache &cache,RecompD3dTextureDesc desc,std::vector<uint8_t> &raw){
    // Shader uses the same filtered implicit texture lookup as shader_pixel.c.
    // Large derivatives and MIN_LOD=MAX_LOD=3 deliberately request lower mips;
    // NEAREST/LINEAR nevertheless sample base level zero per GLES 3.0 3.8.10.2.
    const char *vs="#version 300 es\nprecision highp float;out vec2 uv;void main(){vec2 p=vec2((gl_VertexID==1)?3.0:-1.0,(gl_VertexID==2)?3.0:-1.0);gl_Position=vec4(p,0,1);uv=(p+1.0)*0.5;}";
    const char *fs="#version 300 es\nprecision highp float;in vec2 uv;uniform sampler2D source_texture;out vec4 result;void main(){result=texture(source_texture,uv*16.0);}";
    GLuint vertex=shader(GL_VERTEX_SHADER,vs),fragment=shader(GL_FRAGMENT_SHADER,fs),program=glCreateProgram();
    glAttachShader(program,vertex);glAttachShader(program,fragment);glLinkProgram(program);GLint linked=0;glGetProgramiv(program,GL_LINK_STATUS,&linked);
    verify(linked==GL_TRUE,"mip sampling program links");glDeleteShader(vertex);glDeleteShader(fragment);
    GLuint output=0,array=0,sampler=0,texture=0;glGenTextures(1,&output);glActiveTexture(GL_TEXTURE0);glBindTexture(GL_TEXTURE_2D,output);
    glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA8,8,8,0,GL_RGBA,GL_UNSIGNED_BYTE,nullptr);
    glGenVertexArrays(1,&array);glBindVertexArray(array);glGenSamplers(1,&sampler);glBindSampler(0,sampler);
    glSamplerParameteri(sampler,GL_TEXTURE_WRAP_S,GL_CLAMP_TO_EDGE);glSamplerParameteri(sampler,GL_TEXTURE_WRAP_T,GL_CLAMP_TO_EDGE);
    glSamplerParameteri(sampler,GL_TEXTURE_MAG_FILTER,GL_NEAREST);glSamplerParameterf(sampler,GL_TEXTURE_MIN_LOD,3.f);glSamplerParameterf(sampler,GL_TEXTURE_MAX_LOD,3.f);
    auto sample=[&](GLenum filter,unsigned expected){
        glBindFramebuffer(GL_FRAMEBUFFER,framebuffer);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,output,0);
        verify(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE,"mip scope output framebuffer complete");
        glViewport(0,0,8,8);glDisable(GL_SCISSOR_TEST);glDisable(GL_BLEND);glDisable(GL_DEPTH_TEST);glDisable(GL_STENCIL_TEST);glDisable(GL_CULL_FACE);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glActiveTexture(GL_TEXTURE0);glBindTexture(GL_TEXTURE_2D,texture);
        glSamplerParameteri(sampler,GL_TEXTURE_MIN_FILTER,filter);glUseProgram(program);glUniform1i(glGetUniformLocation(program,"source_texture"),0);
        glDrawArrays(GL_TRIANGLES,0,3);verify(glGetError()==GL_NO_ERROR,"implicit mip scope sampling succeeds");
        std::array<uint8_t,8*8*4> pixels{};glReadPixels(0,0,8,8,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
        verify(glGetError()==GL_NO_ERROR,"mip scope sample readback");
        for(size_t i=0;i<pixels.size();i+=4)verify(pixels[i]==expected&&pixels[i+1]==0&&pixels[i+2]==0&&pixels[i+3]==255,"actual filtered pixel uses intended mip");
    };
    // Separate key keeps this independent of the ordinary cache regression.
    desc.data=0x6000;
    verify(cache.bind(0,desc,raw.data(),raw.size(),nullptr,0,100,texture),"scoped fixture full upload");
    const auto uploads=cache.stats().uploads;
    // The original fixture currently has a black last mip. Change only that
    // level to red while requesting two successive nonmip filtered bindings.
    raw[raw.size()-2]=0;raw.back()=0xf8;
    const auto compared=cache.stats().compared_bytes,skipped=cache.stats().skipped_mip_bytes;
    for(GLenum filter:{GL_NEAREST,GL_LINEAR}){
        verify(cache.bind(0,desc,raw.data(),raw.size(),nullptr,0,100,texture,nullptr,true),"lower-only mutation accepted in base-only scope");
        verify(cache.stats().uploads==uploads,"base-only hit does not reload unsampled mips");sample(filter,255);
    }
    verify(cache.stats().compared_bytes-compared==2*8*8*2,"GPU cache compares base span twice");
    verify(cache.stats().skipped_mip_bytes-skipped==2*(raw.size()-8*8*2),"GPU cache accounts skipped mip span twice");
    // Enabling mipmaps must compare against the old full upload, not skipped
    // current source bytes, and replace the stale black last mip before draw.
    verify(cache.bind(0,desc,raw.data(),raw.size(),nullptr,0,100,texture),"mipmap enable performs complete revalidation");
    verify(cache.stats().uploads==uploads+desc.mip_levels,"mipmap enable detects old lower-level snapshot");
    for(GLenum filter:{GL_NEAREST_MIPMAP_NEAREST,GL_LINEAR_MIPMAP_NEAREST,GL_NEAREST_MIPMAP_LINEAR,GL_LINEAR_MIPMAP_LINEAR})sample(filter,255);
    raw[raw.size()-2]=0;raw.back()=0;
    verify(cache.bind(0,desc,raw.data(),raw.size(),nullptr,0,100,texture),"second lower-only mutation detected on same draw tag");
    for(GLenum filter:{GL_NEAREST_MIPMAP_NEAREST,GL_LINEAR_MIPMAP_NEAREST,GL_NEAREST_MIPMAP_LINEAR,GL_LINEAR_MIPMAP_LINEAR})sample(filter,0);
    glBindSampler(0,0);glUseProgram(0);glBindVertexArray(0);glDeleteSamplers(1,&sampler);glDeleteVertexArrays(1,&array);glDeleteProgram(program);
    glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,0,0);glDeleteTextures(1,&output);
}
int main(){
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);verify(eglInitialize(display,nullptr,nullptr),"EGL initialize");
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_NONE};EGLConfig config;EGLint count;
    verify(eglChooseConfig(display,attributes,&config,1,&count)&&count==1,"EGL config");
    EGLint dimensions[]={EGL_WIDTH,8,EGL_HEIGHT,8,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,dimensions);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    verify(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context),"EGL current");
    std::printf("TEXTURE_CACHE renderer=%s\n",glGetString(GL_RENDERER));glGenFramebuffers(1,&framebuffer);
    Nhl07TextureCache cache;RecompD3dTextureDesc desc{};desc.data=0x1000;desc.format_byte=0x12;desc.linear=true;desc.width=desc.height=4;desc.pitch=16;desc.mip_levels=1;
    std::vector<uint8_t> rgba(64);for(size_t i=0;i<rgba.size();i+=4){rgba[i+2]=255;rgba[i+3]=255;}
    GLuint first,same;
    verify(cache.bind(0,desc,rgba.data(),rgba.size(),nullptr,0,1,first),"initial cache upload");solid(first,0,4,4,255,0,0);
    auto uploads=cache.stats().uploads;
    verify(cache.bind(1,desc,rgba.data(),rgba.size(),nullptr,0,1,same)&&same==first&&cache.stats().uploads==uploads&&cache.stats().hits==1,"identical source shares GPU object without upload");
    rgba[2]=0;rgba[1]=255;verify(cache.bind(0,desc,rgba.data(),rgba.size(),nullptr,0,2,same),"guest bytes changed");
    auto changed=pixels(same,0,4,4);verify(changed[0]==0&&changed[1]==255&&changed[2]==0,"changed pixel uploaded");
    for(unsigned i=1;i<16;i++)verify(changed[i*4]==255&&changed[i*4+1]==0&&changed[i*4+2]==0,"unchanged neighbor pixels retained");
    auto before_invalid=changed;
    verify(!cache.bind(0,desc,rgba.data(),3,nullptr,0,3,same),"truncated source rejected");verify(pixels(first,0,4,4)==before_invalid,"invalid update preserves existing GPU image");
    std::array<uint8_t,16> indices{};std::array<uint32_t,256> palette_a{},palette_b{};palette_a[0]=0xffff0000u;palette_b[0]=0xff00ff00u;
    auto p8=desc;p8.data=0x2000;p8.format_byte=0x0b;p8.linear=false;p8.pitch=0;GLuint a,b;
    verify(cache.bind(0,p8,indices.data(),indices.size(),palette_a.data(),1024,4,a)&&cache.bind(1,p8,indices.data(),indices.size(),palette_b.data(),1024,4,b)&&a!=b,"same pixels with different palette addresses keep separate objects");
    solid(a,0,4,4,255,0,0);solid(b,0,4,4,0,255,0);palette_a[0]=0xff0000ffu;
    verify(cache.bind(0,p8,indices.data(),indices.size(),palette_a.data(),1024,5,a),"palette-only mutation detected");solid(a,0,4,4,0,0,255);solid(b,0,4,4,0,255,0);
    auto mip=desc;mip.data=0x3000;mip.format_byte=5;mip.linear=false;mip.pitch=0;mip.width=mip.height=8;mip.mip_levels=4;
    std::vector<uint8_t> raw;uint16_t colors[]={0xf800,0x07e0,0x001f,0xffff};
    for(unsigned level=0;level<4;level++)for(unsigned i=0;i<(8u>>level)*(8u>>level);i++){raw.push_back(colors[level]&255);raw.push_back(colors[level]>>8);}
    verify(cache.bind(0,mip,raw.data(),raw.size(),nullptr,0,6,a),"complete swizzled mip chain uploaded");
    solid(a,0,8,8,255,0,0);solid(a,1,4,4,0,255,0);solid(a,2,2,2,0,0,255);solid(a,3,1,1,255,255,255);
    uploads=cache.stats().uploads;verify(cache.bind(0,mip,raw.data(),raw.size(),nullptr,0,7,a)&&cache.stats().uploads==uploads,"unchanged lower mips retained");
    raw[raw.size()-2]=0;raw.back()=0;verify(cache.bind(0,mip,raw.data(),raw.size(),nullptr,0,8,a),"last-mip mutation detected");solid(a,3,1,1,0,0,0);
    mip_scope_pixels(cache,mip,raw);
    Nhl07TextureCache limited(256,16);std::array<GLuint,6> ids{};
    for(unsigned i=0;i<4;i++){desc.data=0x4000+i*0x100;verify(limited.bind(i,desc,rgba.data(),rgba.size(),nullptr,0,1,ids[i]),"four current bindings survive small budget");}
    for(unsigned i=0;i<4;i++)verify(glIsTexture(ids[i]),"pinned texture remains live");
    desc.data=0x5000;verify(limited.bind(0,desc,rgba.data(),rgba.size(),nullptr,0,2,ids[4])&&limited.stats().resident_bytes<=256,"next draw evicts unused old objects");
    desc.data=0x4300;verify(limited.bind(1,desc,rgba.data(),rgba.size(),nullptr,0,2,ids[3]),"retained old object reused");
    desc.data=0x5100;verify(limited.bind(2,desc,rgba.data(),rgba.size(),nullptr,0,2,ids[5]),"current draw can pin three objects");
    verify(glIsTexture(ids[3])&&glIsTexture(ids[4])&&glIsTexture(ids[5]),"LRU does not delete any current stage object");
    limited.clear();cache.clear();verify(!limited.stats().resident_bytes&&!cache.stats().resident_bytes,"explicit context cleanup releases cache storage");
    glBindFramebuffer(GL_FRAMEBUFFER,0);glDeleteFramebuffers(1,&framebuffer);eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);eglDestroyContext(display,context);eglDestroySurface(display,surface);eglTerminate(display);
    std::printf("TEXTURE_CACHE passed=%u failed=0\n",checks);return 0;
}
