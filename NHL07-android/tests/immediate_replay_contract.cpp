/* Include the actual renderer so the replay can restore its captured state. */
#include "../src/nv2a_draw.cpp"
#include <EGL/egl.h>
#include <sys/mman.h>
#include "immediate_topology_contract.h"
extern "C" {ptrdiff_t g_xbox_mem_offset;uint32_t g_xbox_code_lo,g_xbox_code_hi;}
// This fixture has no presentation-buffer aliases. Actual alias copy and
// attachment restoration are exercised by render_targets_gpu_contract.
extern "C" void nhl07_targets_color_changed(void){}
extern "C" void nhl07_targets_prepare_texture(uint32_t){}
extern "C" unsigned nhl07_targets_scale(void){return 1;}
extern "C" void nhl07_targets_read_pixels(unsigned w,unsigned h,uint8_t *p){glReadPixels(0,0,w,h,GL_RGBA,GL_UNSIGNED_BYTE,p);}
static unsigned checks;
static void verify(bool okay,const char *name){if(!okay){std::fprintf(stderr,"IMMEDIATE_REPLAY FAIL %s\n",name);std::exit(1);}++checks;}
static std::vector<uint8_t> read_file(const char *directory,const char *name){
    std::string path=std::string(directory)+"/"+name;FILE *file=std::fopen(path.c_str(),"rb");verify(file!=nullptr,"open replay fixture");
    std::fseek(file,0,SEEK_END);long n=std::ftell(file);std::rewind(file);std::vector<uint8_t> bytes(n);
    verify(std::fread(bytes.data(),1,bytes.size(),file)==bytes.size(),"read complete fixture");std::fclose(file);return bytes;
}
static uint32_t next_word(const std::vector<uint8_t> &bytes,size_t &position){verify(position+4<=bytes.size(),"oracle bounds");uint32_t value;std::memcpy(&value,bytes.data()+position,4);position+=4;return value;}
static GLuint test_shader(GLenum type,const char *source){GLuint shader=glCreateShader(type);glShaderSource(shader,1,&source,nullptr);glCompileShader(shader);GLint okay;glGetShaderiv(shader,GL_COMPILE_STATUS,&okay);verify(okay,"compile sampler isolation shader");return shader;}
static void uniform_contents(const uint8_t *expected,size_t count){
    glBindBuffer(GL_UNIFORM_BUFFER,uniforms[0]);GLint bytes;glGetBufferParameteriv(GL_UNIFORM_BUFFER,GL_BUFFER_SIZE,&bytes);
    verify(bytes==GLint(count),"uniform buffer preserves exact current size");
    const void *mapped=glMapBufferRange(GL_UNIFORM_BUFFER,0,count,GL_MAP_READ_BIT);
    verify(mapped&&std::memcmp(mapped,expected,count)==0,"all actual uniform bytes match including last byte");
    verify(glUnmapBuffer(GL_UNIFORM_BUFFER)&&glGetError()==GL_NO_ERROR,"uniform byte readback GPU status");
}
static void uniform_contract(bool optimized){
    std::array<uint8_t,64> bytes{};for(unsigned i=0;i<bytes.size();i++)bytes[i]=uint8_t(i*31);
    uniform(0,bytes.data(),bytes.size());uniform_contents(bytes.data(),bytes.size());
    auto uploads=draw_preparation_stats.uniform_uploads,reuses=draw_preparation_stats.uniform_reuses;
    glBindBufferBase(GL_UNIFORM_BUFFER,0,0);uniform(0,bytes.data(),bytes.size());
    GLint rebound;glGetIntegeri_v(GL_UNIFORM_BUFFER_BINDING,0,&rebound);
    verify(rebound==GLint(uniforms[0]),"unchanged uniform restores indexed binding point");
    verify(draw_preparation_stats.uniform_uploads==uploads+(optimized?0:1)&&draw_preparation_stats.uniform_reuses==reuses+(optimized?1:0),"identical uniform upload is skipped only when enabled");
    bytes.back()^=0x80;uniform(0,bytes.data(),bytes.size());uniform_contents(bytes.data(),bytes.size());
    bytes.front()^=0x40;uniform(0,bytes.data(),bytes.size());uniform_contents(bytes.data(),bytes.size());
    uniform(0,bytes.data(),48);uniform_contents(bytes.data(),48);
    uniform(0,bytes.data(),bytes.size());uniform_contents(bytes.data(),bytes.size());
    // A baseline upload between optimized calls must invalidate the old
    // snapshot, even when optimized mode resumes with its prior byte values.
    setenv("NHL07_DRAW_DEDUP","1",1);uniform(0,bytes.data(),bytes.size());
    auto alternate=bytes;alternate.back()^=1;
    setenv("NHL07_DRAW_DEDUP","0",1);uniform(0,alternate.data(),alternate.size());
    setenv("NHL07_DRAW_DEDUP","1",1);uniform(0,bytes.data(),bytes.size());uniform_contents(bytes.data(),bytes.size());
    setenv("NHL07_DRAW_DEDUP",optimized?"1":"0",1);
}
static void sampler_contract(NV2APSConstants &pc,bool optimized){
    constexpr unsigned base=0x1b00;std::array<uint32_t,3> saved{{reg(base+8),reg(base+12),reg(base+20)}};
    auto updates=draw_preparation_stats.sampler_updates;glBindSampler(0,0);upload_texture(0,pc);
    glActiveTexture(GL_TEXTURE0);GLint bound;glGetIntegerv(GL_SAMPLER_BINDING,&bound);
    verify(bound==GLint(samplers[0]),"unchanged sampler restores stage binding");
    verify(draw_preparation_stats.sampler_updates==updates+(optimized?0:1),"unchanged private sampler parameters skip updates only when enabled");
    reg(base+8)=0x202;upload_texture(0,pc);GLint s,t;
    glGetSamplerParameteriv(samplers[0],GL_TEXTURE_WRAP_S,&s);glGetSamplerParameteriv(samplers[0],GL_TEXTURE_WRAP_T,&t);
    verify(s==GL_MIRRORED_REPEAT&&t==GL_MIRRORED_REPEAT,"changed wrap register updates both sampler axes");
    reg(base+12)=(saved[1]&~((0xfffu<<18)|(0xfffu<<6)))|(128u<<18)|(512u<<6);upload_texture(0,pc);
    GLfloat min_lod,max_lod;glGetSamplerParameterfv(samplers[0],GL_TEXTURE_MIN_LOD,&min_lod);glGetSamplerParameterfv(samplers[0],GL_TEXTURE_MAX_LOD,&max_lod);
    verify(min_lod==.5f&&max_lod==2.f,"changed LOD register updates both limits");
    reg(base+20)=0x02020000;upload_texture(0,pc);GLint min_filter,mag_filter;
    glGetSamplerParameteriv(samplers[0],GL_TEXTURE_MIN_FILTER,&min_filter);glGetSamplerParameteriv(samplers[0],GL_TEXTURE_MAG_FILTER,&mag_filter);
    verify(min_filter==GL_LINEAR&&mag_filter==GL_LINEAR,"changed filter register updates both filters");
    reg(base+8)=saved[0];reg(base+12)=saved[1];reg(base+20)=saved[2];
    setenv("NHL07_DRAW_DEDUP","1",1);upload_texture(0,pc);
    setenv("NHL07_DRAW_DEDUP","0",1);reg(base+8)=0x303;upload_texture(0,pc);
    setenv("NHL07_DRAW_DEDUP","1",1);reg(base+8)=saved[0];upload_texture(0,pc);
    glGetSamplerParameteriv(samplers[0],GL_TEXTURE_WRAP_S,&s);
    verify(s==GL_REPEAT,"baseline sampler update cannot leave stale optimized parameter cache");
    setenv("NHL07_DRAW_DEDUP",optimized?"1":"0",1);verify(glGetError()==GL_NO_ERROR,"sampler cache contract GPU status");
}
static void interleaved_contract(std::vector<uint8_t> &pixels){
    auto clear=[](){glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
        glClearColor(0,0,0,0);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);};
    clear();draw_immediate_batch(640,480);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
    auto reference=pixels;
    unsigned visible=0;for(size_t p=0;p<pixels.size();p+=4)if(pixels[p]||pixels[p+1]||pixels[p+2])++visible;
    verify(visible>0,"isolated opaque original text batch has visible GPU pixels");
    auto vertices=immediate_vertices.vertices;std::vector<uint16_t> indices;unsigned primitive;
    verify(nhl07_immediate_indices(immediate_vertices.primitive,vertices.size(),indices,primitive)&&!indices.empty(),"interleaved fixture topology");
    const uint32_t vertex_address=0x3e80000u,index_address=0x40000u;
    std::memcpy(physical(vertex_address,vertices.size()*sizeof(Nhl07ImmediateVertex)),vertices.data(),vertices.size()*sizeof(Nhl07ImmediateVertex));
    std::memcpy(guest(index_address,indices.size()*2),indices.data(),indices.size()*2);
    std::array<uint32_t,32> saved{};
    for(unsigned i=0;i<16;i++){saved[i]=reg(0x1720+i*4);saved[i+16]=reg(0x1760+i*4);
        reg(0x1720+i*4)=vertex_address+i*16;reg(0x1760+i*4)=(sizeof(Nhl07ImmediateVertex)<<8)|0x42;}
    uint32_t args[]={primitive,uint32_t(indices.size()),index_address};
    clear();draw_from_state(args,640,480,nullptr,nullptr);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
    verify(glGetError()==GL_NO_ERROR&&pixels==reference,"indexed interleaved position/color/UV preserve all original opaque GPU pixels");
    GLint current;glGetIntegerv(GL_CURRENT_PROGRAM,&current);unsigned active=0;std::array<Nhl07DrawUploadInput,16> spans{};
    for(const auto &pair:pipelines)if(pair.second.program==GLuint(current))for(const auto &input:pair.second.inputs)if(input.location>=0)
        spans[active++]={vertex_address+input.reg*16,sizeof(Nhl07ImmediateVertex),16,4};
    Nhl07DrawUploadPlan plan{};
    verify(active>=2&&nhl07_draw_upload_plan(spans.data(),active,*std::max_element(indices.begin(),indices.end()),plan)&&plan.group_count==1&&plan.upload_bytes<plan.original_bytes,
        "actual indexed shader consumes overlapping attributes that merge to one shorter upload");
    capture(640,480,"merged-indexed-interleaved",5);
    // Direct host writes between draws must reach the next GPU draw. There is
    // no frame-level validation shortcut or cached vertex-content assumption.
    for(auto &vertex:vertices)vertex[0]+=17.f;
    std::memcpy(physical(vertex_address,vertices.size()*sizeof(Nhl07ImmediateVertex)),vertices.data(),vertices.size()*sizeof(Nhl07ImmediateVertex));
    clear();draw_from_state(args,640,480,nullptr,nullptr);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
    verify(glGetError()==GL_NO_ERROR&&pixels!=reference,"interleaved upload observes current guest writes between draws");
    for(unsigned i=0;i<16;i++){reg(0x1720+i*4)=saved[i];reg(0x1760+i*4)=saved[i+16];}
    clear();draw_immediate_batch(640,480);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
    verify(glGetError()==GL_NO_ERROR&&pixels==reference,"interleaved indexed-to-immediate restoration preserves original bytes");
}
static void packed_transition_contract(std::vector<uint8_t> &pixels){
    const bool original=upload_flag("NHL07_PACK_UPLOAD");
    auto render=[&](){glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
        glClearColor(0,0,0,0);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        draw_immediate_batch(640,480);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
        verify(glGetError()==GL_NO_ERROR,"packed transition GPU status");};
    setenv("NHL07_PACK_UPLOAD","0",1);render();const auto reference=pixels;
    auto draws_before=draw_preparation_stats.packed_draws,uploads_before=draw_preparation_stats.data_uploads,stream_before=stream_upload.stats().uploads;
    setenv("NHL07_PACK_UPLOAD","1",1);render();
    verify(pixels==reference,"packed vertex/index block preserves complete original opaque pixels");
    verify(draw_preparation_stats.packed_draws==draws_before+1&&draw_preparation_stats.data_uploads==uploads_before+1,
        "one packed draw issues exactly one vertex/index data upload");
    if(upload_flag("NHL07_STREAM_UPLOAD"))verify(stream_upload.stats().uploads==stream_before+1,"packed stream draw maps/uploads exactly one block");
    else verify(stream_upload.stats().uploads==stream_before,"packed glBufferData path does not use stream mappings");
    auto packed_after=draw_preparation_stats.packed_draws;
    setenv("NHL07_PACK_UPLOAD","0",1);render();
    verify(pixels==reference&&draw_preparation_stats.packed_draws==packed_after,"packed-to-original transition restores independent vertex/index bindings");
    setenv("NHL07_PACK_UPLOAD",original?"1":"0",1);
}
int main(int argc,char **argv){
    if(argc!=4)return 2;
    bool optimized=draw_dedup_enabled();
    const bool shader_preparation=upload_flag("NHL07_SHADER_PREP_CACHE");
    const bool buffer_cache_enabled=upload_flag("NHL07_EXACT_BUFFER_CACHE");
    setenv("NHL07_DIAGNOSTIC_DIR",argv[1],1);
    auto push=read_file(argv[1],"draw-failure-push.bin"),expected=read_file(argv[1],"immediate-expected.bin");
    size_t oracle_position=0;unsigned expected_batches=next_word(expected,oracle_position),batches=0,vertex_total=0;
    Nhl07ImmediateVertices decoder;
    for(size_t p=0;p<push.size();){
        uint32_t header;std::memcpy(&header,push.data()+p,4);p+=4;unsigned n=(header>>18)&0x7ff,method=header&0x1ffc;
        verify(p+n*4<=push.size(),"captured packet bounds");
        for(unsigned i=0;i<n;i++){
            uint32_t word;std::memcpy(&word,push.data()+p,4);p+=4;
            auto result=decoder.accept(method+((header&0x40000000u)?0:i*4),word);
            verify(result!=Nhl07ImmediateResult::Invalid,"captured immediate sequence valid");
            if(result==Nhl07ImmediateResult::Unrecognized)verify(!decoder.active,"captured state writes stay outside primitive");
            if(result==Nhl07ImmediateResult::End){
                unsigned primitive=next_word(expected,oracle_position),count=next_word(expected,oracle_position);
                verify(decoder.primitive==primitive&&decoder.vertices.size()==count,"independent batch counts");
                size_t bytes=size_t(count)*sizeof(Nhl07ImmediateVertex);verify(oracle_position+bytes<=expected.size(),"oracle vertex bounds");
                const auto *actual=reinterpret_cast<const uint8_t *>(decoder.vertices.data());
                for(size_t j=0;j<bytes;j++)verify(actual[j]==expected[oracle_position+j],"all captured attribute bytes match independent oracle");
                oracle_position+=bytes;vertex_total+=count;++batches;
            }
        }
    }
    verify(batches==expected_batches&&vertex_total==352&&oracle_position==expected.size(),"six complete captured batches and 352 vertices");
    const auto topology=nhl07_immediate_topology_contract(verify);
    std::printf("IMMEDIATE_TOPOLOGY calls=%zu max_indices=%zu observed_capacity=%zu\n",topology.calls,topology.max_indices,topology.max_capacity);
    std::vector<uint16_t> indices;unsigned primitive;
    verify(nhl07_immediate_indices(8,4,indices,primitive)&&primitive==5&&indices==std::vector<uint16_t>({0,1,2,0,2,3}),"quad winding and diagonal");
    verify(nhl07_immediate_indices(9,6,indices,primitive)&&indices==std::vector<uint16_t>({0,1,3,0,3,2,2,3,5,2,5,4}),"quad strip winding");
    verify(!nhl07_immediate_indices(8,5,indices,primitive)&&!nhl07_immediate_indices(11,4,indices,primitive),"invalid topology rejected");
    Nhl07ImmediateVertices invalid;verify(invalid.accept(0x17fc,0)==Nhl07ImmediateResult::Invalid,"END without BEGIN rejected");
    verify(invalid.accept(0x17fc,8)==Nhl07ImmediateResult::Handled&&invalid.accept(0x17fc,8)==Nhl07ImmediateResult::Invalid,"nested BEGIN rejected");
    auto reservation=mmap(reinterpret_cast<void *>(uintptr_t(0x10000)),0x83ff0000u,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED,-1,0);
    verify(reservation==reinterpret_cast<void *>(uintptr_t(0x10000)),"reserve isolated guest address ranges");
    verify(mprotect(reservation,0x3ff0000u,PROT_READ|PROT_WRITE)==0&&mprotect(reinterpret_cast<void *>(uintptr_t(0x80000000u)),0x4000000u,PROT_READ|PROT_WRITE)==0,"commit isolated low and physical mappings");
    auto ram=read_file(argv[1],"draw-failure-ram.bin"),physical_data=read_file(argv[1],"draw-failure-physical.bin"),state=read_file(argv[1],"draw-failure-state.bin");
    verify(ram.size()==0x4000000u&&physical_data.size()==0x4000000u&&state.size()==sizeof(registers)+sizeof(program)+sizeof(constants),"captured complete memory/state");
    std::memcpy(reservation,ram.data()+0x10000u,0x3ff0000u);std::memcpy(reinterpret_cast<void *>(uintptr_t(0x80000000u)),physical_data.data(),physical_data.size());
    std::memcpy(registers,state.data(),sizeof(registers));std::memcpy(program,state.data()+sizeof(registers),sizeof(program));std::memcpy(constants,state.data()+sizeof(registers)+sizeof(program),sizeof(constants));
    program_cursor=std::atoi(argv[2]);constant_cursor=std::atoi(argv[3]);draws=1;
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);verify(eglInitialize(display,nullptr,nullptr),"EGL initialize");
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_DEPTH_SIZE,24,EGL_STENCIL_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint config_count;verify(eglChooseConfig(display,attributes,&config,1,&config_count)&&config_count==1,"EGL replay config");
    EGLint dimensions[]={EGL_WIDTH,640,EGL_HEIGHT,480,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,dimensions);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    verify(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context),"EGL replay current");
    std::printf("IMMEDIATE_REPLAY renderer=%s\n",glGetString(GL_RENDERER));
    glViewport(0,0,640,480);glClearColor(0,0,0,0);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
    const uint32_t address=0x20000;std::memcpy(reinterpret_cast<void *>(uintptr_t(address)),push.data(),push.size());
    nhl07_gpu_consume(address,address+push.size(),640,480);
    verify(draws==7&&!immediate_vertices.active,"actual renderer executed all six batches");
    std::vector<uint8_t> pixels(640*480*4);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());verify(glGetError()==GL_NO_ERROR,"GPU replay readback");
    unsigned nonblack=0;for(size_t i=0;i<pixels.size();i+=4)if(pixels[i]||pixels[i+1]||pixels[i+2])nonblack++;
    verify(nonblack==0,"captured zero-alpha text remains transparent");capture(640,480,"immediate-replay",1);
    // Separate, explicitly synthetic opacity fixture. Original capture stays
    // unchanged: only the test copy changes the color alpha to fully opaque.
    auto opaque_push=push;
    for(size_t p=0;p<opaque_push.size();){
        uint32_t header;std::memcpy(&header,opaque_push.data()+p,4);p+=4;unsigned n=(header>>18)&0x7ff,m=header&0x1ffc;
        for(unsigned i=0;i<n;i++,p+=4)if(m+((header&0x40000000u)?0:i*4)==0x194c)opaque_push[p+3]=255;
    }
    std::memcpy(registers,state.data(),sizeof(registers));std::memcpy(program,state.data()+sizeof(registers),sizeof(program));std::memcpy(constants,state.data()+sizeof(registers)+sizeof(program),sizeof(constants));
    program_cursor=std::atoi(argv[2]);constant_cursor=std::atoi(argv[3]);immediate_vertices=Nhl07ImmediateVertices();
    glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
    glClearColor(0,0,0,0);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
    std::memcpy(reinterpret_cast<void *>(uintptr_t(address)),opaque_push.data(),opaque_push.size());
    nhl07_gpu_consume(address,address+opaque_push.size(),640,480);verify(draws==13,"six controlled opacity batches rendered");
    glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());verify(glGetError()==GL_NO_ERROR,"controlled opacity readback");
    unsigned opaque_nonblack=0;for(size_t i=0;i<pixels.size();i+=4)if(pixels[i]||pixels[i+1]||pixels[i+2])opaque_nonblack++;
    verify(opaque_nonblack>0,"controlled opaque text produces visible pixels");capture(640,480,"opaque-immediate-replay",2);
    interleaved_contract(pixels);
    packed_transition_contract(pixels);
    // Synthetic flat-color material over the captured last text geometry.
    // A uniform-only change must reuse code and still change actual pixels;
    // selecting another final-combiner input must compile distinct code.
    reg(0x1e60)=1;reg(0x1e70)=0;reg(0x288)=1;reg(0x28c)=0x1100;
    for(unsigned stage=0;stage<8;stage++)reg(0x260+stage*4)=reg(0xac0+stage*4)=reg(0xaa0+stage*4)=reg(0x1e40+stage*4)=0;
    auto flat_draw=[&](unsigned channel){
        glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
        glClearColor(0,0,0,0);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
        draw_immediate_batch(640,480);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
        verify(glGetError()==GL_NO_ERROR,"shader cache flat-color readback");unsigned colored=0;
        for(size_t p=0;p<pixels.size();p+=4)if(pixels[p]||pixels[p+1]||pixels[p+2]){
            verify(pixels[p+channel]==255&&pixels[p+(channel+1)%3]==0&&pixels[p+(channel+2)%3]==0,"cached code uses current color uniform");++colored;
        }
        verify(colored>0,"flat-color material covers actual pixels");return colored;
    };
    reg(0x1e20)=0xffff0000u;auto red=flat_draw(0);size_t flat_pipeline_count=pipelines.size();
    reg(0x1e20)=0xff00ff00u;auto green=flat_draw(1);
    verify(pipelines.size()==flat_pipeline_count&&red==green,"uniform-only change reuses shader and preserves coverage");
    reg(0x288)=2;reg(0x28c)=0x1200;reg(0x1e24)=0xff0000ffu;auto blue=flat_draw(2);
    verify(pipelines.size()==flat_pipeline_count+1&&blue==red,"combiner code mutation gets a distinct pipeline");
    if(shader_preparation){
        auto reference=pixels;auto vertex_hits=vertex_source_cache.stats().hits,prepared_hits=shader_preparation_cache.stats().hits;
        flat_draw(2);verify(pixels==reference&&vertex_source_cache.stats().hits>vertex_hits&&shader_preparation_cache.stats().hits>prepared_hits,
            "actual repeated draw hits both exact CPU caches and preserves all GPU pixels");
        const unsigned start=reg(0x1ea0),word=start*4;auto old_word=program[word];size_t old_pipelines=pipelines.size();
        auto vertex_misses=vertex_source_cache.stats().misses;
        // Word0 is ISA padding. The existing exact source key still includes
        // it, so changing it must miss without altering actual shader pixels.
        program[word]^=0x80000000u;flat_draw(2);
        verify(pixels==reference&&vertex_source_cache.stats().misses>vertex_misses&&pipelines.size()==old_pipelines+1,
            "same-address source mutation selects a distinct exact key and preserves padding semantics");
        program[word]=old_word;flat_draw(2);verify(pixels==reference,"restored microcode reuses correct original shader pixels");
        setenv("NHL07_SHADER_PREP_CACHE","0",1);reg(0x1e24)=0xffff0000u;flat_draw(0);
        setenv("NHL07_SHADER_PREP_CACHE","1",1);reg(0x1e24)=0xff0000ffu;flat_draw(2);
        verify(pixels==reference,"cached-original-cached transition observes every current color uniform");
        old_pipelines=pipelines.size();vertex_source_cache.clear();shader_preparation_cache.clear();flat_draw(2);
        verify(pixels==reference&&pipelines.size()==old_pipelines,"CPU cache clear preserves existing GL program cache and exact GPU image");
    }
    if(buffer_cache_enabled){
        flat_draw(2);auto reference=pixels;auto hits=exact_buffer_cache.stats().hits,uploads=exact_buffer_cache.stats().uploads;
        flat_draw(2);verify(pixels==reference&&exact_buffer_cache.stats().hits>hits&&exact_buffer_cache.stats().uploads==uploads,
            "unchanged actual vertex/index bytes reuse dedicated cached objects without GPU uploads");
        auto *source_pointer=immediate_vertices.vertices.data();
        const auto original_vertices=immediate_vertices.vertices;
        for(auto &vertex:immediate_vertices.vertices)vertex[0]+=17.f;
        flat_draw(2);verify(pixels!=reference&&immediate_vertices.vertices.data()==source_pointer&&exact_buffer_cache.stats().uploads>uploads,
            "same-pointer vertex mutation reaches actual GPU draw through exact comparison");
        auto shifted_reference=pixels;
        setenv("NHL07_EXACT_BUFFER_CACHE","0",1);flat_draw(2);
        verify(pixels==shifted_reference,"cache-to-original transition restores caller-owned vertex/index buffers");
        std::memcpy(source_pointer,original_vertices.data(),original_vertices.size()*sizeof(Nhl07ImmediateVertex));
        flat_draw(2);verify(pixels==reference,"original path observes restored source while cache is disabled");
        setenv("NHL07_EXACT_BUFFER_CACHE","1",1);flat_draw(2);
        verify(pixels==reference,"original-to-cache transition fully revalidates changed source bytes");
        uploads=exact_buffer_cache.stats().uploads;exact_buffer_cache.clear();flat_draw(2);
        verify(pixels==reference&&exact_buffer_cache.stats().uploads>uploads,"clear/recreate buffer cache preserves all original GPU pixels");
    }
    uniform_contract(optimized);
    flat_draw(2);auto immediate_reference=pixels;
    auto shifted=immediate_vertices.vertices;for(auto &vertex:shifted)vertex[0]+=17.f;
    const uint32_t vertex_address=0x3e00000u,index_address=0x30000u;
    std::memcpy(physical(vertex_address,shifted.size()*sizeof(Nhl07ImmediateVertex)),shifted.data(),shifted.size()*sizeof(Nhl07ImmediateVertex));
    std::array<uint32_t,32> saved_attributes{};
    for(unsigned i=0;i<16;i++){
        saved_attributes[i]=reg(0x1720+i*4);saved_attributes[16+i]=reg(0x1760+i*4);
        reg(0x1720+i*4)=vertex_address+i*16;reg(0x1760+i*4)=(sizeof(Nhl07ImmediateVertex)<<8)|0x42;
    }
    std::vector<uint16_t> indexed_indices;unsigned indexed_primitive;
    verify(nhl07_immediate_indices(immediate_vertices.primitive,shifted.size(),indexed_indices,indexed_primitive),"transition fixture has valid indexed topology");
    std::memcpy(guest(index_address,indexed_indices.size()*2),indexed_indices.data(),indexed_indices.size()*2);
    uint32_t indexed_args[]={indexed_primitive,uint32_t(indexed_indices.size()),index_address};
    glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);glDepthMask(GL_TRUE);glStencilMask(255);
    glClearColor(0,0,0,0);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
    draw_from_state(indexed_args,640,480,nullptr,nullptr);glReadPixels(0,0,640,480,GL_RGBA,GL_UNSIGNED_BYTE,pixels.data());
    verify(glGetError()==GL_NO_ERROR&&pixels!=immediate_reference,"indexed draw replaces shared immediate storage with shifted guest geometry");
    capture(640,480,"dedup-indexed-transition",3);
    flat_draw(2);verify(pixels==immediate_reference,"indexed to immediate transition restores all attribute bytes and pixels");
    capture(640,480,"dedup-immediate-transition",4);
    for(unsigned i=0;i<16;i++){reg(0x1720+i*4)=saved_attributes[i];reg(0x1760+i*4)=saved_attributes[16+i];}
    // Exercise the actual renderer's sampler setup: both stages share one
    // pixel object but use different wrap modes. Repeat samples red; clamp
    // samples green. Incorrectly shared texture-object state produces green.
    const uint8_t pattern[]={0,0,255,255,0,255,0,255,0,0,255,255,0,255,0,255};
    std::memcpy(reinterpret_cast<void *>(uintptr_t(0x83f00000u)),pattern,sizeof(pattern));NV2APSConstants sampler_constants{};
    GLuint shared_textures[2]{};
    for(unsigned stage=0;stage<2;stage++){
        unsigned base=0x1b00+stage*64;reg(base)=0x3f00000u;reg(base+4)=0x01110620u;
        reg(base+8)=stage?0x303u:0x301u;reg(base+12)=0x4003ffc0u;reg(base+20)=0x01010000u;
        upload_texture(stage,sampler_constants);GLint object;glGetIntegerv(GL_TEXTURE_BINDING_2D,&object);shared_textures[stage]=GLuint(object);
    }
    verify(shared_textures[0]==shared_textures[1],"two native stages share cached pixels");
    sampler_contract(sampler_constants,optimized);
    GLuint sample_program=glCreateProgram();
    glAttachShader(sample_program,test_shader(GL_VERTEX_SHADER,"#version 300 es\nvoid main(){vec2 p=vec2((gl_VertexID<<1)&2,gl_VertexID&2);gl_Position=vec4(p*2.0-1.0,0,1);}"));
    glAttachShader(sample_program,test_shader(GL_FRAGMENT_SHADER,"#version 300 es\nprecision highp float;uniform sampler2D a;uniform sampler2D b;out vec4 color;void main(){color=vec4(texture(a,vec2(1.25,.25)).r,texture(b,vec2(1.25,.25)).g,0,1);}"));
    glLinkProgram(sample_program);GLint linked;glGetProgramiv(sample_program,GL_LINK_STATUS,&linked);verify(linked,"link sampler isolation shader");glUseProgram(sample_program);
    glUniform1i(glGetUniformLocation(sample_program,"a"),0);glUniform1i(glGetUniformLocation(sample_program,"b"),1);
    glDisable(GL_DEPTH_TEST);glDisable(GL_STENCIL_TEST);glDisable(GL_CULL_FACE);glDisable(GL_BLEND);glDisable(GL_SCISSOR_TEST);glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    glViewport(0,0,1,1);glDrawArrays(GL_TRIANGLES,0,3);uint8_t isolated[4];glReadPixels(0,0,1,1,GL_RGBA,GL_UNSIGNED_BYTE,isolated);
    verify(glGetError()==GL_NO_ERROR&&isolated[0]==255&&isolated[1]==255&&isolated[2]==0&&isolated[3]==255,"native stage sampler states stay independent");
    texture_cache.clear();
    std::printf("DRAW_DEDUP enabled=%u uniform_uploads=%llu uniform_reuses=%llu immediate_uploads=%llu sampler_updates=%llu\n",optimized,
        (unsigned long long)draw_preparation_stats.uniform_uploads,(unsigned long long)draw_preparation_stats.uniform_reuses,
        (unsigned long long)draw_preparation_stats.immediate_uploads,(unsigned long long)draw_preparation_stats.sampler_updates);
    const auto &stream=stream_upload.stats();
    std::printf("DRAW_STREAM enabled=%u merge=%u uploads=%llu bytes=%llu allocations=%llu rotations=%llu\n",upload_flag("NHL07_STREAM_UPLOAD"),upload_flag("NHL07_MERGE_UPLOAD"),
        (unsigned long long)stream.uploads,(unsigned long long)stream.bytes,(unsigned long long)stream.allocations,(unsigned long long)stream.rotations);
    std::printf("DRAW_PACK enabled=%u draws=%llu slices=%llu bytes=%llu fallbacks=%llu data_uploads=%llu\n",upload_flag("NHL07_PACK_UPLOAD"),
        (unsigned long long)draw_preparation_stats.packed_draws,(unsigned long long)draw_preparation_stats.packed_slices,
        (unsigned long long)draw_preparation_stats.packed_bytes,(unsigned long long)draw_preparation_stats.packed_fallbacks,(unsigned long long)draw_preparation_stats.data_uploads);
    std::printf("DRAW_SHADER_PREP enabled=%u texture_base_compare=%u vertex_hits=%llu vertex_misses=%llu preparation_hits=%llu preparation_misses=%llu\n",
        shader_preparation,upload_flag("NHL07_TEXTURE_BASE_COMPARE"),
        (unsigned long long)vertex_source_cache.stats().hits,(unsigned long long)vertex_source_cache.stats().misses,
        (unsigned long long)shader_preparation_cache.stats().hits,(unsigned long long)shader_preparation_cache.stats().misses);
    const auto &exact=exact_buffer_cache.stats();
    std::printf("DRAW_EXACT_BUFFER enabled=%u hits=%llu misses=%llu updates=%llu uploads=%llu uploaded_bytes=%llu compared_bytes=%llu evictions=%llu fallbacks=%llu pinned_fallbacks=%llu snapshot_bytes=%zu gpu_bytes=%zu entries=%zu\n",
        buffer_cache_enabled,(unsigned long long)exact.hits,(unsigned long long)exact.misses,(unsigned long long)exact.updates,
        (unsigned long long)exact.uploads,(unsigned long long)exact.uploaded_bytes,(unsigned long long)exact.compared_bytes,
        (unsigned long long)exact.evictions,(unsigned long long)exact.fallbacks,(unsigned long long)exact.pinned_fallbacks,exact.snapshot_bytes,exact.gpu_bytes,exact.resident_entries);
    exact_buffer_cache.clear();
    if(packed_buffer)glDeleteBuffers(1,&packed_buffer);packed_buffer=0;packed_staging.reset();packed_capacity=0;
    stream_upload.clear();
    eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);eglDestroyContext(display,context);eglDestroySurface(display,surface);eglTerminate(display);
    std::printf("IMMEDIATE_REPLAY passed=%u failed=0 batches=%u vertices=%u nonblack=%u opaque_nonblack=%u\n",checks,batches,vertex_total,nonblack,opaque_nonblack);return 0;
}
