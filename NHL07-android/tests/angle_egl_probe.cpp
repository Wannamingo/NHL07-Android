// Isolated, dynamically dispatched ANGLE EGL/GLES probe. No game or Android UI.
#define VK_NO_PROTOTYPES
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES3/gl3.h>
#include <vulkan/vulkan.h>
#include <dlfcn.h>
#include <unistd.h>
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <string>

namespace {
constexpr EGLenum kPlatformAngle = 0x3202;
constexpr EGLint kPlatformType = 0x3203;
constexpr EGLint kPlatformVulkan = 0x3450;
constexpr EGLint kVulkanInstance = 0x34A9;
constexpr EGLint kVulkanPhysicalDevice = 0x34AB;
constexpr EGLint kVulkanGetInstanceProcAddr = 0x34D1;
constexpr int kCustomDriverFlag = 1;

void require(bool okay, const char *what) {
    std::printf("ANGLE_EGL check=%s result=%s\n", what, okay ? "OK" : "FAIL");
    if (!okay) throw std::runtime_error(what);
}
template<class T> T symbol(void *handle, const char *name) {
    dlerror();
    auto address = dlsym(handle, name);
    const char *error = dlerror();
    if (!address || error) {
        std::printf("ANGLE_EGL missing_symbol=%s error=%s\n", name, error ? error : "null");
        throw std::runtime_error(name);
    }
    return reinterpret_cast<T>(address);
}
void *open_library(const std::string &path, int flags = RTLD_NOW | RTLD_LOCAL) {
    void *handle = dlopen(path.c_str(), flags);
    std::printf("ANGLE_EGL dlopen=%s result=%p error=%s\n", path.c_str(), handle,
                handle ? "none" : dlerror());
    if (!handle) throw std::runtime_error("dlopen");
    return handle;
}

#define EGL_FUNCTIONS(X) \
    X(eglGetPlatformDisplayEXT) X(eglInitialize) X(eglChooseConfig) \
    X(eglCreatePbufferSurface) X(eglCreateContext) X(eglMakeCurrent) \
    X(eglDestroyContext) X(eglDestroySurface) X(eglTerminate) \
    X(eglGetError) X(eglQueryString) X(eglGetProcAddress) X(eglSwapBuffers)
#define GL_FUNCTIONS(X) \
    X(glGetString) X(glGetError) X(glCreateShader) X(glShaderSource) \
    X(glCompileShader) X(glGetShaderiv) X(glGetShaderInfoLog) X(glDeleteShader) \
    X(glCreateProgram) X(glAttachShader) X(glLinkProgram) X(glGetProgramiv) \
    X(glGetProgramInfoLog) X(glUseProgram) X(glDeleteProgram) \
    X(glGenVertexArrays) X(glBindVertexArray) X(glDeleteVertexArrays) \
    X(glGenBuffers) X(glBindBuffer) X(glBufferData) X(glBufferSubData) \
    X(glMapBufferRange) X(glUnmapBuffer) X(glDeleteBuffers) \
    X(glVertexAttribPointer) X(glEnableVertexAttribArray) X(glViewport) \
    X(glDisable) X(glClearColor) X(glClear) X(glDrawArrays) X(glReadPixels) \
    X(glFenceSync) X(glClientWaitSync) X(glDeleteSync) X(glFlush)

struct Egl {
    PFNEGLGETPLATFORMDISPLAYEXTPROC eglGetPlatformDisplayEXT{};
    // Avoid relying on optional extension prototypes in the NDK headers.
#define DECLARE(name) decltype(&::name) name{};
    DECLARE(eglInitialize) DECLARE(eglChooseConfig) DECLARE(eglCreatePbufferSurface)
    DECLARE(eglCreateContext) DECLARE(eglMakeCurrent) DECLARE(eglDestroyContext)
    DECLARE(eglDestroySurface) DECLARE(eglTerminate) DECLARE(eglGetError)
    DECLARE(eglQueryString) DECLARE(eglGetProcAddress) DECLARE(eglSwapBuffers)
#undef DECLARE
    void load(void *handle) {
#define LOAD(name) name = symbol<decltype(name)>(handle, #name);
        EGL_FUNCTIONS(LOAD)
#undef LOAD
    }
};
struct Gl {
#define DECLARE(name) decltype(&::name) name{};
    GL_FUNCTIONS(DECLARE)
#undef DECLARE
    void load(void *handle) {
#define LOAD(name) name = symbol<decltype(name)>(handle, #name);
        GL_FUNCTIONS(LOAD)
#undef LOAD
    }
    void check(const char *where) {
        const GLenum error = glGetError();
        std::printf("ANGLE_EGL gl_error_where=%s value=0x%x\n", where, error);
        require(error == GL_NO_ERROR, where);
    }
};

using DriverOpen = void *(*)(int, int, const char *, const char *, const char *,
                            const char *, const char *, void **);
using BridgeConfigure = int (*)(void *);
using BridgeStats = void (*)(std::uint64_t[5]);
using BridgeRelease = int (*)();

struct Resources {
    Egl egl;
    Gl gl;
    void *gles{}, *egl_library{}, *adreno{}, *vulkan{}, *bridge{};
    BridgeStats bridge_stats{};
    BridgeRelease bridge_release{};
    EGLDisplay display = EGL_NO_DISPLAY;
    EGLContext context = EGL_NO_CONTEXT;
    EGLSurface surface = EGL_NO_SURFACE;
    bool initialized{}, current{};
    GLuint program{}, vao{}, buffer{};
    bool clean = true;
    void cleanup() {
        auto okay = [this](bool condition, const char *name) {
            std::printf("ANGLE_EGL cleanup=%s result=%s\n", name, condition ? "OK" : "FAIL");
            clean = condition && clean;
        };
        if (current) {
            if (buffer) gl.glDeleteBuffers(1, &buffer);
            if (vao) gl.glDeleteVertexArrays(1, &vao);
            if (program) gl.glDeleteProgram(program);
            okay(gl.glGetError() == GL_NO_ERROR, "GL_resources");
            okay(egl.eglMakeCurrent(display, EGL_NO_SURFACE, EGL_NO_SURFACE,
                                    EGL_NO_CONTEXT) == EGL_TRUE, "eglMakeCurrent_none");
            current = false;
        }
        if (context != EGL_NO_CONTEXT) okay(egl.eglDestroyContext(display, context) == EGL_TRUE, "eglDestroyContext");
        if (surface != EGL_NO_SURFACE) okay(egl.eglDestroySurface(display, surface) == EGL_TRUE, "eglDestroySurface");
        if (initialized) okay(egl.eglTerminate(display) == EGL_TRUE, "eglTerminate");
        if (egl_library) { okay(dlclose(egl_library) == 0, "dlclose_EGL"); egl_library = nullptr; }
        if (gles) { okay(dlclose(gles) == 0, "dlclose_GLES"); gles = nullptr; }
        if (bridge_stats) {
            std::uint64_t stats[5]{};
            bridge_stats(stats);
            std::printf("ANGLE_EGL bridge_opens=%llu closes=%llu active=%llu rejected=%llu real_opens=%llu\n",
                (unsigned long long)stats[0], (unsigned long long)stats[1],
                (unsigned long long)stats[2], (unsigned long long)stats[3],
                (unsigned long long)stats[4]);
            okay(stats[0] > 0 && stats[0] == stats[1] && stats[2] == 0 && stats[3] == 0, "bridge_borrow_balance");
            okay(bridge_release() == 0, "bridge_release");
            // A failed balance leaves the borrowed owner alive until process
            // exit, rather than invalidating a handle ANGLE might still use.
            if (!clean) vulkan = nullptr;
        }
        if (vulkan) { okay(dlclose(vulkan) == 0, "dlclose_custom_Vulkan_owner"); vulkan = nullptr; }
        if (adreno) { okay(dlclose(adreno) == 0, "dlclose_AdrenoTools"); adreno = nullptr; }
        if (bridge) { okay(dlclose(bridge) == 0, "dlclose_bridge"); bridge = nullptr; }
    }
};

GLuint compile_shader(Gl &gl, GLenum type, const char *source) {
    GLuint shader = gl.glCreateShader(type);
    gl.glShaderSource(shader, 1, &source, nullptr);
    gl.glCompileShader(shader);
    GLint compiled = 0;
    gl.glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
    if (!compiled) {
        char log[4096]{};
        gl.glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
        std::printf("ANGLE_EGL shader_error=%s\n", log);
        gl.glDeleteShader(shader);
        throw std::runtime_error("shader compile");
    }
    return shader;
}

void query_actual_vulkan(Resources &r, bool custom) {
    auto query_display = reinterpret_cast<PFNEGLQUERYDISPLAYATTRIBEXTPROC>(r.egl.eglGetProcAddress("eglQueryDisplayAttribEXT"));
    auto query_device = reinterpret_cast<PFNEGLQUERYDEVICEATTRIBEXTPROC>(r.egl.eglGetProcAddress("eglQueryDeviceAttribEXT"));
    require(query_display && query_device, "EGL_device_query_entrypoints");
    EGLAttrib device = 0, instance = 0, physical = 0, proc = 0;
    require(query_display(r.display, EGL_DEVICE_EXT, &device) == EGL_TRUE && device, "EGL_DEVICE_EXT");
    auto egl_device = reinterpret_cast<EGLDeviceEXT>(device);
    require(query_device(egl_device, kVulkanInstance, &instance) == EGL_TRUE && instance, "EGL_VULKAN_INSTANCE_ANGLE");
    require(query_device(egl_device, kVulkanPhysicalDevice, &physical) == EGL_TRUE && physical, "EGL_VULKAN_PHYSICAL_DEVICE_ANGLE");
    require(query_device(egl_device, kVulkanGetInstanceProcAddr, &proc) == EGL_TRUE && proc, "EGL_VULKAN_GET_INSTANCE_PROC_ADDR");
    auto get = reinterpret_cast<PFN_vkGetInstanceProcAddr>(proc);
    auto get_properties = reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2>(get(reinterpret_cast<VkInstance>(instance), "vkGetPhysicalDeviceProperties2"));
    require(get_properties != nullptr, "ANGLE_actual_Vulkan_properties_entrypoint");
    VkPhysicalDeviceDriverProperties driver{};
    driver.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES;
    VkPhysicalDeviceProperties2 properties{};
    properties.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
    properties.pNext = &driver;
    get_properties(reinterpret_cast<VkPhysicalDevice>(physical), &properties);
    std::printf("ANGLE_EGL actual_vk_device=%s vendor=0x%x device=0x%x api=%u.%u.%u driver_id=%u driver_name=%s driver_info=%s\n",
        properties.properties.deviceName, properties.properties.vendorID,
        properties.properties.deviceID, VK_API_VERSION_MAJOR(properties.properties.apiVersion),
        VK_API_VERSION_MINOR(properties.properties.apiVersion), VK_API_VERSION_PATCH(properties.properties.apiVersion),
        static_cast<unsigned>(driver.driverID), driver.driverName, driver.driverInfo);
    require(properties.properties.vendorID == 0x5143, "actual_Vulkan_Qualcomm_GPU");
    require(custom ? driver.driverID == VK_DRIVER_ID_MESA_TURNIP : driver.driverID != VK_DRIVER_ID_MESA_TURNIP,
            custom ? "actual_ANGLE_Mesa_Turnip_driver" : "actual_ANGLE_system_driver_control");
    if (custom) require(std::strstr(driver.driverInfo, "9c7e022677") != nullptr,
                        "actual_ANGLE_supplied_Turnip_V32_git");
}

void test_gpu(Resources &r) {
    auto &gl = r.gl;
    GLuint vs = compile_shader(gl, GL_VERTEX_SHADER,
        "#version 300 es\nlayout(location=0)in vec2 xy;void main(){gl_Position=vec4(xy,0,1);}");
    GLuint fs = compile_shader(gl, GL_FRAGMENT_SHADER,
        "#version 300 es\nprecision highp float;out vec4 pixel;void main(){pixel=vec4(64.0,128.0,192.0,255.0)/255.0;}");
    r.program = gl.glCreateProgram();
    gl.glAttachShader(r.program, vs); gl.glAttachShader(r.program, fs);
    gl.glLinkProgram(r.program);
    gl.glDeleteShader(vs); gl.glDeleteShader(fs);
    GLint linked = 0; gl.glGetProgramiv(r.program, GL_LINK_STATUS, &linked);
    if (!linked) { char log[4096]{}; gl.glGetProgramInfoLog(r.program, sizeof(log), nullptr, log); std::printf("ANGLE_EGL link_error=%s\n", log); }
    require(linked, "GLES3_shader_link");
    gl.glUseProgram(r.program);
    gl.glGenVertexArrays(1, &r.vao); gl.glBindVertexArray(r.vao);
    gl.glGenBuffers(1, &r.buffer); gl.glBindBuffer(GL_ARRAY_BUFFER, r.buffer);
    std::array<std::uint8_t, 4099> pattern{};
    for (std::size_t i = 0; i < pattern.size(); ++i) pattern[i] = std::uint8_t(i * 31 + 7);
    auto verify = [&] {
        void *mapped = gl.glMapBufferRange(GL_ARRAY_BUFFER, 0, pattern.size(), GL_MAP_READ_BIT);
        require(mapped && std::memcmp(mapped, pattern.data(), pattern.size()) == 0, "GPU_buffer_exact_4099_bytes");
        require(gl.glUnmapBuffer(GL_ARRAY_BUFFER) == GL_TRUE, "GPU_buffer_read_unmap");
    };
    gl.glBufferData(GL_ARRAY_BUFFER, pattern.size(), pattern.data(), GL_STREAM_DRAW); verify();
    for (auto &value : pattern) value ^= 0xa5;
    gl.glBufferSubData(GL_ARRAY_BUFFER, 0, pattern.size(), pattern.data()); verify();
    void *mapped = gl.glMapBufferRange(GL_ARRAY_BUFFER, 0, pattern.size(), GL_MAP_WRITE_BIT | GL_MAP_INVALIDATE_BUFFER_BIT);
    require(mapped != nullptr, "GPU_buffer_write_map");
    for (auto &value : pattern) value ^= 0x71;
    std::memcpy(mapped, pattern.data(), pattern.size());
    require(gl.glUnmapBuffer(GL_ARRAY_BUFFER) == GL_TRUE, "GPU_buffer_write_unmap"); verify();
    const float vertices[] = {-1.f,-1.f,3.f,-1.f,-1.f,3.f};
    gl.glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STREAM_DRAW);
    gl.glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr); gl.glEnableVertexAttribArray(0);
    gl.glViewport(0, 0, 64, 64); gl.glDisable(GL_DITHER);
    gl.glClearColor(0, 0, 0, 1); gl.glClear(GL_COLOR_BUFFER_BIT);
    gl.glDrawArrays(GL_TRIANGLES, 0, 3); gl.check("GLES3_triangle_draw");
    GLsync fence = gl.glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0); require(fence != nullptr, "GPU_fence_create");
    gl.glFlush(); GLenum waited = gl.glClientWaitSync(fence, 0, 5000000000ull); gl.glDeleteSync(fence);
    require(waited == GL_ALREADY_SIGNALED || waited == GL_CONDITION_SATISFIED, "GPU_fence_completed");
    std::array<std::uint8_t, 64 * 64 * 4> pixels{};
    gl.glReadPixels(0, 0, 64, 64, GL_RGBA, GL_UNSIGNED_BYTE, pixels.data()); gl.check("GLES3_readback");
    const int wanted[] = {64, 128, 192, 255}; unsigned mismatches = 0, max_error = 0;
    for (std::size_t i = 0; i < pixels.size(); ++i) {
        unsigned error = unsigned(std::abs(int(pixels[i]) - wanted[i % 4]));
        max_error = std::max(max_error, error); if (error > 1) ++mismatches;
    }
    std::printf("ANGLE_EGL readback_pixels=4096 rgba_mismatches=%u tolerance=1 maximum_error=%u\n", mismatches, max_error);
    require(mismatches == 0, "complete_GPU_shader_pixels");
    require(r.egl.eglSwapBuffers(r.display, r.surface) == EGL_TRUE, "EGL_pbuffer_swap");
}
} // namespace

int main(int argc, char **argv) {
    setvbuf(stdout, nullptr, _IONBF, 0); alarm(45);
    if (argc != 3 && argc != 5) {
        std::fprintf(stderr, "Usage: angle_egl_probe system ANGLE_DIR | custom ANGLE_DIR HOOK_DIR DRIVER_DIR\n"); return 2;
    }
    const bool custom = std::strcmp(argv[1], "custom") == 0;
    if ((!custom && std::strcmp(argv[1], "system") != 0) || (custom ? argc != 5 : argc != 3)) return 2;
    Resources r; bool passed = false;
    try {
        require(argv[2][0] == '/', "absolute_ANGLE_path");
        std::string directory = argv[2];
        std::printf("ANGLE_EGL mode=%s scope=isolated_EGL_pbuffer_no_native_window_no_game_no_FPS\n", argv[1]);
        if (custom) {
            require(argv[3][0] == '/' && argv[4][0] == '/', "absolute_custom_loader_paths");
            setenv("TU_DEBUG", "sysmem", 1);
            r.adreno = open_library(std::string(argv[3]) + "/libadrenotools.so");
            auto open_driver = symbol<DriverOpen>(r.adreno, "adrenotools_open_libvulkan");
            r.vulkan = open_driver(RTLD_NOW, kCustomDriverFlag, nullptr, argv[3], argv[4], "libvulkan_freedreno.so", nullptr, nullptr);
            require(r.vulkan != nullptr, "AdrenoTools_custom_Vulkan_loader");
            r.bridge = open_library(directory + "/libab.so", RTLD_NOW | RTLD_GLOBAL);
            auto configure = symbol<BridgeConfigure>(r.bridge, "nhl07_angle_bridge_configure");
            r.bridge_stats = symbol<BridgeStats>(r.bridge, "nhl07_angle_bridge_get_stats");
            r.bridge_release = symbol<BridgeRelease>(r.bridge, "nhl07_angle_bridge_release");
            require(configure(r.vulkan) == 0, "configure_borrowed_Vulkan_loader");
        }
        r.gles = open_library(directory + "/libGLESv2_angle.so");
        r.egl_library = open_library(directory + "/libEGL_angle.so");
        r.gl.load(r.gles); r.egl.load(r.egl_library);
        const EGLint platform[] = {kPlatformType, kPlatformVulkan, EGL_NONE};
        r.display = r.egl.eglGetPlatformDisplayEXT(kPlatformAngle, EGL_DEFAULT_DISPLAY, platform);
        require(r.display != EGL_NO_DISPLAY, "explicit_ANGLE_Vulkan_display");
        EGLint major = 0, minor = 0;
        EGLBoolean initialized = r.egl.eglInitialize(r.display, &major, &minor);
        std::printf("ANGLE_EGL eglInitialize=%u error=0x%x version=%d.%d\n", initialized, r.egl.eglGetError(), major, minor);
        require(initialized == EGL_TRUE, "ANGLE_Vulkan_EGL_initialize"); r.initialized = true;
        std::printf("ANGLE_EGL EGL_VENDOR=%s EGL_VERSION=%s\n", r.egl.eglQueryString(r.display, EGL_VENDOR), r.egl.eglQueryString(r.display, EGL_VERSION));
        const EGLint attributes[] = {EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_NONE};
        EGLConfig config{}; EGLint count = 0;
        require(r.egl.eglChooseConfig(r.display, attributes, &config, 1, &count) == EGL_TRUE && count == 1, "RGBA8_GLES3_pbuffer_config");
        const EGLint size[] = {EGL_WIDTH,64,EGL_HEIGHT,64,EGL_NONE};
        r.surface = r.egl.eglCreatePbufferSurface(r.display, config, size);
        require(r.surface != EGL_NO_SURFACE, "ANGLE_pbuffer_surface");
        const EGLint version[] = {EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
        r.context = r.egl.eglCreateContext(r.display, config, EGL_NO_CONTEXT, version);
        require(r.context != EGL_NO_CONTEXT, "ANGLE_GLES3_context");
        require(r.egl.eglMakeCurrent(r.display, r.surface, r.surface, r.context) == EGL_TRUE, "ANGLE_GLES3_current"); r.current = true;
        const char *renderer = reinterpret_cast<const char *>(r.gl.glGetString(GL_RENDERER));
        std::printf("ANGLE_EGL GL_RENDERER=%s GL_VERSION=%s GL_VENDOR=%s\n", renderer ? renderer : "null", r.gl.glGetString(GL_VERSION), r.gl.glGetString(GL_VENDOR));
        require(renderer && std::strstr(renderer, "ANGLE") && std::strstr(renderer, "Vulkan"), "actual_GL_renderer_ANGLE_Vulkan");
        query_actual_vulkan(r, custom);
        test_gpu(r); passed = true;
    } catch (const std::exception &error) { std::printf("ANGLE_EGL FAIL reason=%s\n", error.what()); }
    r.cleanup();
    if (passed && r.clean) { std::printf("ANGLE_EGL PASS mode=%s scope=EGL_pbuffer_shader_buffer_pixels_only\n", argv[1]); return 0; }
    return 1;
}
