#include "stream_upload.h"
#include <EGL/egl.h>
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

static unsigned checks;
static void check(bool condition,const char *message){if(!condition){std::fprintf(stderr,"STREAM_UPLOAD FAIL %s check=%u error=%x\n",message,checks,glGetError());std::exit(1);}++checks;}
static GLuint shader(GLenum type,const char *source){GLuint out=glCreateShader(type);glShaderSource(out,1,&source,nullptr);glCompileShader(out);GLint okay;glGetShaderiv(out,GL_COMPILE_STATUS,&okay);check(okay,"shader compilation");return out;}
struct Vertex {float xy[2];std::uint8_t color[4];std::uint32_t pad;};
static_assert(sizeof(Vertex)==16,"interleaved fixture");
struct Fixture {std::array<Vertex,4> vertices;std::array<std::uint16_t,6> indices;};
static Fixture fixture(unsigned draw){
    Fixture f{};float shift=float(int(draw%9)-4)*.03f;
    const float xy[4][2]={{-.8f,-.8f},{.8f,-.8f},{.8f,.8f},{-.8f,.8f}};
    for(unsigned i=0;i<4;i++){
        f.vertices[i].xy[0]=xy[i][0]+shift;f.vertices[i].xy[1]=xy[i][1]-shift;
        f.vertices[i].color[0]=std::uint8_t(draw*17+i*67);f.vertices[i].color[1]=std::uint8_t(draw*29+i*31);
        f.vertices[i].color[2]=std::uint8_t(draw*47+i*11);f.vertices[i].color[3]=255;
        f.vertices[i].pad=draw*131+i;
    }
    f.indices=draw%2?std::array<std::uint16_t,6>{{0,1,3,1,2,3}}:std::array<std::uint16_t,6>{{0,1,2,0,2,3}};
    return f;
}
static std::vector<std::uint8_t> pixels(){std::vector<std::uint8_t> p(64*64*4);glReadPixels(0,0,64,64,GL_RGBA,GL_UNSIGNED_BYTE,p.data());check(glGetError()==GL_NO_ERROR,"actual GPU pixels");return p;}
static void clear(){glClearColor(0,0,0,1);glClear(GL_COLOR_BUFFER_BIT);}
static void bytes(const Nhl07StreamUpload::Range &range,const void *expected,std::size_t size){
    glBindBuffer(GL_ARRAY_BUFFER,range.buffer);const void *p=glMapBufferRange(GL_ARRAY_BUFFER,range.offset,range.size,GL_MAP_READ_BIT);
    check(p&&std::memcmp(p,expected,size)==0,"all actual GPU vertex/index bytes including tails");check(glUnmapBuffer(GL_ARRAY_BUFFER)==GL_TRUE,"readback unmap");
}
static void baseline(GLuint *buffers,const Fixture &f,bool indexed,bool interleaved){
    clear();glBindBuffer(GL_ARRAY_BUFFER,buffers[0]);
    if(interleaved){
        glBufferData(GL_ARRAY_BUFFER,sizeof(f.vertices),f.vertices.data(),GL_STREAM_DRAW);
        glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,sizeof(Vertex),nullptr);
        glVertexAttribPointer(1,4,GL_UNSIGNED_BYTE,GL_TRUE,sizeof(Vertex),reinterpret_cast<void *>(8));
    }else{
        std::array<float,8> xy{};std::array<std::uint8_t,16> color{};
        for(unsigned i=0;i<4;i++){std::memcpy(xy.data()+i*2,f.vertices[i].xy,8);std::memcpy(color.data()+i*4,f.vertices[i].color,4);}
        glBufferData(GL_ARRAY_BUFFER,sizeof(xy),xy.data(),GL_STREAM_DRAW);glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,8,nullptr);
        glBindBuffer(GL_ARRAY_BUFFER,buffers[1]);glBufferData(GL_ARRAY_BUFFER,sizeof(color),color.data(),GL_STREAM_DRAW);glVertexAttribPointer(1,4,GL_UNSIGNED_BYTE,GL_TRUE,4,nullptr);
    }
    if(indexed){glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,buffers[2]);glBufferData(GL_ELEMENT_ARRAY_BUFFER,sizeof(f.indices),f.indices.data(),GL_STREAM_DRAW);glDrawElements(GL_TRIANGLES,6,GL_UNSIGNED_SHORT,nullptr);}
    else glDrawArrays(GL_TRIANGLE_FAN,0,4);
    check(glGetError()==GL_NO_ERROR,"baseline draw");
}
static void streamed(Nhl07StreamUpload &stream,const Fixture &f,bool indexed,bool interleaved,bool verify_bytes){
    std::size_t reservation=interleaved?Nhl07StreamUpload::aligned_size(sizeof(f.vertices)):Nhl07StreamUpload::aligned_size(32)+Nhl07StreamUpload::aligned_size(16);
    if(indexed)reservation+=Nhl07StreamUpload::aligned_size(sizeof(f.indices));
    check(stream.begin_draw(reservation),"reserve whole draw before uploading any range");
    Nhl07StreamUpload::Range vertices,colors,indices;
    std::array<float,8> xy{};std::array<std::uint8_t,16> color{};
    clear();
    if(interleaved){
        check(stream.upload(f.vertices.data(),sizeof(f.vertices),vertices),"upload current interleaved vertices");
        check(vertices.offset%16==0,"aligned interleaved range");glBindBuffer(GL_ARRAY_BUFFER,vertices.buffer);
        glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,sizeof(Vertex),reinterpret_cast<void *>(std::uintptr_t(vertices.offset)));
        glVertexAttribPointer(1,4,GL_UNSIGNED_BYTE,GL_TRUE,sizeof(Vertex),reinterpret_cast<void *>(std::uintptr_t(vertices.offset+8)));
    }else{
        for(unsigned i=0;i<4;i++){std::memcpy(xy.data()+i*2,f.vertices[i].xy,8);std::memcpy(color.data()+i*4,f.vertices[i].color,4);}
        check(stream.upload(xy.data(),sizeof(xy),vertices),"upload current positions");
        check(stream.upload(color.data(),sizeof(color),colors),"upload current colors");
        check(vertices.offset%16==0&&colors.offset%16==0,"aligned separate attribute ranges");
        glBindBuffer(GL_ARRAY_BUFFER,vertices.buffer);glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,8,reinterpret_cast<void *>(std::uintptr_t(vertices.offset)));
        glBindBuffer(GL_ARRAY_BUFFER,colors.buffer);glVertexAttribPointer(1,4,GL_UNSIGNED_BYTE,GL_TRUE,4,reinterpret_cast<void *>(std::uintptr_t(colors.offset)));
    }
    if(indexed){
        check(stream.upload(f.indices.data(),sizeof(f.indices),indices),"upload all current indices");check(indices.offset%16==0,"aligned index range");
        check(indices.buffer==vertices.buffer,"whole draw stays in one slot");
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,indices.buffer);glDrawElements(GL_TRIANGLES,6,GL_UNSIGNED_SHORT,reinterpret_cast<void *>(std::uintptr_t(indices.offset)));
    }else glDrawArrays(GL_TRIANGLE_FAN,0,4);
    check(stream.end_draw(),"end reservation only after GPU draw submission");check(glGetError()==GL_NO_ERROR,"streamed draw");
    if(verify_bytes){
        // Read mapping is separate from the production upload path and may
        // wait for completion. Stress below submits without these mappings.
        if(interleaved)bytes(vertices,f.vertices.data(),sizeof(f.vertices));else{bytes(vertices,xy.data(),sizeof(xy));bytes(colors,color.data(),sizeof(color));}
        if(indexed)bytes(indices,f.indices.data(),sizeof(f.indices));
    }
}
int main(){
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);check(display!=EGL_NO_DISPLAY&&eglInitialize(display,nullptr,nullptr),"EGL initialize");
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint configs;check(eglChooseConfig(display,attributes,&config,1,&configs)&&configs==1,"EGL config");
    EGLint size[]={EGL_WIDTH,64,EGL_HEIGHT,64,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,size);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    check(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context),"EGL current");
    std::printf("STREAM_UPLOAD renderer=%s\n",glGetString(GL_RENDERER));std::fflush(stdout);
    GLuint program=glCreateProgram();GLuint vs=shader(GL_VERTEX_SHADER,"#version 300 es\nlayout(location=0)in vec2 xy;layout(location=1)in vec4 c;out vec4 color;void main(){gl_Position=vec4(xy,0,1);color=c;}");
    GLuint ps=shader(GL_FRAGMENT_SHADER,"#version 300 es\nprecision highp float;in vec4 color;out vec4 pixel;void main(){pixel=color;}");
    glAttachShader(program,vs);glAttachShader(program,ps);glLinkProgram(program);GLint linked;glGetProgramiv(program,GL_LINK_STATUS,&linked);check(linked,"shader link");glDeleteShader(vs);glDeleteShader(ps);glUseProgram(program);
    GLuint vao,buffers[3];glGenVertexArrays(1,&vao);glBindVertexArray(vao);glGenBuffers(3,buffers);
    glEnableVertexAttribArray(0);glEnableVertexAttribArray(1);glViewport(0,0,64,64);glDisable(GL_DITHER);
    for(auto policy:{Nhl07StreamUpload::Policy::ReuseReady,Nhl07StreamUpload::Policy::OrphanOnWrap}){
        Nhl07StreamUpload stream(512,4096,policy);
        check(!stream.begin_draw(4097),"oversize safely declines before touching GL");check(!stream.end_draw(),"END without BEGIN rejected");
        check(stream.begin_draw(16),"small valid draw reservation");check(!stream.begin_draw(16),"nested draw reservation rejected");
        Nhl07StreamUpload::Range invalid;std::array<std::uint8_t,17> too_large{};
        check(!stream.upload(too_large.data(),too_large.size(),invalid),"overrun of reserved draw declined");check(!stream.upload(nullptr,1,invalid),"null source declined");check(stream.end_draw(),"failed upload cannot trap reservation");
        for(unsigned draw=0;draw<180;draw++){
            auto f=fixture(draw);bool indexed=(draw%3)!=0,interleaved=(draw%2)!=0;
            baseline(buffers,f,indexed,interleaved);auto expected=pixels();
            streamed(stream,f,indexed,interleaved,draw<8||draw%31==0);check(pixels()==expected,"complete actual pixels match baseline across slot wraps");
        }
        // Queued draws preserve all earlier referenced ranges. The final
        // image is compared with the same complete baseline draw sequence.
        for(unsigned draw=0;draw<1200;draw++)baseline(buffers,fixture(draw),true,draw%2);
        auto expected=pixels();
        for(unsigned draw=0;draw<1200;draw++)streamed(stream,fixture(draw),true,draw%2,false);
        check(pixels()==expected,"queued indexed/immediate-layout draws preserve final GPU pixels");
        // Grow a slot beyond initial capacity and verify the full byte span,
        // including padding and final byte, before rendering the next frame.
        std::vector<std::uint8_t> large(3001);for(unsigned i=0;i<large.size();i++)large[i]=std::uint8_t(i*31);
        check(stream.begin_draw(Nhl07StreamUpload::aligned_size(large.size())),"large draw grows slot within budget");Nhl07StreamUpload::Range range;
        check(stream.upload(large.data(),large.size(),range),"large current bytes uploaded");check(stream.end_draw(),"end large byte-only contract");bytes(range,large.data(),large.size());
        const auto stats=stream.stats();check(stats.rotations>3&&stats.uploads>2000,"stress really crosses all three ring slots");check(stats.map_failures==0&&stats.failed_fences==0,"no failed map or fence operation");
        if(policy==Nhl07StreamUpload::Policy::OrphanOnWrap)check(stats.orphans>3,"real orphan fallback path exercised repeatedly");
        std::printf("STREAM_STATS policy=%u uploads=%llu bytes=%llu rotations=%llu allocations=%llu orphans=%llu ready=%llu pending=%llu\n",unsigned(policy),(unsigned long long)stats.uploads,(unsigned long long)stats.bytes,(unsigned long long)stats.rotations,(unsigned long long)stats.allocations,(unsigned long long)stats.orphans,(unsigned long long)stats.ready_fences,(unsigned long long)stats.pending_fences);std::fflush(stdout);
        stream.clear();streamed(stream,fixture(91),true,true,true);check(glGetError()==GL_NO_ERROR,"explicit clear can recreate stream storage");stream.clear();
    }
    glDeleteBuffers(3,buffers);glDeleteVertexArrays(1,&vao);glDeleteProgram(program);
    eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);eglDestroyContext(display,context);eglDestroySurface(display,surface);eglTerminate(display);
    std::printf("STREAM_UPLOAD passed=%u failed=0\n",checks);return 0;
}
