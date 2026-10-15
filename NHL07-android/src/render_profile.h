#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
enum Nhl07ProfileStage {
    NHL07_PROFILE_DRAW, NHL07_PROFILE_PARSE, NHL07_PROFILE_TEXTURE,
    NHL07_PROFILE_COMPARE, NHL07_PROFILE_UNIFORM, NHL07_PROFILE_BUFFERS,
    NHL07_PROFILE_RASTER, NHL07_PROFILE_SUBMIT, NHL07_PROFILE_SYNC,
    NHL07_PROFILE_CONSUME, NHL07_PROFILE_TARGET_SET, NHL07_PROFILE_TARGET_FLUSH,
    NHL07_PROFILE_TARGET_CREATE, NHL07_PROFILE_READ_PIXELS,
    NHL07_PROFILE_TARGET_ENCODE, NHL07_PROFILE_DEPTH_COPY,
    NHL07_PROFILE_BUFFER_UPLOAD, NHL07_PROFILE_ATTRIBUTE_CONFIG,
    NHL07_PROFILE_BUFFER_SOURCE, NHL07_PROFILE_BUFFER_COMPARE, NHL07_PROFILE_COUNT
};
uint64_t nhl07_profile_begin(void);
void nhl07_profile_end(unsigned stage,uint64_t began);
void nhl07_profile_bytes(unsigned stage,uint64_t bytes);
void nhl07_profile_frame(uint64_t interval_ns);
/* Development-only file, sampled every 60 calls on the render thread. No game
   data is read. Upload, shader preparation and exact resource cache switches
   are independent; each changed flag discards partial profile batches and
   the transition frame. Cache defaults are selected at compile time by
   NHL07_DEFAULT_SHADER_PREP_CACHE / NHL07_DEFAULT_EXACT_BUFFER_CACHE (both
   zero unless explicitly defined); configuration may override either. */
void nhl07_profile_control(void);
#ifdef __cplusplus
}
struct Nhl07ProfileScope {
    unsigned stage;uint64_t began;
    explicit Nhl07ProfileScope(unsigned value):stage(value),began(nhl07_profile_begin()){}
    ~Nhl07ProfileScope(){if(began)nhl07_profile_end(stage,began);}
};
#endif
