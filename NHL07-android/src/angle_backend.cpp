// Compile this file with NHL07_GL_DISPATCH_IMPLEMENTATION=1 if the dispatch
// header is force-included. No library below is unloaded during process life.
#define NHL07_GL_DISPATCH_IMPLEMENTATION 1
#define VK_NO_PROTOTYPES
#include "angle_backend.h"
#include "native_gl_dispatch.h"
#include <EGL/eglext.h>
#include <GLES3/gl3.h>
#include <vulkan/vulkan.h>
#include <android/log.h>
#include <dlfcn.h>
#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <stdexcept>
#include <string>

namespace {
constexpr EGLenum kPlatformAngle = 0x3202;
constexpr EGLint kPlatformType = 0x3203;
constexpr EGLint kPlatformVulkan = 0x3450;
constexpr EGLint kVulkanInstance = 0x34A9;
constexpr EGLint kVulkanPhysicalDevice = 0x34AB;
constexpr EGLint kVulkanGetInstanceProcAddr = 0x34D1;
constexpr int kCustomDriver = 1;
using DriverOpen = void *(*)(int, int, const char *, const char *, const char *,
    const char *, const char *, void **);
using BridgeConfigure = int (*)(void *);
using BridgeStats = void (*)(std::uint64_t[5]);
using BridgeRelease = int (*)();

struct Libraries {
    void *egl{}, *gles{};
};
struct State {
    std::mutex mutex;
    std::atomic<int> mode{-1};
    Libraries system, angle;
    void *bridge{}, *adreno{}, *custom_vulkan{};
    BridgeConfigure bridge_configure{};
    BridgeStats bridge_stats{};
    BridgeRelease bridge_release{};
    bool bridge_configured{};
    std::string angle_directory, hook_directory, driver_directory;
    char description[1024] = "Graphics backend has not been prepared";
};

State &state() {
    // Deliberately retain library ownership through all renderer/context
    // teardown and static destruction. The OS reclaims it at process exit.
    static State *instance = new State;
    return *instance;
}
void write_error(char *error, std::size_t capacity, const char *message) {
    if (error && capacity) std::snprintf(error, capacity, "%s", message);
}
void log_error(const char *message) {
    __android_log_print(ANDROID_LOG_ERROR, "NHL07Backend", "%s", message);
}
template<class T> T symbol(void *handle, const char *name) {
    dlerror();
    void *address = dlsym(handle, name);
    const char *error = dlerror();
    if (!address || error) throw std::runtime_error(std::string("Missing graphics symbol ") + name + ": " + (error ? error : "null"));
    return reinterpret_cast<T>(address);
}
void *open_library(const char *path, int flags = RTLD_NOW | RTLD_LOCAL) {
    void *handle = dlopen(path, flags);
    if (!handle) {
        const char *error = dlerror();
        throw std::runtime_error(std::string("Cannot load ") + path + ": " + (error ? error : "unknown linker error"));
    }
    return handle;
}
std::string directory(const char *path, const char *label) {
    if (!path || path[0] != '/') throw std::runtime_error(std::string(label) + " must be an absolute directory");
    std::string result(path);
    while (result.size() > 1 && result.back() == '/') result.pop_back();
    return result;
}
std::string join(const std::string &path, const char *name) { return path + "/" + name; }

void release_bridge_if_idle(State &s) {
    if (!s.bridge_configured) return;
    std::uint64_t counts[5]{};
    s.bridge_stats(counts);
    if (counts[2] != 0 || counts[3] != 0)
        throw std::runtime_error("ANGLE still owns the custom Vulkan loader; destroy its EGL objects and terminate its display before changing backend");
    if (s.bridge_release() != 0) throw std::runtime_error("Custom Vulkan bridge could not release its completed borrow scope");
    s.bridge_configured = false;
}
void ensure_system(State &s) {
    if (!s.system.egl) s.system.egl = open_library("/system/lib64/libEGL.so");
    if (!s.system.gles) s.system.gles = open_library("/system/lib64/libGLESv3.so");
}
void ensure_angle(State &s, const std::string &angle_directory) {
    if (!s.angle_directory.empty() && s.angle_directory != angle_directory)
        throw std::runtime_error("Restart the application to change the ANGLE library directory");
    s.angle_directory = angle_directory;
    if (!s.bridge) {
        s.bridge = open_library(join(angle_directory, "libab.so").c_str(), RTLD_NOW | RTLD_GLOBAL);
        s.bridge_configure = symbol<BridgeConfigure>(s.bridge, "nhl07_angle_bridge_configure");
        s.bridge_stats = symbol<BridgeStats>(s.bridge, "nhl07_angle_bridge_get_stats");
        s.bridge_release = symbol<BridgeRelease>(s.bridge, "nhl07_angle_bridge_release");
    }
    if (!s.angle.gles) s.angle.gles = open_library(join(angle_directory, "libGLESv2_angle.so").c_str());
    if (!s.angle.egl) s.angle.egl = open_library(join(angle_directory, "libEGL_angle.so").c_str());
    // This extension is essential for selecting Vulkan, not optional dispatch.
    (void)symbol<PFNEGLGETPLATFORMDISPLAYEXTPROC>(s.angle.egl, "eglGetPlatformDisplayEXT");
}
void ensure_custom(State &s, const std::string &hook_directory, const std::string &driver_directory) {
    if (driver_directory == "/sdcard" || driver_directory.rfind("/sdcard/", 0) == 0 ||
        driver_directory.rfind("/storage/", 0) == 0)
        throw std::runtime_error("The custom Vulkan driver must be copied to internal application storage");
    if ((!s.hook_directory.empty() && s.hook_directory != hook_directory) ||
        (!s.driver_directory.empty() && s.driver_directory != driver_directory))
        throw std::runtime_error("Restart the application to change the custom Vulkan driver directories");
    s.hook_directory = hook_directory;
    s.driver_directory = driver_directory;
    if (!s.adreno) s.adreno = open_library(join(hook_directory, "libadrenotools.so").c_str());
    if (!s.custom_vulkan) {
        if (setenv("TU_DEBUG", "sysmem", 1) != 0) throw std::runtime_error("Could not configure Turnip V32 sysmem mode");
        auto open = symbol<DriverOpen>(s.adreno, "adrenotools_open_libvulkan");
        // AdrenoTools checks customDriverDir + customDriverName verbatim.
        // Its API therefore requires the directory's trailing separator.
        const std::string driver_search_directory = driver_directory + "/";
        s.custom_vulkan = open(RTLD_NOW | RTLD_LOCAL, kCustomDriver, nullptr,
            hook_directory.c_str(), driver_search_directory.c_str(), "libvulkan_freedreno.so", nullptr, nullptr);
        if (!s.custom_vulkan) throw std::runtime_error("AdrenoTools could not load the custom Vulkan driver");
    }
    if (!s.bridge_configured) {
        if (s.bridge_configure(s.custom_vulkan) != 0) throw std::runtime_error("Could not configure the ANGLE custom Vulkan bridge");
        s.bridge_configured = true;
    }
}
bool current_context_exists(const State &s) {
    const int mode = s.mode.load(std::memory_order_relaxed);
    const Libraries &libraries = mode == NHL07_GRAPHICS_SYSTEM_GLES ? s.system : s.angle;
    if (mode < 0 || !libraries.egl) return false;
    auto get = symbol<decltype(&::eglGetCurrentContext)>(libraries.egl, "eglGetCurrentContext");
    return get() != EGL_NO_CONTEXT;
}
} // namespace

extern "C" int nhl07_angle_backend_prepare(int mode, const char *angle_directory,
    const char *hook_directory, const char *driver_directory,
    char *error, std::size_t error_capacity) {
    write_error(error, error_capacity, "");
    try {
        State &s = state(); std::lock_guard<std::mutex> lock(s.mutex);
        if (mode < NHL07_GRAPHICS_SYSTEM_GLES || mode > NHL07_GRAPHICS_ANGLE_TURNIP_V32)
            throw std::runtime_error("Unknown graphics backend mode");
        if (s.mode.load(std::memory_order_relaxed) != mode && current_context_exists(s))
            throw std::runtime_error("Destroy the current GL context before changing graphics backend");
        Libraries *libraries;
        if (mode == NHL07_GRAPHICS_SYSTEM_GLES) {
            release_bridge_if_idle(s); ensure_system(s); libraries = &s.system;
        } else {
            ensure_angle(s, directory(angle_directory, "ANGLE library path"));
            if (mode == NHL07_GRAPHICS_ANGLE_TURNIP_V32)
                ensure_custom(s, directory(hook_directory, "Native hook library path"), directory(driver_directory, "Custom driver path"));
            else release_bridge_if_idle(s);
            libraries = &s.angle;
        }
        char dispatch_error[512]{};
        if (!nhl07_gl_dispatch_bind(libraries->egl, libraries->gles, dispatch_error, sizeof(dispatch_error)))
            throw std::runtime_error(dispatch_error);
        s.mode.store(mode, std::memory_order_release);
        std::snprintf(s.description, sizeof(s.description), "%s (prepared; context not yet validated)",
            mode == NHL07_GRAPHICS_SYSTEM_GLES ? "System OpenGL ES" :
            mode == NHL07_GRAPHICS_ANGLE_SYSTEM_VULKAN ? "ANGLE / system Vulkan" : "ANGLE / Turnip V32 / sysmem");
        __android_log_print(ANDROID_LOG_INFO, "NHL07Backend", "Prepared mode=%d ANGLE=%s hooks=%s driver=%s", mode,
            s.angle_directory.c_str(), s.hook_directory.c_str(), s.driver_directory.c_str());
        return 1;
    } catch (const std::exception &failure) {
        write_error(error, error_capacity, failure.what()); log_error(failure.what()); return 0;
    } catch (...) {
        write_error(error, error_capacity, "Unexpected graphics backend initialization failure"); return 0;
    }
}

extern "C" int nhl07_angle_backend_choose_system(char *error, std::size_t capacity) {
    return nhl07_angle_backend_prepare(NHL07_GRAPHICS_SYSTEM_GLES, nullptr, nullptr, nullptr, error, capacity);
}

extern "C" EGLDisplay nhl07_angle_backend_get_display(EGLNativeDisplayType native_display) {
    try {
        State &s = state(); std::lock_guard<std::mutex> lock(s.mutex);
        const int mode = s.mode.load(std::memory_order_acquire);
        if (mode == NHL07_GRAPHICS_SYSTEM_GLES)
            return symbol<decltype(&::eglGetDisplay)>(s.system.egl, "eglGetDisplay")(native_display);
        if (mode != NHL07_GRAPHICS_ANGLE_SYSTEM_VULKAN && mode != NHL07_GRAPHICS_ANGLE_TURNIP_V32)
            throw std::runtime_error("Prepare the graphics backend before requesting its EGL display");
        const EGLint attributes[] = {kPlatformType, kPlatformVulkan, EGL_NONE};
        return symbol<PFNEGLGETPLATFORMDISPLAYEXTPROC>(s.angle.egl, "eglGetPlatformDisplayEXT")(
            kPlatformAngle, reinterpret_cast<void *>(native_display), attributes);
    } catch (const std::exception &failure) { log_error(failure.what()); return EGL_NO_DISPLAY; }
}

extern "C" int nhl07_angle_backend_validate_current(char *error, std::size_t capacity) {
    write_error(error, capacity, "");
    try {
        State &s = state(); std::lock_guard<std::mutex> lock(s.mutex);
        const int mode = s.mode.load(std::memory_order_acquire);
        const Libraries &libraries = mode == NHL07_GRAPHICS_SYSTEM_GLES ? s.system : s.angle;
        if (mode < 0 || !libraries.egl || !libraries.gles) throw std::runtime_error("Graphics backend has not been prepared");
        auto get_string = symbol<decltype(&::glGetString)>(libraries.gles, "glGetString");
        const char *renderer = reinterpret_cast<const char *>(get_string(GL_RENDERER));
        const char *version = reinterpret_cast<const char *>(get_string(GL_VERSION));
        if (!renderer || !version) throw std::runtime_error("No current GL context to validate");
        if (mode == NHL07_GRAPHICS_SYSTEM_GLES) {
            std::snprintf(s.description, sizeof(s.description), "%s | %s", renderer, version);
        } else {
            if (!std::strstr(renderer, "ANGLE") || !std::strstr(renderer, "Vulkan"))
                throw std::runtime_error("The current GL context is not ANGLE Vulkan");
            auto get_current = symbol<decltype(&::eglGetCurrentDisplay)>(libraries.egl, "eglGetCurrentDisplay");
            EGLDisplay display = get_current();
            auto get_proc = symbol<decltype(&::eglGetProcAddress)>(libraries.egl, "eglGetProcAddress");
            auto query_display = reinterpret_cast<PFNEGLQUERYDISPLAYATTRIBEXTPROC>(get_proc("eglQueryDisplayAttribEXT"));
            auto query_device = reinterpret_cast<PFNEGLQUERYDEVICEATTRIBEXTPROC>(get_proc("eglQueryDeviceAttribEXT"));
            if (!query_display || !query_device || display == EGL_NO_DISPLAY) throw std::runtime_error("ANGLE Vulkan device queries are unavailable");
            EGLAttrib device = 0, instance = 0, physical = 0, proc = 0;
            if (!query_display(display, EGL_DEVICE_EXT, &device) || !device) throw std::runtime_error("ANGLE has no queryable EGL device");
            EGLDeviceEXT egl_device = reinterpret_cast<EGLDeviceEXT>(device);
            if (!query_device(egl_device, kVulkanInstance, &instance) || !instance ||
                !query_device(egl_device, kVulkanPhysicalDevice, &physical) || !physical ||
                !query_device(egl_device, kVulkanGetInstanceProcAddr, &proc) || !proc)
                throw std::runtime_error("ANGLE did not expose its actual Vulkan device");
            auto get_instance_proc = reinterpret_cast<PFN_vkGetInstanceProcAddr>(proc);
            auto properties_fn = reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2>(get_instance_proc(reinterpret_cast<VkInstance>(instance), "vkGetPhysicalDeviceProperties2"));
            if (!properties_fn) throw std::runtime_error("ANGLE Vulkan property query is unavailable");
            VkPhysicalDeviceDriverProperties driver{};
            driver.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES;
            VkPhysicalDeviceProperties2 properties{};
            properties.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2; properties.pNext = &driver;
            properties_fn(reinterpret_cast<VkPhysicalDevice>(physical), &properties);
            __android_log_print(ANDROID_LOG_INFO, "NHL07Backend", "Actual mode=%d renderer=%s GL=%s VulkanGPU=%s driverID=%u driver=%s info=%s",
                mode, renderer, version, properties.properties.deviceName, static_cast<unsigned>(driver.driverID), driver.driverName, driver.driverInfo);
            if (mode == NHL07_GRAPHICS_ANGLE_TURNIP_V32 &&
                (properties.properties.vendorID != 0x5143 || driver.driverID != VK_DRIVER_ID_MESA_TURNIP ||
                 !std::strstr(driver.driverInfo, "9c7e022677")))
                throw std::runtime_error("ANGLE is not using the supplied Mesa Turnip V32 driver");
            std::snprintf(s.description, sizeof(s.description), "%s | %s | %s", renderer, driver.driverName, driver.driverInfo);
        }
        __android_log_print(ANDROID_LOG_INFO, "NHL07Backend", "Validated mode=%d: %s", mode, s.description);
        return 1;
    } catch (const std::exception &failure) { write_error(error, capacity, failure.what()); log_error(failure.what()); return 0; }
    catch (...) { write_error(error, capacity, "Unexpected graphics backend validation failure"); return 0; }
}

extern "C" int nhl07_angle_backend_mode() { return state().mode.load(std::memory_order_acquire); }
extern "C" const char *nhl07_angle_backend_description() {
    thread_local char copy[1024];
    State &s = state(); std::lock_guard<std::mutex> lock(s.mutex);
    std::memcpy(copy, s.description, sizeof(copy)); return copy;
}
