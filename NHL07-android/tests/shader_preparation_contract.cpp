#include "shader_preparation_model.h"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>

static unsigned checks;
static void verify(bool condition,const char *message){
    if(!condition){std::fprintf(stderr,"SHADER_PREPARATION FAIL %s\n",message);std::exit(1);}++checks;
}
static std::array<uint32_t,2048> registers;
static std::array<uint32_t,544> source;
static uint32_t random_state=0x47707u;
static uint32_t random_word(){random_state^=random_state<<13;random_state^=random_state>>17;random_state^=random_state<<5;return random_state;}
static void parse_vertex(const uint32_t *words,size_t count,NV2AVshProgram &decoded){
    // Windows DWORD and uint32_t are different C++ types of the same width;
    // use typed storage rather than introducing a strict-aliasing exception.
    static_assert(sizeof(DWORD)==4,"Xbox shader word width");
    std::array<DWORD,544> native{};std::copy_n(words,count,native.begin());
    d3d8_vsh_parse(native.data(),int(count/4),&decoded);
}
static Nhl07ShaderPixelWords pixel_words(){return nhl07_shader_pixel_words([](unsigned m){return registers[m/4];});}
static NV2ACombinerState original_pixel(){
    DWORD states[512]{};states[D3DRS_PSCOMBINERCOUNT]=registers[0x1e60/4];
    for(unsigned i=0;i<8;++i){
        states[D3DRS_PSALPHAINPUTS0+i]=registers[(0x260+i*4)/4];states[D3DRS_PSRGBINPUTS0+i]=registers[(0xac0+i*4)/4];
        states[D3DRS_PSALPHAOUTPUTS0+i]=registers[(0xaa0+i*4)/4];states[D3DRS_PSRGBOUTPUTS0+i]=registers[(0x1e40+i*4)/4];
        states[D3DRS_PSCONSTANT0_0+i]=registers[(0xa60+i*4)/4];states[D3DRS_PSCONSTANT1_0+i]=registers[(0xa80+i*4)/4];
    }
    states[D3DRS_PSFINALCOMBINERINPUTSABCD]=registers[0x288/4];states[D3DRS_PSFINALCOMBINERINPUTSEFG]=registers[0x28c/4];
    states[D3DRS_PSFINALCOMBINERCONSTANT0]=registers[0x1e20/4];states[D3DRS_PSFINALCOMBINERCONSTANT1]=registers[0x1e24/4];
    NV2ACombinerState pixel;std::memset(&pixel,0,sizeof(pixel));d3d8_combiners_from_render_states(states,&pixel);
    for(unsigned i=0;i<4;++i){unsigned mode=(registers[0x1e70/4]>>(i*5))&31;
        pixel.tex_mode[i]=mode==0?NV2A_TEXMODE_NONE:mode==4?NV2A_TEXMODE_PASSTHROUGH:NV2A_TEXMODE_2D;}
    return pixel;
}
static std::string original_key(const NV2AVshProgram &vertex,uint16_t bgra,const uint32_t *code,NV2ACombinerState pixel){
    std::memset(pixel.c0,0,sizeof(pixel.c0));std::memset(pixel.c1,0,sizeof(pixel.c1));pixel.final_c0=pixel.final_c1=0;
    // Independent byte-vector oracle for the old append order and field widths.
    std::vector<char> expected;
    auto append=[&](const void *p,size_t bytes){const char *begin=static_cast<const char *>(p);expected.insert(expected.end(),begin,begin+bytes);};
    append(&vertex.length,sizeof(vertex.length));append(&bgra,sizeof(bgra));append(&vertex.integer_inputs,sizeof(vertex.integer_inputs));
    append(code,size_t(vertex.length)*16);append(&pixel,sizeof(pixel));return {expected.begin(),expected.end()};
}
static void compare_source(const NV2AVshProgram &vertex,uint16_t bgra,const uint32_t *code,bool hlsl){
    const auto full_pixel=original_pixel();Nhl07PreparedShaderSource prepared;
    nhl07_prepare_shader_source(vertex,bgra,code,pixel_words(),prepared);
    verify(prepared.pipeline_key==original_key(vertex,bgra,code,full_pixel),"production prepared key equals original bytes");
    auto normalized=full_pixel;std::memset(normalized.c0,0,sizeof(normalized.c0));std::memset(normalized.c1,0,sizeof(normalized.c1));normalized.final_c0=normalized.final_c1=0;
    verify(std::memcmp(&prepared.pixel,&normalized,sizeof(normalized))==0,"production parsed PS equals normalized original including padding");
    if(hlsl){
        std::vector<char> original(262144),cached(262144);
        int a=d3d8_combiners_generate_hlsl(&full_pixel,original.data(),int(original.size()));
        int b=d3d8_combiners_generate_hlsl(&prepared.pixel,cached.data(),int(cached.size()));
        verify(a>0&&a==b&&std::memcmp(original.data(),cached.data(),size_t(a)+1)==0,"uniform colors never alter generated PS source");
        NV2AVshProgram original_vertex;parse_vertex(code,size_t(vertex.length)*4,original_vertex);original_vertex.bgra_inputs=bgra;
        auto compiled_vertex=vertex;compiled_vertex.bgra_inputs=bgra;
        a=d3d8_vsh_generate_hlsl(&original_vertex,original.data(),int(original.size()));
        b=d3d8_vsh_generate_hlsl(&compiled_vertex,cached.data(),int(cached.size()));
        verify(a>0&&a==b&&std::memcmp(original.data(),cached.data(),size_t(a)+1)==0,"actual cached vertex source is stable");
    }
}
int main(int argc,char **argv){
    verify(argc==2,"captured state path required");FILE *file=std::fopen(argv[1],"rb");verify(file!=nullptr,"open captured shader state");
    std::array<uint32_t,3360> state{};verify(std::fread(state.data(),4,state.size(),file)==state.size(),"read complete captured state");
    verify(std::fgetc(file)==EOF,"captured state exact length");std::fclose(file);
    std::copy_n(state.begin(),registers.size(),registers.begin());std::copy_n(state.begin()+2048,source.size(),source.begin());
    const unsigned start=registers[0x1ea0/4];verify(start<136,"captured program start valid");
    using VertexCache=Nhl07ExactWordsCache<NV2AVshProgram,8,544>;
    using PreparationCache=Nhl07ExactWordsCache<Nhl07PreparedShaderSource,32,39>;
    VertexCache vertices;PreparationCache preparations;unsigned decodes=0,prepares=0;
    auto decode=[&](const uint32_t *words,size_t count,NV2AVshProgram &decoded){++decodes;parse_vertex(words,count,decoded);};
    auto get_vertex=[&](){return vertices.get(source.data()+start*4,size_t(136-start)*4,decode);};
    const auto *vertex=get_vertex();verify(vertex&&vertex->identity&&decodes==1,"first actual VP parse is a miss");
    verify(!vertex->value.unsupported&&vertex->value.length&&vertex->value.insns[vertex->value.length-1].is_final,"actual captured vertex shader supported");
    NV2AVshProgram uncached;parse_vertex(source.data()+start*4,size_t(136-start)*4,uncached);
    verify(std::memcmp(&vertex->value,&uncached,sizeof(uncached))==0,"cached actual VP parse equals direct parser every byte");
    const auto first_identity=vertex->identity;
    auto prepare=[&](const uint32_t *,size_t,Nhl07PreparedShaderSource &prepared){++prepares;nhl07_prepare_shader_source(vertex->value,0,source.data()+start*4,pixel_words(),prepared);};
    auto get_preparation=[&](){auto words=nhl07_shader_preparation_words(vertex->identity,0,vertex->value.integer_inputs,pixel_words());return preparations.get(words.data(),words.size(),prepare);};
    const auto *prepared=get_preparation();verify(prepared&&prepares==1,"first exact preparation is a miss");
    auto baseline_key=prepared->value.pipeline_key;
    for(unsigned i=0;i<100;++i){vertex=get_vertex();prepared=get_preparation();verify(vertex->identity==first_identity&&prepared->value.pipeline_key==baseline_key,"identical draws reuse exact prepared source");}
    verify(decodes==1&&prepares==1&&vertices.stats().hits==100&&preparations.stats().hits==100,"cache hits avoid both actual decoders");
    // Current addresses never define identity: different storage with the same
    // bytes hits, while a change at the same address misses.
    auto relocated=source;verify(vertices.get(relocated.data()+start*4,size_t(136-start)*4,decode)->identity==first_identity,"relocated equal source hits without pointer key");
    source.back()^=0x80;vertex=get_vertex();verify(vertex->identity!=first_identity&&decodes==2,"last source word mutation at same address misses");
    parse_vertex(source.data()+start*4,size_t(136-start)*4,uncached);verify(std::memcmp(&vertex->value,&uncached,sizeof(uncached))==0,"last-word mutation parsed exactly");
    source=relocated;vertex=get_vertex();verify(vertex->identity==first_identity,"restored source reuses its original entry");
    // One bit in each actual source/config word must prevent a false hit.
    for(size_t i=start*4;i<source.size();++i){source[i]^=uint32_t(1u<<(i%32));const auto *changed=get_vertex();
        verify(changed&&changed->identity!=first_identity,"every source word participates in exact equality");source[i]^=uint32_t(1u<<(i%32));}
    vertex=get_vertex();const auto words_before=pixel_words();
    std::array<unsigned,36> methods{};methods[0]=0x1e60;
    for(unsigned i=0;i<8;++i){methods[1+i*4]=0x260+i*4;methods[2+i*4]=0xac0+i*4;methods[3+i*4]=0xaa0+i*4;methods[4+i*4]=0x1e40+i*4;}
    methods[33]=0x288;methods[34]=0x28c;methods[35]=0x1e70;
    for(unsigned i=0;i<methods.size();++i){registers[methods[i]/4]^=1;verify(pixel_words()!=words_before,"every PS source register participates in exact descriptor");registers[methods[i]/4]^=1;}
    for(unsigned i=0;i<8;++i){registers[(0xa60+i*4)/4]^=random_word();registers[(0xa80+i*4)/4]^=random_word();}
    registers[0x1e20/4]^=random_word();registers[0x1e24/4]^=random_word();
    verify(pixel_words()==words_before,"all current color uniforms excluded from source descriptor");
    // Fill and evict the actual preparation capacity. Reusing storage or a
    // cleared vertex cache must never borrow a previous descriptor identity.
    preparations.clear();prepared=get_preparation();const auto preparation_identity=prepared->identity;
    const auto retained_key=prepared->value.pipeline_key;auto saved_final=registers[0x288/4];
    for(unsigned i=1;i<=PreparationCache::capacity();++i){registers[0x288/4]=saved_final^i;prepared=get_preparation();
        verify(prepared&&prepared->identity!=preparation_identity,"all distinct PS descriptors miss through bounded eviction");}
    registers[0x288/4]=saved_final;prepared=get_preparation();
    verify(prepared->identity!=preparation_identity&&prepared->value.pipeline_key==retained_key,"evicted preparation rebuilt with exact original pipeline bytes");
    compare_source(vertex->value,0,source.data()+start*4,true);
    for(unsigned i=0;i<16;++i)compare_source(vertex->value,uint16_t(1u<<i),source.data()+start*4,true);
    auto source_words=nhl07_shader_preparation_words(0x123456789abcdef0ull,0x1357,0x2468,words_before);
    verify(source_words[0]==0x9abcdef0u&&source_words[1]==0x12345678u&&source_words[2]==0x24681357u,"full 64bit VP identity and both 16bit input variants retained");
    verify(!vertices.get(nullptr,1,decode)&&!vertices.get(source.data(),0,decode)&&!vertices.get(source.data(),545,decode),"invalid source ranges rejected before callback");
    verify(!preparations.get(source_words.data(),40,prepare),"invalid preparation range rejected before callback");
    const auto old_id=vertex->identity;vertices.clear();vertex=get_vertex();verify(vertex->identity!=old_id,"clear never reuses an old vertex identity");
    // Randomized raw states exercise actual PS parsing/key normalization, not
    // a replacement decoder. Arbitrary microcode also checks parse equality.
    for(unsigned sample=0;sample<2000;++sample){
        for(auto &word:registers)word=random_word();registers[0x1e60/4]=1+(random_word()%8);registers[0x1e70/4]=0;
        for(unsigned i=0;i<4;++i){const unsigned modes[]={0,1,4};registers[0x1e70/4]|=modes[random_word()%3]<<(i*5);}
        compare_source(vertex->value,uint16_t(random_word()),source.data()+start*4,false);
        auto alternate=source;const unsigned index=random_word()%alternate.size();alternate[index]^=random_word();
        const auto *entry=vertices.get(alternate.data(),alternate.size(),decode);parse_vertex(alternate.data(),alternate.size(),uncached);
        verify(entry&&std::memcmp(&entry->value,&uncached,sizeof(uncached))==0,"randomized actual VP parse cached exactly");
        // Reacquire after bounded eviction: an earlier returned row may have
        // been replaced, exactly as documented for the render-thread cache.
        vertex=get_vertex();
    }
    verify(VertexCache::capacity()==8&&PreparationCache::capacity()==32,"production entry capacities bounded");
    std::printf("SHADER_PREPARATION passed=%u failed=0 randomized_states=2000 actual_vertex_bytes=%zu actual_pixel_bytes=%zu\n",checks,sizeof(NV2AVshProgram),sizeof(NV2ACombinerState));
}
