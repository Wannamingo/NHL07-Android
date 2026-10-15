#pragma once
#include "native_gl_dispatch.h"
#include "angle_backend.h"

#ifdef __cplusplus
extern "C" {
#endif
EGLBoolean nhl07_contract_make_current(EGLDisplay display, EGLSurface draw,
    EGLSurface read, EGLContext context);
#ifdef __cplusplus
}
#endif

// Applied only to the existing standalone GPU fixture, after API declarations.
#define eglGetDisplay nhl07_angle_backend_get_display
#undef eglMakeCurrent
#define eglMakeCurrent nhl07_contract_make_current
