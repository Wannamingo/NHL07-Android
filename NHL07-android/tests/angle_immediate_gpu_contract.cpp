#define NHL07_GL_DISPATCH_IMPLEMENTATION 1
#define NHL07_IMMEDIATE_PRELUDE_IMPLEMENTATION 1
#include "angle_immediate_contract_prelude.h"
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <string>
#include <unistd.h>

extern "C" {
__typeof__(&glGetBufferParameteriv) nhl07_replay_p_glGetBufferParameteriv;
__typeof__(&glGetIntegeri_v) nhl07_replay_p_glGetIntegeri_v;
__typeof__(&glGetSamplerParameterfv) nhl07_replay_p_glGetSamplerParameterfv;
__typeof__(&glGetSamplerParameteriv) nhl07_replay_p_glGetSamplerParameteriv;
}
int nhl07_immediate_contract_main(int, char **);
static unsigned validations;

extern "C" EGLBoolean nhl07_immediate_make_current(EGLDisplay display,
    EGLSurface draw, EGLSurface read, EGLContext context) {
    const auto *table = nhl07_gl_dispatch_current();
    if (!table || table->p_eglMakeCurrent(display, draw, read, context) != EGL_TRUE)
        return EGL_FALSE;
    if (context != EGL_NO_CONTEXT) {
        char error[1024]{};
        if (!nhl07_angle_backend_validate_current(error, sizeof(error))) {
            std::printf("ANGLE_IMMEDIATE FAIL actual_driver=%s\n", error);
            return EGL_FALSE;
        }
        ++validations;
        std::printf("ANGLE_IMMEDIATE verified_mode=%d description=%s\n",
            nhl07_angle_backend_mode(), nhl07_angle_backend_description());
    }
    return EGL_TRUE;
}

int main(int argc, char **argv) {
    setvbuf(stdout, nullptr, _IONBF, 0); alarm(120);
    if (argc != 8) {
        std::fprintf(stderr, "Usage: angle_immediate_contract MODE ANGLE_DIR HOOK_DIR DRIVER_DIR FIXTURE_DIR PROGRAM_CURSOR CONSTANT_CURSOR\n");
        return 2;
    }
    int mode = std::atoi(argv[1]);
    if (mode != NHL07_GRAPHICS_ANGLE_SYSTEM_VULKAN && mode != NHL07_GRAPHICS_ANGLE_TURNIP_V32) return 2;
    char error[1024]{};
    if (!nhl07_angle_backend_prepare(mode, argv[2], argv[3], argv[4], error, sizeof(error))) {
        std::printf("ANGLE_IMMEDIATE FAIL prepare=%s\n", error); return 1;
    }
    const std::string selected_gles = std::string(argv[2]) + "/libGLESv2_angle.so";
    void *gles = dlopen(selected_gles.c_str(), RTLD_NOW | RTLD_LOCAL);
    if (!gles) { std::printf("ANGLE_IMMEDIATE FAIL query_library=%s\n", dlerror()); return 1; }
#define LOAD_QUERY(name) \
    nhl07_replay_p_##name = reinterpret_cast<__typeof__(&::name)>(dlsym(gles, #name)); \
    if (!nhl07_replay_p_##name) { std::printf("ANGLE_IMMEDIATE FAIL query_symbol=%s\n", #name); return 1; }
    LOAD_QUERY(glGetBufferParameteriv)
    LOAD_QUERY(glGetIntegeri_v)
    LOAD_QUERY(glGetSamplerParameterfv)
    LOAD_QUERY(glGetSamplerParameteriv)
#undef LOAD_QUERY
    char *replay[] = {argv[0], argv[5], argv[6], argv[7]};
    int result = nhl07_immediate_contract_main(4, replay);
    if (result || validations != 1) return 1;
    // The immutable production table and its library owners remain alive.
    // The existing replay fixture has destroyed its EGL context/display.
    std::printf("ANGLE_IMMEDIATE PASS mode=%d validated_contexts=%u scope=actual_NV2A_replay_pbuffer_no_window_no_game_FPS\n", mode, validations);
    return 0;
}
