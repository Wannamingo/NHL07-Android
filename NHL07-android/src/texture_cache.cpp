#include "texture_cache.h"
#include <algorithm>
#include <cstring>
#include <chrono>
#include "render_profile.h"
void Nhl07TextureCache::clear(){
    for(auto &pair:entries)if(pair.second.texture)glDeleteTextures(1,&pair.second.texture);
    entries.clear();bound.fill(0);counters.resident_bytes=0;draw_tag=UINT64_MAX;
}
bool Nhl07TextureCache::bind(unsigned stage,const RecompD3dTextureDesc &description,const void *data,size_t bytes,
        const void *palette,size_t palette_bytes,uint64_t draw,GLuint &texture,std::vector<uint8_t> *preview,bool base_level_only){
    if(preview)preview->clear();
    if(stage>=4||!data||!description.width||!description.height||description.width>4096||description.height>4096||
        !description.mip_levels||description.mip_levels>13||(palette_bytes&&!palette))return false;
    if(base_level_only){++counters.base_only_binds;if(description.mip_levels>1)++counters.mipped_base_binds;}
    else{++counters.full_binds;if(description.mip_levels>1)++counters.mipped_full_binds;}
    if(draw!=draw_tag){draw_tag=draw;bound.fill(0);}
    Key key{{description.data,description.format_byte,description.width,description.height,description.pitch,
        description.linear,description.mip_levels,uintptr_t(palette)}};
    auto found=entries.find(key);
    bool matches=false;{Nhl07ProfileScope cost(NHL07_PROFILE_COMPARE);
    if(found!=entries.end()&&found->second.raw.size()<=bytes&&found->second.palette.size()==palette_bytes){
        const auto &entry=found->second;
        const size_t compare_bytes=base_level_only?entry.base_bytes:entry.raw.size();
        // Even base-only sampling still requires a complete, valid source span.
        // Retain all uploaded mip bytes in raw, including their old versions.
        if(compare_bytes&&compare_bytes<=entry.raw.size()){
            counters.compared_bytes+=compare_bytes+palette_bytes;
            if(base_level_only)counters.base_compared_bytes+=compare_bytes+palette_bytes;
            else counters.full_compared_bytes+=compare_bytes+palette_bytes;
            nhl07_profile_bytes(NHL07_PROFILE_COMPARE,compare_bytes+palette_bytes);
            matches=std::memcmp(entry.raw.data(),data,compare_bytes)==0&&
                (!palette_bytes||std::memcmp(entry.palette.data(),palette,palette_bytes)==0);
            if(base_level_only)counters.skipped_mip_bytes+=entry.raw.size()-compare_bytes;
        }
    }}
    if(matches){
        if(base_level_only)++counters.base_only_hits;
        ++counters.hits;found->second.used=++usage;texture=found->second.texture;bound[stage]=texture;
        glActiveTexture(GL_TEXTURE0+stage);glBindTexture(GL_TEXTURE_2D,texture);return glGetError()==GL_NO_ERROR;
    }
    ++counters.misses;
    struct Level {unsigned width,height;std::vector<uint8_t> rgba;};std::vector<Level> levels;
    auto desc=description;size_t total=0,gpu_bytes=0,base_bytes=0;auto began=std::chrono::steady_clock::now();
    for(unsigned level=0;level<description.mip_levels;level++){
        size_t consumed=0;levels.push_back({desc.width,desc.height,{}});
        if(total>bytes||!recomp_texture_rgba(desc,static_cast<const uint8_t *>(data)+total,bytes-total,
            palette,palette_bytes,levels.back().rgba,consumed)||consumed>bytes-total)return false;
        if(!level)base_bytes=consumed;
        total+=consumed;gpu_bytes+=levels.back().rgba.size();desc.width=std::max(1u,desc.width/2);desc.height=std::max(1u,desc.height/2);
    }
    counters.decode_nanoseconds+=std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now()-began).count();
    if(preview)*preview=levels.front().rgba;
    size_t needed=total+palette_bytes+gpu_bytes,old_bytes=found==entries.end()?0:found->second.bytes();
    // Only objects still bound for the upcoming draw are protected. Replacing
    // one stage releases its former binding from the eviction set.
    bound[stage]=found==entries.end()?0:found->second.texture;
    while((counters.resident_bytes-old_bytes+needed>budget)||(found==entries.end()&&entries.size()>=maximum_entries)){
        auto victim=entries.end();
        for(auto candidate=entries.begin();candidate!=entries.end();++candidate){
            if(candidate==found||std::find(bound.begin(),bound.end(),candidate->second.texture)!=bound.end())continue;
            if(victim==entries.end()||candidate->second.used<victim->second.used)victim=candidate;
        }
        if(victim==entries.end())break; // At most the four current stage bindings can exceed the budget.
        counters.resident_bytes-=victim->second.bytes();glDeleteTextures(1,&victim->second.texture);entries.erase(victim);
    }
    if(found==entries.end())found=entries.emplace(key,Entry{}).first;
    auto &entry=found->second;
    if(!entry.texture)glGenTextures(1,&entry.texture);
    glActiveTexture(GL_TEXTURE0+stage);glBindTexture(GL_TEXTURE_2D,entry.texture);
    for(unsigned level=0;level<levels.size();level++){
        const auto &source=levels[level];glTexImage2D(GL_TEXTURE_2D,level,GL_RGBA8,source.width,source.height,0,GL_RGBA,GL_UNSIGNED_BYTE,source.rgba.data());
    }
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAX_LEVEL,description.mip_levels-1);
    if(glGetError()!=GL_NO_ERROR)return false;
    entry.raw.assign(static_cast<const uint8_t *>(data),static_cast<const uint8_t *>(data)+total);
    if(palette_bytes)entry.palette.assign(static_cast<const uint8_t *>(palette),static_cast<const uint8_t *>(palette)+palette_bytes);else entry.palette.clear();
    entry.gpu_bytes=gpu_bytes;entry.base_bytes=base_bytes;entry.used=++usage;bound[stage]=texture=entry.texture;
    counters.resident_bytes=counters.resident_bytes-old_bytes+entry.bytes();counters.uploads+=levels.size();counters.uploaded_bytes+=gpu_bytes;
    return true;
}
