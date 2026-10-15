/* Execute live NV097 state emitted by NHL 07's recompiled XDK routines.
   No prerecorded frames, replacement geometry, or guest GPU emulation thread. */
#include <GLES3/gl3.h>
#include <array>
#include <vector>
#include <map>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <memory>
#include <new>
#include <sys/stat.h>
#include <unistd.h>
#include "shaders/d3d8_vsh.h"
#include "shaders/d3d8_combiners.h"
#include "shaders/shader_compile.h"
#include "shaders/texture_rgba.h"
#include "vertex_format.h"
#include "immediate_vertices.h"
#include "texture_cache.h"
#include "render_targets.h"
#include "render_profile.h"
#include "draw_upload_plan.h"
#include "stream_upload.h"
#include "shader_preparation_model.h"
#include "exact_buffer_cache.h"
static void draw_from_state(const uint32_t *,unsigned,unsigned,const std::vector<Nhl07ImmediateVertex> *,const uint16_t *);
static void draw_immediate_batch(unsigned,unsigned);
extern "C" {
#include "recomp_types.h"
}
namespace {
uint32_t registers[0x2000/4],program[136*4],constants[192*4];
unsigned program_cursor,constant_cursor,draws;
bool explicit_line_width;
uint32_t active_push_begin,active_push_end;
std::array<uint32_t,2048+136*4+192*4> before_push;
unsigned before_program_cursor,before_constant_cursor;
unsigned target_width,target_height;
Nhl07ImmediateVertices immediate_vertices;
GLuint array,attributes[16],elements,uniforms[2],samplers[4],packed_buffer;
std::unique_ptr<uint8_t[]> packed_staging;
size_t packed_capacity;
struct UniformSnapshot {std::vector<uint8_t> bytes;bool valid=false;};
UniformSnapshot uniform_snapshots[2];
struct SamplerSnapshot {std::array<uint32_t,3> words{};bool valid=false;};
SamplerSnapshot sampler_snapshots[4];
struct DrawPreparationStats {uint64_t uniform_uploads=0,uniform_reuses=0,immediate_uploads=0,sampler_updates=0;
    uint64_t data_uploads=0,packed_draws=0,packed_slices=0,packed_bytes=0,packed_fallbacks=0;};
DrawPreparationStats draw_preparation_stats;
Nhl07TextureCache texture_cache;
Nhl07StreamUpload stream_upload;
Nhl07ExactBufferCache exact_buffer_cache;
std::map<std::string,NativeProgram> pipelines;
Nhl07ExactWordsCache<NV2AVshProgram,8,136*4> vertex_source_cache;
Nhl07ExactWordsCache<Nhl07PreparedShaderSource,32,39> shader_preparation_cache;
bool draw_dedup_enabled(){const char *setting=std::getenv("NHL07_DRAW_DEDUP");return setting&&std::strcmp(setting,"1")==0;}
bool upload_flag(const char *name){const char *setting=std::getenv(name);return setting&&std::strcmp(setting,"1")==0;}
uint32_t &reg(unsigned method) {return registers[method/4];}
[[noreturn]] void missing(const char *reason,uint32_t value=0) {
    const char *directory=std::getenv("NHL07_DIAGNOSTIC_DIR");
    if(directory&&g_xbox_mem_offset){
        auto dump=[&](const char *name,const void *data,size_t bytes){
            std::string path=std::string(directory)+"/"+name;
            if(FILE *file=std::fopen(path.c_str(),"wb")){size_t n=std::fwrite(data,1,bytes,file);std::fclose(file);return n==bytes;}return false;
        };
        bool okay=dump("draw-failure-ram.bin",reinterpret_cast<void *>(g_xbox_mem_offset),0x4000000u)&&
            dump("draw-failure-physical.bin",reinterpret_cast<void *>(g_xbox_mem_offset+uintptr_t(0x80000000u)),0x4000000u)&&
            dump("draw-failure-state.bin",before_push.data(),before_push.size()*4);
        if(active_push_end>=active_push_begin&&active_push_end-active_push_begin<=0x80000u)
            okay=dump("draw-failure-push.bin",reinterpret_cast<void *>(g_xbox_mem_offset+uintptr_t(active_push_begin)),active_push_end-active_push_begin)&&okay;
        std::string path=std::string(directory)+"/draw-failure.json";
        if(FILE *file=std::fopen(path.c_str(),"w")){
            std::fprintf(file,"{\"reason\":\"%s\",\"value\":%u,\"push_begin\":%u,\"push_end\":%u,\"register_words\":2048,\"program_words\":544,\"constant_words\":768,\"program_cursor\":%u,\"constant_cursor\":%u}\n",reason,value,active_push_begin,active_push_end,before_program_cursor,before_constant_cursor);std::fclose(file);
        }else okay=false;
        if(okay)std::fprintf(stderr,"[NHL07-GPU-FAILURE-CAPTURE] original RAM, physical data, pre-command state and pending commands saved\n");
    }
    std::fprintf(stderr,"[NHL07-GRAPHICS-MISSING] %s value=%08X\n",reason,value);std::abort();
}
void require(bool okay,const char *reason,uint32_t value=0) {if(!okay)missing(reason,value);}
void *guest(uint32_t address,size_t size) {
    require(size<=0x4000000u,"guest transfer size",size);
    bool low=address>=0x10000 && uint64_t(address)+size<=0x4000000;
    bool physical=address>=0x80000000 && uint64_t(address)+size<=0x84000000;
    require(low||physical,"guest graphics pointer",address);
    return reinterpret_cast<void *>(g_xbox_mem_offset+uintptr_t(address));
}
void *physical(uint32_t address,size_t size) {require(address<0x4000000,"GPU physical address",address);return guest(0x80000000|address,size);}
float floating(uint32_t value) {float f;std::memcpy(&f,&value,4);return f;}
void check(const char *where) {auto error=glGetError();require(error==GL_NO_ERROR,where,error);}
void enable(GLenum feature,bool value){if(value)glEnable(feature);else glDisable(feature);}
bool range(unsigned m,unsigned start,unsigned end) {return m>=start&&m<=end;}
void method(unsigned m,uint32_t value) {
    require(m<0x2000 && !(m&3),"NV097 method alignment",m);
    auto immediate=immediate_vertices.accept(m,value);
    require(immediate!=Nhl07ImmediateResult::Invalid,"immediate vertex sequence",m);
    if(immediate!=Nhl07ImmediateResult::Unrecognized){
        reg(m)=value;if(immediate==Nhl07ImmediateResult::End)draw_immediate_batch(target_width,target_height);return;
    }
    require(!immediate_vertices.active,"state change inside immediate primitive",m);
    // Original SetRenderTarget emits NV097 NO_OPERATION, WAIT_FOR_IDLE,
    // FLIP_STALL and surface descriptors. Native targets own the attachment
    // routing and writeback; retain the exact guest descriptor state here.
    // Names/masks: vendor/xboxrecomp/src/nv2a/nv2a_regs.h (xemu NV2A ABI).
    if(m==0x100){require(value==0,"NV097 no-operation payload",value);}
    else if(m==0x110||m==0x130){Nhl07ProfileScope cost(NHL07_PROFILE_SYNC);require(value==0,"NV097 synchronization payload",value);glFinish();check("NV097 synchronization");}
    else if(m==0x208){
        unsigned color=value&15,type=(value>>8)&15,z=(value>>4)&15;
        require((color==3||color==4||color==5||color==8)&&(type==1||type==2)&&!(value&0xf000)&&
            (z==1||z==2),"surface format",value);
    }
    else if(m==0x20c){require((value&0xffff)!=0,"surface color pitch",value);}
    else if(m==0x210||m==0x214){require(value<0x4000000,"surface physical offset",value);}
    // NV20 LINE_WIDTH (envytools rnndb/graph/nv10_3d.xml, nv10tcl-base,
    // inherited by NV20). It cannot affect filled triangles. Retain the
    // value, and require separate line-width semantics if lines are drawn.
    else if(m==0x380){explicit_line_width=true;}
    else if(m==0x1e9c) {require(value<136,"vertex program load",value);program_cursor=value*4;}
    else if(m==0x1ea4) {require(value<192,"vertex constant load",value);constant_cursor=value*4;}
    else if(range(m,0xb00,0xb7c)) {require(program_cursor<136*4,"vertex program overflow");program[program_cursor++]=value;}
    else if(range(m,0xb80,0xbfc)) {require(constant_cursor<192*4,"vertex constant overflow");constants[constant_cursor++]=value;}
    // NV20 polygon stipple disable; GLES has no polygon-stipple state.
    // Enabled stippling remains unsupported. See xemu issue 705 / nouveau class.
    else if(m==0x147c) {require(value==0,"polygon stipple enabled",value);}
    // Swath width schedules rasterizer work; it does not change pixel values.
    else if(m==0x9f8) {require(value<=4,"raster swath width",value);}
    // NV097_SET_EYE_VECTOR (three floats). Retain it as state; the supported
    // programmable-vertex and NONE/2D/PASSTHROUGH texture paths do not read it.
    // Fixed-function vertices and reflection texture modes still trap below.
    else if(range(m,0x181c,0x1824)) { /* stored in registers below */ }
    else if(range(m,0x260,0x27c)||range(m,0xa60,0xadc)||range(m,0x1720,0x179c)||
            range(m,0x1e40,0x1e5c)||range(m,0xa20,0xa2c)||range(m,0xaf0,0xafc)||
            range(m,0x1b00,0x1bfc)||range(m,0x2c0,0x2fc)) { /* state decoded below */ }
    else switch(m) {
        case 0x200:case 0x204:case 0x288:case 0x28c:case 0x290:case 0x294:case 0x2a4:case 0x2a8:case 0x2b4:
        case 0x300:case 0x304:case 0x308:case 0x30c:case 0x310:case 0x314:case 0x318:case 0x31c:
        case 0x320:case 0x324:case 0x32c:case 0x330:case 0x334:case 0x338:case 0x33c:case 0x340:
        case 0x344:case 0x348:case 0x34c:case 0x350:case 0x354:case 0x358:case 0x35c:case 0x360:
        case 0x364:case 0x368:case 0x36c:case 0x370:case 0x374:case 0x378:case 0x37c:case 0x384:
        case 0x388:case 0x38c:case 0x390:case 0x394:case 0x398:case 0x39c:case 0x3a0:case 0x3b8:case 0x43c:
        case 0x17bc:case 0x17c0:case 0x17f8:case 0x1d78:case 0x1d7c:case 0x1d84:case 0x1e20:case 0x1e24:
        case 0x1e60:case 0x1e70:case 0x1e74:case 0x1e78:case 0x1e94:case 0x1e98:case 0x1ea0: break;
        default:std::fprintf(stderr,"[NHL07-NV097] method=%04X data=%08X\n",m,value);missing("untranslated NV097 method",m);
    }
    reg(m)=value;
}
void consume(uint32_t begin,uint32_t end) {
    Nhl07ProfileScope cost(NHL07_PROFILE_CONSUME);
    require(end>=begin&&(end-begin)%4==0&&end-begin<=0x80000,"push buffer bounds",end);
    auto words=static_cast<const uint32_t *>(guest(begin,end-begin));unsigned count=(end-begin)/4;
    active_push_begin=begin;active_push_end=end;
    std::memcpy(before_push.data(),registers,sizeof(registers));
    std::memcpy(before_push.data()+2048,program,sizeof(program));
    std::memcpy(before_push.data()+2048+136*4,constants,sizeof(constants));
    before_program_cursor=program_cursor;before_constant_cursor=constant_cursor;
    for(unsigned position=0;position<count;) {
        uint32_t header=words[position++],kind=header&0xe0030003u,n=(header>>18)&0x7ff,m=header&0x1ffc;
        require((kind==0||kind==0x40000000)&&!(header&0xe000),"unsupported push packet",header);
        require(position+n<=count,"truncated push packet",header);
        for(unsigned i=0;i<n;++i)method(m+(kind==0?i*4:0),words[position++]);
    }
}
void color(uint32_t value,float *out) {out[0]=((value>>16)&255)/255.f;out[1]=((value>>8)&255)/255.f;out[2]=(value&255)/255.f;out[3]=(value>>24)/255.f;}
void uniform(unsigned binding,const void *bytes,size_t size) {
    Nhl07ProfileScope cost(NHL07_PROFILE_UNIFORM);
    bool dedup=draw_dedup_enabled();auto &snapshot=uniform_snapshots[binding];
    if(!dedup||!snapshot.valid||snapshot.bytes.size()!=size||(size&&std::memcmp(snapshot.bytes.data(),bytes,size)!=0)){
        glBindBuffer(GL_UNIFORM_BUFFER,uniforms[binding]);glBufferData(GL_UNIFORM_BUFFER,size,bytes,GL_STREAM_DRAW);
        nhl07_profile_bytes(NHL07_PROFILE_UNIFORM,size);++draw_preparation_stats.uniform_uploads;
        if(dedup){if(size)snapshot.bytes.assign(static_cast<const uint8_t *>(bytes),static_cast<const uint8_t *>(bytes)+size);else snapshot.bytes.clear();snapshot.valid=true;}
        else snapshot.valid=false; // A later 0 -> 1 transition must observe baseline uploads.
    }else ++draw_preparation_stats.uniform_reuses;
    // Indexed binding points are independent of the generic buffer target.
    // Restore them even when the private buffer contents are already identical.
    glBindBufferBase(GL_UNIFORM_BUFFER,binding,uniforms[binding]);
}
GLenum wrap(unsigned value) {switch(value){case 1:return GL_REPEAT;case 2:return GL_MIRRORED_REPEAT;case 3:return GL_CLAMP_TO_EDGE;default:missing("texture wrap",value);}}
void upload_texture(unsigned stage,NV2APSConstants &ps) {
    Nhl07ProfileScope texture_cost(NHL07_PROFILE_TEXTURE);
    unsigned base=0x1b00+stage*64,format=reg(base+4),type=(format>>8)&255;
    require(((format>>4)&15)==2 && !(format&4),"non-2D texture",format);
    RecompD3dTextureDesc desc{};desc.format_byte=type;desc.data=reg(base);
    desc.width=1u<<((format>>20)&15);desc.height=1u<<((format>>24)&15);
    desc.mip_levels=(format>>16)&15;
    if(type==0x11||type==0x12||type==0x1e||type==0x13||type==0x1b||type==0x1f||type==0x24||type==0x25) {
        desc.linear=true;desc.width=reg(base+0x1c)>>16;desc.height=reg(base+0x1c)&0xffff;desc.pitch=reg(base+0x10)>>16;
        ps.texture_size[stage][0]=desc.width;ps.texture_size[stage][1]=desc.height;
    }
    require(desc.mip_levels>=1&&desc.mip_levels<=13,"texture mip count",desc.mip_levels);
    require(desc.data!=0&&desc.data<0x4000000,"texture address",desc.data);
    nhl07_targets_prepare_texture(desc.data);
    static std::map<std::array<uint32_t,5>,unsigned> observed;
    std::array<uint32_t,5> key{{desc.data,format,reg(base+0x10),reg(base+0x1c),reg(base+0x20)}};
    bool novel=observed.size()<512&&observed.emplace(key,observed.size()+1).second;
    if(novel)
        std::fprintf(stderr,"[NHL07-TEXTURE-DESC] id=%u stage=%u data=%08X format=%02X size=%ux%u linear=%u pitch=%u mips=%u palette=%08X\n",
            observed[key],stage,desc.data,type,desc.width,desc.height,desc.linear,desc.pitch,desc.mip_levels,reg(base+0x20));
    const void *palette=nullptr;size_t palette_bytes=0;
    if(type==0x0b) {
        unsigned control=reg(base+0x20);
        require((control&0xc)==0,"palette length (only 256 entries supported)",control);
        palette_bytes=1024;palette=physical(control&0xffffffc0u,palette_bytes);
        static bool traced=false;if(!traced){std::fprintf(stderr,"[NHL07-PALETTE] stage=%u control=%08X entries=256\n",stage,control);traced=true;}
    }
    bool probe=novel&&std::getenv("NHL07_TEXTURE_PROBES");std::vector<uint8_t> preview;GLuint object;
    unsigned sampled_min_filter=(reg(base+20)>>16)&255;
    require(texture_cache.bind(stage,desc,physical(desc.data,0x4000000-desc.data),0x4000000-desc.data,
        palette,palette_bytes,uint64_t(draws)+1,object,probe?&preview:nullptr,
        upload_flag("NHL07_TEXTURE_BASE_COMPARE")&&(sampled_min_filter==1||sampled_min_filter==2)),"texture cache update",type);
    const auto &cost=texture_cache.stats();
    if((cost.hits+cost.misses)%10000==0)
        std::fprintf(stderr,"[NHL07-TEXTURE-CACHE] hits=%llu misses=%llu uploads=%llu bytes=%llu decode_ms=%.3f resident=%zu compared_bytes=%llu skipped_mip_bytes=%llu base_only_hits=%llu base_only_binds=%llu full_binds=%llu mipped_base_binds=%llu mipped_full_binds=%llu base_compared_bytes=%llu full_compared_bytes=%llu\n",
            (unsigned long long)cost.hits,(unsigned long long)cost.misses,(unsigned long long)cost.uploads,
            (unsigned long long)cost.uploaded_bytes,double(cost.decode_nanoseconds)/1000000.,cost.resident_bytes,
            (unsigned long long)cost.compared_bytes,(unsigned long long)cost.skipped_mip_bytes,(unsigned long long)cost.base_only_hits,
            (unsigned long long)cost.base_only_binds,(unsigned long long)cost.full_binds,(unsigned long long)cost.mipped_base_binds,
            (unsigned long long)cost.mipped_full_binds,(unsigned long long)cost.base_compared_bytes,(unsigned long long)cost.full_compared_bytes);
    if(probe&&!preview.empty()){
        static std::string folder;static size_t saved;
        const char *directory=std::getenv("NHL07_DIAGNOSTIC_DIR");
        if(directory&&folder.empty()){
            folder=std::string(directory)+"/texture-probes-"+std::to_string(getpid());mkdir(folder.c_str(),0775);
            std::fprintf(stderr,"[NHL07-TEXTURE-PROBES] directory=%s\n",folder.c_str());
        }
        if(!folder.empty()&&saved+preview.size()<=64u*1024u*1024u){
            auto name=folder+"/texture-"+std::to_string(observed[key])+".ppm";
            if(FILE *file=std::fopen(name.c_str(),"wb")){
                std::fprintf(file,"P6\n%u %u\n255\n",desc.width,desc.height);
                std::vector<uint8_t> rgb(preview.size()/4*3);
                for(size_t p=0;p<preview.size();p+=4)std::memcpy(rgb.data()+p/4*3,preview.data()+p,3);
                std::fwrite(rgb.data(),1,rgb.size(),file);
                std::fclose(file);saved+=preview.size();
            }
            if(FILE *file=std::fopen((folder+"/index.tsv").c_str(),"a")){
                std::fprintf(file,"%u\t%u\t%08X\t%02X\t%u\t%u\t%u\t%u\t%08X\n",observed[key],stage,desc.data,type,desc.width,desc.height,desc.mip_levels,desc.pitch,reg(base+0x20));std::fclose(file);
            }
        }
    }
    GLenum wrap_s=wrap(reg(base+8)&15),wrap_t=wrap((reg(base+8)>>8)&15);
    const GLenum minfilters[]={0,GL_NEAREST,GL_LINEAR,GL_NEAREST_MIPMAP_NEAREST,GL_LINEAR_MIPMAP_NEAREST,GL_NEAREST_MIPMAP_LINEAR,GL_LINEAR_MIPMAP_LINEAR};
    unsigned min=(reg(base+20)>>16)&255,mag=(reg(base+20)>>24)&15;
    require(min>=1&&min<=6&&mag>=1&&mag<=2,"texture filter",reg(base+20));
    bool dedup=draw_dedup_enabled();auto &snapshot=sampler_snapshots[stage];
    std::array<uint32_t,3> words{{reg(base+8),reg(base+12),reg(base+20)}};
    glBindSampler(stage,samplers[stage]);
    if(!dedup||!snapshot.valid||snapshot.words!=words){
        glSamplerParameteri(samplers[stage],GL_TEXTURE_WRAP_S,wrap_s);
        glSamplerParameteri(samplers[stage],GL_TEXTURE_WRAP_T,wrap_t);
        glSamplerParameteri(samplers[stage],GL_TEXTURE_MIN_FILTER,minfilters[min]);
        glSamplerParameteri(samplers[stage],GL_TEXTURE_MAG_FILTER,mag==1?GL_NEAREST:GL_LINEAR);
        glSamplerParameterf(samplers[stage],GL_TEXTURE_MIN_LOD,float((reg(base+12)>>18)&0xfff)/256.f);
        glSamplerParameterf(samplers[stage],GL_TEXTURE_MAX_LOD,float((reg(base+12)>>6)&0xfff)/256.f);
        ++draw_preparation_stats.sampler_updates;snapshot.words=words;snapshot.valid=dedup;
    }
    ps.alpha_only[stage]=type==0x19||type==0x1f;
    check("texture upload");
}
void raster() {
    Nhl07ProfileScope cost(NHL07_PROFILE_RASTER);
    require(!reg(0x314)&&!reg(0x318)&&!reg(0x31c)&&!reg(0x320)&&!reg(0x324)&&!reg(0x330)&&!reg(0x334),"fixed-function/smoothing raster feature");
    require(!reg(0x1d84)&&!reg(0x1d78)&&!reg(0x1d7c),"unimplemented raster extension");
    require(!reg(0x17bc),"logic operation enabled",reg(0x17c0));
    require(reg(0x37c)==0x1d01,"flat shading",reg(0x37c));
    require(!reg(0x2a4),"fog requires semantics validation",reg(0x2a4));
    enable(GL_BLEND,reg(0x304));glBlendFunc(reg(0x344),reg(0x348));glBlendEquation(reg(0x350));
    float blend[4];color(reg(0x34c),blend);glBlendColor(blend[0],blend[1],blend[2],blend[3]);
    enable(GL_CULL_FACE,reg(0x308));if(reg(0x308)){glCullFace(reg(0x39c));glFrontFace(reg(0x3a0));}
    enable(GL_DEPTH_TEST,reg(0x30c));glDepthFunc(reg(0x354));glDepthMask(reg(0x35c)!=0);
    enable(GL_DITHER,reg(0x310));enable(GL_STENCIL_TEST,reg(0x32c));
    glStencilMask(reg(0x360));glStencilFunc(reg(0x364),reg(0x368),reg(0x36c));glStencilOp(reg(0x370),reg(0x374),reg(0x378));
    auto mask=reg(0x358);glColorMask((mask>>16)&1,(mask>>8)&1,mask&1,(mask>>24)&1);
    enable(GL_POLYGON_OFFSET_FILL,reg(0x338));glPolygonOffset(floating(reg(0x384)),floating(reg(0x388)));
    // Window clip registers are explicitly checked, rather than ignored.
    require(reg(0x2b4)==0,"exclusive window clips",reg(0x2b4));
    unsigned h=reg(0x2c0),v=reg(0x2e0);glEnable(GL_SCISSOR_TEST);
    unsigned x=h&0xfff,y=v&0xfff,w=((h>>16)&0xfff)+1-x,height=((v>>16)&0xfff)+1-y;
    unsigned target_height=MEM32(0x785180+0x958);
    unsigned scale=nhl07_targets_scale();glScissor(x*scale,(int(target_height)-int(y+height))*int(scale),w*scale,height*scale);
    check("raster state");
}
void capture(unsigned width,unsigned height,const char *name="first-render",unsigned present=0) {
    std::vector<uint8_t> rgba(size_t(width)*height*4);nhl07_targets_read_pixels(width,height,rgba.data());check("draw readback");
    unsigned nonblack=0;for(size_t i=0;i<rgba.size();i+=4)if(rgba[i]||rgba[i+1]||rgba[i+2])++nonblack;
    const char *base=std::getenv("NHL07_DIAGNOSTIC_DIR");std::string folder=base?base:".";
    std::vector<uint8_t> rgb(size_t(width)*height*3);
    for(unsigned y=0;y<height;++y)for(unsigned x=0;x<width;++x)std::memcpy(rgb.data()+(size_t(y)*width+x)*3,rgba.data()+(size_t(height-1-y)*width+x)*4,3);
    FILE *f=std::fopen((folder+"/"+name+".ppm").c_str(),"wb");
    if(f){std::fprintf(f,"P6\n%u %u\n255\n",width,height);std::fwrite(rgb.data(),1,rgb.size(),f);std::fclose(f);}
    f=std::fopen((folder+"/"+name+".json").c_str(),"w");
    if(f){if(present)std::fprintf(f,"{\"present\":%u,",present);else std::fputc('{',f);
        std::fprintf(f,"\"width\":%u,\"height\":%u,\"nonblack_pixels\":%u,\"native_draws\":%u,\"gameplay_verified\":false}\n",width,height,nonblack,draws);std::fclose(f);}
    if(!present)std::fprintf(stderr,"[NHL07-NATIVE-DRAW] first GPU readback %ux%u nonblack_pixels=%u\n",width,height,nonblack);
    else std::fprintf(stderr,"[NHL07-FRAME] captured present=%u native_draws=%u nonblack_pixels=%u\n",present,draws,nonblack);
}
void vertex_feedback(unsigned count) {
    require(count<=65536,"validation vertex count",count);
    GLuint buffer;glGenBuffers(1,&buffer);glBindBuffer(GL_TRANSFORM_FEEDBACK_BUFFER,buffer);
    size_t bytes=size_t(count)*12*sizeof(float);
    glBufferData(GL_TRANSFORM_FEEDBACK_BUFFER,bytes,nullptr,GL_STREAM_READ);
    glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER,0,buffer);glEnable(GL_RASTERIZER_DISCARD);
    glBeginTransformFeedback(GL_POINTS);glDrawArrays(GL_POINTS,0,count);glEndTransformFeedback();glDisable(GL_RASTERIZER_DISCARD);
    check("vertex validation transform feedback");
    auto data=glMapBufferRange(GL_TRANSFORM_FEEDBACK_BUFFER,0,bytes,GL_MAP_READ_BIT);require(data,"map vertex feedback");
    const char *folder=std::getenv("NHL07_DIAGNOSTIC_DIR");std::string path=std::string(folder?folder:".")+"/first-vertex-feedback.bin";
    if(FILE *file=std::fopen(path.c_str(),"wb")){std::fwrite(data,1,bytes,file);std::fclose(file);}
    glUnmapBuffer(GL_TRANSFORM_FEEDBACK_BUFFER);glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER,0,0);glDeleteBuffers(1,&buffer);
    std::fprintf(stderr,"[NHL07-VERTEX-VALIDATION] GPU outputs saved vertices=%u stride=48\n",count);
}
}
extern "C" void nhl07_gpu_consume(uint32_t begin,uint32_t end,unsigned width,unsigned height) {target_width=width;target_height=height;consume(begin,end);}
extern "C" int nhl07_gpu_flush_pending_draws(uint32_t begin,uint32_t end,unsigned width,unsigned height){
    require(end>=begin&&(end-begin)%4==0&&end-begin<=0x80000,"push buffer bounds",end);
    auto words=static_cast<const uint32_t *>(guest(begin,end-begin));unsigned count=(end-begin)/4;
    bool draws_pending=immediate_vertices.active;
    for(unsigned position=0;position<count;){
        uint32_t header=words[position++];unsigned n=(header>>18)&0x7ff,m=header&0x1ffc;
        require(position+n<=count,"truncated push packet",header);
        unsigned last=(header&0x40000000u)||!n?m:m+(n-1)*4;
        if((m<=0x17fc&&last>=0x17fc)||(m<=0x1810&&last>=0x1810)||(m<=0x1818&&last>=0x1818))draws_pending=true;
        position+=n;
    }
    if(draws_pending){nhl07_gpu_consume(begin,end,width,height);require(!immediate_vertices.active,"incomplete immediate batch at target or clear");}
    return draws_pending;
}
extern "C" void nhl07_gpu_capture_frame(unsigned width,unsigned height,unsigned present) {capture(width,height,"latest-frame",present);}
static void draw_from_state(const uint32_t *args,unsigned width,unsigned height,const std::vector<Nhl07ImmediateVertex> *immediate,const uint16_t *host_indices) {
    Nhl07ProfileScope total_cost(NHL07_PROFILE_DRAW);
    require(!explicit_line_width||args[0]<2||args[0]>4,"explicit line-width rasterization",reg(0x380));
    require((reg(0x1e94)&3)==2&&!reg(0x1e98),"vertex execution mode",reg(0x1e94));
    if(!array){glGenVertexArrays(1,&array);glGenBuffers(16,attributes);glGenBuffers(1,&elements);glGenBuffers(2,uniforms);glGenSamplers(4,samplers);}
    glBindVertexArray(array);
    unsigned start=reg(0x1ea0);require(start<136,"program start",start);
    const bool cache_preparation=upload_flag("NHL07_SHADER_PREP_CACHE");
    NV2AVshProgram uncached_vs;
    const NV2AVshProgram *parsed_vertex=&uncached_vs;
    uint64_t vertex_identity=0;
    auto decode_vertex=[](const uint32_t *words,size_t count,NV2AVshProgram &decoded){
        Nhl07ProfileScope cost(NHL07_PROFILE_PARSE);d3d8_vsh_parse(words,int(count/4),&decoded);
    };
    if(cache_preparation){
        const auto *cached=vertex_source_cache.get(program+start*4,size_t(136-start)*4,decode_vertex);
        require(cached,"vertex source cache bounds");parsed_vertex=&cached->value;vertex_identity=cached->identity;
    }else decode_vertex(program+start*4,size_t(136-start)*4,uncached_vs);
    const auto &vs=*parsed_vertex;
    require(!vs.unsupported&&vs.length&&vs.insns[vs.length-1].is_final,"unsupported vertex microcode");
    require((reg(0x1e60)&15)<=8&&(reg(0x1e60)&15)>=1,"combiner count",reg(0x1e60));
    const auto pixel_words=nhl07_shader_pixel_words([](unsigned method){return reg(method);});
    NV2APSConstants pc{};
    // Colors remain current uniform data even when CPU source preparation hits.
    for(unsigned i=0;i<8;++i){color(reg(0xa60+i*4),pc.c0[i]);color(reg(0xa80+i*4),pc.c1[i]);}
    color(reg(0x1e20),pc.final_c0);color(reg(0x1e24),pc.final_c1);
    pc.alpha_ref=(reg(0x340)&255)/255.f;pc.alpha_func=reg(0x33c)-0x1ff;pc.alpha_test_enable=reg(0x300);
    for(unsigned i=0;i<4;++i) {
        unsigned mode=(reg(0x1e70)>>(i*5))&31;
        require(mode==0||mode==1||mode==4,"texture shader mode",mode);
        if(mode==1){require(reg(0x1b0c+i*64)&0x40000000,"texture shader without texture",i);upload_texture(i,pc);}
    }
    uint16_t bgra_inputs=0;
    for(unsigned i=0;!immediate&&i<16;++i)if((vs.inputs_read>>i)&1) {
        auto format=reg(0x1760+i*4);Nhl07VertexFormat decoded{};
        require(nhl07_vertex_format(format,decoded),"vertex attribute format",format);
        if(decoded.bgra)bgra_inputs|=1u<<i;
    }
    auto prepare_shader=[&](const uint32_t *,size_t,Nhl07PreparedShaderSource &prepared){
        nhl07_prepare_shader_source(vs,bgra_inputs,program+start*4,pixel_words,prepared);
    };
    Nhl07PreparedShaderSource uncached_shader;
    const Nhl07PreparedShaderSource *prepared=&uncached_shader;
    if(cache_preparation){
        const auto words=nhl07_shader_preparation_words(vertex_identity,bgra_inputs,vs.integer_inputs,pixel_words);
        const auto *cached=shader_preparation_cache.get(words.data(),words.size(),prepare_shader);
        require(cached,"shader preparation cache bounds");prepared=&cached->value;
    }else prepare_shader(nullptr,0,uncached_shader);
    const auto &key=prepared->pipeline_key;
    auto found=pipelines.find(key);
    if(found==pipelines.end()) {NativeProgram compiled;std::string error;
        std::vector<char> vtext(262144),ptext(262144);
        NV2AVshProgram source_vs=vs;source_vs.bgra_inputs=bgra_inputs;
        int vn=d3d8_vsh_generate_hlsl(&source_vs,vtext.data(),vtext.size()),pn=d3d8_combiners_generate_hlsl(&prepared->pixel,ptext.data(),ptext.size());
        require(vn>0&&vn<int(vtext.size()-1)&&pn>0&&pn<int(ptext.size()-1),"shader text overflow");
        if(!nhl07_compile_program(vtext.data(),ptext.data(),compiled,error)){std::fprintf(stderr,"[NHL07-SHADER] %s\n",error.c_str());missing("shader compilation");}
        found=pipelines.emplace(key,std::move(compiled)).first;
        std::fprintf(stderr,"[NHL07-SHADER-CACHE] pipelines=%zu draw=%u\n",pipelines.size(),draws+1);
    }
    auto &pipeline=found->second;glUseProgram(pipeline.program);uniform(0,&pc,sizeof(pc));
    struct {uint32_t c[192*4];float offset[4],scale[4];} vc{};std::memcpy(vc.c,constants,sizeof(constants));
    unsigned dev=0x785180;float sx=floating(MEM32(dev+0x95c)),sy=floating(MEM32(dev+0x960)),z=floating(MEM32(dev+0x948));
    vc.scale[0]=MEM32(dev+0xee8)*sx*.5f;vc.scale[1]=MEM32(dev+0xeec)*sy*-.5f;
    vc.scale[2]=(floating(MEM32(dev+0xef4))-floating(MEM32(dev+0xef0)))*z;
    vc.offset[0]=MEM32(dev+0xee0)*sx+floating(MEM32(dev+0xef8))+vc.scale[0];
    vc.offset[1]=MEM32(dev+0xee4)*sy+floating(MEM32(dev+0xefc))-vc.scale[1];vc.offset[2]=floating(MEM32(dev+0xef0))*z;
    require(vc.scale[0]&&vc.scale[1]&&vc.scale[2],"degenerate viewport");uniform(1,&vc,sizeof(vc));
    unsigned scale=nhl07_targets_scale();glViewport(MEM32(dev+0xee0)*scale,(height-MEM32(dev+0xee4)-MEM32(dev+0xeec))*scale,MEM32(dev+0xee8)*scale,MEM32(dev+0xeec)*scale);
    glDepthRangef(floating(MEM32(dev+0xef0)),floating(MEM32(dev+0xef4)));
    require(args[1]>0&&args[1]<=1000000,"index count",args[1]);
    auto indices=immediate?host_indices:static_cast<const uint16_t *>(guest(args[2],size_t(args[1])*2));
    unsigned maximum=*std::max_element(indices,indices+args[1]);
    GLintptr index_offset=0;bool streaming=false,cache_buffers=false;
    {Nhl07ProfileScope cost(NHL07_PROFILE_BUFFERS);
    {Nhl07ProfileScope configure(NHL07_PROFILE_ATTRIBUTE_CONFIG);
    for(unsigned i=0;i<16;++i)glDisableVertexAttribArray(i);}
    bool shared_immediate=immediate&&draw_dedup_enabled(),immediate_uploaded=false;
    struct ActiveInput {unsigned reg;GLint location;Nhl07VertexFormat decoded;};
    std::array<ActiveInput,16> active{};std::array<Nhl07DrawUploadInput,16> spans{};unsigned active_count=0;
    if(!immediate)for(auto input:pipeline.inputs)if(input.location>=0){
        require(active_count<16&&input.reg<16,"active vertex input count",active_count);
        Nhl07VertexFormat decoded{};unsigned format=reg(0x1760+input.reg*4);
        require(nhl07_vertex_format(format,decoded),"vertex attribute format",format);
        active[active_count]={input.reg,input.location,decoded};
        spans[active_count++]={reg(0x1720+input.reg*4),decoded.stride,decoded.element_bytes,decoded.scalar_bytes};
    }
    Nhl07DrawUploadPlan plan{};bool merged=!immediate&&upload_flag("NHL07_MERGE_UPLOAD");
    if(merged)require(nhl07_draw_upload_plan(spans.data(),active_count,maximum,plan),"vertex upload ranges");
    size_t reservation=Nhl07StreamUpload::aligned_size(size_t(args[1])*2);
    if(immediate){
        unsigned uploads=0;for(auto input:pipeline.inputs)if(input.location>=0)++uploads;
        if(shared_immediate&&uploads)uploads=1;
        reservation+=uploads*Nhl07StreamUpload::aligned_size(immediate->size()*sizeof(Nhl07ImmediateVertex));
    }else if(merged){
        for(unsigned i=0;i<plan.group_count;++i)reservation+=Nhl07StreamUpload::aligned_size(plan.groups[i].bytes);
    }else{
        for(unsigned i=0;i<active_count;++i)reservation+=Nhl07StreamUpload::aligned_size(size_t(maximum)*spans[i].stride+spans[i].element_bytes);
    }
    // Experimental, explicitly enabled per-draw packing. Every byte comes
    // from the current sources; no guest-memory lifetime or immutability cache.
    constexpr size_t packed_limit=64u*1024u*1024u;
    bool packing=upload_flag("NHL07_PACK_UPLOAD")&&reservation<=packed_limit;
    if(packing&&packed_capacity<reservation){
        size_t capacity=packed_capacity?packed_capacity:4096;
        while(capacity<reservation)capacity=std::min(packed_limit,capacity*2);
        // Old contents are never reused. Free before growing to keep staging
        // allocation (including transient growth) bounded by 64 MiB.
        packed_staging.reset();packed_capacity=0;
        packed_staging.reset(new(std::nothrow) uint8_t[capacity]);
        if(packed_staging)packed_capacity=capacity;else packing=false;
    }
    if(upload_flag("NHL07_PACK_UPLOAD")&&!packing)++draw_preparation_stats.packed_fallbacks;
    size_t packed_used=0;
    struct PendingAttribute {GLint location;Nhl07VertexFormat decoded;GLintptr offset;};
    std::array<PendingAttribute,16> pending{};unsigned pending_count=0;
    if(upload_flag("NHL07_STREAM_UPLOAD")){
        Nhl07ProfileScope upload(NHL07_PROFILE_BUFFER_UPLOAD);streaming=stream_upload.begin_draw(reservation);
        require(streaming||reservation>64u*1024u*1024u,"stream draw reservation");
    }
    cache_buffers=upload_flag("NHL07_EXACT_BUFFER_CACHE")&&!packing&&!streaming;
    if(cache_buffers)exact_buffer_cache.begin_draw();
    auto upload=[&](GLuint fallback,const void *source,size_t bytes){
        Nhl07StreamUpload::Range range{};
        if(packing){
            Nhl07ProfileScope timer(NHL07_PROFILE_BUFFER_UPLOAD);
            const size_t padded=Nhl07StreamUpload::aligned_size(bytes);
            require(packed_used<=reservation&&padded<=reservation-packed_used,"packed draw slice bounds");
            range={0,GLintptr(packed_used),GLsizeiptr(bytes)};
            if(bytes)std::memcpy(packed_staging.get()+packed_used,source,bytes);
            if(padded>bytes)std::memset(packed_staging.get()+packed_used+bytes,0,padded-bytes);
            packed_used+=padded;++draw_preparation_stats.packed_slices;return range;
        }
        if(cache_buffers){
            GLuint object;auto before=exact_buffer_cache.stats().uploads;
            if(exact_buffer_cache.bind(GL_ARRAY_BUFFER,source,bytes,object)){
                draw_preparation_stats.data_uploads+=exact_buffer_cache.stats().uploads-before;
                return Nhl07StreamUpload::Range{object,0,GLsizeiptr(bytes)};
            }
        }
        Nhl07ProfileScope timer(NHL07_PROFILE_BUFFER_UPLOAD);
        if(streaming)require(stream_upload.upload(source,bytes,range),"stream buffer upload");
        else{glBindBuffer(GL_ARRAY_BUFFER,fallback);glBufferData(GL_ARRAY_BUFFER,bytes,source,GL_STREAM_DRAW);range={fallback,0,GLsizeiptr(bytes)};}
        ++draw_preparation_stats.data_uploads;
        nhl07_profile_bytes(NHL07_PROFILE_BUFFERS,bytes);nhl07_profile_bytes(NHL07_PROFILE_BUFFER_UPLOAD,bytes);
        return range;
    };
    auto configure_now=[&](GLint location,const Nhl07VertexFormat &decoded,const Nhl07StreamUpload::Range &range,GLintptr offset){
        Nhl07ProfileScope timer(NHL07_PROFILE_ATTRIBUTE_CONFIG);
        glBindBuffer(GL_ARRAY_BUFFER,range.buffer);glEnableVertexAttribArray(location);
        glVertexAttribPointer(location,decoded.components,decoded.type,decoded.normalized,decoded.stride,reinterpret_cast<void *>(uintptr_t(range.offset+offset)));
    };
    auto configure=[&](GLint location,const Nhl07VertexFormat &decoded,const Nhl07StreamUpload::Range &range,GLintptr offset){
        if(!packing){configure_now(location,decoded,range,offset);return;}
        require(pending_count<16,"packed draw attribute count",pending_count);
        pending[pending_count++]={location,decoded,range.offset+offset};
    };
    if(immediate){
    Nhl07StreamUpload::Range shared{};
    for(auto input:pipeline.inputs)if(input.location>=0) {
        if(immediate){
            if(!shared_immediate||!immediate_uploaded){
                shared=upload(attributes[shared_immediate?0:input.reg],immediate->data(),immediate->size()*sizeof(Nhl07ImmediateVertex));
                ++draw_preparation_stats.immediate_uploads;immediate_uploaded=true;
            }
            Nhl07VertexFormat decoded{4,4,16,sizeof(Nhl07ImmediateVertex),GL_FLOAT,GL_FALSE,false};
            configure(input.location,decoded,shared,input.reg*16);
            continue;
        }
    }
    }else if(merged){
        std::array<Nhl07StreamUpload::Range,16> uploaded{};
        for(unsigned g=0;g<plan.group_count;++g){const auto &group=plan.groups[g];uploaded[g]=upload(attributes[g],physical(group.address,group.bytes),group.bytes);}
        for(unsigned i=0;i<active_count;++i){const auto binding=plan.bindings[i];configure(active[i].location,active[i].decoded,uploaded[binding.group],binding.offset);}
        nhl07_profile_bytes(NHL07_PROFILE_BUFFER_SOURCE,plan.original_bytes);
    }else{
        for(unsigned i=0;i<active_count;++i){const auto &span=spans[i];size_t bytes=size_t(maximum)*span.stride+span.element_bytes;
            auto range=upload(attributes[active[i].reg],physical(span.address,bytes),bytes);configure(active[i].location,active[i].decoded,range,0);
            nhl07_profile_bytes(NHL07_PROFILE_BUFFER_SOURCE,bytes);
        }
    }
    {
    if(packing){
        auto index=upload(elements,indices,size_t(args[1])*2);
        require(packed_used==reservation,"packed draw reservation accounting");
        Nhl07StreamUpload::Range range{};
        {Nhl07ProfileScope timer(NHL07_PROFILE_BUFFER_UPLOAD);
        if(streaming)require(stream_upload.upload(packed_staging.get(),packed_used,range),"packed stream upload");
        else{
            if(!packed_buffer)glGenBuffers(1,&packed_buffer);
            require(packed_buffer!=0,"packed vertex/index buffer");
            glBindBuffer(GL_ARRAY_BUFFER,packed_buffer);glBufferData(GL_ARRAY_BUFFER,packed_used,packed_staging.get(),GL_STREAM_DRAW);
            range={packed_buffer,0,GLsizeiptr(packed_used)};
        }
        ++draw_preparation_stats.data_uploads;++draw_preparation_stats.packed_draws;draw_preparation_stats.packed_bytes+=packed_used;
        nhl07_profile_bytes(NHL07_PROFILE_BUFFERS,packed_used);nhl07_profile_bytes(NHL07_PROFILE_BUFFER_UPLOAD,packed_used);}
        for(unsigned i=0;i<pending_count;++i){const auto &attribute=pending[i];configure_now(attribute.location,attribute.decoded,range,attribute.offset);}
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,range.buffer);index_offset=range.offset+index.offset;
    }else{
        bool cached=false;
        if(cache_buffers){GLuint object;auto before=exact_buffer_cache.stats().uploads;
            cached=exact_buffer_cache.bind(GL_ELEMENT_ARRAY_BUFFER,indices,size_t(args[1])*2,object);
            if(cached)draw_preparation_stats.data_uploads+=exact_buffer_cache.stats().uploads-before;
        }
        if(!cached){
            Nhl07ProfileScope timer(NHL07_PROFILE_BUFFER_UPLOAD);
            if(streaming){Nhl07StreamUpload::Range range{};require(stream_upload.upload(indices,size_t(args[1])*2,range),"stream index upload");glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,range.buffer);index_offset=range.offset;}
            else{glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,elements);glBufferData(GL_ELEMENT_ARRAY_BUFFER,args[1]*2,indices,GL_STREAM_DRAW);}
            ++draw_preparation_stats.data_uploads;
            nhl07_profile_bytes(NHL07_PROFILE_BUFFERS,args[1]*2);nhl07_profile_bytes(NHL07_PROFILE_BUFFER_UPLOAD,args[1]*2);
        }
    }}}
    raster();GLenum primitive;
    switch(args[0]){case 1:primitive=GL_POINTS;break;case 2:primitive=GL_LINES;break;case 3:primitive=GL_LINE_LOOP;break;case 4:primitive=GL_LINE_STRIP;break;
        case 5:primitive=GL_TRIANGLES;break;case 6:primitive=GL_TRIANGLE_STRIP;break;case 7:primitive=GL_TRIANGLE_FAN;break;default:missing("primitive topology",args[0]);}
    check("draw setup");if(!draws)vertex_feedback(maximum+1);
    {Nhl07ProfileScope cost(NHL07_PROFILE_SUBMIT);glDrawElements(primitive,args[1],GL_UNSIGNED_SHORT,reinterpret_cast<void *>(uintptr_t(index_offset)));check("draw elements");}
    if(streaming)require(stream_upload.end_draw(),"stream draw completion");
    nhl07_targets_color_changed();++draws;
    if(cache_preparation&&(draws==1||draws%6000==0)){
        const auto &v=vertex_source_cache.stats();const auto &p=shader_preparation_cache.stats();
        std::fprintf(stderr,"[NHL07-SHADER-PREP] vertex_hits=%llu vertex_misses=%llu preparation_hits=%llu preparation_misses=%llu capacities=8/32\n",
            (unsigned long long)v.hits,(unsigned long long)v.misses,(unsigned long long)p.hits,(unsigned long long)p.misses);
    }
    if(cache_buffers&&(draws==1||draws%6000==0)){
        const auto &b=exact_buffer_cache.stats();
        std::fprintf(stderr,"[NHL07-EXACT-BUFFER-CACHE] hits=%llu misses=%llu updates=%llu uploads=%llu uploaded_bytes=%llu compared_bytes=%llu evictions=%llu fallbacks=%llu pinned_fallbacks=%llu snapshot_bytes=%zu gpu_bytes=%zu entries=%zu\n",
            (unsigned long long)b.hits,(unsigned long long)b.misses,(unsigned long long)b.updates,(unsigned long long)b.uploads,
            (unsigned long long)b.uploaded_bytes,(unsigned long long)b.compared_bytes,(unsigned long long)b.evictions,
            (unsigned long long)b.fallbacks,(unsigned long long)b.pinned_fallbacks,b.snapshot_bytes,b.gpu_bytes,b.resident_entries);
    }
    if(draws<=8)std::fprintf(stderr,"[NHL07-NATIVE-DRAW] draw=%u primitive=%u indices=%u vertex_instructions=%d\n",draws,args[0],args[1],vs.length);
    if(draws==1)capture(width,height);
}
static void draw_immediate_batch(unsigned width,unsigned height){
    const auto &vertices=immediate_vertices.vertices;
    if(vertices.empty())return;
    require(width&&height,"immediate target dimensions");
    // Topology generation clears and rewrites every index. Retain bounded
    // capacity on the owning render thread instead of allocating per batch.
    static thread_local std::vector<uint16_t> indices;unsigned primitive;
    require(nhl07_immediate_indices(immediate_vertices.primitive,vertices.size(),indices,primitive),"immediate topology",immediate_vertices.primitive);
    if(indices.empty())return;
    uint32_t args[]={primitive,uint32_t(indices.size()),0};
    draw_from_state(args,width,height,&vertices,indices.data());
    static unsigned batches;
    if(++batches<=16||batches%6000==0)std::fprintf(stderr,"[NHL07-IMMEDIATE] primitive=%u vertices=%zu indices=%zu draw=%u\n",immediate_vertices.primitive,vertices.size(),indices.size(),draws);
}
extern "C" void nhl07_gpu_draw(const uint32_t *args,uint32_t begin,uint32_t end,unsigned width,unsigned height){
    target_width=width;target_height=height;consume(begin,end);
    require(!immediate_vertices.active,"indexed draw inside immediate primitive");
    draw_from_state(args,width,height,nullptr,nullptr);
}
extern "C" unsigned nhl07_gpu_draw_count(void){return draws;}
