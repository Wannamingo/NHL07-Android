#pragma once
#include <EGL/egl.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

enum Nhl07GraphicsBackendMode {
    NHL07_GRAPHICS_SYSTEM_GLES = 0,
    NHL07_GRAPHICS_ANGLE_SYSTEM_VULKAN = 1,
    NHL07_GRAPHICS_ANGLE_TURNIP_V32 = 2
};

/* Prepare on the renderer initialization thread before creating a GL context.
 * Paths are absolute directories; Turnip must be in internal app storage.
 * 1 = success, 0 = failure with a bounded error string. No context is created.
 * Loaded libraries and the custom Vulkan owner live until process exit.
 * A failed prepare preserves the previous complete function dispatch table.
 */
int nhl07_angle_backend_prepare(int mode, const char *angle_directory,
    const char *hook_directory, const char *driver_directory,
    char *error, size_t error_capacity);
int nhl07_angle_backend_choose_system(char *error, size_t error_capacity);

/* Replace the renderer's initial eglGetDisplay call with this function.
 * ANGLE explicitly selects Vulkan; mode 0 calls the system EGL implementation.
 */
EGLDisplay nhl07_angle_backend_get_display(EGLNativeDisplayType native_display);

/* Call after eglMakeCurrent. Mode 2 verifies the actual EGL Vulkan device is
 * Mesa Turnip and the supplied V32 git revision, rather than trusting settings.
 * If initialization/validation fails, destroy EGL objects and terminate that
 * display before choosing the system backend and retrying initialization.
 */
int nhl07_angle_backend_validate_current(char *error, size_t error_capacity);
int nhl07_angle_backend_mode(void);
const char *nhl07_angle_backend_description(void);

#ifdef __cplusplus
}
#endif
