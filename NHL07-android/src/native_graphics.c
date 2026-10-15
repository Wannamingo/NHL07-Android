/* Initial NHL 07/XDK 5849 graphics boundary. EGL window or diagnostic pbuffer.
   Unimplemented rendering is a hard stop; a clear is not counted as gameplay. */
#include <EGL/egl.h>
#include <GLES3/gl3.h>
#include <android/native_window.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdatomic.h>
#include <pthread.h>
#include "recomp_types.h"
#include "native_graphics.h"
#include "native_device_defaults.h"
#include "render_targets.h"
#include "native_fps.h"
#include "native_pause.h"
#include "native_frame_pacer.h"
#include "render_profile.h"
#include "angle_backend.h"
#include <limits.h>
#include <errno.h>
#include <time.h>

#define DEVICE_GLOBAL 0x00785178u
#define DEVICE_STORAGE 0x00785180u
#define DEVICE_SIZE 0x24A0u
extern uint32_t xbox_HeapAlloc(uint32_t size,uint32_t alignment);
extern uint32_t xbox_ContiguousAlloc(uint32_t size,uint32_t alignment);
extern void nhl07_invalidate_vertex_cache(void);
extern uint32_t nhl07_guest_resource_reference(int add_ref,uint32_t resource);
extern uint32_t nhl07_guest_resource_acquire(uint32_t resource);
extern void nhl07_capture_first_draw(const uint32_t *args,uint32_t push_begin,uint32_t push_end);
extern void nhl07_gpu_draw(const uint32_t *args,uint32_t begin,uint32_t end,unsigned width,unsigned height);
extern void nhl07_gpu_consume(uint32_t begin,uint32_t end,unsigned width,unsigned height);
extern unsigned nhl07_gpu_draw_count(void);
extern int nhl07_gpu_flush_pending_draws(uint32_t,uint32_t,unsigned,unsigned);
extern void nhl07_gpu_capture_frame(unsigned width,unsigned height,unsigned present);
extern void sub_0075C7A0_original_xbox(void);
extern void sub_00761130_original_xbox(void);
static ANativeWindow *window;
static ANativeWindow *pending_window;
static pthread_mutex_t window_lock=PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t window_changed=PTHREAD_COND_INITIALIZER;
static unsigned suspend_request,suspend_ack;
static int suspend_result;
static EGLDisplay display=EGL_NO_DISPLAY;
static EGLSurface drawable=EGL_NO_SURFACE;
static EGLSurface parking_surface=EGL_NO_SURFACE;
static EGLContext context=EGL_NO_CONTEXT;
static uint32_t width,height,color_format,depth_format,push_buffer,back_buffer,depth_buffer;
static GLuint game_framebuffer,game_color,game_depth;
static unsigned frames;
static uint64_t profile_previous,profile_work,profile_prepare,profile_swap,profile_limit;
static unsigned profile_samples;
static unsigned draws;
static unsigned render_scale=1;
static atomic_int display_requested,requested_scale=1,requested_aspect,display_failure;
static int graphics_backend;
static char graphics_libraries[PATH_MAX],graphics_driver[PATH_MAX];
static atomic_int backend_failure,render_stage;
void nhl07_graphics_configure_backend(int mode,const char *libraries,const char *driver){
    graphics_backend=mode>=0&&mode<=2?mode:0;
    snprintf(graphics_libraries,sizeof(graphics_libraries),"%s",libraries?libraries:"");
    snprintf(graphics_driver,sizeof(graphics_driver),"%s",driver?driver:"");
}
int nhl07_graphics_backend_failure(void){return atomic_exchange(&backend_failure,0);}
void nhl07_graphics_request_display(int scale,int aspect){atomic_store(&requested_scale,scale<1?1:scale>3?3:scale);atomic_store(&requested_aspect,aspect==2?2:aspect==1?1:0);atomic_store(&display_requested,1);}
int nhl07_graphics_display_failure(void){return atomic_exchange(&display_failure,0);}
static unsigned char gamma_ramp[768];
void nhl07_graphics_set_window(ANativeWindow *value) {window=value;if(window)ANativeWindow_acquire(window);}
void nhl07_graphics_replace_window(ANativeWindow *value){pthread_mutex_lock(&window_lock);ANativeWindow_acquire(value);if(pending_window)ANativeWindow_release(pending_window);pending_window=value;pthread_mutex_unlock(&window_lock);}
int nhl07_graphics_suspend_window(void){
    struct timespec deadline;clock_gettime(CLOCK_REALTIME,&deadline);deadline.tv_sec+=2;
    fprintf(stderr,"[NHL07-SURFACE] requesting suspend stage=%d presents=%u\n",atomic_load(&render_stage),frames);
    pthread_mutex_lock(&window_lock);unsigned ticket=++suspend_request;
    if(pending_window){ANativeWindow_release(pending_window);pending_window=NULL;}
    int status=0;while(suspend_ack<ticket&&status!=ETIMEDOUT)status=pthread_cond_timedwait(&window_changed,&window_lock,&deadline);
    int okay=suspend_ack>=ticket&&suspend_result;
    pthread_mutex_unlock(&window_lock);
    fprintf(stderr,"[NHL07-SURFACE] suspend request=%u ack=%d result=%d\n",ticket,status!=ETIMEDOUT,okay);
    return okay;
}
void nhl07_graphics_pause_checkpoint(void){
    pthread_mutex_lock(&window_lock);unsigned ticket=suspend_request;int needed=ticket>suspend_ack;pthread_mutex_unlock(&window_lock);
    if(!needed)return;
    fprintf(stderr,"[NHL07-SURFACE] checkpoint received ticket=%u stage=%d\n",ticket,atomic_load(&render_stage));
    int okay=1;
    if(display!=EGL_NO_DISPLAY&&context!=EGL_NO_CONTEXT&&window&&drawable!=EGL_NO_SURFACE){
        if(parking_surface==EGL_NO_SURFACE){
            EGLConfig config;EGLint id,count;const EGLint size[]={EGL_WIDTH,1,EGL_HEIGHT,1,EGL_NONE};
            fprintf(stderr,"[NHL07-SURFACE] detach query-context begin\n");
            if(!eglQueryContext(display,context,EGL_CONFIG_ID,&id))okay=0;
            fprintf(stderr,"[NHL07-SURFACE] detach query-context end okay=%d\n",okay);
            if(okay){const EGLint attributes[]={EGL_CONFIG_ID,id,EGL_NONE};
                fprintf(stderr,"[NHL07-SURFACE] detach choose-config begin\n");
                if(!eglChooseConfig(display,attributes,&config,1,&count)||count!=1)okay=0;
                fprintf(stderr,"[NHL07-SURFACE] detach choose-config end okay=%d\n",okay);
                if(okay){fprintf(stderr,"[NHL07-SURFACE] detach create-pbuffer begin\n");
                    parking_surface=eglCreatePbufferSurface(display,config,size);if(parking_surface==EGL_NO_SURFACE)okay=0;
                    fprintf(stderr,"[NHL07-SURFACE] detach create-pbuffer end okay=%d\n",okay);}}
        }
        if(okay){fprintf(stderr,"[NHL07-SURFACE] detach make-current begin\n");
            if(!eglMakeCurrent(display,parking_surface,parking_surface,context))okay=0;
            fprintf(stderr,"[NHL07-SURFACE] detach make-current end okay=%d\n",okay);}
        if(okay){EGLSurface previous=drawable;drawable=parking_surface;
            fprintf(stderr,"[NHL07-SURFACE] detach destroy-window begin\n");
            if(!eglDestroySurface(display,previous))okay=0;
            fprintf(stderr,"[NHL07-SURFACE] detach destroy-window end okay=%d\n",okay);
            fprintf(stderr,"[NHL07-SURFACE] detach release-native-window begin\n");
            ANativeWindow_release(window);window=NULL;
            fprintf(stderr,"[NHL07-SURFACE] detach release-native-window end\n");
        }
    }
    if(!okay)fprintf(stderr,"[NHL07-SURFACE] suspend detach failed EGL=%X\n",eglGetError());
    else fprintf(stderr,"[NHL07-SURFACE] owner detached window; context and guest memory retained; presents=%u\n",frames);
    if(okay)nhl07_pause_set(1);
    pthread_mutex_lock(&window_lock);suspend_ack=ticket;suspend_result=okay;pthread_cond_broadcast(&window_changed);pthread_mutex_unlock(&window_lock);
}
static void apply_window_request(void){
    pthread_mutex_lock(&window_lock);ANativeWindow *next=pending_window;pending_window=NULL;pthread_mutex_unlock(&window_lock);
    if(!next)return;
    EGLConfig config;EGLint id,count,visual;eglQueryContext(display,context,EGL_CONFIG_ID,&id);const EGLint attributes[]={EGL_CONFIG_ID,id,EGL_NONE};
    if(!eglChooseConfig(display,attributes,&config,1,&count)||count!=1){fprintf(stderr,"[NHL07-SURFACE] missing original EGL config\n");abort();}
    eglGetConfigAttrib(display,config,EGL_NATIVE_VISUAL_ID,&visual);ANativeWindow_setBuffersGeometry(next,width,height,visual);
    EGLSurface replacement=eglCreateWindowSurface(display,config,next,NULL);
    if(replacement==EGL_NO_SURFACE||!eglMakeCurrent(display,replacement,replacement,context)){fprintf(stderr,"[NHL07-SURFACE] restore failed error=%X\n",eglGetError());abort();}
    if(drawable!=parking_surface)eglDestroySurface(display,drawable);drawable=replacement;if(window)ANativeWindow_release(window);window=next;
    fprintf(stderr,"[NHL07-SURFACE] window restored; EGL context and guest memory retained; presents=%u\n",frames);
}
static void *guest(uint32_t address) {return address?(void *)(g_xbox_mem_offset+(uintptr_t)address):NULL;}
static float as_float(uint32_t value) {float f;memcpy(&f,&value,4);return f;}
static uint32_t original_graphics_call(void (*function)(void),uint32_t cleanup) {
    uint32_t sp=g_esp;function();
    if(g_esp!=sp+cleanup){fprintf(stderr,"[NHL07-ABI] original graphics cleanup mismatch\n");abort();}
    uint32_t result=g_eax;g_esp=sp;return result;
}
static void flush_pending_draws(void){
    if(nhl07_gpu_flush_pending_draws(push_buffer,MEM32(DEVICE_STORAGE),nhl07_targets_width(),nhl07_targets_height()))
        MEM32(DEVICE_STORAGE)=push_buffer;
}
static uint32_t unavailable(const char *what,uint32_t value) {
    fprintf(stderr,"[NHL07-GRAPHICS-MISSING] %s value=%08X\n",what,value);
    fflush(stderr);abort();
}
static void gl_check(const char *where) {
    GLenum error=glGetError();if(error!=GL_NO_ERROR) unavailable(where,error);
}
static uint32_t proxy(uint32_t format) {
    uint32_t p=xbox_HeapAlloc(32,16);
    if(!p) unavailable("surface memory",32);
    memset(guest(p),0,32);MEM32(p)=0x50001;
    MEM32(p+12)=(format<<8)|0x10022;
    uint32_t pitch=(width*4+63)&~63u;
    MEM32(p+16)=(width-1)|((height-1)<<12)|((pitch/64-1)<<24);
    uint32_t pixels=xbox_ContiguousAlloc(pitch*height,4096);
    if(!pixels)unavailable("surface physical memory",pitch*height);
    MEM32(p+4)=pixels&0x7fffffffu;
    memset(guest(pixels),0,pitch*height);
    return p;
}
static uint32_t create_device(const uint32_t *args) {
    nhl07_fps_reset();
    nhl07_frame_pacer_reset();
    uint32_t p=args[4];
    if(!p || !args[5] || context!=EGL_NO_CONTEXT) return 0x80070057;
    MEM32(args[5])=0;
    width=MEM32(p);height=MEM32(p+4);color_format=MEM32(p+8);depth_format=MEM32(p+36);
    const char *scale_value=getenv("NHL07_RESOLUTION_SCALE");if(scale_value)render_scale=(unsigned)atoi(scale_value);
    if(atomic_load(&display_requested))render_scale=(unsigned)atomic_load(&requested_scale);
    if(render_scale<1||render_scale>3)render_scale=1;nhl07_targets_configure_scale(render_scale);
    fprintf(stderr,"[NHL07-GRAPHICS] create %ux%u format=%X depth=%X enabled=%u multisample=%X\n",
        width,height,color_format,depth_format,MEM32(p+32),MEM32(p+16));
    if(!width||!height||width>4096||height>4096) return 0x80070057;
    if(color_format!=0x12 && color_format!=0x1e) return unavailable("back buffer format",color_format);
    /* D24S8 swizzled/linear both use a host depth attachment. Guest layout
       matters only for a future lock/texture-access implementation. */
    if(MEM32(p+32) && depth_format!=0x2a && depth_format!=0x2e) return unavailable("depth format",depth_format);
    if(MEM32(p+16)!=0x11 && MEM32(p+16)!=0) return unavailable("multisampling",MEM32(p+16));
    if(MEM32(p+52)||MEM32(p+56)||MEM32(p+60)||MEM32(p+64))
        return unavailable("caller-supplied presentation surfaces",MEM32(p+52));
    char backend_error[2048];
    if(!nhl07_angle_backend_prepare(graphics_backend,graphics_libraries,graphics_libraries,graphics_driver,backend_error,sizeof(backend_error))){
        fprintf(stderr,"[NHL07-BACKEND] prepare failed requested=%d: %s; retry system GLES\n",graphics_backend,backend_error);
        if(graphics_backend)atomic_store(&backend_failure,graphics_backend);
        if(!nhl07_angle_backend_choose_system(backend_error,sizeof(backend_error)))return unavailable("system graphics dispatch",0);
    }
    for(unsigned attempt=0;attempt<2;++attempt){
    const char *failed=NULL;
    display=nhl07_angle_backend_get_display(EGL_DEFAULT_DISPLAY);
    if(display==EGL_NO_DISPLAY||!eglInitialize(display,NULL,NULL)){failed="eglInitialize";goto egl_failed;}
    const EGLint attributes[]={EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,
        EGL_SURFACE_TYPE,window?(nhl07_angle_backend_mode()?EGL_WINDOW_BIT|EGL_PBUFFER_BIT:EGL_WINDOW_BIT):EGL_PBUFFER_BIT,
        EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,
        EGL_DEPTH_SIZE,24,EGL_STENCIL_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint count;
    if(!eglChooseConfig(display,attributes,&config,1,&count)||count!=1){failed="eglChooseConfig";goto egl_failed;}
    const EGLint context_attributes[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    context=eglCreateContext(display,config,EGL_NO_CONTEXT,context_attributes);
    if(window) {
        EGLint visual;eglGetConfigAttrib(display,config,EGL_NATIVE_VISUAL_ID,&visual);
        ANativeWindow_setBuffersGeometry(window,width,height,visual);
        drawable=eglCreateWindowSurface(display,config,window,NULL);
    } else {
        const EGLint size[]={EGL_WIDTH,(EGLint)width,EGL_HEIGHT,(EGLint)height,EGL_NONE};
        drawable=eglCreatePbufferSurface(display,config,size);
    }
    if(context==EGL_NO_CONTEXT||drawable==EGL_NO_SURFACE||!eglMakeCurrent(display,drawable,drawable,context)){failed="EGL context/surface";goto egl_failed;}
    if(!nhl07_angle_backend_validate_current(backend_error,sizeof(backend_error))){failed="actual graphics driver validation";fprintf(stderr,"[NHL07-BACKEND] %s\n",backend_error);goto egl_failed;}
    fprintf(stderr,"[NHL07-BACKEND] requested=%d active=%d %s\n",graphics_backend,nhl07_angle_backend_mode(),nhl07_angle_backend_description());
    break;
egl_failed:;
    EGLint error=eglGetError();int previous=nhl07_angle_backend_mode();
    fprintf(stderr,"[NHL07-BACKEND] %s failed error=%X mode=%d\n",failed,error,previous);
    if(display!=EGL_NO_DISPLAY){
        eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);
        if(drawable!=EGL_NO_SURFACE)eglDestroySurface(display,drawable);
        if(context!=EGL_NO_CONTEXT)eglDestroyContext(display,context);
        eglTerminate(display);
    }
    display=EGL_NO_DISPLAY;drawable=EGL_NO_SURFACE;context=EGL_NO_CONTEXT;
    if(!previous||attempt||!nhl07_angle_backend_choose_system(backend_error,sizeof(backend_error)))return unavailable(failed,error);
    atomic_store(&backend_failure,graphics_backend);
    }
    fprintf(stderr,"[NHL07-GRAPHICS] GLES renderer=%s version=%s surface=%s\n",glGetString(GL_RENDERER),
        glGetString(GL_VERSION),window?"window":"pbuffer");
    back_buffer=proxy(color_format);
    if(MEM32(p+32))depth_buffer=proxy(depth_format);
    push_buffer=xbox_HeapAlloc(0x80000,4096);
    if(!push_buffer) return 0x8007000e;
    memset(guest(DEVICE_STORAGE),0,DEVICE_SIZE);
    MEM32(DEVICE_GLOBAL)=DEVICE_STORAGE;
    MEM32(DEVICE_STORAGE)=push_buffer;MEM32(DEVICE_STORAGE+4)=push_buffer+0x80000-4096;
    MEM32(DEVICE_STORAGE+0x1a14)=back_buffer;MEM32(DEVICE_STORAGE+0x1a18)=back_buffer;
    MEM32(DEVICE_STORAGE+0x1a1c)=back_buffer;MEM32(DEVICE_STORAGE+0x196c)=0x11;
    MEM32(DEVICE_STORAGE+0x96c)=0x3f800000;MEM32(DEVICE_STORAGE+0x970)=0x3f800000;
    nhl07_device_defaults(DEVICE_STORAGE,width,height,back_buffer,depth_buffer);
    for(unsigned c=0;c<3;c++) for(unsigned i=0;i<256;i++) gamma_ramp[c*256+i]=(unsigned char)i;
    memcpy(guest(DEVICE_STORAGE+0x1e04),gamma_ramp,768);memcpy(guest(DEVICE_STORAGE+0x2104),gamma_ramp,768);
    // Stable guest render target: Android's window buffers can resize between swaps.
    glGenFramebuffers(1,&game_framebuffer);glBindFramebuffer(GL_FRAMEBUFFER,game_framebuffer);
    glGenTextures(1,&game_color);glBindTexture(GL_TEXTURE_2D,game_color);
    glTexStorage2D(GL_TEXTURE_2D,1,GL_RGBA8,width*render_scale,height*render_scale);
    glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,game_color,0);
    glGenRenderbuffers(1,&game_depth);glBindRenderbuffer(GL_RENDERBUFFER,game_depth);
    glRenderbufferStorage(GL_RENDERBUFFER,GL_DEPTH24_STENCIL8,width*render_scale,height*render_scale);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,game_depth);
    if(glCheckFramebufferStatus(GL_FRAMEBUFFER)!=GL_FRAMEBUFFER_COMPLETE)return unavailable("game framebuffer",glCheckFramebufferStatus(GL_FRAMEBUFFER));
    nhl07_targets_initialize(game_framebuffer,game_depth,width,height,back_buffer,depth_buffer);
    MEM32(args[5])=DEVICE_STORAGE;glViewport(0,0,width*render_scale,height*render_scale);gl_check("initial viewport");
    fprintf(stderr,"[NHL07-DISPLAY] internal=%ux%u scale=%u\n",width*render_scale,height*render_scale,render_scale);return 0;
}
static void apply_display_request(void){
    unsigned scale=atomic_load(&display_requested)?(unsigned)atomic_load(&requested_scale):render_scale;
    if(scale==render_scale)return;
    /* This runs only on the render thread after a complete presentation. Keep
       the previous target until allocation and the color copy both succeed. */
    GLuint fb=0,color=0,depth=0;glGenFramebuffers(1,&fb);glBindFramebuffer(GL_FRAMEBUFFER,fb);
    glGenTextures(1,&color);glBindTexture(GL_TEXTURE_2D,color);glTexStorage2D(GL_TEXTURE_2D,1,GL_RGBA8,width*scale,height*scale);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,color,0);
    glGenRenderbuffers(1,&depth);glBindRenderbuffer(GL_RENDERBUFFER,depth);glRenderbufferStorage(GL_RENDERBUFFER,GL_DEPTH24_STENCIL8,width*scale,height*scale);glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_DEPTH_STENCIL_ATTACHMENT,GL_RENDERBUFFER,depth);
    GLenum error=glGetError();int complete=glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE;
    if(!error&&complete){
        glDisable(GL_SCISSOR_TEST);glDepthMask(GL_TRUE);glStencilMask(255);glClear(GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        glBindFramebuffer(GL_READ_FRAMEBUFFER,game_framebuffer);glBindFramebuffer(GL_DRAW_FRAMEBUFFER,fb);glBlitFramebuffer(0,0,width*render_scale,height*render_scale,0,0,width*scale,height*scale,GL_COLOR_BUFFER_BIT,GL_LINEAR);error=glGetError();
    }
    if(error||!complete){
        glDeleteFramebuffers(1,&fb);glDeleteTextures(1,&color);glDeleteRenderbuffers(1,&depth);while(glGetError()!=GL_NO_ERROR){}
        atomic_store(&requested_scale,(int)render_scale);atomic_store(&display_failure,(int)render_scale);
        fprintf(stderr,"[NHL07-DISPLAY] allocation failed requested=%u retained=%u error=%X\n",scale,render_scale,error);return;
    }
    GLuint oldfb=game_framebuffer,oldcolor=game_color,olddepth=game_depth;game_framebuffer=fb;game_color=color;game_depth=depth;render_scale=scale;
    nhl07_targets_replace_back(fb,depth,scale);glDeleteFramebuffers(1,&oldfb);glDeleteTextures(1,&oldcolor);glDeleteRenderbuffers(1,&olddepth);
    glViewport(0,0,nhl07_targets_width()*scale,nhl07_targets_height()*scale);nhl07_invalidate_vertex_cache();
    fprintf(stderr,"[NHL07-DISPLAY] applied internal=%ux%u scale=%u\n",width*scale,height*scale,scale);
}
uint32_t nhl07_graphics_call(NhlGraphicsApi api,const uint32_t *args) {
    if(api==NHL_GFX_Direct3D_CreateDevice) return create_device(args);
    if(context==EGL_NO_CONTEXT) return unavailable("API before CreateDevice",api);
    switch(api) {
    case NHL_GFX_D3DDevice_DrawIndexedVertices:
        if(!draws) nhl07_capture_first_draw(args,push_buffer,MEM32(DEVICE_STORAGE));
        nhl07_gpu_draw(args,push_buffer,MEM32(DEVICE_STORAGE),nhl07_targets_width(),nhl07_targets_height());++draws;
        MEM32(DEVICE_STORAGE)=push_buffer;return 0;
    case NHL_GFX_D3DDevice_FlushVertexCache:
        nhl07_invalidate_vertex_cache();return 0;
    case NHL_GFX_D3DDevice_GetGammaRamp:
        if(!args[0]) return 0x80070057;
        memcpy(guest(args[0]),gamma_ramp,768);return 0;
    case NHL_GFX_D3DDevice_SetBackBufferScale:
        fprintf(stderr,"[NHL07-GRAPHICS] back buffer scale %.3f %.3f\n",as_float(args[0]),as_float(args[1]));
        if(as_float(args[0])!=1||as_float(args[1])!=1) return unavailable("non-unit back buffer scale",args[0]);
        MEM32(DEVICE_STORAGE+0x96c)=args[0];MEM32(DEVICE_STORAGE+0x970)=args[1];return 0;
    case NHL_GFX_D3DDevice_Clear: {
        flush_pending_draws();
        if(args[0]||args[1]) return unavailable("clear rectangles",args[0]);
        if((args[2]&0xf0)&&(args[2]&0xf0)!=0xf0) return unavailable("partial color clear",args[2]);
        if(args[2]&~0xf3u) return unavailable("clear flags",args[2]);
        GLbitfield flags=((args[2]&1)?GL_DEPTH_BUFFER_BIT:0)|((args[2]&2)?GL_STENCIL_BUFFER_BIT:0)|
            ((args[2]&0xf0)?GL_COLOR_BUFFER_BIT:0);
        glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
        glDepthMask(GL_TRUE);glStencilMask(0xff);
        glClearColor(((args[3]>>16)&255)/255.f,((args[3]>>8)&255)/255.f,(args[3]&255)/255.f,((args[3]>>24)&255)/255.f);
        glClearDepthf(as_float(args[4]));glClearStencil(args[5]);glClear(flags);gl_check("clear");
        if(flags&GL_COLOR_BUFFER_BIT)nhl07_targets_color_changed();
        static unsigned color_clears;
        // Readback forces a tile-GPU synchronization. Keep startup checks and
        // sparse diagnostic samples; repeated clears retain the same GL path.
        if((args[2]&0xf0)==0xf0&&(++color_clears<=8||
                (getenv("NHL07_TEXTURE_PROBES")&&color_clears%600==0))) {
            unsigned char pixel[4];glReadPixels(nhl07_targets_width()/2,nhl07_targets_height()/2,1,1,GL_RGBA,GL_UNSIGNED_BYTE,pixel);gl_check("clear readback");
            uint32_t actual=((uint32_t)pixel[3]<<24)|(pixel[0]<<16)|(pixel[1]<<8)|pixel[2];
            uint32_t expected=nhl07_targets_alpha()?args[3]:(args[3]|0xff000000u);
            int matched=actual==expected;
            if(nhl07_targets_rgb565())matched=pixel[3]==255&&abs((int)pixel[0]-(int)((expected>>16)&255))<=7&&
                abs((int)pixel[1]-(int)((expected>>8)&255))<=3&&abs((int)pixel[2]-(int)(expected&255))<=7;
            fprintf(stderr,"[NHL07-GRAPHICS] clear readback=%08X expected=%08X\n",actual,expected);
            if(!matched) return unavailable("clear readback mismatch",actual);
        }
        return 0;
    }
    case NHL_GFX_D3DDevice_Swap: {
        atomic_store(&render_stage,1);nhl07_pause_wait();atomic_store(&render_stage,2);apply_window_request();
        nhl07_profile_control();
        uint64_t profile_begin=nhl07_monotonic_ns();
        nhl07_gpu_consume(push_buffer,MEM32(DEVICE_STORAGE),nhl07_targets_width(),nhl07_targets_height());MEM32(DEVICE_STORAGE)=push_buffer;
        atomic_store(&render_stage,3);nhl07_targets_flush();glBindFramebuffer(GL_FRAMEBUFFER,game_framebuffer);
        if(getenv("NHL07_TEXTURE_PROBES")&&(frames<32 || (frames+1)%60==0))nhl07_gpu_capture_frame(width,height,frames+1);
        if(frames<8 || (frames+1)%60==0)fprintf(stderr,"[NHL07-CLOCK] EA ticks=%u frequency=%u kernel_ms=%u\n",MEM32(0x91a9c4),MEM32(0x91a9c0),MEM32(0x980020)); /* audited KDATA_TICK_COUNT=0x20 */
        EGLint surface_width,surface_height;
        eglQuerySurface(display,drawable,EGL_WIDTH,&surface_width);eglQuerySurface(display,drawable,EGL_HEIGHT,&surface_height);
        glBindFramebuffer(GL_READ_FRAMEBUFFER,game_framebuffer);glBindFramebuffer(GL_DRAW_FRAMEBUFFER,0);
        glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glClearColor(0,0,0,1);glClear(GL_COLOR_BUFFER_BIT);
        unsigned ratio_w=width,ratio_h=height;const char *aspect=getenv("NHL07_DISPLAY_ASPECT");int selected_aspect=atomic_load(&display_requested)?atomic_load(&requested_aspect):(aspect?atoi(aspect):0);
        if(selected_aspect==2){ratio_w=16;ratio_h=9;}else if(selected_aspect==1){ratio_w=4;ratio_h=3;}
        int scaled_width=surface_width,scaled_height=(int)((int64_t)surface_width*ratio_h/ratio_w);
        if(scaled_height>surface_height){scaled_height=surface_height;scaled_width=(int)((int64_t)surface_height*ratio_w/ratio_h);}
        int left=(surface_width-scaled_width)/2,bottom=(surface_height-scaled_height)/2;
        glBlitFramebuffer(0,0,width*render_scale,height*render_scale,left,bottom,left+scaled_width,bottom+scaled_height,GL_COLOR_BUFFER_BIT,GL_LINEAR);
        gl_check("presentation blit");
        if(draws==1){unsigned char source[4],target[4];glReadPixels(width/2,height/2,1,1,GL_RGBA,GL_UNSIGNED_BYTE,source);
            glBindFramebuffer(GL_READ_FRAMEBUFFER,0);glReadPixels(surface_width/2,surface_height/2,1,1,GL_RGBA,GL_UNSIGNED_BYTE,target);
            fprintf(stderr,"[NHL07-PRESENT] surface=%dx%d source=%02X%02X%02X target=%02X%02X%02X\n",surface_width,surface_height,source[0],source[1],source[2],target[0],target[1],target[2]);gl_check("presentation readback");}
        uint64_t profile_prepared=nhl07_monotonic_ns();nhl07_frame_pacer_wait();
        uint64_t profile_present=nhl07_monotonic_ns();
        atomic_store(&render_stage,8);if(!eglSwapBuffers(display,drawable)){
            EGLint error=eglGetError();
            if(error==EGL_BAD_SURFACE||error==EGL_BAD_NATIVE_WINDOW){nhl07_pause_wait();apply_window_request();if(!eglSwapBuffers(display,drawable))return unavailable("restored eglSwapBuffers",eglGetError());}
            else return unavailable("eglSwapBuffers",error);
        }
        atomic_store(&render_stage,9);uint64_t profile_presented=nhl07_monotonic_ns();nhl07_frame_pacer_present_at(profile_presented);nhl07_fps_present();
        uint64_t profile_paced=profile_presented;
        nhl07_profile_frame(profile_previous&&profile_presented>=profile_previous?profile_presented-profile_previous:0);
        if(profile_previous&&profile_begin>=profile_previous&&profile_begin-profile_previous<1000000000ull&&profile_paced-profile_begin<1000000000ull){
            profile_work+=profile_begin-profile_previous;profile_prepare+=profile_prepared-profile_begin;profile_swap+=profile_presented-profile_present;profile_limit+=profile_present-profile_prepared;
            if(++profile_samples==300){double divisor=profile_samples*1000000.0;fprintf(stderr,"[NHL07-FRAME-TIMING] frames=%u fps=%.3f work_ms=%.3f prepare_ms=%.3f swap_ms=%.3f limiter_ms=%.3f scale=%u diagnostic=%d\n",profile_samples,profile_samples*1e9/(profile_work+profile_prepare+profile_swap+profile_limit),profile_work/divisor,profile_prepare/divisor,profile_swap/divisor,profile_limit/divisor,render_scale,getenv("NHL07_TEXTURE_PROBES")!=NULL);profile_samples=0;profile_work=profile_prepare=profile_swap=profile_limit=0;}
        }
        atomic_store(&render_stage,10);nhl07_pause_wait();apply_window_request();apply_display_request();atomic_store(&render_stage,11);profile_previous=nhl07_monotonic_ns();
        glBindFramebuffer(GL_FRAMEBUFFER,nhl07_targets_framebuffer());
        ++frames;
        if(frames<=8||frames%60==0)fprintf(stderr,"[NHL07-GRAPHICS] present %u; native_draws=%u; gameplay unverified\n",frames,nhl07_gpu_draw_count());return 0;
    }
    case NHL_GFX_D3DDevice_SetFlickerFilter:
    case NHL_GFX_D3DDevice_SetSoftDisplayFilter:
        return 0; /* Analogue TV encoder filters have no digital-screen equivalent. */
    case NHL_GFX_D3DDevice_GetBackBuffer2:
        if(args[0]!=0 && args[0]!=0xffffffff) return unavailable("additional swap buffer",args[0]);
        nhl07_guest_resource_acquire(back_buffer);return back_buffer;
    case NHL_GFX_D3DDevice_GetDepthStencilSurface2:
        if(nhl07_targets_original_state())return original_graphics_call(sub_0075C7A0_original_xbox,4);
        if(depth_buffer)nhl07_guest_resource_acquire(depth_buffer);return depth_buffer;
    case NHL_GFX_D3DSurface_GetDesc: {
        uint32_t p=args[1];int depth=args[0]==depth_buffer && depth_buffer;
        if(!p)return 0x80070057u;
        if(!depth&&args[0]!=back_buffer)return original_graphics_call(sub_00761130_original_xbox,12);
        MEM32(p)=depth?depth_format:color_format;MEM32(p+4)=1;MEM32(p+8)=depth?2:1;
        MEM32(p+12)=width*height*4;MEM32(p+16)=0x11;MEM32(p+20)=width;MEM32(p+24)=height;return 0;
    }
    case NHL_GFX_D3DDevice_SetRenderTarget:
        flush_pending_draws();
        nhl07_targets_set(args[0],args[1]);return 0;
    case NHL_GFX_D3DResource_AddRef:
    case NHL_GFX_D3DResource_Release: {
        // Original GetDepthStencilSurface and SetRenderTarget also update
        // Common. A separate presentation counter diverges on later matches.
        return nhl07_guest_resource_reference(api==NHL_GFX_D3DResource_AddRef,args[0]);
    }
    default:return unavailable("graphics interface",api);
    }
}
