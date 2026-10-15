#pragma once
#include "shader_preparation_cache.h"
#include "shaders/d3d8_vsh.h"
#include "shaders/d3d8_combiners.h"

struct Nhl07PreparedShaderSource {NV2ACombinerState pixel;std::string pipeline_key;};

// Pure source preparation shared by the renderer and the CPU differential
// contract. Colors are uniforms in the actual HLSL generator, never literals.
inline void nhl07_prepare_shader_source(const NV2AVshProgram &vertex,uint16_t bgra,
        const uint32_t *program,const Nhl07ShaderPixelWords &pixel_words,
        Nhl07PreparedShaderSource &prepared) {
    DWORD states[512]{};states[D3DRS_PSCOMBINERCOUNT]=pixel_words[0];
    for(unsigned i=0;i<8;++i){
        states[D3DRS_PSALPHAINPUTS0+i]=pixel_words[1+i*4];
        states[D3DRS_PSRGBINPUTS0+i]=pixel_words[2+i*4];
        states[D3DRS_PSALPHAOUTPUTS0+i]=pixel_words[3+i*4];
        states[D3DRS_PSRGBOUTPUTS0+i]=pixel_words[4+i*4];
    }
    states[D3DRS_PSFINALCOMBINERINPUTSABCD]=pixel_words[33];
    states[D3DRS_PSFINALCOMBINERINPUTSEFG]=pixel_words[34];
    // Zero every byte, including padding, as in the original binary key.
    std::memset(&prepared.pixel,0,sizeof(prepared.pixel));
    d3d8_combiners_from_render_states(states,&prepared.pixel);
    for(unsigned i=0;i<4;++i){
        unsigned mode=(pixel_words[35]>>(i*5))&31;
        prepared.pixel.tex_mode[i]=mode==0?NV2A_TEXMODE_NONE:
            mode==4?NV2A_TEXMODE_PASSTHROUGH:NV2A_TEXMODE_2D;
    }
    prepared.pipeline_key=nhl07_shader_pipeline_key(vertex.length,bgra,vertex.integer_inputs,
        program,&prepared.pixel,sizeof(prepared.pixel));
}
