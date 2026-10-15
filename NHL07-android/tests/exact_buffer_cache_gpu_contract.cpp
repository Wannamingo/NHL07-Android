#include "exact_buffer_cache.h"
#include <EGL/egl.h>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

static unsigned checks;
static void verify(bool okay,const char *name){if(!okay){std::fprintf(stderr,"EXACT_BUFFER_GPU FAIL %s error=%04X\n",name,glGetError());std::exit(1);}++checks;}
static void contents(GLuint object,const void *source,size_t bytes){
    glBindBuffer(GL_ARRAY_BUFFER,object);GLint actual;glGetBufferParameteriv(GL_ARRAY_BUFFER,GL_BUFFER_SIZE,&actual);
    verify(actual==GLint(bytes),"actual buffer preserves exact size");
    const auto *mapped=static_cast<const uint8_t *>(glMapBufferRange(GL_ARRAY_BUFFER,0,GLsizeiptr(bytes),GL_MAP_READ_BIT));
    verify(mapped!=nullptr,"map actual GPU buffer for independent byte readback");
    const auto *expected=static_cast<const uint8_t *>(source);
    for(size_t i=0;i<bytes;++i)verify(mapped[i]==expected[i],"every actual GPU buffer byte equals current source");
    verify(glUnmapBuffer(GL_ARRAY_BUFFER)&&glGetError()==GL_NO_ERROR,"actual buffer readback cleanup");
}
static GLuint shader(GLenum type,const char *text){
    GLuint result=glCreateShader(type);glShaderSource(result,1,&text,nullptr);glCompileShader(result);GLint okay;glGetShaderiv(result,GL_COMPILE_STATUS,&okay);
    if(!okay){char log[4096];glGetShaderInfoLog(result,sizeof(log),nullptr,log);std::fprintf(stderr,"%s\n",log);}verify(okay,"compile GPU fixture shader");return result;
}
static GLuint program(const char *vertex,const char *fragment){
    GLuint result=glCreateProgram(),vs=shader(GL_VERTEX_SHADER,vertex),ps=shader(GL_FRAGMENT_SHADER,fragment);
    glAttachShader(result,vs);glAttachShader(result,ps);glLinkProgram(result);GLint okay;glGetProgramiv(result,GL_LINK_STATUS,&okay);verify(okay,"link GPU fixture shader");
    glDeleteShader(vs);glDeleteShader(ps);return result;
}
static void save(const char *directory,const char *name,unsigned w,unsigned h,const std::vector<uint8_t> &rgba){
    const auto path=std::string(directory)+"/"+name+".ppm";FILE *file=std::fopen(path.c_str(),"wb");verify(file!=nullptr,"open complete GPU pixel artifact");
    std::fprintf(file,"P6\n%u %u\n255\n",w,h);
    for(unsigned y=0;y<h;++y)for(unsigned x=0;x<w;++x)verify(std::fwrite(rgba.data()+(size_t(y)*w+x)*4,1,3,file)==3,"write every captured RGB byte");
    verify(std::fclose(file)==0,"pixel artifact closed");
}
int main(int argc,char **argv){
    verify(argc==2,"output directory argument");
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);verify(eglInitialize(display,nullptr,nullptr),"initialize actual GLES driver");
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint count;verify(eglChooseConfig(display,attributes,&config,1,&count)&&count==1,"choose GLES3 pbuffer config");
    EGLint dimensions[]={EGL_WIDTH,48,EGL_HEIGHT,16,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,dimensions);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    verify(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context),"make actual GPU context current");
    std::printf("EXACT_BUFFER_GPU renderer=%s version=%s\n",glGetString(GL_RENDERER),glGetString(GL_VERSION));
    Nhl07ExactBufferCache cache;std::array<uint8_t,4099> source{};
    for(size_t i=0;i<source.size();++i)source[i]=uint8_t(i*131+7);
    GLuint object;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object),"initial actual upload");const auto original=object;contents(object,source.data(),source.size());
    auto uploads=cache.stats().uploads;cache.begin_draw();verify(cache.bind(GL_ELEMENT_ARRAY_BUFFER,source.data(),source.size(),object)&&object==original,"same object supports vertex and index targets");
    verify(cache.stats().uploads==uploads&&cache.stats().hits==1,"exact repeat skips actual GPU upload");contents(object,source.data(),source.size());
    const size_t mutations[]={0,1,2048,4097,4098};
    for(size_t index:mutations){source[index]^=0x80;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object)&&object==original,"same-pointer first/middle/last byte update");
        verify(cache.stats().uploads==++uploads,"one actual upload per changed content");contents(object,source.data(),source.size());}
    auto before=source;source[2047]^=0x40;verify(!cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object)&&object==0,"changed pinned buffer falls back");contents(original,before.data(),before.size());
    cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),source.size(),object)&&object==original,"next draw observes pinned-source mutation");contents(object,source.data(),source.size());
    auto relocated=source;cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,relocated.data(),relocated.size(),object)&&object!=original,"new pointer gets independent object");contents(object,relocated.data(),relocated.size());
    cache.begin_draw();verify(cache.bind(GL_ARRAY_BUFFER,source.data(),37,object)&&object!=original,"shrink has exact current size");contents(object,source.data(),37);
    cache.begin_draw();verify(cache.bind(GL_ELEMENT_ARRAY_BUFFER,source.data(),source.size(),object)&&object==original,"grow restores full exact key");contents(object,source.data(),source.size());
    cache.clear();verify(cache.stats().snapshot_bytes==0&&cache.stats().gpu_bytes==0&&cache.stats().resident_entries==0,"clear exact byte cache");
    glDisable(GL_DEPTH_TEST);glDisable(GL_STENCIL_TEST);glDisable(GL_BLEND);glDisable(GL_CULL_FACE);glDisable(GL_DITHER);glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    GLuint vao;glGenVertexArrays(1,&vao);glBindVertexArray(vao);
    const char *triangle="vec2 p=vec2((gl_VertexID<<1)&2,gl_VertexID&2);gl_Position=vec4(p*2.0-1.0,0,1);";
    std::string vs="#version 300 es\nlayout(location=0) in float value;out float v;void main(){";vs+=triangle;vs+="v=value;}";
    GLuint queued=program(vs.c_str(),"#version 300 es\nprecision highp float;in float v;out vec4 color;void main(){color=vec4(v,1.0-v,0,1);}");glUseProgram(queued);glEnableVertexAttribArray(0);
    Nhl07ExactBufferCache queue_cache(12,1);std::array<float,3> values{{1,1,1}},replacement{{.5f,.5f,.5f}};
    glViewport(0,0,48,16);glClearColor(0,0,0,0);glClear(GL_COLOR_BUFFER_BIT);
    for(unsigned draw=0;draw<3;++draw){values.fill(draw==1?0.f:1.f);queue_cache.begin_draw();verify(queue_cache.bind(GL_ARRAY_BUFFER,values.data(),sizeof(values),object),"queued exact buffer bind/update");
        glVertexAttribPointer(0,1,GL_FLOAT,GL_FALSE,4,nullptr);glViewport(draw*16,0,16,16);glDrawArrays(GL_TRIANGLES,0,3);}
    // No glFinish/readback between those draws. Reupload and then delete the
    // shared object before reading pixels to exercise queued GPU ownership.
    queue_cache.begin_draw();verify(queue_cache.bind(GL_ARRAY_BUFFER,replacement.data(),sizeof(replacement),object)&&queue_cache.stats().evictions==1,"evict previous draw object while commands may still be queued");
    std::vector<uint8_t> pixels(48*16*4);glReadPixels(0,0,48,16,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());verify(glGetError()==GL_NO_ERROR,"queued GPU draw/readback status");
    for(unsigned y=0;y<16;++y)for(unsigned x=0;x<48;++x){const auto *p=pixels.data()+(y*48+x)*4;bool green=x>=16&&x<32;
        verify(p[0]==(green?0:255)&&p[1]==(green?255:0)&&p[2]==0&&p[3]==255,"all queued draw pixels preserve their submitted buffer version");}
    save(argv[1],"exact-buffer-queued",48,16,pixels);queue_cache.clear();glDeleteProgram(queued);
    // Maximum GLES3 attribute count plus an index binding: the small budget
    // fits all16attributes, so the17thbind must fall back without deleting an
    // attribute already configured for this not-yet-submitted draw.
    std::string many="#version 300 es\n";
    for(unsigned i=0;i<16;++i)many+="layout(location="+std::to_string(i)+") in float a"+std::to_string(i)+";\n";
    many+="out float v;void main(){";many+=triangle;many+="v=(a0";
    for(unsigned i=1;i<16;++i)many+="+a"+std::to_string(i);many+=")/136.0;}";
    GLuint pinned=program(many.c_str(),"#version 300 es\nprecision highp float;in float v;out vec4 color;void main(){color=vec4(v,0,0,1);}");glUseProgram(pinned);
    Nhl07ExactBufferCache pin_cache(16*12,17);std::array<std::array<float,3>,16> attributes_data{};pin_cache.begin_draw();
    for(unsigned i=0;i<16;++i){attributes_data[i].fill(float(i+1));verify(pin_cache.bind(GL_ARRAY_BUFFER,attributes_data[i].data(),12,object),"pin all16actual attribute buffers");
        glEnableVertexAttribArray(i);glVertexAttribPointer(i,1,GL_FLOAT,GL_FALSE,4,nullptr);}
    const uint16_t indices[]={0,1,2};verify(!pin_cache.bind(GL_ELEMENT_ARRAY_BUFFER,indices,sizeof(indices),object)&&pin_cache.stats().pinned_fallbacks==1,"17thindex bind uses original fallback under all-pinned pressure");
    GLuint fallback;glGenBuffers(1,&fallback);glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,fallback);glBufferData(GL_ELEMENT_ARRAY_BUFFER,sizeof(indices),indices,GL_STREAM_DRAW);
    glViewport(0,0,48,16);glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,3,GL_UNSIGNED_SHORT,nullptr);
    glReadPixels(0,0,48,16,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());verify(glGetError()==GL_NO_ERROR,"all-attribute pinned draw GPU status");
    for(size_t i=0;i<pixels.size();i+=4)verify(pixels[i]==255&&pixels[i+1]==0&&pixels[i+2]==0&&pixels[i+3]==255,"every pixel includes every protected attribute");
    save(argv[1],"exact-buffer-pinned",48,16,pixels);
    verify(pin_cache.stats().snapshot_bytes==192&&pin_cache.stats().gpu_bytes==192&&pin_cache.stats().resident_entries==16&&pin_cache.stats().evictions==0,"pinned pressure obeys both hard payload budgets");
    pin_cache.clear();glDeleteBuffers(1,&fallback);glDeleteProgram(pinned);glDeleteVertexArrays(1,&vao);
    verify(glGetError()==GL_NO_ERROR,"explicit GL cleanup successful");
    verify(eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT)&&eglDestroyContext(display,context)&&eglDestroySurface(display,surface)&&eglTerminate(display),"EGL cleanup successful");
    std::printf("EXACT_BUFFER_GPU passed=%u failed=0 queued_pixels=768 pinned_pixels=768\n",checks);
}
