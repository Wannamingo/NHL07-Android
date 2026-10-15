#pragma once
#include "shaders/texture_rgba.h"
#include <GLES3/gl3.h>
#include <array>
#include <map>
#include <cstdint>
struct Nhl07TextureCacheStats {
    uint64_t hits=0,misses=0,uploads=0,uploaded_bytes=0,decode_nanoseconds=0;
    uint64_t compared_bytes=0,skipped_mip_bytes=0,base_only_hits=0;
    uint64_t base_only_binds=0,full_binds=0,mipped_base_binds=0,mipped_full_binds=0;
    uint64_t base_compared_bytes=0,full_compared_bytes=0;
    size_t resident_bytes=0;
};
class Nhl07TextureCache {
    using Key=std::array<uint64_t,8>;
    struct Entry {GLuint texture=0;std::vector<uint8_t> raw,palette;size_t gpu_bytes=0,base_bytes=0;uint64_t used=0;size_t bytes()const{return raw.size()+palette.size()+gpu_bytes;}};
    std::map<Key,Entry> entries;
    std::array<GLuint,4> bound{};
    uint64_t draw_tag=UINT64_MAX,usage=0;
    size_t budget,maximum_entries;
    Nhl07TextureCacheStats counters;
public:
    explicit Nhl07TextureCache(size_t bytes=256u*1024u*1024u,size_t maximum=512):budget(bytes),maximum_entries(maximum){}
    // Call clear while the owning GLES context is current. Context destruction
    // also releases its GL objects; the C++ destructor makes no GL calls.
    void clear();
    // base_level_only is valid only for filtered sampling with base level 0
    // and GL_NEAREST/GL_LINEAR minification. It never updates the snapshot of
    // skipped mips: a later mipmapped binding compares the entire old upload.
    // Callers using texelFetch or other unfiltered accesses must leave it false.
    bool bind(unsigned,const RecompD3dTextureDesc &,const void *,size_t,const void *,size_t,uint64_t,GLuint &,std::vector<uint8_t> *preview=nullptr,bool base_level_only=false);
    const Nhl07TextureCacheStats &stats()const{return counters;}
};
