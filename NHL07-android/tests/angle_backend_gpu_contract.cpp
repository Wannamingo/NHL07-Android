#define NHL07_GL_DISPATCH_IMPLEMENTATION 1
#include "native_gl_dispatch.h"
#include "angle_backend.h"
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

int nhl07_stream_contract_main();
static unsigned validations;

extern "C" EGLBoolean nhl07_contract_make_current(EGLDisplay display,
    EGLSurface draw, EGLSurface read, EGLContext context) {
    const auto *table = nhl07_gl_dispatch_current();
    if (!table || table->p_eglMakeCurrent(display, draw, read, context) != EGL_TRUE)
        return EGL_FALSE;
    if (context != EGL_NO_CONTEXT) {
        char error[1024]{};
        if (!nhl07_angle_backend_validate_current(error, sizeof(error))) {
            std::printf("ANGLE_BACKEND_GPU FAIL current_validation=%s\n", error);
            return EGL_FALSE;
        }
        ++validations;
        std::printf("ANGLE_BACKEND_GPU verified_mode=%d description=%s\n",
            nhl07_angle_backend_mode(), nhl07_angle_backend_description());
        const auto *before = nhl07_gl_dispatch_current();
        const int mode = nhl07_angle_backend_mode();
        if (mode != NHL07_GRAPHICS_SYSTEM_GLES) {
            if (nhl07_angle_backend_choose_system(error, sizeof(error)) != 0 ||
                nhl07_gl_dispatch_current() != before || nhl07_angle_backend_mode() != mode) {
                std::printf("ANGLE_BACKEND_GPU FAIL switching_current_context_was_not_rejected\n");
                return EGL_FALSE;
            }
            std::printf("ANGLE_BACKEND_GPU rejected_context_switch=1 dispatch_preserved=1\n");
        }
    }
    return EGL_TRUE;
}

int main(int argc, char **argv) {
    setvbuf(stdout, nullptr, _IONBF, 0); alarm(120);
    if (argc != 5) {
        std::fprintf(stderr, "Usage: angle_backend_contract MODE ANGLE_DIR HOOK_DIR DRIVER_DIR\n");
        return 2;
    }
    const int wanted = std::atoi(argv[1]);
    char error[1024]{};
    if (!nhl07_angle_backend_prepare(wanted, argv[2], argv[3], argv[4], error, sizeof(error))) {
        std::printf("ANGLE_BACKEND_GPU FAIL prepare=%s\n", error); return 1;
    }
    const auto *before = nhl07_gl_dispatch_current();
    if (nhl07_angle_backend_prepare(99, nullptr, nullptr, nullptr, error, sizeof(error)) != 0 ||
        nhl07_gl_dispatch_current() != before || nhl07_angle_backend_mode() != wanted) {
        std::printf("ANGLE_BACKEND_GPU FAIL invalid_mode_changed_dispatch\n"); return 1;
    }
    std::printf("ANGLE_BACKEND_GPU invalid_mode_rejected=1 dispatch_preserved=1\n");
    if (nhl07_stream_contract_main() != 0 || validations != 1) return 1;
    // The fixture destroys all GPU resources, context and EGL display first.
    // Then prove the same production dispatch can initialize system GLES.
    if (!nhl07_angle_backend_choose_system(error, sizeof(error))) {
        std::printf("ANGLE_BACKEND_GPU FAIL system_fallback=%s\n", error); return 1;
    }
    if (nhl07_angle_backend_mode() != NHL07_GRAPHICS_SYSTEM_GLES) return 1;
    if (nhl07_stream_contract_main() != 0 || validations != 2) return 1;
    std::printf("ANGLE_BACKEND_GPU PASS mode=%d fallback_mode=0 validations=%u scope=production_dispatch_pbuffer_stream_GPU_contract_no_window_no_game_FPS\n", wanted, validations);
    return 0;
}
