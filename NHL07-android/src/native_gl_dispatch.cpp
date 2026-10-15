#ifndef NHL07_GL_DISPATCH_IMPLEMENTATION
#define NHL07_GL_DISPATCH_IMPLEMENTATION 1
#endif
#include "native_gl_dispatch.h"
#include <dlfcn.h>
#include <cstdio>
#include <new>

extern "C" {
const Nhl07GLDispatchTable *nhl07_gl_dispatch_active = nullptr;
}

namespace {
void report(char *error, size_t capacity, const char *message) {
    if (error && capacity) std::snprintf(error, capacity, "%s", message);
}

bool resolve(void *library, const char *library_kind, const char *symbol,
             void **result, char *error, size_t capacity) {
    (void)dlerror();
    *result = dlsym(library, symbol);
    const char *detail = dlerror();
    if (*result && !detail) return true;
    if (error && capacity) {
        std::snprintf(error, capacity, "Missing %s symbol %s: %s", library_kind, symbol,
                      detail ? detail : "null function address");
    }
    return false;
}
}

extern "C" int nhl07_gl_dispatch_bind(void *egl_handle, void *gles_handle,
                                      char *error, size_t error_capacity) {
    if (error && error_capacity) error[0] = 0;
    if (!egl_handle || !gles_handle) {
        report(error, error_capacity, "Both EGL and GLES library handles are required");
        return 0;
    }
    Nhl07GLDispatchTable next{};
    void *address = nullptr;
#define NHL07_GL_RESOLVE_EGL(name) \
    if (!resolve(egl_handle, "EGL", #name, &address, error, error_capacity)) return 0; \
    next.p_##name = reinterpret_cast<__typeof__(&name)>(address);
    NHL07_GL_DISPATCH_EGL_FUNCTIONS(NHL07_GL_RESOLVE_EGL)
#undef NHL07_GL_RESOLVE_EGL
#define NHL07_GL_RESOLVE_GLES(name) \
    if (!resolve(gles_handle, "GLES", #name, &address, error, error_capacity)) return 0; \
    next.p_##name = reinterpret_cast<__typeof__(&name)>(address);
    NHL07_GL_DISPATCH_GLES_FUNCTIONS(NHL07_GL_RESOLVE_GLES)
#undef NHL07_GL_RESOLVE_GLES

    // Retain old immutable tables until process exit: an in-flight reader may
    // still hold one after publication. The backend owns all library handles.
    auto *published = new (std::nothrow) Nhl07GLDispatchTable(next);
    if (!published) {
        report(error, error_capacity, "Unable to allocate the EGL/GLES dispatch table");
        return 0;
    }
    __atomic_store_n(&nhl07_gl_dispatch_active,
                     static_cast<const Nhl07GLDispatchTable *>(published), __ATOMIC_RELEASE);
    return 1;
}

