#include <EGL/egl.h>
#include <GLES3/gl3.h>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "vertex_format.h"
static unsigned passed;
static void check(bool okay,const char *name){if(!okay){std::fprintf(stderr,"VERTEX_FORMAT FAIL %s error=%x\n",name,glGetError());std::exit(1);}++passed;}
static GLuint shader(GLenum kind,const char *text){
    GLuint s=glCreateShader(kind);glShaderSource(s,1,&text,nullptr);glCompileShader(s);GLint okay;glGetShaderiv(s,GL_COMPILE_STATUS,&okay);check(okay,"compile test shader");return s;
}
int main(){
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);check(eglInitialize(display,nullptr,nullptr),"initialize EGL");
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_NONE};EGLConfig config;EGLint count;
    check(eglChooseConfig(display,attributes,&config,1,&count)&&count==1,"choose EGL config");
    EGLint size[]={EGL_WIDTH,1,EGL_HEIGHT,1,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,size);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    check(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context),"make EGL current");
    std::printf("VERTEX_FORMAT renderer=%s version=%s\n",glGetString(GL_RENDERER),glGetString(GL_VERSION));
    GLuint program=glCreateProgram();glAttachShader(program,shader(GL_VERTEX_SHADER,"#version 300 es\nlayout(location=0) in highp vec4 value;out highp vec4 captured;void main(){captured=value;gl_Position=vec4(0,0,0,1);}"));
    glAttachShader(program,shader(GL_FRAGMENT_SHADER,"#version 300 es\nprecision highp float;out vec4 color;void main(){color=vec4(1);}"));
    const char *varying="captured";glTransformFeedbackVaryings(program,1,&varying,GL_INTERLEAVED_ATTRIBS);glLinkProgram(program);
    GLint linked;glGetProgramiv(program,GL_LINK_STATUS,&linked);check(linked,"link test program");glUseProgram(program);
    GLuint vao,input,output;glGenVertexArrays(1,&vao);glBindVertexArray(vao);glGenBuffers(1,&input);glGenBuffers(1,&output);glEnableVertexAttribArray(0);glEnable(GL_RASTERIZER_DISCARD);
    for(unsigned kind:{1u,5u})for(unsigned components=1;components<=4;components++){
        Nhl07VertexFormat format{};unsigned stride=components*2+6;
        check(nhl07_vertex_format((stride<<8)|(components<<4)|kind,format),"decode signed short layout");
        const unsigned vertices=65536;std::vector<uint8_t> bytes(size_t(vertices)*stride,0xa5);
        for(unsigned i=0;i<vertices;i++)for(unsigned c=0;c<components;c++){
            uint16_t word=uint16_t(i+c*12979u);std::memcpy(bytes.data()+size_t(i)*stride+c*2,&word,2);
        }
        glBindBuffer(GL_ARRAY_BUFFER,input);glBufferData(GL_ARRAY_BUFFER,bytes.size(),bytes.data(),GL_STATIC_DRAW);
        glVertexAttribPointer(0,format.components,format.type,format.normalized,format.stride,nullptr);
        glBindBuffer(GL_TRANSFORM_FEEDBACK_BUFFER,output);glBufferData(GL_TRANSFORM_FEEDBACK_BUFFER,size_t(vertices)*16,nullptr,GL_STREAM_READ);glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER,0,output);
        glBeginTransformFeedback(GL_POINTS);glDrawArrays(GL_POINTS,0,vertices);glEndTransformFeedback();check(glGetError()==GL_NO_ERROR,"capture actual GPU attributes");
        auto result=static_cast<const float *>(glMapBufferRange(GL_TRANSFORM_FEEDBACK_BUFFER,0,size_t(vertices)*16,GL_MAP_READ_BIT));check(result!=nullptr,"map GPU values");
        for(unsigned i=0;i<vertices;i++)for(unsigned c=0;c<4;c++){
            float expected=c==3?1.f:0.f;
            if(c<components){uint16_t u=uint16_t(i+c*12979u);int value=u<32768?int(u):int(u)-65536;expected=float(value);if(kind==1)expected=std::fmax(-1.f,expected/32767.f);}
            check(std::fabs(result[size_t(i)*4+c]-expected)<=(kind==5?0.f:1.2e-7f),"all signed short words, missing-component defaults, padded stride");
        }
        glUnmapBuffer(GL_TRANSFORM_FEEDBACK_BUFFER);glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER,0,0);
    }
    Nhl07VertexFormat format{};check(nhl07_vertex_format(0x215,format)&&format.type==GL_SHORT&&!format.normalized&&format.element_bytes==2,"actual observed 0x215");
    for(uint32_t invalid:{0u,0x205u,0x255u,0x213u,0x216u,0x1001015u})check(!nhl07_vertex_format(invalid,format),"invalid formats rejected");
    check(nhl07_vertex_format(0xc32,format)&&format.type==GL_FLOAT&&format.element_bytes==12,"existing float layout");
    check(nhl07_vertex_format(0x440,format)&&format.bgra&&format.normalized,"existing D3D color layout");
    check(nhl07_vertex_format(0x444,format)&&!format.bgra&&format.normalized,"existing OGL byte layout");
    glDisable(GL_RASTERIZER_DISCARD);eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);
    eglDestroyContext(display,context);eglDestroySurface(display,surface);eglTerminate(display);
    std::printf("VERTEX_FORMAT passed=%u failed=0\n",passed);return 0;
}
