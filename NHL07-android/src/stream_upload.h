#pragma once
#include <GLES3/gl3.h>
#include <array>
#include <cstddef>
#include <cstdint>

// One draw reserves all of its vertex/index bytes before any upload. Its
// storage cannot be recycled until end_draw(), which must follow glDraw*().
class Nhl07StreamUpload {
public:
    enum class Policy {ReuseReady, OrphanOnWrap};
    struct Range {GLuint buffer=0;GLintptr offset=0;GLsizeiptr size=0;};
    struct Stats {
        std::uint64_t uploads=0,bytes=0,rotations=0,allocations=0,orphans=0;
        std::uint64_t ready_fences=0,pending_fences=0,failed_fences=0,map_failures=0;
    };
    explicit Nhl07StreamUpload(std::size_t capacity=8u*1024u*1024u,
                              std::size_t maximum=64u*1024u*1024u,
                              Policy policy=Policy::ReuseReady);
    static constexpr std::size_t aligned_size(std::size_t bytes) {return (bytes+15u)&~std::size_t(15u);}
    bool begin_draw(std::size_t reserved_bytes);
    bool upload(const void *bytes,std::size_t size,Range &out);
    bool end_draw();
    // Explicit GL-context-owned cleanup; destruction itself makes no GL calls.
    void clear();
    const Stats &stats()const{return counters;}
private:
    struct Slot {GLuint buffer=0;GLsync fence=nullptr;std::size_t capacity=0,used=0;};
    std::array<Slot,3> slots{};
    std::size_t initial,maximum,reserved_end=0;
    unsigned current=0;
    bool active=false;
    Policy policy;
    Stats counters{};
    bool allocate(Slot &,std::size_t,bool orphan);
};
