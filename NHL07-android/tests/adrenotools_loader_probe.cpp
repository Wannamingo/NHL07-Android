// Isolated loader/extension probe. Does not create an Android surface or VkDevice.
#define VK_NO_PROTOTYPES
#define VK_USE_PLATFORM_ANDROID_KHR
#include <vulkan/vulkan.h>
#include <adrenotools/driver.h>
#include <android/api-level.h>
#include <dlfcn.h>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}

template <typename T> T symbol(void *library, const char *name) {
    auto result = reinterpret_cast<T>(dlsym(library, name));
    require(result != nullptr, name);
    return result;
}

template <typename T> T proc(PFN_vkGetInstanceProcAddr get, VkInstance instance, const char *name) {
    auto result = reinterpret_cast<T>(get(instance, name));
    require(result != nullptr, name);
    return result;
}

struct Resources {
    void *adreno = nullptr;
    void *loader = nullptr;
    VkInstance instance = VK_NULL_HANDLE;
    PFN_vkDestroyInstance destroy = nullptr;
    bool close() {
        bool result = true;
        if (instance && destroy) {
            destroy(instance, nullptr);
            instance = VK_NULL_HANDLE;
            std::puts("vkDestroyInstance=done");
        }
        if (loader) {
            int status = dlclose(loader);
            loader = nullptr;
            std::printf("loader_dlclose=%d\n", status);
            result &= status == 0;
        }
        if (adreno) {
            int status = dlclose(adreno);
            adreno = nullptr;
            std::printf("adrenotools_dlclose=%d\n", status);
            result &= status == 0;
        }
        return result;
    }
    ~Resources() { close(); }
};

bool has(const std::vector<VkExtensionProperties> &extensions, const char *name) {
    for (const auto &extension : extensions) {
        if (!std::strcmp(extension.extensionName, name)) return true;
    }
    return false;
}
}

int main(int argc, char **argv) {
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    alarm(30);
    Resources resources;
    try {
        require(argc == 3, "usage: adrenotools_loader_probe /absolute/hookDir/ /absolute/driverDir/");
        const std::string hooks = argv[1];
        const std::string drivers = argv[2];
        require(!hooks.empty() && hooks.front() == '/' && hooks.back() == '/',
                "hookDir must be an absolute directory with trailing slash");
        require(!drivers.empty() && drivers.front() == '/' && drivers.back() == '/',
                "driverDir must be an absolute directory with trailing slash");
        const int sdk = android_get_device_api_level();
        std::printf("android_api=%d\n", sdk);
        require(sdk >= 30, "supplied Turnip binary requires at least Android API 30");
        require(setenv("TU_DEBUG", "sysmem", 1) == 0, "setenv(TU_DEBUG)");
        std::puts("TU_DEBUG=sysmem");
        std::puts("scope=standalone loader enumeration only; app namespace, EGL, Android surface, GPU commands and FPS untested");
        std::printf("hookDir=%s\ndriverDir=%s\n", hooks.c_str(), drivers.c_str());

        resources.adreno = dlopen((hooks + "libadrenotools.so").c_str(), RTLD_NOW | RTLD_LOCAL);
        if (!resources.adreno) {
            std::printf("adrenotools_dlopen_error=%s\n", dlerror());
            throw std::runtime_error("dlopen(libadrenotools)");
        }
        using Open = decltype(&adrenotools_open_libvulkan);
        auto open = symbol<Open>(resources.adreno, "adrenotools_open_libvulkan");
        resources.loader = open(RTLD_NOW | RTLD_LOCAL, ADRENOTOOLS_DRIVER_CUSTOM, nullptr,
                                hooks.c_str(), drivers.c_str(), "libvulkan_freedreno.so", nullptr, nullptr);
        if (!resources.loader) {
            const char *error = dlerror();
            std::printf("custom_loader_error=%s\n", error ? error : "no dlerror; inspect hook_impl logcat");
            throw std::runtime_error("adrenotools_open_libvulkan");
        }
        auto get = symbol<PFN_vkGetInstanceProcAddr>(resources.loader, "vkGetInstanceProcAddr");
        auto enumerate = proc<PFN_vkEnumerateInstanceExtensionProperties>(get, nullptr,
                                                                         "vkEnumerateInstanceExtensionProperties");
        uint32_t extension_count = 0;
        require(enumerate(nullptr, &extension_count, nullptr) == VK_SUCCESS && extension_count <= 4096,
                "enumerate instance extension count");
        std::vector<VkExtensionProperties> extensions(extension_count);
        require(enumerate(nullptr, &extension_count, extensions.data()) == VK_SUCCESS,
                "enumerate instance extensions");
        extensions.resize(extension_count);
        for (const auto &extension : extensions)
            std::printf("instance_extension=%s version=%u\n", extension.extensionName, extension.specVersion);
        require(has(extensions, VK_KHR_SURFACE_EXTENSION_NAME), "VK_KHR_surface missing");
        require(has(extensions, VK_KHR_ANDROID_SURFACE_EXTENSION_NAME), "VK_KHR_android_surface missing");

        const char *enabled[] = {VK_KHR_SURFACE_EXTENSION_NAME, VK_KHR_ANDROID_SURFACE_EXTENSION_NAME};
        VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
        app.pApplicationName = "NHL07 standalone AdrenoTools loader probe";
        app.apiVersion = VK_API_VERSION_1_1;
        VkInstanceCreateInfo create{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
        create.pApplicationInfo = &app;
        create.enabledExtensionCount = 2;
        create.ppEnabledExtensionNames = enabled;
        auto create_instance = proc<PFN_vkCreateInstance>(get, nullptr, "vkCreateInstance");
        VkResult result = create_instance(&create, nullptr, &resources.instance);
        std::printf("vkCreateInstance=%d\n", result);
        require(result == VK_SUCCESS, "vkCreateInstance failed");
        resources.destroy = proc<PFN_vkDestroyInstance>(get, resources.instance, "vkDestroyInstance");
        (void)proc<PFN_vkCreateAndroidSurfaceKHR>(get, resources.instance, "vkCreateAndroidSurfaceKHR");
        std::puts("vkCreateAndroidSurfaceKHR=available (not called)");
        auto enumerate_devices = proc<PFN_vkEnumeratePhysicalDevices>(get, resources.instance, "vkEnumeratePhysicalDevices");
        uint32_t device_count = 0;
        require(enumerate_devices(resources.instance, &device_count, nullptr) == VK_SUCCESS
                && device_count > 0 && device_count <= 256, "physical device count");
        std::vector<VkPhysicalDevice> devices(device_count);
        require(enumerate_devices(resources.instance, &device_count, devices.data()) == VK_SUCCESS,
                "enumerate physical devices");
        devices.resize(device_count);
        auto properties = proc<PFN_vkGetPhysicalDeviceProperties2>(get, resources.instance,
                                                                  "vkGetPhysicalDeviceProperties2");
        auto device_extensions = proc<PFN_vkEnumerateDeviceExtensionProperties>(get, resources.instance,
                                                                              "vkEnumerateDeviceExtensionProperties");
        bool found_turnip = false;
        for (VkPhysicalDevice device : devices) {
            VkPhysicalDeviceDriverProperties driver{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES};
            VkPhysicalDeviceProperties2 info{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2};
            info.pNext = &driver;
            properties(device, &info);
            std::printf("physical_device=%s vendor=0x%x device=0x%x api=%u.%u.%u\n",
                        info.properties.deviceName, info.properties.vendorID, info.properties.deviceID,
                        VK_API_VERSION_MAJOR(info.properties.apiVersion), VK_API_VERSION_MINOR(info.properties.apiVersion),
                        VK_API_VERSION_PATCH(info.properties.apiVersion));
            std::printf("driver_id=%d driver_name=%s driver_info=%s\n", driver.driverID,
                        driver.driverName, driver.driverInfo);
            uint32_t count = 0;
            require(device_extensions(device, nullptr, &count, nullptr) == VK_SUCCESS && count <= 4096,
                    "device extension count");
            std::vector<VkExtensionProperties> list(count);
            require(device_extensions(device, nullptr, &count, list.data()) == VK_SUCCESS, "device extensions");
            list.resize(count);
            const bool swapchain = has(list, VK_KHR_SWAPCHAIN_EXTENSION_NAME);
            std::printf("VK_KHR_swapchain=%s\n", swapchain ? "advertised (not exercised)" : "missing");
            found_turnip |= driver.driverID == VK_DRIVER_ID_MESA_TURNIP && swapchain;
        }
        require(found_turnip, "Mesa Turnip with loader-provided swapchain support not found; fallback driver is not success");
        require(resources.close(), "loader cleanup failed");
        alarm(0);
        std::puts("turnip_loader_probe=PASS");
        return 0;
    } catch (const std::exception &error) {
        std::printf("turnip_loader_probe=FAIL reason=%s\n", error.what());
        return 1;
    }
}
