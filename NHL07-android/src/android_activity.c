/* SurfaceView bridge for the local development APK. No game assets bundled. */
#include <jni.h>
#include <android/native_window_jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <limits.h>
#include "native_fps.h"
#include "native_pause.h"
#include "render_profile.h"

int nhl07_core_entry(const char *xbe,const char *disc,const char *saves);
void nhl07_graphics_set_window(ANativeWindow *window);
void nhl07_graphics_replace_window(ANativeWindow *window);
void nhl07_graphics_request_display(int scale,int aspect);
int nhl07_graphics_display_failure(void);
void nhl07_install_probe_handlers(void);
static int selected_roster;
static int selected_russian;
void nhl07_graphics_configure_backend(int mode,const char *libraries,const char *driver);
int nhl07_graphics_backend_failure(void);
int nhl07_graphics_suspend_window(void);
JNIEXPORT jboolean JNICALL Java_org_nhl07_port_MainActivity_nativeSuspendSurface(JNIEnv *env,jclass type){(void)env;(void)type;return nhl07_graphics_suspend_window()?JNI_TRUE:JNI_FALSE;}
JNIEXPORT jint JNICALL Java_org_nhl07_port_MainActivity_nativeConsumeBackendFailure(JNIEnv *env,jclass type){(void)env;(void)type;return nhl07_graphics_backend_failure();}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_configureGraphicsBackend(JNIEnv *env,jclass type,jint mode,jstring libraries,jstring driver){
    (void)type;
    const char *lib=(*env)->GetStringUTFChars(env,libraries,NULL);if(!lib)return;
    const char *path=(*env)->GetStringUTFChars(env,driver,NULL);
    if(path){nhl07_graphics_configure_backend(mode,lib,path);(*env)->ReleaseStringUTFChars(env,driver,path);}
    (*env)->ReleaseStringUTFChars(env,libraries,lib);
}
JNIEXPORT jfloat JNICALL Java_org_nhl07_port_MainActivity_nativeGetFps(JNIEnv *env,jclass type){(void)env;(void)type;return nhl07_fps_get();}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_nativePause(JNIEnv *env,jclass type,jboolean paused){(void)env;(void)type;nhl07_pause_set(paused);}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_nativeReplaceSurface(JNIEnv *env,jclass type,jobject surface){(void)type;ANativeWindow *window=ANativeWindow_fromSurface(env,surface);if(window){nhl07_graphics_replace_window(window);ANativeWindow_release(window);}}
JNIEXPORT jint JNICALL Java_org_nhl07_port_MainActivity_nativeConsumeDisplayFailure(JNIEnv *env,jclass type){(void)env;(void)type;return nhl07_graphics_display_failure();}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_configureGameLanguage(JNIEnv *env,jclass type,jboolean russian){
    (void)env;(void)type;selected_russian=russian?1:0;
}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_configureRoster(JNIEnv *env,jclass type,jboolean enabled){
    (void)env;(void)type;selected_roster=enabled?1:0;
}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_configureDisplay(JNIEnv *env,jclass type,jint scale,jint aspect){
    (void)env;(void)type;nhl07_graphics_request_display(scale,aspect);
}

JNIEXPORT jint JNICALL Java_org_nhl07_port_MainActivity_runGame(
        JNIEnv *env,jclass type,jobject surface,jstring directory,jstring save_directory,jint seconds) {
    (void)type;
    const char *base=(*env)->GetStringUTFChars(env,directory,NULL);
    if(!base) return 2;
    char xbe[PATH_MAX],disc[PATH_MAX],saves[PATH_MAX],log[PATH_MAX];
    snprintf(xbe,sizeof(xbe),"%s/default.xbe",base);
    snprintf(disc,sizeof(disc),"%s/disc",base);
    snprintf(log,sizeof(log),"%s/startup.log",base);
    setenv("NHL07_DIAGNOSTIC_DIR",base,1);
    if(selected_roster){char roster[PATH_MAX];snprintf(roster,sizeof(roster),"%s/mods/rosters/current",base);setenv("NHL07_ROSTER_DIR",roster,1);}else unsetenv("NHL07_ROSTER_DIR");
    if(selected_russian){char language[PATH_MAX];snprintf(language,sizeof(language),"%s/mods/localization/current",base);setenv("NHL07_LANGUAGE_DIR",language,1);}else unsetenv("NHL07_LANGUAGE_DIR");
    (*env)->ReleaseStringUTFChars(env,directory,base);
    const char *save_base=(*env)->GetStringUTFChars(env,save_directory,NULL);
    if(!save_base) return 2;
    snprintf(saves,sizeof(saves),"%s",save_base);
    (*env)->ReleaseStringUTFChars(env,save_directory,save_base);
    mkdir(saves,0700);
    if(!freopen(log,"w",stderr)) return 2;
    dup2(fileno(stderr),STDOUT_FILENO);
    setvbuf(stderr,NULL,_IONBF,0);setvbuf(stdout,NULL,_IONBF,0);
    nhl07_profile_control();
    ANativeWindow *window=ANativeWindow_fromSurface(env,surface);
    if(!window) return 2;
    nhl07_install_probe_handlers();
    if(seconds!=0){if(seconds<30)seconds=30;if(seconds>1800)seconds=1800;}
    if(seconds)setenv("NHL07_TEXTURE_PROBES","1",1);else unsetenv("NHL07_TEXTURE_PROBES");
    alarm((unsigned)seconds); /* Explicit probes are bounded; normal launch has no time limit. */
    nhl07_graphics_set_window(window);
    fprintf(stderr,"[NHL07-APK] ARM64 window startup test timeout=%d; no gameplay verification\n",seconds);
    int result=nhl07_core_entry(xbe,disc,saves);
    alarm(0);ANativeWindow_release(window);return result;
}
