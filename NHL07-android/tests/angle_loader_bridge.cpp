// Isolated ANGLE import bridge. The configured Vulkan handle remains owned by the probe.
#include <dlfcn.h>
#include <errno.h>
#include <pthread.h>
#include <stdint.h>
#include <string.h>

namespace {
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void *borrowed_loader = nullptr;
// Custom opens, custom closes, active borrows, rejected closes, ordinary opens.
uint64_t counters[5] = {};

bool is_vulkan(const char *path) {
    if (!path) return false;
    const char *slash = strrchr(path, '/');
    const char *name = slash ? slash + 1 : path;
    return strcmp(name, "libvulkan.so") == 0 || strcmp(name, "libvulkan.so.1") == 0;
}
}

extern "C" int nhl07_angle_bridge_configure(void *loader) {
    pthread_mutex_lock(&mutex);
    if (!loader || borrowed_loader) {
        pthread_mutex_unlock(&mutex);
        errno = EINVAL;
        return -1;
    }
    borrowed_loader = loader;
    memset(counters, 0, sizeof(counters));
    pthread_mutex_unlock(&mutex);
    return 0;
}

extern "C" void nhl07_angle_bridge_get_stats(uint64_t stats[5]) {
    if (!stats) return;
    pthread_mutex_lock(&mutex);
    memcpy(stats, counters, sizeof(counters));
    pthread_mutex_unlock(&mutex);
}

// Call only after all ANGLE displays and libraries have been destroyed/unloaded.
extern "C" int nhl07_angle_bridge_release() {
    pthread_mutex_lock(&mutex);
    if (!borrowed_loader || counters[2] != 0 || counters[3] != 0) {
        pthread_mutex_unlock(&mutex);
        errno = EBUSY;
        return -1;
    }
    borrowed_loader = nullptr;
    pthread_mutex_unlock(&mutex);
    return 0;
}

extern "C" void *nhldlo(const char *path, int flags) {
    pthread_mutex_lock(&mutex);
    if (borrowed_loader && is_vulkan(path)) {
        ++counters[0];
        ++counters[2];
        void *result = borrowed_loader;
        pthread_mutex_unlock(&mutex);
        return result;
    }
    ++counters[4];
    pthread_mutex_unlock(&mutex);
    // Do not hold our mutex across constructors or callbacks in another library.
    return dlopen(path, flags);
}

extern "C" int nhldlcx(void *handle) {
    pthread_mutex_lock(&mutex);
    if (borrowed_loader && handle == borrowed_loader) {
        if (counters[2] == 0) {
            ++counters[3];
            pthread_mutex_unlock(&mutex);
            errno = EINVAL;
            return -1;
        }
        ++counters[1];
        --counters[2];
        pthread_mutex_unlock(&mutex);
        return 0;
    }
    pthread_mutex_unlock(&mutex);
    return dlclose(handle);
}
