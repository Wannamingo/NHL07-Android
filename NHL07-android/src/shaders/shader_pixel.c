#include "d3d8_combiners.h"
#include <stdio.h>
#include <string.h>
static void d3dcolor_to_float4(DWORD color, float out[4])
{
    out[0] = ((color >> 16) & 0xFF) / 255.0f; /* R */
    out[1] = ((color >>  8) & 0xFF) / 255.0f; /* G */
    out[2] = ((color >>  0) & 0xFF) / 255.0f; /* B */
    out[3] = ((color >> 24) & 0xFF) / 255.0f; /* A */
}

/* ================================================================
 * Combiner Input Parsing
 *
 * Each combiner input is packed as 8 bits in the render state DWORDs:
 *   [3:0] register select (NV2ACombinerRegister value)
 *   [4]   alpha channel replicate
 *   [7:5] input mapping mode (NV2AInputMapping value)
 * ================================================================ */

static void parse_combiner_input(DWORD packed, NV2ACombinerInput *input)
{
    input->reg       = (NV2ACombinerRegister)(packed & 0xF);
    input->alpha_rep = (packed >> 4) & 1;
    input->mapping   = (NV2AInputMapping)((packed >> 5) & 0x7);
}

/**
 * Parse a 32-bit input register DWORD containing 4 packed inputs.
 * Layout: [31:24]=A [23:16]=B [15:8]=C [7:0]=D
 */
static void parse_four_inputs(DWORD dword, NV2ACombinerInput inputs[4])
{
    parse_combiner_input((dword >> 24) & 0xFF, &inputs[0]); /* A */
    parse_combiner_input((dword >> 16) & 0xFF, &inputs[1]); /* B */
    parse_combiner_input((dword >>  8) & 0xFF, &inputs[2]); /* C */
    parse_combiner_input((dword >>  0) & 0xFF, &inputs[3]); /* D */
}

/**
 * Parse a 32-bit output configuration DWORD for one channel.
 *
 * Output DWORD layout:
 *   [3:0]   AB destination register
 *   [7:4]   CD destination register
 *   [11:8]  SUM destination register
 *   [12]    CD dot product flag
 *   [13]    AB dot product flag
 *   [14]    mux_sum flag (mux instead of sum)
 *   [17:15] output mapping (scale/bias)
 *   Bits 18-31 are reserved/unused.
 */
static void parse_output(DWORD dword, NV2ACombinerOutput *output)
{
    output->ab_dst     = (NV2ACombinerRegister)((dword >>  4) & 0xF);
    output->cd_dst     = (NV2ACombinerRegister)((dword >>  0) & 0xF);
    output->sum_dst    = (NV2ACombinerRegister)((dword >>  8) & 0xF);
    output->cd_dot     = (dword >> 12) & 1;
    output->ab_dot     = (dword >> 13) & 1;
    output->mux_sum    = (dword >> 14) & 1;
    output->ab_blue_alpha = (dword >> 19) & 1;
    output->cd_blue_alpha = (dword >> 18) & 1;
    output->output_map = (NV2AOutputMapping)((dword >> 15) & 0x7);
}

/* ================================================================
 * Token & Render State Parsing
 * ================================================================ */

void d3d8_combiners_parse_token(DWORD token, const DWORD *rs,
                                NV2ACombinerState *state)
{
    int i;
    memset(state, 0, sizeof(*state));

    /* Bits [3:0]: number of active combiner stages (1-8) */
    state->num_stages = token & 0xF;
    if (state->num_stages < 1) state->num_stages = 1;
    if (state->num_stages > NV2A_MAX_COMBINER_STAGES)
        state->num_stages = NV2A_MAX_COMBINER_STAGES;

    /* Bits [8:23]: texture mode per stage (4 bits each) */
    state->tex_mode[0] = (NV2ATextureMode)((token >>  8) & 0xF);
    state->tex_mode[1] = (NV2ATextureMode)((token >> 12) & 0xF);
    state->tex_mode[2] = (NV2ATextureMode)((token >> 16) & 0xF);
    state->tex_mode[3] = (NV2ATextureMode)((token >> 20) & 0xF);

    /* Bits [24:31]: dot mapping and other flags */
    state->flags = rs[D3DRS_PSCOMBINERCOUNT] >> 8;

    /* Parse per-stage inputs and outputs from render states */
    d3d8_combiners_from_render_states(rs, state);

    /* Preserve the token-derived fields (from_render_states may overwrite) */
    state->num_stages = token & 0xF;
    if (state->num_stages < 1) state->num_stages = 1;
    if (state->num_stages > NV2A_MAX_COMBINER_STAGES)
        state->num_stages = NV2A_MAX_COMBINER_STAGES;
    state->tex_mode[0] = (NV2ATextureMode)((token >>  8) & 0xF);
    state->tex_mode[1] = (NV2ATextureMode)((token >> 12) & 0xF);
    state->tex_mode[2] = (NV2ATextureMode)((token >> 16) & 0xF);
    state->tex_mode[3] = (NV2ATextureMode)((token >> 20) & 0xF);
    state->flags = rs[D3DRS_PSCOMBINERCOUNT] >> 8;
}

void d3d8_combiners_from_render_states(const DWORD *rs,
                                       NV2ACombinerState *state)
{
    int i;

    /*
     * If called standalone (not from parse_token), read combiner count
     * from D3DRS_PSCOMBINERCOUNT render state.
     *
     * D3DRS_PSCOMBINERCOUNT layout:
     *   [3:0] number of stages
     *   [8]   MUX selects the MSB instead of the LSB of R0 alpha
     *   [12]  unique C0 per stage (1) vs shared (0)
     *   [16]  unique C1 per stage (1) vs shared (0)
     */
    if (state->num_stages == 0) {
        state->num_stages = rs[D3DRS_PSCOMBINERCOUNT] & 0xF;
        if (state->num_stages < 1) state->num_stages = 1;
        if (state->num_stages > NV2A_MAX_COMBINER_STAGES)
            state->num_stages = NV2A_MAX_COMBINER_STAGES;
    }

    /* Parse stage inputs */
    for (i = 0; i < NV2A_MAX_COMBINER_STAGES; i++) {
        parse_four_inputs(rs[D3DRS_PSRGBINPUTS0 + i],
                          state->stages[i].rgb_input);
        parse_four_inputs(rs[D3DRS_PSALPHAINPUTS0 + i],
                          state->stages[i].alpha_input);
    }

    /* Parse stage outputs */
    for (i = 0; i < NV2A_MAX_COMBINER_STAGES; i++) {
        parse_output(rs[D3DRS_PSRGBOUTPUTS0 + i],
                     &state->stages[i].rgb_output);
        parse_output(rs[D3DRS_PSALPHAOUTPUTS0 + i],
                     &state->stages[i].alpha_output);
    }

    /*
     * Parse final combiner inputs.
     *
     * D3DRS_PSFINALCOMBINERINPUTSABCD packs inputs A,B,C,D as 8 bits each:
     *   [7:0]=A  [15:8]=B  [23:16]=C  [31:24]=D
     *
     * D3DRS_PSFINALCOMBINERINPUTSEFG packs E,F,G:
     *   [7:0]=E  [15:8]=F  [23:16]=G  [31:24]=reserved
     */
    {
        DWORD abcd = rs[D3DRS_PSFINALCOMBINERINPUTSABCD];
        DWORD efg  = rs[D3DRS_PSFINALCOMBINERINPUTSEFG];

        parse_four_inputs(abcd,state->final_input);
        parse_combiner_input((efg  >> 24) & 0xFF, &state->final_input[4]); /* E */
        parse_combiner_input((efg  >> 16) & 0xFF, &state->final_input[5]); /* F */
        parse_combiner_input((efg  >>  8) & 0xFF, &state->final_input[6]); /* G */
    }

    state->flags=rs[D3DRS_PSCOMBINERCOUNT] >> 8;
    /* Shared C0/C1 colors are independently selected by the count flags. */
    for (i = 0; i < NV2A_MAX_COMBINER_STAGES; i++) {
        state->c0[i] = rs[D3DRS_PSCONSTANT0_0 + ((state->flags&16)?i:0)];
        state->c1[i] = rs[D3DRS_PSCONSTANT1_0 + ((state->flags&256)?i:0)];
    }

    /* Final combiner uses the constants from the last active stage, or
     * can use its own - for now, store them separately. Games typically
     * share them with the last stage. */
    state->final_c0 = rs[D3DRS_PSFINALCOMBINERCONSTANT0];
    state->final_c1 = rs[D3DRS_PSFINALCOMBINERCONSTANT1];

    /* Read texture modes from render state if not already set by token */
    if (state->tex_mode[0] == 0 && state->tex_mode[1] == 0 &&
        state->tex_mode[2] == 0 && state->tex_mode[3] == 0) {
        DWORD tm = rs[D3DRS_PSTEXTUREMODES];
        state->tex_mode[0] = (NV2ATextureMode)((tm >>  0) & 0xF);
        state->tex_mode[1] = (NV2ATextureMode)((tm >>  4) & 0xF);
        state->tex_mode[2] = (NV2ATextureMode)((tm >>  8) & 0xF);
        state->tex_mode[3] = (NV2ATextureMode)((tm >> 12) & 0xF);
    }
}

/* ================================================================
 * HLSL Code Generation
 *
 * Strategy: build the shader string via snprintf into a large buffer.
 * Each section appends to a running offset. This is not the prettiest
 * approach but it's straightforward, debuggable, and has zero
 * external dependencies.
 *
 * Generated shader structure:
 *   1. Texture sampler declarations
 *   2. Constant buffer (matches NV2APSConstants layout)
 *   3. Input struct (SV_POSITION, COLOR0, COLOR1, TEXCOORD0-3)
 *   4. Input mapping helper function
 *   5. Output mapping helper function
 *   6. main():
 *      a. Initialize register file from inputs
 *      b. Execute each general combiner stage
 *      c. Execute final combiner
 *      d. Apply fog
 *      e. Apply alpha test
 *      f. Return result
 * ================================================================ */

/**
 * Emit HLSL to append a string to the output buffer.
 * Returns new offset, or -1 if buffer overflow.
 */
#define EMIT(fmt, ...) do { \
    int _n = snprintf(buf + off, bufsize - off, fmt, ##__VA_ARGS__); \
    if (_n < 0 || off + _n >= bufsize) return -1; \
    off += _n; \
} while (0)

/**
 * Get the HLSL variable name for a register in the NV2A register file.
 *
 * The register file is represented as local float4 variables in the
 * generated shader. This returns the name used in the HLSL code.
 */
static const char *reg_name(NV2ACombinerRegister reg)
{
    switch (reg) {
    case NV2A_REG_ZERO:     return "r_zero";
    case NV2A_REG_C0:       return "r_c0";
    case NV2A_REG_C1:       return "r_c1";
    case NV2A_REG_FOG:      return "r_fog";
    case NV2A_REG_V0:       return "r_v0";
    case NV2A_REG_V1:       return "r_v1";
    case NV2A_REG_T0:       return "r_t0";
    case NV2A_REG_T1:       return "r_t1";
    case NV2A_REG_T2:       return "r_t2";
    case NV2A_REG_T3:       return "r_t3";
    case NV2A_REG_R0:       return "r_r0";
    case NV2A_REG_R1:       return "r_r1";
    case NV2A_REG_EF_PROD:  return "r_ef";
    case NV2A_REG_V1R0_SUM: return "r_v1r0sum";
    default:                return "r_zero";
    }
}

/**
 * Emit HLSL expression for reading a combiner input.
 *
 * An input consists of:
 *   1. Register selection (which variable to read)
 *   2. Channel selection (full RGBA or alpha-replicated)
 *   3. Mapping function (how to transform the value)
 *
 * For alpha-replicate: .aaaa swizzle
 * For normal RGB read in RGB path: .rgb (or .rgba for alpha path)
 *
 * The mapping function is applied inline as an arithmetic expression.
 *
 * @param suffix  ".rgb" for RGB path, ".a" for alpha path (determines swizzle)
 */
static void emit_mapped_input(char *buf, int bufsize, int *off,
                               const NV2ACombinerInput *input,
                               const char *suffix, int stage_idx)
{
    const char *rn;
    char swizzle[8];
    char base_expr[128];
    int n;

    rn = reg_name(input->reg);

    /* For per-stage C0/C1, use the stage-indexed constant */
    if (input->reg == NV2A_REG_C0) {
        if (stage_idx<0) snprintf(base_expr,sizeof(base_expr),"fc0");
        else snprintf(base_expr, sizeof(base_expr), "c0[%d]", stage_idx);
    } else if (input->reg == NV2A_REG_C1) {
        if (stage_idx<0) snprintf(base_expr,sizeof(base_expr),"fc1");
        else snprintf(base_expr, sizeof(base_expr), "c1[%d]", stage_idx);
    } else {
        int writable=input->reg==NV2A_REG_V0||input->reg==NV2A_REG_V1||(input->reg>=NV2A_REG_T0&&input->reg<=NV2A_REG_R1);
        snprintf(base_expr, sizeof(base_expr), "%s%s",stage_idx>=0&&writable?"in_":"",rn);
    }

    /* Determine swizzle based on alpha replicate and target channel */
    if (input->alpha_rep) {
        /* Alpha replicate: use .aaaa for RGB, .a for alpha */
        if (strcmp(suffix, ".a") == 0)
            snprintf(swizzle, sizeof(swizzle), ".a");
        else
            snprintf(swizzle, sizeof(swizzle), ".aaa");
    } else {
        snprintf(swizzle, sizeof(swizzle), "%s", strcmp(suffix,".a")==0 ? ".b" : suffix);
    }

    /* Build the full variable reference */
    char var_ref[160];
    snprintf(var_ref, sizeof(var_ref), "%s%s", base_expr, swizzle);

    /* Apply input mapping */
    switch (input->mapping) {
    case NV2A_MAP_UNSIGNED_IDENTITY:
        /* x - passthrough */
        n = snprintf(buf + *off, bufsize - *off, "max(%s, 0.0)", var_ref);
        break;
    case NV2A_MAP_UNSIGNED_INVERT:
        /* 1 - x, clamped to [0,1] */
        n = snprintf(buf + *off, bufsize - *off,
                     "max(1.0 - %s, 0.0)", var_ref);
        break;
    case NV2A_MAP_EXPAND_NORMAL:
        /* 2x - 1 */
        n = snprintf(buf + *off, bufsize - *off,
                     "(2.0 * max(%s, 0.0) - 1.0)", var_ref);
        break;
    case NV2A_MAP_EXPAND_NEGATE:
        /* 1 - 2x */
        n = snprintf(buf + *off, bufsize - *off,
                     "(1.0 - 2.0 * max(%s, 0.0))", var_ref);
        break;
    case NV2A_MAP_HALFBIAS_NORMAL:
        /* x - 0.5 */
        n = snprintf(buf + *off, bufsize - *off,
                     "(max(%s, 0.0) - 0.5)", var_ref);
        break;
    case NV2A_MAP_HALFBIAS_NEGATE:
        /* 0.5 - x */
        n = snprintf(buf + *off, bufsize - *off,
                     "(0.5 - max(%s, 0.0))", var_ref);
        break;
    case NV2A_MAP_SIGNED_IDENTITY:
        /* x (allow negative values) */
        n = snprintf(buf + *off, bufsize - *off, "%s", var_ref);
        break;
    case NV2A_MAP_SIGNED_NEGATE:
        /* -x */
        n = snprintf(buf + *off, bufsize - *off, "(-%s)", var_ref);
        break;
    default:
        n = snprintf(buf + *off, bufsize - *off, "%s", var_ref);
        break;
    }
    if (n > 0) *off += n;
}

/**
 * Emit HLSL expression for the output mapping (scale/bias).
 */
static const char *output_map_prefix(NV2AOutputMapping map)
{
    switch (map) {
    case NV2A_OUT_IDENTITY:         return "";
    case NV2A_OUT_BIAS:             return "(";
    case NV2A_OUT_SHIFTLEFT_1:      return "(";
    case NV2A_OUT_SHIFTLEFT_1_BIAS: return "((";
    case NV2A_OUT_SHIFTLEFT_2:      return "(";
    case NV2A_OUT_SHIFTRIGHT_1:     return "(";
    default:                        return "";
    }
}

static const char *output_map_suffix(NV2AOutputMapping map)
{
    switch (map) {
    case NV2A_OUT_IDENTITY:         return "";
    case NV2A_OUT_BIAS:             return " - 0.5)";
    case NV2A_OUT_SHIFTLEFT_1:      return " * 2.0)";
    case NV2A_OUT_SHIFTLEFT_1_BIAS: return " - 0.5) * 2.0)";
    case NV2A_OUT_SHIFTLEFT_2:      return " * 4.0)";
    case NV2A_OUT_SHIFTRIGHT_1:     return " * 0.5)";
    default:                        return "";
    }
}

int d3d8_combiners_generate_hlsl(const NV2ACombinerState *state,
                                 char *buf, int bufsize)
{
    int off = 0;
    int i;

    /* ---- Texture samplers ---- */
    for (i = 0; i < NV2A_MAX_TEXTURES; i++) {
        if (state->tex_mode[i] != NV2A_TEXMODE_NONE && state->tex_mode[i] != NV2A_TEXMODE_PASSTHROUGH) {
            if (state->tex_mode[i] == NV2A_TEXMODE_CUBEMAP) {
                EMIT("TextureCube  tex%d : register(t%d);\n", i, i);
            } else if (state->tex_mode[i] == NV2A_TEXMODE_3D) {
                EMIT("Texture3D    tex%d : register(t%d);\n", i, i);
            } else {
                EMIT("Texture2D    tex%d : register(t%d);\n", i, i);
            }
            EMIT("SamplerState samp%d : register(s%d);\n", i, i);
        }
    }
    EMIT("\n");

    /* ---- Constant buffer ---- */
    EMIT("cbuffer CombinerCB : register(b0) {\n");
    EMIT("    float4 c0[8];\n");    /* Per-stage C0 */
    EMIT("    float4 c1[8];\n");    /* Per-stage C1 */
    EMIT("    float4 fc0;\n");      /* Final combiner C0 */
    EMIT("    float4 fc1;\n");      /* Final combiner C1 */
    EMIT("    float4 fog_color;\n");
    EMIT("    float  alpha_ref;\n");
    EMIT("    uint   alpha_func;\n");
    EMIT("    uint   alpha_test_enable;\n");
    EMIT("    uint   fog_enable;\n");
    EMIT("    uint4  alpha_only;\n");
    EMIT("    uint4  texcoord_flags;\n");
    EMIT("    float4 texture_size[4];\n");
    EMIT("};\n\n");

    /* ---- Input structure ---- */
    EMIT("struct PS_IN {\n");
    EMIT("    float4 pos     : SV_POSITION;\n");
    EMIT("    float4 color0  : COLOR0;\n");
    EMIT("    float4 color1  : COLOR1;\n");
    EMIT("    float4 tc0     : TEXCOORD0;\n");
    EMIT("    float4 tc1     : TEXCOORD1;\n");
    EMIT("    float4 tc2     : TEXCOORD2;\n");
    EMIT("    float4 tc3     : TEXCOORD3;\n");
    EMIT("    float fog      : FOG;\n");
    EMIT("};\n\n");

    /* ---- Main function ---- */
    EMIT("float4 main(PS_IN input) : SV_TARGET {\n");

    /* Initialize register file */
    EMIT("    /* Register file initialization */\n");
    EMIT("    float4 r_zero = float4(0, 0, 0, 0);\n");
    EMIT("    float4 r_c0   = c0[0];\n");
    EMIT("    float4 r_c1   = c1[0];\n");
    EMIT("    float4 r_fog  = float4(fog_color.rgb, saturate(input.fog));\n");

    /* Vertex colors: Xbox D3DCOLOR is BGRA in memory, the vertex shader
     * should have already swizzled to RGBA. */
    EMIT("    float4 r_v0   = input.color0;\n");
    EMIT("    float4 r_v1   = input.color1;\n");

    /* Texture samples */
    for (i = 0; i < NV2A_MAX_TEXTURES; i++) {
        EMIT("    float4 tc%d = input.tc%d;\n",i,i);
        // Programmable PROJECT2D/PROJECT3D modes divide by Q regardless of
        // fixed-function D3DTSS_TEXTURETRANSFORMFLAGS. NFSU's wet road writes
        // screen.xy*clip.w and clip.w for its reflection stage.
        if (state->tex_mode[i] == NV2A_TEXMODE_2D || state->tex_mode[i] == NV2A_TEXMODE_3D)
            EMIT("    tc%d.xyz /= tc%d.w;\n",i,i);
        if (state->tex_mode[i] == NV2A_TEXMODE_2D)
            EMIT("    if (texture_size[%d].x > 0.0) tc%d.xy /= texture_size[%d].xy;\n",i,i,i);
        if (state->tex_mode[i] == NV2A_TEXMODE_NONE) {
            EMIT("    float4 r_t%d = float4(0, 0, 0, 0);\n", i);
        } else if (state->tex_mode[i] == NV2A_TEXMODE_PASSTHROUGH) {
            EMIT("    float4 r_t%d = tc%d;\n", i,i);
        } else if (state->tex_mode[i] == NV2A_TEXMODE_CUBEMAP) {
            /* Cube map: use the full 3-component reflection/TCI vector */
            EMIT("    float4 r_t%d = tex%d.Sample(samp%d, tc%d.xyz);\n",
                 i, i, i, i);
        } else if (state->tex_mode[i] == NV2A_TEXMODE_3D) {
            /* 3D texture: use the full 3-component coordinate */
            EMIT("    float4 r_t%d = tex%d.Sample(samp%d, tc%d.xyz);\n",
                 i, i, i, i);
        } else {
            EMIT("    float4 r_t%d = tex%d.Sample(samp%d, tc%d.xy);\n",
                 i, i, i, i);
        }
        /* Preserve disabled stages and sampled alpha. */
        if (state->tex_mode[i] != NV2A_TEXMODE_NONE && state->tex_mode[i] != NV2A_TEXMODE_PASSTHROUGH)
            EMIT("    if (alpha_only[%d]) r_t%d.rgb = 1.0;\n", i, i);
    }

    /* Temporary registers: R0 initialized to T0 (NV2A convention),
     * R1 initialized to zero */
    EMIT("    float4 r_r0 = r_t0;\n");
    EMIT("    float4 r_r1 = float4(0, 0, 0, 0);\n\n");

    /* ---- General combiner stages ---- */
    for (i = 0; i < state->num_stages; i++) {
        const NV2ACombinerInput *rgb_in  = state->stages[i].rgb_input;
        const NV2ACombinerInput *alpha_in = state->stages[i].alpha_input;
        const NV2ACombinerOutput *rgb_out = &state->stages[i].rgb_output;
        const NV2ACombinerOutput *alpha_out = &state->stages[i].alpha_output;

        EMIT("    /* ---- Stage %d ---- */\n", i);

        /* Update per-stage constants (only if this stage uses C0/C1) */
        EMIT("    r_c0 = c0[%d];\n", i);
        EMIT("    r_c1 = c1[%d];\n", i);
        EMIT("    {\n");
        for(int reg=0;reg<14;++reg)if(reg==NV2A_REG_V0||reg==NV2A_REG_V1||reg>=NV2A_REG_T0)
            EMIT("    float4 in_%s = %s;\n",reg_name((NV2ACombinerRegister)reg),reg_name((NV2ACombinerRegister)reg));
        EMIT("    bool mux_select_cd = %s;\n",(state->flags&1)?"in_r_r0.a >= 0.5":"((uint)(saturate(in_r_r0.a)*255.0) & 1u) != 0u");

        /*
         * RGB path: compute AB and CD products
         *
         * AB_rgb = map(A) * map(B)    (component-wise, or dot3 if ab_dot)
         * CD_rgb = map(C) * map(D)    (component-wise, or dot3 if cd_dot)
         */
        EMIT("    {\n");

        /* AB product */
        EMIT("        float3 a_rgb = ");
        emit_mapped_input(buf, bufsize, &off, &rgb_in[0], ".rgb", i);
        EMIT(";\n");
        EMIT("        float3 b_rgb = ");
        emit_mapped_input(buf, bufsize, &off, &rgb_in[1], ".rgb", i);
        EMIT(";\n");

        if (rgb_out->ab_dot) {
            EMIT("        float3 ab_rgb = float3(dot(a_rgb, b_rgb), "
                 "dot(a_rgb, b_rgb), dot(a_rgb, b_rgb));\n");
        } else {
            EMIT("        float3 ab_rgb = a_rgb * b_rgb;\n");
        }

        /* CD product */
        EMIT("        float3 c_rgb = ");
        emit_mapped_input(buf, bufsize, &off, &rgb_in[2], ".rgb", i);
        EMIT(";\n");
        EMIT("        float3 d_rgb = ");
        emit_mapped_input(buf, bufsize, &off, &rgb_in[3], ".rgb", i);
        EMIT(";\n");

        if (rgb_out->cd_dot) {
            EMIT("        float3 cd_rgb = float3(dot(c_rgb, d_rgb), "
                 "dot(c_rgb, d_rgb), dot(c_rgb, d_rgb));\n");
        } else {
            EMIT("        float3 cd_rgb = c_rgb * d_rgb;\n");
        }

        /* Sum or mux */
        if (rgb_out->mux_sum) {
            EMIT("        float3 sum_rgb = mux_select_cd ? cd_rgb : ab_rgb;\n");
        } else {
            EMIT("        float3 sum_rgb = ab_rgb + cd_rgb;\n");
        }

        /* Apply output mapping (scale/bias) */
        const char *omp = output_map_prefix(rgb_out->output_map);
        const char *oms = output_map_suffix(rgb_out->output_map);

        /* Write to destination registers */
        if (rgb_out->ab_dst != NV2A_REG_ZERO) {
            EMIT("        %s.rgb = clamp(%sab_rgb%s, -1.0, 1.0);\n",
                 reg_name(rgb_out->ab_dst), omp, oms);
            if(rgb_out->ab_blue_alpha)EMIT("        %s.a = clamp(%sab_rgb%s, -1.0, 1.0).b;\n",reg_name(rgb_out->ab_dst),omp,oms);
        }
        if (rgb_out->cd_dst != NV2A_REG_ZERO) {
            EMIT("        %s.rgb = clamp(%scd_rgb%s, -1.0, 1.0);\n",
                 reg_name(rgb_out->cd_dst), omp, oms);
            if(rgb_out->cd_blue_alpha)EMIT("        %s.a = clamp(%scd_rgb%s, -1.0, 1.0).b;\n",reg_name(rgb_out->cd_dst),omp,oms);
        }
        if (rgb_out->sum_dst != NV2A_REG_ZERO) {
            EMIT("        %s.rgb = clamp(%ssum_rgb%s, -1.0, 1.0);\n",
                 reg_name(rgb_out->sum_dst), omp, oms);
        }

        EMIT("    }\n");

        /*
         * Alpha path: same structure but scalar operations.
         * Uses .a swizzle for all reads/writes.
         */
        EMIT("    {\n");

        EMIT("        float a_a = ");
        emit_mapped_input(buf, bufsize, &off, &alpha_in[0], ".a", i);
        EMIT(";\n");
        EMIT("        float b_a = ");
        emit_mapped_input(buf, bufsize, &off, &alpha_in[1], ".a", i);
        EMIT(";\n");
        EMIT("        float ab_a = a_a * b_a;\n");

        EMIT("        float c_a = ");
        emit_mapped_input(buf, bufsize, &off, &alpha_in[2], ".a", i);
        EMIT(";\n");
        EMIT("        float d_a = ");
        emit_mapped_input(buf, bufsize, &off, &alpha_in[3], ".a", i);
        EMIT(";\n");
        EMIT("        float cd_a = c_a * d_a;\n");

        if (alpha_out->mux_sum) {
            EMIT("        float sum_a = mux_select_cd ? cd_a : ab_a;\n");
        } else {
            EMIT("        float sum_a = ab_a + cd_a;\n");
        }

        /* Alpha output mapping */
        omp = output_map_prefix(alpha_out->output_map);
        oms = output_map_suffix(alpha_out->output_map);

        if (alpha_out->ab_dst != NV2A_REG_ZERO) {
            EMIT("        %s.a = clamp(%sab_a%s, -1.0, 1.0);\n",
                 reg_name(alpha_out->ab_dst), omp, oms);
        }
        if (alpha_out->cd_dst != NV2A_REG_ZERO) {
            EMIT("        %s.a = clamp(%scd_a%s, -1.0, 1.0);\n",
                 reg_name(alpha_out->cd_dst), omp, oms);
        }
        if (alpha_out->sum_dst != NV2A_REG_ZERO) {
            EMIT("        %s.a = clamp(%ssum_a%s, -1.0, 1.0);\n",
                 reg_name(alpha_out->sum_dst), omp, oms);
        }

        EMIT("    }\n    }\n\n");
    }

    /* ---- Final combiner ----
     *
     * The NV2A final combiner computes:
     *   result.rgb = D + lerp(C, B, A)
     *              = D + A*B + (1-A)*C
     *   result.a   = G.a
     *
     * Additionally, E*F is computed and made available as the EF_PROD
     * register, and V1+R0 is available as V1R0_SUM. These are computed
     * BEFORE the final combiner reads its inputs.
     */
    EMIT("    /* ---- Final Combiner ---- */\n");

    /* Compute specials: EF product and V1R0 sum */
    EMIT("    float4 r_ef = float4(0, 0, 0, 0);\n");
    EMIT("    float4 r_v1r0sum = float4(0, 0, 0, 0);\n");

    /* E * F product */
    EMIT("    {\n");
    EMIT("        float4 e_val = float4(");
    emit_mapped_input(buf, bufsize, &off, &state->final_input[4], ".rgb", -1);
    EMIT(", ");
    emit_mapped_input(buf, bufsize, &off, &state->final_input[4], ".a", -1);
    EMIT(");\n");
    EMIT("        float4 f_val = float4(");
    emit_mapped_input(buf, bufsize, &off, &state->final_input[5], ".rgb", -1);
    EMIT(", ");
    emit_mapped_input(buf, bufsize, &off, &state->final_input[5], ".a", -1);
    EMIT(");\n");
    EMIT("        r_ef = e_val * f_val;\n");
    EMIT("    }\n");

    /* V1 + R0 sum (clamped to [0,1]) */
    EMIT("    r_v1r0sum = saturate(r_v1 + r_r0);\n\n");

    /* Final combiner: result.rgb = D + A*B + (1-A)*C */
    /* Use last stage index for C0/C1 references in final combiner */
    {
        int fc_stage = -1;

        EMIT("    float4 result;\n");
        EMIT("    {\n");

        /* Read final combiner inputs A, B, C, D */
        EMIT("        float3 fc_a = ");
        emit_mapped_input(buf, bufsize, &off, &state->final_input[0], ".rgb", fc_stage);
        EMIT(";\n");
        EMIT("        float3 fc_b = ");
        emit_mapped_input(buf, bufsize, &off, &state->final_input[1], ".rgb", fc_stage);
        EMIT(";\n");
        EMIT("        float3 fc_c = ");
        emit_mapped_input(buf, bufsize, &off, &state->final_input[2], ".rgb", fc_stage);
        EMIT(";\n");
        EMIT("        float3 fc_d = ");
        emit_mapped_input(buf, bufsize, &off, &state->final_input[3], ".rgb", fc_stage);
        EMIT(";\n");

        /* result.rgb = D + lerp(C, B, A) = D + A*B + (1-A)*C */
        EMIT("        result.rgb = saturate(fc_d + fc_a * fc_b + (1.0 - fc_a) * fc_c);\n");

        /* result.a = G.a */
        EMIT("        result.a = ");
        emit_mapped_input(buf, bufsize, &off, &state->final_input[6], ".a", fc_stage);
        EMIT(";\n");

        EMIT("    }\n\n");
    }

    /* ---- Fog ---- */
    /* The programmed final combiner performs fog blending explicitly. */

    /* ---- Alpha test ---- */
    EMIT("    /* Alpha test */\n");
    EMIT("    if (alpha_test_enable) {\n");
    EMIT("        bool alpha_pass = true;\n");
    EMIT("        if      (alpha_func == 1u) alpha_pass = false;\n");
    EMIT("        else if (alpha_func == 2u) alpha_pass = (result.a <  alpha_ref);\n");
    EMIT("        else if (alpha_func == 3u) alpha_pass = (result.a == alpha_ref);\n");
    EMIT("        else if (alpha_func == 4u) alpha_pass = (result.a <= alpha_ref);\n");
    EMIT("        else if (alpha_func == 5u) alpha_pass = (result.a >  alpha_ref);\n");
    EMIT("        else if (alpha_func == 6u) alpha_pass = (result.a != alpha_ref);\n");
    EMIT("        else if (alpha_func == 7u) alpha_pass = (result.a >= alpha_ref);\n");
    EMIT("        if (!alpha_pass) discard;\n");
    EMIT("    }\n\n");

    EMIT("    return result;\n");
    EMIT("}\n");

    return off;
}

#undef EMIT

