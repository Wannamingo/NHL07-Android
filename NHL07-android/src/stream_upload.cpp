#include "stream_upload.h"
#include <algorithm>
#include <cstring>

Nhl07StreamUpload::Nhl07StreamUpload(std::size_t capacity,std::size_t limit,Policy mode)
    :initial(0),maximum(limit&~std::size_t(15)),policy(mode){
    if(maximum>=16)initial=aligned_size(std::min(std::max(std::size_t(16),capacity),maximum));
}

bool Nhl07StreamUpload::allocate(Slot &slot,std::size_t required,bool orphan){
    std::size_t capacity=std::min(initial,maximum);
    while(capacity<required){
        if(capacity>maximum/2){capacity=maximum;break;}
        capacity*=2;
    }
    if(capacity<required||!capacity)return false;
    if(!slot.buffer)glGenBuffers(1,&slot.buffer);
    if(!slot.buffer)return false;
    glBindBuffer(GL_ARRAY_BUFFER,slot.buffer);
    // Re-specification detaches storage still consumed by earlier GPU commands.
    // This is the bounded fallback when a zero-timeout fence poll is pending.
    glBufferData(GL_ARRAY_BUFFER,GLsizeiptr(capacity),nullptr,GL_STREAM_DRAW);
    if(glGetError()!=GL_NO_ERROR)return false;
    slot.capacity=capacity;slot.used=0;++counters.allocations;
    if(orphan)++counters.orphans;
    return true;
}

bool Nhl07StreamUpload::begin_draw(std::size_t bytes){
    if(active||!bytes||bytes>maximum||bytes>std::size_t(-1)-15)return false;
    bytes=aligned_size(bytes);
    auto *slot=&slots[current];
    if(slot->buffer&&(bytes>slot->capacity||bytes>slot->capacity-slot->used)){
        // end_draw() guarantees that every draw referring to this slot has
        // already been submitted before its completion fence is inserted.
        if(slot->fence)return false;
        slot->fence=glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE,0);
        if(!slot->fence)return false;
        current=(current+1)%slots.size();++counters.rotations;slot=&slots[current];
        bool orphan=policy==Policy::OrphanOnWrap&&slot->buffer;
        if(slot->fence){
            GLenum ready=glClientWaitSync(slot->fence,0,0);
            if(ready==GL_ALREADY_SIGNALED||ready==GL_CONDITION_SATISFIED)++counters.ready_fences;
            else if(ready==GL_TIMEOUT_EXPIRED){++counters.pending_fences;orphan=true;}
            else{++counters.failed_fences;return false;}
            glDeleteSync(slot->fence);slot->fence=nullptr;
        }
        // Reuse after a signaled fence needs no allocation; all old commands
        // have completed. Other cases receive fresh storage before mapping.
        if(slot->buffer&&bytes<=slot->capacity&&!orphan)slot->used=0;
        else if(!allocate(*slot,bytes,slot->buffer!=0))return false;
    }
    if(!slot->buffer&&!allocate(*slot,bytes,false))return false;
    if(bytes>slot->capacity-slot->used)return false;
    reserved_end=slot->used+bytes;active=true;return true;
}

bool Nhl07StreamUpload::upload(const void *bytes,std::size_t size,Range &out){
    out={};if(!active||(size&&!bytes)||size>std::size_t(-1)-15)return false;
    auto &slot=slots[current];std::size_t padded=aligned_size(size);
    if(slot.used>reserved_end||padded>reserved_end-slot.used)return false;
    out={slot.buffer,GLintptr(slot.used),GLsizeiptr(size)};
    if(size){
        glBindBuffer(GL_ARRAY_BUFFER,slot.buffer);
        // This range has never been consumed since allocation, or since the
        // last signaled fence. It cannot overlap another live draw's range.
        void *mapped=glMapBufferRange(GL_ARRAY_BUFFER,out.offset,out.size,
            GL_MAP_WRITE_BIT|GL_MAP_INVALIDATE_RANGE_BIT|GL_MAP_UNSYNCHRONIZED_BIT);
        if(!mapped){++counters.map_failures;out={};return false;}
        std::memcpy(mapped,bytes,size);
        if(!glUnmapBuffer(GL_ARRAY_BUFFER)){++counters.map_failures;out={};return false;}
    }
    slot.used+=padded;++counters.uploads;counters.bytes+=size;return true;
}

bool Nhl07StreamUpload::end_draw(){
    if(!active)return false;
    slots[current].used=reserved_end;active=false;return true;
}

void Nhl07StreamUpload::clear(){
    for(auto &slot:slots){if(slot.fence)glDeleteSync(slot.fence);if(slot.buffer)glDeleteBuffers(1,&slot.buffer);slot={};}
    active=false;current=0;reserved_end=0;
}
