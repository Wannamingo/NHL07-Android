#pragma once
#include "native_gl_dispatch.h"
#include "angle_backend.h"

#ifdef __cplusplus
extern "C" {
#endif
EGLBoolean nhl07_immediate_make_current(EGLDisplay display, EGLSurface draw,
    EGLSurface read, EGLContext context);
// These four queries belong only to the existing fixture. Keep the production
// dispatch ABI frozen while the main APK is being integrated and compiled.
extern __typeof__(&glGetBufferParameteriv) nhl07_replay_p_glGetBufferParameteriv;
extern __typeof__(&glGetIntegeri_v) nhl07_replay_p_glGetIntegeri_v;
extern __typeof__(&glGetSamplerParameterfv) nhl07_replay_p_glGetSamplerParameterfv;
extern __typeof__(&glGetSamplerParameteriv) nhl07_replay_p_glGetSamplerParameteriv;
#ifdef __cplusplus
}
#endif

#ifndef NHL07_IMMEDIATE_PRELUDE_IMPLEMENTATION
#define eglGetDisplay nhl07_angle_backend_get_display
#undef eglMakeCurrent
#define eglMakeCurrent nhl07_immediate_make_current
#define glGetBufferParameteriv nhl07_replay_p_glGetBufferParameteriv
#define glGetIntegeri_v nhl07_replay_p_glGetIntegeri_v
#define glGetSamplerParameterfv nhl07_replay_p_glGetSamplerParameterfv
#define glGetSamplerParameteriv nhl07_replay_p_glGetSamplerParameteriv
#endif
