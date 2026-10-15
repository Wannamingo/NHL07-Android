#pragma once
#include <GLES3/gl3.h>
#include <cstddef>
#include <cstdint>
#include <map>
#include <list>
#include <memory>
#include <utility>

struct Nhl07ExactBufferCacheStats {
    uint64_t hits=0,misses=0,updates=0,uploads=0,uploaded_bytes=0,compared_bytes=0;
    uint64_t evictions=0,fallbacks=0,pinned_fallbacks=0;
    size_t snapshot_bytes=0,gpu_bytes=0,resident_entries=0;
};

// Owning render thread and current GLES context only. Returned names are
// borrowed: callers may bind them or configure attributes, never upload/map/
// delete their storage. All content validation compares every current byte.
class Nhl07ExactBufferCache {
    using Key=std::pair<uintptr_t,size_t>;
    struct Entry {
        GLuint object=0;
        std::unique_ptr<uint8_t[]> snapshot;
        size_t bytes=0;
        uint64_t pin_epoch=0;
        std::list<Key>::iterator lru;
    };
    std::map<Key,Entry> entries_;
    std::list<Key> lru_;
    size_t budget_,maximum_entries_;
    uint64_t pin_epoch_=1;
    Nhl07ExactBufferCacheStats counters_;
    bool evict_one();
    void upload(GLenum,const void *,size_t,Entry &);
public:
    // Each byte budget applies independently to CPU snapshots and live owned
    // GL storage, with hard maxima64MiB each and4096entries.
    // Driver-internal
    // queued/orphaned allocations are managed by GLES and are not observable.
    explicit Nhl07ExactBufferCache(size_t bytes=64u*1024u*1024u,size_t entries=4096);
    // Call once before preparing a draw. Every bind pins its entry through
    // that draw so eviction cannot detach an earlier configured attribute.
    void begin_draw();
    // false means use the original dedicated caller buffer. This includes
    // budget pressure and changed data already referenced by the current draw.
    bool bind(GLenum target,const void *source,size_t bytes,GLuint &borrowed);
    // Explicit cleanup while the owning context is current. Destructor makes
    // no GLcalls; context destruction itself releases the remaining GLobjects.
    void clear();
    const Nhl07ExactBufferCacheStats &stats() const {return counters_;}
};
