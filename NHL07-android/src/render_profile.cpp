#include "render_profile.h"
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <time.h>
#ifndef NHL07_DEFAULT_SHADER_PREP_CACHE
#define NHL07_DEFAULT_SHADER_PREP_CACHE 0
#endif
#ifndef NHL07_DEFAULT_EXACT_BUFFER_CACHE
#define NHL07_DEFAULT_EXACT_BUFFER_CACHE 0
#endif
#if (NHL07_DEFAULT_SHADER_PREP_CACHE != 0 && NHL07_DEFAULT_SHADER_PREP_CACHE != 1) || (NHL07_DEFAULT_EXACT_BUFFER_CACHE != 0 && NHL07_DEFAULT_EXACT_BUFFER_CACHE != 1)
#error Renderer cache defaults must be zero or one
#endif
namespace {
bool enabled,discard_frame;
unsigned control_frames,frames;
uint64_t interval_sum;
struct Cost {uint64_t ns=0,calls=0,bytes=0;};
std::array<Cost,NHL07_PROFILE_COUNT> costs;
std::array<uint64_t,300> intervals;
const char *names[]={"draw","parse","texture","compare","uniform","buffers","raster","submit","sync","consume","target_set","target_flush","target_create","read_pixels","target_encode","depth_copy","buffer_upload","attribute_config","buffer_source","buffer_compare"};
uint64_t now(){timespec t;clock_gettime(CLOCK_MONOTONIC,&t);return uint64_t(t.tv_sec)*1000000000ull+t.tv_nsec;}
void reset(){costs={};frames=0;interval_sum=0;}
bool flag(const char *name){const char *value=std::getenv(name);return value&&std::strcmp(value,"1")==0;}
}
extern "C" uint64_t nhl07_profile_begin(void){return enabled?now():0;}
extern "C" void nhl07_profile_end(unsigned stage,uint64_t began){if(began&&stage<NHL07_PROFILE_COUNT){costs[stage].ns+=now()-began;++costs[stage].calls;}}
extern "C" void nhl07_profile_bytes(unsigned stage,uint64_t bytes){if(enabled&&stage<NHL07_PROFILE_COUNT)costs[stage].bytes+=bytes;}
extern "C" void nhl07_profile_control(void){
    if(control_frames++%60)return;
    const char *base=std::getenv("NHL07_DIAGNOSTIC_DIR");if(!base)return;
    std::string path=std::string(base)+"/gpu-profile.conf";
    bool active=false,dirty=false,downsample=true,upsample=true,dedup=true,stream=false,merge=false,pack=false;
    bool shader_prep=NHL07_DEFAULT_SHADER_PREP_CACHE!=0,texture_base=false,exact_buffer=NHL07_DEFAULT_EXACT_BUFFER_CACHE!=0;
    if(FILE *file=std::fopen(path.c_str(),"r")){
        char line[128];bool schema=std::fgets(line,sizeof(line),file)!=nullptr;
        if(schema){line[std::strcspn(line,"\r\n")]=0;schema=std::strcmp(line,"format=2")==0;}
        // Old experiment files must not disable the release defaults or keep
        // collecting timings after the device has been unplugged.
        while(schema&&std::fgets(line,sizeof(line),file)){
            line[std::strcspn(line,"\r\n")]=0;
            auto option=[&](const char *name,bool &value){size_t n=std::strlen(name);if(std::strncmp(line,name,n)==0&&line[n]=='='&&line[n+1]&&line[n+2]==0){if(line[n+1]=='0')value=false;else if(line[n+1]=='1')value=true;}};
            option("profile",active);option("target_dirty_cache",dirty);
            option("target_gpu_downsample",downsample);option("target_gpu_upsample",upsample);option("draw_dedup",dedup);
            option("stream_upload",stream);option("merge_upload",merge);option("pack_upload",pack);
            option("shader_prep_cache",shader_prep);option("texture_base_compare",texture_base);
            option("exact_buffer_cache",exact_buffer);
        }std::fclose(file);
    }
    bool was_dirty=flag("NHL07_TARGET_DIRTY_CACHE"),was_downsample=flag("NHL07_TARGET_GPU_DOWNSAMPLE");
    bool was_upsample=flag("NHL07_TARGET_GPU_UPSAMPLE"),was_dedup=flag("NHL07_DRAW_DEDUP");
    bool was_stream=flag("NHL07_STREAM_UPLOAD"),was_merge=flag("NHL07_MERGE_UPLOAD"),was_pack=flag("NHL07_PACK_UPLOAD");
    bool was_shader_prep=flag("NHL07_SHADER_PREP_CACHE"),was_texture_base=flag("NHL07_TEXTURE_BASE_COMPARE");
    bool was_exact_buffer=flag("NHL07_EXACT_BUFFER_CACHE");
    if(dirty!=was_dirty){if(dirty)setenv("NHL07_TARGET_DIRTY_CACHE","1",1);else unsetenv("NHL07_TARGET_DIRTY_CACHE");}
    if(downsample!=was_downsample){if(downsample)setenv("NHL07_TARGET_GPU_DOWNSAMPLE","1",1);else unsetenv("NHL07_TARGET_GPU_DOWNSAMPLE");}
    if(upsample!=was_upsample){if(upsample)setenv("NHL07_TARGET_GPU_UPSAMPLE","1",1);else unsetenv("NHL07_TARGET_GPU_UPSAMPLE");}
    if(dedup!=was_dedup){if(dedup)setenv("NHL07_DRAW_DEDUP","1",1);else unsetenv("NHL07_DRAW_DEDUP");}
    if(stream!=was_stream){if(stream)setenv("NHL07_STREAM_UPLOAD","1",1);else unsetenv("NHL07_STREAM_UPLOAD");}
    if(merge!=was_merge){if(merge)setenv("NHL07_MERGE_UPLOAD","1",1);else unsetenv("NHL07_MERGE_UPLOAD");}
    if(pack!=was_pack){if(pack)setenv("NHL07_PACK_UPLOAD","1",1);else unsetenv("NHL07_PACK_UPLOAD");}
    if(shader_prep!=was_shader_prep){if(shader_prep)setenv("NHL07_SHADER_PREP_CACHE","1",1);else unsetenv("NHL07_SHADER_PREP_CACHE");}
    if(texture_base!=was_texture_base){if(texture_base)setenv("NHL07_TEXTURE_BASE_COMPARE","1",1);else unsetenv("NHL07_TEXTURE_BASE_COMPARE");}
    if(exact_buffer!=was_exact_buffer){if(exact_buffer)setenv("NHL07_EXACT_BUFFER_CACHE","1",1);else unsetenv("NHL07_EXACT_BUFFER_CACHE");}
    if(active!=enabled||dirty!=was_dirty||downsample!=was_downsample||upsample!=was_upsample||dedup!=was_dedup||stream!=was_stream||merge!=was_merge||pack!=was_pack||shader_prep!=was_shader_prep||texture_base!=was_texture_base||exact_buffer!=was_exact_buffer){enabled=active;reset();discard_frame=true;std::fprintf(stderr,"[NHL07-GPU-PROFILE-CONTROL] enabled=%u target_dirty_cache=%u target_gpu_downsample=%u target_gpu_upsample=%u draw_dedup=%u stream_upload=%u merge_upload=%u pack_upload=%u shader_prep_cache=%u texture_base_compare=%u exact_buffer_cache=%u\n",enabled,dirty,downsample,upsample,dedup,stream,merge,pack,shader_prep,texture_base,exact_buffer);}
}
extern "C" void nhl07_profile_frame(uint64_t interval){
    if(!enabled)return;
    if(discard_frame){discard_frame=false;reset();return;}
    if(!interval||interval>=1000000000ull){reset();return;}
    intervals[frames++]=interval;interval_sum+=interval;
    if(frames<intervals.size())return;
    auto sorted=intervals;std::sort(sorted.begin(),sorted.end());
    std::fprintf(stderr,"[NHL07-GPU-PROFILE] {\"frames\":%u,\"fps\":%.3f,\"frame_ms\":%.4f,\"p95_ms\":%.4f,\"p99_ms\":%.4f,\"max_ms\":%.4f,\"target_dirty_cache\":%u,\"inclusive_stages\":{",frames,frames*1e9/double(interval_sum),double(interval_sum)/frames/1e6,sorted[284]/1e6,sorted[296]/1e6,sorted[299]/1e6,flag("NHL07_TARGET_DIRTY_CACHE"));
    for(unsigned i=0;i<NHL07_PROFILE_COUNT;++i)std::fprintf(stderr,"%s\"%s\":{\"ms_per_frame\":%.4f,\"calls\":%llu,\"bytes\":%llu}",i?",":"",names[i],double(costs[i].ns)/frames/1e6,(unsigned long long)costs[i].calls,(unsigned long long)costs[i].bytes);
    std::string raw;raw.reserve(3600);for(auto interval:intervals){if(!raw.empty())raw+=',';raw+=std::to_string(interval);}
    std::fprintf(stderr,"},\"target_gpu_downsample\":%u,\"target_gpu_upsample\":%u,\"draw_dedup\":%u,\"stream_upload\":%u,\"merge_upload\":%u,\"pack_upload\":%u,\"shader_prep_cache\":%u,\"texture_base_compare\":%u,\"exact_buffer_cache\":%u,\"frame_ns\":[%s]}\n",flag("NHL07_TARGET_GPU_DOWNSAMPLE"),flag("NHL07_TARGET_GPU_UPSAMPLE"),flag("NHL07_DRAW_DEDUP"),flag("NHL07_STREAM_UPLOAD"),flag("NHL07_MERGE_UPLOAD"),flag("NHL07_PACK_UPLOAD"),flag("NHL07_SHADER_PREP_CACHE"),flag("NHL07_TEXTURE_BASE_COMPARE"),flag("NHL07_EXACT_BUFFER_CACHE"),raw.c_str());reset();
}
