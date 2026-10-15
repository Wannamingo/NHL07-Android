#include "exact_buffer_cache.h"
#include "render_profile.h"
#include <algorithm>
#include <cstring>
#include <limits>
#include <new>

Nhl07ExactBufferCache::Nhl07ExactBufferCache(size_t bytes,size_t entries):
    budget_(std::min(bytes,size_t(64u*1024u*1024u))),maximum_entries_(std::min(entries,size_t(4096))){}

void Nhl07ExactBufferCache::begin_draw(){
    if(pin_epoch_==std::numeric_limits<uint64_t>::max()){
        for(auto &entry:entries_)entry.second.pin_epoch=0;
        pin_epoch_=1;
    }else ++pin_epoch_;
}

bool Nhl07ExactBufferCache::evict_one(){
    auto victim=entries_.end();
    // The LRU list avoids walking all512/4096entries for every new upload.
    // Only buffers already used by this draw can be skipped at its tail.
    for(auto key=lru_.rbegin();key!=lru_.rend();++key){
        auto entry=entries_.find(*key);
        if(entry->second.pin_epoch!=pin_epoch_){victim=entry;break;}
    }
    if(victim==entries_.end())return false;
    glDeleteBuffers(1,&victim->second.object);
    counters_.snapshot_bytes-=victim->second.bytes;counters_.gpu_bytes-=victim->second.bytes;
    lru_.erase(victim->second.lru);entries_.erase(victim);
    ++counters_.evictions;counters_.resident_entries=entries_.size();return true;
}

void Nhl07ExactBufferCache::upload(GLenum target,const void *source,size_t bytes,Entry &entry){
    // Upload our exact snapshot so the retained bytes are the bytes submitted
    // to GL, including on updates. GLES preserves already submitted draws
    // when glBufferData replaces a previous draw's store.
    std::memcpy(entry.snapshot.get(),source,bytes);
    {Nhl07ProfileScope cost(NHL07_PROFILE_BUFFER_UPLOAD);
    if(!entry.object)glGenBuffers(1,&entry.object);
    glBindBuffer(target,entry.object);glBufferData(target,GLsizeiptr(bytes),entry.snapshot.get(),GL_STREAM_DRAW);}
    ++counters_.uploads;counters_.uploaded_bytes+=bytes;
    nhl07_profile_bytes(NHL07_PROFILE_BUFFER_UPLOAD,bytes);nhl07_profile_bytes(NHL07_PROFILE_BUFFERS,bytes);
}

bool Nhl07ExactBufferCache::bind(GLenum target,const void *source,size_t bytes,GLuint &borrowed){
    borrowed=0;
    auto fallback=[&](bool pinned=false){++counters_.fallbacks;if(pinned)++counters_.pinned_fallbacks;return false;};
    if((target!=GL_ARRAY_BUFFER&&target!=GL_ELEMENT_ARRAY_BUFFER)||!source||!bytes||
        !maximum_entries_||bytes>budget_||bytes>size_t(std::numeric_limits<GLsizeiptr>::max()))return fallback();
    const Key key{reinterpret_cast<uintptr_t>(source),bytes};
    auto found=entries_.find(key);
    if(found!=entries_.end()){
        auto &entry=found->second;bool equal;
        {Nhl07ProfileScope cost(NHL07_PROFILE_BUFFER_COMPARE);
        equal=std::memcmp(entry.snapshot.get(),source,bytes)==0;
        nhl07_profile_bytes(NHL07_PROFILE_BUFFER_COMPARE,bytes);}
        counters_.compared_bytes+=bytes;
        if(equal){++counters_.hits;glBindBuffer(target,entry.object);}
        else{
            // An earlier attribute in this as-yet-unsubmitted draw may use
            // this object. Preserve it and let the caller use its own buffer.
            if(entry.pin_epoch==pin_epoch_)return fallback(true);
            upload(target,source,bytes,entry);++counters_.updates;
        }
        entry.pin_epoch=pin_epoch_;lru_.splice(lru_.begin(),lru_,entry.lru);borrowed=entry.object;return true;
    }
    while(entries_.size()>=maximum_entries_||counters_.snapshot_bytes>budget_-bytes||counters_.gpu_bytes>budget_-bytes)
        if(!evict_one())return fallback(true);
    Entry entry;entry.snapshot.reset(new(std::nothrow) uint8_t[bytes]);if(!entry.snapshot)return fallback();
    entry.bytes=bytes;entry.pin_epoch=pin_epoch_;
    // Allocate both metadata nodes before creating GL storage. If host memory
    // is exhausted the original upload path remains available with no leaked
    // buffer name or half-published cache entry.
    try{
        lru_.push_front(key);entry.lru=lru_.begin();
        found=entries_.emplace(key,std::move(entry)).first;
    }catch(const std::bad_alloc &){
        if(!lru_.empty()&&lru_.front()==key)lru_.pop_front();
        return fallback();
    }
    upload(target,source,bytes,found->second);borrowed=found->second.object;
    ++counters_.misses;counters_.snapshot_bytes+=bytes;counters_.gpu_bytes+=bytes;counters_.resident_entries=entries_.size();return true;
}

void Nhl07ExactBufferCache::clear(){
    for(auto &entry:entries_)glDeleteBuffers(1,&entry.second.object);
    entries_.clear();lru_.clear();counters_.snapshot_bytes=counters_.gpu_bytes=counters_.resident_entries=0;
}
