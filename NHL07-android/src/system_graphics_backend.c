/* Mali build: direct system EGL/GLES, no ANGLE or custom driver loader. */
#include "angle_backend.h"
#include <stdio.h>
int nhl07_angle_backend_prepare(int mode,const char *a,const char *h,const char *d,char *error,size_t capacity){
    (void)a;(void)h;(void)d;
    if(error&&capacity)snprintf(error,capacity,"%s",mode?"This build supports only system OpenGL ES":"");
    return mode==0;
}
int nhl07_angle_backend_choose_system(char *error,size_t capacity){return nhl07_angle_backend_prepare(0,0,0,0,error,capacity);}
EGLDisplay nhl07_angle_backend_get_display(EGLNativeDisplayType value){return eglGetDisplay(value);}
int nhl07_angle_backend_validate_current(char *error,size_t capacity){if(error&&capacity)error[0]=0;return 1;}
int nhl07_angle_backend_mode(void){return 0;}
const char *nhl07_angle_backend_description(void){return "System OpenGL ES (direct; no ANGLE or custom driver)";}
