/* Standalone process-only compatibility probe; never a game/FPS benchmark.
   Minimal HAL declarations below are adapted from Android Open Source Project:
   Copyright (C) 2008, 2015 The Android Open Source Project
   Licensed under the Apache License, Version 2.0:
   https://www.apache.org/licenses/LICENSE-2.0
   https://android.googlesource.com/platform/hardware/libhardware/+/refs/heads/main/include_all/hardware/hardware.h
   https://android.googlesource.com/platform/frameworks/native/+/18c754e18499acce28e8be58846879075ade72a7/vulkan/include/hardware/hwvulkan.h
*/
#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>
#include <dlfcn.h>
#include <sys/wait.h>
#include <unistd.h>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <vector>

struct hw_module_t;
struct hw_device_t;
struct hw_module_methods_t {
    int (*open)(const hw_module_t *,const char *,hw_device_t **);
};
struct hw_module_t {
    uint32_t tag;
    uint16_t module_api_version,hal_api_version;
    const char *id,*name,*author;
    hw_module_methods_t *methods;
    void *dso;
    uint64_t reserved[32-7];
};
struct hw_device_t {
    uint32_t tag,version;
    hw_module_t *module;
    uint64_t reserved[12];
    int (*close)(hw_device_t *);
};
struct hwvulkan_device_t {
    hw_device_t common;
    PFN_vkEnumerateInstanceExtensionProperties EnumerateInstanceExtensionProperties;
    PFN_vkCreateInstance CreateInstance;
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr;
};
static_assert(sizeof(void *)==8,"This probe is Android ARM64 only");
static_assert(sizeof(hw_module_t)==248 && offsetof(hw_module_t,methods)==32,"AOSP LP64 module ABI");
static_assert(sizeof(hw_device_t)==120 && offsetof(hw_device_t,close)==112,"AOSP LP64 device ABI");
static_assert(sizeof(hwvulkan_device_t)==144 && offsetof(hwvulkan_device_t,GetInstanceProcAddr)==136,"AOSP Vulkan HAL ABI");

static const char kDriverSha256[]="3d04277c9aad26c9c886a337979be1e418b7a8ff8414c8f293d4f37757f4ac22";
static void check(bool okay,const char *label) {
    std::printf("CHECK %s=%s\n",label,okay?"pass":"fail");
    if(!okay)throw std::runtime_error(label);
}
static void result(const char *label,VkResult value) {
    std::printf("API %s VkResult=%d\n",label,static_cast<int>(value));
    if(value!=VK_SUCCESS)throw std::runtime_error(label);
}
static void verify_sha256(const char *path) {
    int pipefd[2];check(pipe(pipefd)==0,"SHA pipe");
    pid_t child=fork();check(child>=0,"SHA fork");
    if(child==0) {
        close(pipefd[0]);dup2(pipefd[1],STDOUT_FILENO);close(pipefd[1]);
        execl("/system/bin/toybox","toybox","sha256sum",path,static_cast<char *>(nullptr));
        _exit(127);
    }
    close(pipefd[1]);char output[4096]={};size_t total=0;
    while(total<sizeof(output)-1) {
        ssize_t got=read(pipefd[0],output+total,sizeof(output)-1-total);
        if(got<=0)break;total+=static_cast<size_t>(got);
    }
    close(pipefd[0]);int status=0;check(waitpid(child,&status,0)==child,"SHA wait");
    check(WIFEXITED(status)&&WEXITSTATUS(status)==0,"SHA command completed");
    std::printf("DRIVER actual_sha256=%.64s expected_sha256=%s\n",output,kDriverSha256);
    check(total>=64 && std::memcmp(output,kDriverSha256,64)==0,"exact supplied driver hash");
}

template<typename T> static T proc(PFN_vkGetInstanceProcAddr get,VkInstance instance,const char *name) {
    auto address=get(instance,name);
    std::printf("PROC %s=%p\n",name,reinterpret_cast<void *>(address));
    check(address!=nullptr,name);return reinterpret_cast<T>(address);
}
template<typename T> static T device_proc(PFN_vkGetDeviceProcAddr get,VkDevice device,const char *name) {
    auto address=get(device,name);
    std::printf("PROC %s=%p\n",name,reinterpret_cast<void *>(address));
    check(address!=nullptr,name);return reinterpret_cast<T>(address);
}

struct Cleanup {
    void *library=nullptr;
    hwvulkan_device_t *hal=nullptr;
    VkInstance instance=VK_NULL_HANDLE;
    VkDevice device=VK_NULL_HANDLE;
    VkBuffer buffer=VK_NULL_HANDLE;
    VkDeviceMemory memory=VK_NULL_HANDLE;
    VkCommandPool pool=VK_NULL_HANDLE;
    VkFence fence=VK_NULL_HANDLE;
    void *mapping=nullptr;
    PFN_vkDestroyInstance destroy_instance=nullptr;
    PFN_vkDestroyDevice destroy_device=nullptr;
    PFN_vkDestroyBuffer destroy_buffer=nullptr;
    PFN_vkFreeMemory free_memory=nullptr;
    PFN_vkDestroyCommandPool destroy_pool=nullptr;
    PFN_vkDestroyFence destroy_fence=nullptr;
    PFN_vkUnmapMemory unmap_memory=nullptr;
    ~Cleanup() {
        if(mapping && unmap_memory) {unmap_memory(device,memory);std::puts("API vkUnmapMemory done");}
        if(fence && destroy_fence) {destroy_fence(device,fence,nullptr);std::puts("API vkDestroyFence done");}
        if(pool && destroy_pool) {destroy_pool(device,pool,nullptr);std::puts("API vkDestroyCommandPool done");}
        if(buffer && destroy_buffer) {destroy_buffer(device,buffer,nullptr);std::puts("API vkDestroyBuffer done");}
        if(memory && free_memory) {free_memory(device,memory,nullptr);std::puts("API vkFreeMemory done");}
        if(device && destroy_device) {destroy_device(device,nullptr);std::puts("API vkDestroyDevice done");}
        if(instance && destroy_instance) {destroy_instance(instance,nullptr);std::puts("API vkDestroyInstance done");}
        if(hal && hal->common.close)std::printf("API HAL close result=%d\n",hal->common.close(&hal->common));
        if(library)std::printf("API dlclose result=%d\n",dlclose(library));
    }
};

static void run_probe(const char *path) {
    verify_sha256(path);
    check(setenv("TU_DEBUG","sysmem",1)==0,"TU_DEBUG set before driver load");
    std::puts("ENV TU_DEBUG=sysmem; reason=author V32 A830 GMEM compatibility note");
    Cleanup cleanup;
    std::printf("API dlopen path=%s\n",path);
    cleanup.library=dlopen(path,RTLD_NOW|RTLD_LOCAL);
    if(!cleanup.library) {std::printf("DLOPEN_ERROR %s\n",dlerror());throw std::runtime_error("dlopen");}
    std::puts("API dlopen success");
    auto *module=reinterpret_cast<hw_module_t *>(dlsym(cleanup.library,"HMI"));
    check(module!=nullptr,"HMI export");
    std::printf("HAL tag=%08x module_api=%04x hal_api=%04x id=%s name=%s author=%s\n",
                module->tag,module->module_api_version,module->hal_api_version,
                module->id?module->id:"(null)",module->name?module->name:"(null)",module->author?module->author:"(null)");
    check(module->tag==0x48574d54u,"HARDWARE_MODULE_TAG");
    check(module->id && !std::strcmp(module->id,"vulkan"),"Vulkan HAL ID");
    check(module->methods && module->methods->open,"HAL open pointer");
    module->dso=cleanup.library;
    hw_device_t *common=nullptr;
    int opened=module->methods->open(module,"vk0",&common);
    std::printf("API HAL open(vk0) result=%d device=%p\n",opened,static_cast<void *>(common));
    check(opened==0 && common,"HAL device opened");
    cleanup.hal=reinterpret_cast<hwvulkan_device_t *>(common);
    check(common->tag==0x48574454u,"HARDWARE_DEVICE_TAG");
    std::printf("HAL device_version=%08x\n",common->version);
    check(cleanup.hal->CreateInstance && cleanup.hal->EnumerateInstanceExtensionProperties &&
          cleanup.hal->GetInstanceProcAddr,"Vulkan HAL entry points");
    auto get=cleanup.hal->GetInstanceProcAddr;
    uint32_t extension_count=0;
    result("HAL vkEnumerateInstanceExtensionProperties(count)",cleanup.hal->EnumerateInstanceExtensionProperties(nullptr,&extension_count,nullptr));
    check(extension_count<4096,"instance extension count bounded");
    std::vector<VkExtensionProperties> instance_extensions(extension_count);
    result("HAL vkEnumerateInstanceExtensionProperties(list)",cleanup.hal->EnumerateInstanceExtensionProperties(nullptr,&extension_count,instance_extensions.data()));
    for(const auto &extension:instance_extensions)std::printf("INSTANCE_EXTENSION %s version=%u\n",extension.extensionName,extension.specVersion);
    uint32_t version=VK_API_VERSION_1_0;
    auto enumerate_version=reinterpret_cast<PFN_vkEnumerateInstanceVersion>(get(VK_NULL_HANDLE,"vkEnumerateInstanceVersion"));
    std::printf("PROC vkEnumerateInstanceVersion=%p\n",reinterpret_cast<void *>(enumerate_version));
    if(enumerate_version)result("vkEnumerateInstanceVersion",enumerate_version(&version));
    std::printf("VULKAN instance_api=%u.%u.%u\n",VK_API_VERSION_MAJOR(version),VK_API_VERSION_MINOR(version),VK_API_VERSION_PATCH(version));
    VkApplicationInfo application{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    application.pApplicationName="NHL07 isolated Turnip compatibility probe";
    application.applicationVersion=1;application.pEngineName="standalone HAL; no EGL/game/WSI";
    application.apiVersion=version>=VK_API_VERSION_1_1?VK_API_VERSION_1_1:VK_API_VERSION_1_0;
    VkInstanceCreateInfo create_instance{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};create_instance.pApplicationInfo=&application;
    result("HAL vkCreateInstance",cleanup.hal->CreateInstance(&create_instance,nullptr,&cleanup.instance));
    cleanup.destroy_instance=proc<PFN_vkDestroyInstance>(get,cleanup.instance,"vkDestroyInstance");
    auto enumerate=proc<PFN_vkEnumeratePhysicalDevices>(get,cleanup.instance,"vkEnumeratePhysicalDevices");
    auto properties=proc<PFN_vkGetPhysicalDeviceProperties>(get,cleanup.instance,"vkGetPhysicalDeviceProperties");
    auto features=proc<PFN_vkGetPhysicalDeviceFeatures>(get,cleanup.instance,"vkGetPhysicalDeviceFeatures");
    auto queues=proc<PFN_vkGetPhysicalDeviceQueueFamilyProperties>(get,cleanup.instance,"vkGetPhysicalDeviceQueueFamilyProperties");
    auto memory_properties=proc<PFN_vkGetPhysicalDeviceMemoryProperties>(get,cleanup.instance,"vkGetPhysicalDeviceMemoryProperties");
    auto device_extensions=proc<PFN_vkEnumerateDeviceExtensionProperties>(get,cleanup.instance,"vkEnumerateDeviceExtensionProperties");
    auto create_device=proc<PFN_vkCreateDevice>(get,cleanup.instance,"vkCreateDevice");
    uint32_t device_count=0;result("vkEnumeratePhysicalDevices(count)",enumerate(cleanup.instance,&device_count,nullptr));
    check(device_count && device_count<64,"physical devices present and bounded");
    std::vector<VkPhysicalDevice> physical_devices(device_count);
    result("vkEnumeratePhysicalDevices(list)",enumerate(cleanup.instance,&device_count,physical_devices.data()));
    VkPhysicalDevice selected=VK_NULL_HANDLE;uint32_t queue_family=0;
    for(auto physical:physical_devices) {
        VkPhysicalDeviceProperties property{};properties(physical,&property);std::puts("API vkGetPhysicalDeviceProperties done");
        std::printf("GPU name=%s vendor=%04x device=%04x driver=%08x api=%u.%u.%u\n",property.deviceName,property.vendorID,property.deviceID,
                    property.driverVersion,VK_API_VERSION_MAJOR(property.apiVersion),VK_API_VERSION_MINOR(property.apiVersion),VK_API_VERSION_PATCH(property.apiVersion));
        VkPhysicalDeviceFeatures feature{};features(physical,&feature);std::puts("API vkGetPhysicalDeviceFeatures done");
        std::printf("GPU_FEATURES independentBlend=%u shaderClipDistance=%u shaderCullDistance=%u geometryShader=%u\n",
                    feature.independentBlend,feature.shaderClipDistance,feature.shaderCullDistance,feature.geometryShader);
        std::printf("GPU_LIMITS maxImage2D=%u maxUniformRange=%u maxVertexAttributes=%u\n",
                    property.limits.maxImageDimension2D,property.limits.maxUniformBufferRange,property.limits.maxVertexInputAttributes);
        if(property.apiVersion>=VK_API_VERSION_1_2) {
            auto properties2=reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2>(get(cleanup.instance,"vkGetPhysicalDeviceProperties2"));
            if(properties2) {
                VkPhysicalDeviceDriverProperties driver{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES};
                VkPhysicalDeviceProperties2 property2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2};property2.pNext=&driver;
                properties2(physical,&property2);std::puts("API vkGetPhysicalDeviceProperties2(driver) done");
                std::printf("GPU_DRIVER id=%u name=%s info=%s conformance=%u.%u.%u.%u\n",driver.driverID,driver.driverName,driver.driverInfo,
                            driver.conformanceVersion.major,driver.conformanceVersion.minor,driver.conformanceVersion.subminor,driver.conformanceVersion.patch);
            }
        }
        uint32_t count=0;result("vkEnumerateDeviceExtensionProperties(count)",device_extensions(physical,nullptr,&count,nullptr));
        check(count<4096,"device extension count bounded");std::vector<VkExtensionProperties> extensions(count);
        result("vkEnumerateDeviceExtensionProperties(list)",device_extensions(physical,nullptr,&count,extensions.data()));
        for(const auto &extension:extensions)std::printf("DEVICE_EXTENSION %s version=%u\n",extension.extensionName,extension.specVersion);
        uint32_t queue_count=0;queues(physical,&queue_count,nullptr);std::printf("API vkGetPhysicalDeviceQueueFamilyProperties(count)=%u\n",queue_count);
        check(queue_count && queue_count<256,"queue count bounded");std::vector<VkQueueFamilyProperties> families(queue_count);
        queues(physical,&queue_count,families.data());std::puts("API vkGetPhysicalDeviceQueueFamilyProperties(list) done");
        for(uint32_t index=0;index<queue_count;++index) {
            std::printf("QUEUE family=%u flags=%08x count=%u\n",index,families[index].queueFlags,families[index].queueCount);
            if(!selected && families[index].queueCount && (families[index].queueFlags&VK_QUEUE_GRAPHICS_BIT)) {selected=physical;queue_family=index;}
        }
    }
    check(selected!=VK_NULL_HANDLE,"graphics queue selected");
    float priority=1;
    VkDeviceQueueCreateInfo queue_info{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};queue_info.queueFamilyIndex=queue_family;
    queue_info.queueCount=1;queue_info.pQueuePriorities=&priority;
    VkDeviceCreateInfo device_info{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};device_info.queueCreateInfoCount=1;device_info.pQueueCreateInfos=&queue_info;
    result("vkCreateDevice",create_device(selected,&device_info,nullptr,&cleanup.device));
    auto get_device=proc<PFN_vkGetDeviceProcAddr>(get,cleanup.instance,"vkGetDeviceProcAddr");
    cleanup.destroy_device=device_proc<PFN_vkDestroyDevice>(get_device,cleanup.device,"vkDestroyDevice");
    cleanup.destroy_buffer=device_proc<PFN_vkDestroyBuffer>(get_device,cleanup.device,"vkDestroyBuffer");
    cleanup.free_memory=device_proc<PFN_vkFreeMemory>(get_device,cleanup.device,"vkFreeMemory");
    cleanup.destroy_pool=device_proc<PFN_vkDestroyCommandPool>(get_device,cleanup.device,"vkDestroyCommandPool");
    cleanup.destroy_fence=device_proc<PFN_vkDestroyFence>(get_device,cleanup.device,"vkDestroyFence");
    cleanup.unmap_memory=device_proc<PFN_vkUnmapMemory>(get_device,cleanup.device,"vkUnmapMemory");
    auto get_queue=device_proc<PFN_vkGetDeviceQueue>(get_device,cleanup.device,"vkGetDeviceQueue");
    auto create_buffer=device_proc<PFN_vkCreateBuffer>(get_device,cleanup.device,"vkCreateBuffer");
    auto requirements=device_proc<PFN_vkGetBufferMemoryRequirements>(get_device,cleanup.device,"vkGetBufferMemoryRequirements");
    auto allocate=device_proc<PFN_vkAllocateMemory>(get_device,cleanup.device,"vkAllocateMemory");
    auto bind=device_proc<PFN_vkBindBufferMemory>(get_device,cleanup.device,"vkBindBufferMemory");
    auto create_pool=device_proc<PFN_vkCreateCommandPool>(get_device,cleanup.device,"vkCreateCommandPool");
    auto allocate_commands=device_proc<PFN_vkAllocateCommandBuffers>(get_device,cleanup.device,"vkAllocateCommandBuffers");
    auto begin=device_proc<PFN_vkBeginCommandBuffer>(get_device,cleanup.device,"vkBeginCommandBuffer");
    auto fill=device_proc<PFN_vkCmdFillBuffer>(get_device,cleanup.device,"vkCmdFillBuffer");
    auto barrier=device_proc<PFN_vkCmdPipelineBarrier>(get_device,cleanup.device,"vkCmdPipelineBarrier");
    auto end=device_proc<PFN_vkEndCommandBuffer>(get_device,cleanup.device,"vkEndCommandBuffer");
    auto create_fence=device_proc<PFN_vkCreateFence>(get_device,cleanup.device,"vkCreateFence");
    auto submit=device_proc<PFN_vkQueueSubmit>(get_device,cleanup.device,"vkQueueSubmit");
    auto wait=device_proc<PFN_vkWaitForFences>(get_device,cleanup.device,"vkWaitForFences");
    auto map=device_proc<PFN_vkMapMemory>(get_device,cleanup.device,"vkMapMemory");
    auto invalidate=device_proc<PFN_vkInvalidateMappedMemoryRanges>(get_device,cleanup.device,"vkInvalidateMappedMemoryRanges");
    VkQueue queue=VK_NULL_HANDLE;get_queue(cleanup.device,queue_family,0,&queue);std::puts("API vkGetDeviceQueue done");check(queue!=VK_NULL_HANDLE,"queue handle");
    VkBufferCreateInfo buffer_info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};buffer_info.size=4096;buffer_info.usage=VK_BUFFER_USAGE_TRANSFER_DST_BIT;
    buffer_info.sharingMode=VK_SHARING_MODE_EXCLUSIVE;
    result("vkCreateBuffer",create_buffer(cleanup.device,&buffer_info,nullptr,&cleanup.buffer));
    VkMemoryRequirements required{};requirements(cleanup.device,cleanup.buffer,&required);
    std::printf("API vkGetBufferMemoryRequirements size=%llu alignment=%llu memoryTypes=%08x\n",
                static_cast<unsigned long long>(required.size),static_cast<unsigned long long>(required.alignment),required.memoryTypeBits);
    VkPhysicalDeviceMemoryProperties memories{};memory_properties(selected,&memories);std::puts("API vkGetPhysicalDeviceMemoryProperties done");
    uint32_t memory_type=UINT32_MAX;
    for(uint32_t index=0;index<memories.memoryTypeCount;++index) {
        std::printf("MEMORY_TYPE index=%u flags=%08x heap=%u\n",index,memories.memoryTypes[index].propertyFlags,memories.memoryTypes[index].heapIndex);
        if((required.memoryTypeBits&(1u<<index)) && (memories.memoryTypes[index].propertyFlags&VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)) {
            memory_type=index;if(memories.memoryTypes[index].propertyFlags&VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)break;
        }
    }
    check(memory_type!=UINT32_MAX,"host-visible memory type");
    VkMemoryAllocateInfo allocation{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};allocation.allocationSize=required.size;allocation.memoryTypeIndex=memory_type;
    result("vkAllocateMemory",allocate(cleanup.device,&allocation,nullptr,&cleanup.memory));
    result("vkBindBufferMemory",bind(cleanup.device,cleanup.buffer,cleanup.memory,0));
    VkCommandPoolCreateInfo pool_info{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};pool_info.flags=VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;pool_info.queueFamilyIndex=queue_family;
    result("vkCreateCommandPool",create_pool(cleanup.device,&pool_info,nullptr,&cleanup.pool));
    VkCommandBufferAllocateInfo command_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};command_info.commandPool=cleanup.pool;
    command_info.level=VK_COMMAND_BUFFER_LEVEL_PRIMARY;command_info.commandBufferCount=1;
    VkCommandBuffer command=VK_NULL_HANDLE;result("vkAllocateCommandBuffers",allocate_commands(cleanup.device,&command_info,&command));
    VkCommandBufferBeginInfo begin_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};begin_info.flags=VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    result("vkBeginCommandBuffer",begin(command,&begin_info));
    fill(command,cleanup.buffer,0,4096,0x5a07cafeu);std::puts("API vkCmdFillBuffer size=4096 pattern=5a07cafe done");
    VkBufferMemoryBarrier memory_barrier{VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER};memory_barrier.srcAccessMask=VK_ACCESS_TRANSFER_WRITE_BIT;
    memory_barrier.dstAccessMask=VK_ACCESS_HOST_READ_BIT;memory_barrier.srcQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED;
    memory_barrier.dstQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED;memory_barrier.buffer=cleanup.buffer;memory_barrier.size=VK_WHOLE_SIZE;
    barrier(command,VK_PIPELINE_STAGE_TRANSFER_BIT,VK_PIPELINE_STAGE_HOST_BIT,0,0,nullptr,1,&memory_barrier,0,nullptr);
    std::puts("API vkCmdPipelineBarrier transfer-write -> host-read done");result("vkEndCommandBuffer",end(command));
    VkFenceCreateInfo fence_info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};result("vkCreateFence",create_fence(cleanup.device,&fence_info,nullptr,&cleanup.fence));
    VkSubmitInfo submit_info{VK_STRUCTURE_TYPE_SUBMIT_INFO};submit_info.commandBufferCount=1;submit_info.pCommandBuffers=&command;
    result("vkQueueSubmit",submit(queue,1,&submit_info,cleanup.fence));
    VkResult waited=wait(cleanup.device,1,&cleanup.fence,VK_TRUE,5000000000ull);
    if(waited==VK_TIMEOUT) {
        std::printf("API vkWaitForFences(5s) VkResult=%d\n",static_cast<int>(waited));
        std::puts("TURNIP_PROBE failed=1 stage=GPU_fence_timeout; terminate process without destroying in-flight resources");
        _exit(1);
    }
    result("vkWaitForFences(5s)",waited);
    result("vkMapMemory",map(cleanup.device,cleanup.memory,0,VK_WHOLE_SIZE,0,&cleanup.mapping));
    if(!(memories.memoryTypes[memory_type].propertyFlags&VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)) {
        VkMappedMemoryRange range{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE};range.memory=cleanup.memory;range.size=VK_WHOLE_SIZE;
        result("vkInvalidateMappedMemoryRanges",invalidate(cleanup.device,1,&range));
    }
    unsigned mismatches=0;
    for(unsigned index=0;index<4096/4;++index)if(static_cast<const uint32_t *>(cleanup.mapping)[index]!=0x5a07cafeu)++mismatches;
    std::printf("GPU_READBACK bytes=4096 mismatches=%u\n",mismatches);check(mismatches==0,"exact GPU fill readback");
    std::puts("TURNIP_PROBE passed=1 scope=HAL_instance_device_GPU_fill_only EGL_game_WSI_FPS_validated=0");
}

int main(int argc,char **argv) {
    std::setvbuf(stdout,nullptr,_IONBF,0);std::setvbuf(stderr,nullptr,_IONBF,0);
    alarm(30);
    std::puts("TURNIP_PROBE isolated_process=1 system_driver_modified=0 game_APK_modified=0");
    if(argc!=2) {std::fprintf(stderr,"Usage: turnip_probe /absolute/path/libvulkan_freedreno.so\n");return 2;}
    try {run_probe(argv[1]);alarm(0);return 0;}
    catch(const std::exception &error) {std::fprintf(stderr,"TURNIP_PROBE failed=1 stage=%s EGL_game_WSI_FPS_validated=0\n",error.what());return 1;}
}
