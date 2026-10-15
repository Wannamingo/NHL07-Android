#include "d3d8_vsh.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
static uint32_t instruction_field(const DWORD *words, unsigned word, unsigned bit, unsigned width)
{
    return (words[word] >> bit) & ((1u << width)-1u);
}

static void parse_source(const DWORD *words, unsigned source, int input, int constant,
                         NV2AVshSrcOperand *result)
{
    uint32_t mux, reg, swizzle;
    if (source==0) {
        result->negate=instruction_field(words,1,8,1);
        mux=instruction_field(words,2,26,2); reg=instruction_field(words,2,28,4);
        swizzle=words[1]&255;
    } else if (source==1) {
        result->negate=instruction_field(words,2,25,1);
        mux=instruction_field(words,2,11,2); reg=instruction_field(words,2,13,4);
        swizzle=instruction_field(words,2,17,8);
    } else {
        result->negate=instruction_field(words,2,10,1);
        mux=instruction_field(words,3,28,2);
        reg=(instruction_field(words,2,0,2)<<2)|instruction_field(words,3,30,2);
        swizzle=instruction_field(words,2,2,8);
    }
    result->swizzle.x=(swizzle>>6)&3; result->swizzle.y=(swizzle>>4)&3;
    result->swizzle.z=(swizzle>>2)&3; result->swizzle.w=swizzle&3;
    result->reg_type=mux==1 ? NV2A_VSH_REG_TEMP : mux==2 ? NV2A_VSH_REG_INPUT :
                     mux==3 ? NV2A_VSH_REG_CONST : (NV2AVshRegType)255;
    result->reg_index=mux==1 ? reg : mux==2 ? input : constant;
    result->rel_addr=mux==3 && (words[3]&2);
}

static unsigned mac_sources(NV2AVshMacOp op)
{
    switch(op) {
    case NV2A_VSH_MAC_NOP: return 0;
    case NV2A_VSH_MAC_MOV: case NV2A_VSH_MAC_ARL: return 1;
    case NV2A_VSH_MAC_ADD: return 5;
    case NV2A_VSH_MAC_MAD: return 7;
    default: return 3;
    }
}

static NV2AVshOutputReg decode_output_mux(uint32_t mux_val)
{
    /* The output register mux field encodes which output register.
     * The low nibble gives the output type. */
    uint32_t out_idx = mux_val & 0xF;
    switch (out_idx) {
    case 0:  return NV2A_VSH_OUT_POS;
    case 3:  return NV2A_VSH_OUT_D0;
    case 4:  return NV2A_VSH_OUT_D1;
    case 5:  return NV2A_VSH_OUT_FOG;
    case 6:  return NV2A_VSH_OUT_PTS;
    case 7:  return NV2A_VSH_OUT_B0;
    case 8:  return NV2A_VSH_OUT_B1;
    case 9:  return NV2A_VSH_OUT_T0;
    case 10: return NV2A_VSH_OUT_T1;
    case 11: return NV2A_VSH_OUT_T2;
    case 12: return NV2A_VSH_OUT_T3;
    default: return NV2A_VSH_OUT_NONE;
    }
}

void d3d8_vsh_parse(const DWORD *microcode, int num_insns, NV2AVshProgram *program)
{
    int i;
    memset(program,0,sizeof(*program));
    if (num_insns>NV2A_VS_MAX_INSTRUCTIONS) num_insns=NV2A_VS_MAX_INSTRUCTIONS;
    for (i=0; i<num_insns; ++i) {
        const DWORD *w=microcode+i*4;
        NV2AVshInstruction *inst=&program->insns[i];
        unsigned used, output_mask, output_mux, output_address, temp;
        inst->mac_op=(NV2AVshMacOp)instruction_field(w,1,21,4);
        inst->ilu_op=(NV2AVshIluOp)instruction_field(w,1,25,3);
        inst->input_index=instruction_field(w,1,9,4);
        inst->const_index=instruction_field(w,1,13,8);
        for (unsigned n=0; n<3; ++n)
            parse_source(w,n,inst->input_index,inst->const_index,&inst->mac_src[n]);
        inst->ilu_src=inst->mac_src[2];
        temp=instruction_field(w,3,20,4);
        inst->mac_dst.temp_reg=temp;
        inst->mac_dst.write_mask=instruction_field(w,3,24,4);
        inst->ilu_dst.temp_reg=inst->mac_op!=NV2A_VSH_MAC_NOP ? 1 : temp;
        inst->ilu_dst.write_mask=instruction_field(w,3,16,4);
        inst->mac_dst.output_reg=inst->ilu_dst.output_reg=NV2A_VSH_OUT_NONE;
        output_mask=instruction_field(w,3,12,4);
        output_mux=instruction_field(w,3,2,1);
        output_address=instruction_field(w,3,3,8);
        if (output_mask) {
            NV2AVshDstOperand *dst=output_mux ? &inst->ilu_dst : &inst->mac_dst;
            dst->output_reg=decode_output_mux(output_address);
            dst->output_mask=output_mask;
            if (!(w[3]&0x800) || output_address>15 || dst->output_reg==NV2A_VSH_OUT_NONE)
                program->unsupported=1; /* State programs need a separate implementation. */
        }
        if (inst->mac_op!=NV2A_VSH_MAC_NOP && inst->ilu_op!=NV2A_VSH_ILU_NOP && temp==1)
            inst->mac_dst.write_mask=0;
        used=mac_sources(inst->mac_op);
        if (inst->ilu_op!=NV2A_VSH_ILU_NOP) used|=4;
        for (unsigned n=0; n<3; ++n) if (used&(1u<<n)) {
            const NV2AVshSrcOperand *src=&inst->mac_src[n];
            if (src->reg_type==NV2A_VSH_REG_INPUT) program->inputs_read|=1u<<src->reg_index;
            if ((unsigned)src->reg_type>NV2A_VSH_REG_CONST ||
                (src->reg_type==NV2A_VSH_REG_TEMP && src->reg_index>12) ||
                (src->reg_type==NV2A_VSH_REG_CONST && src->reg_index>=192 && !src->rel_addr))
                program->unsupported=1;
        }
        inst->is_final=w[3]&1;
        program->length=i+1;
        if (inst->is_final) break;
    }
}

/* ================================================================
 * HLSL Code Generator
 * ================================================================ */

/* String buffer helper */
typedef struct {
    char *buf;
    int   pos;
    int   size;
} StrBuf;

static void sb_init(StrBuf *sb, char *buf, int size)
{
    sb->buf  = buf;
    sb->pos  = 0;
    sb->size = size;
    if (size > 0) buf[0] = '\0';
}

static void sb_append(StrBuf *sb, const char *fmt, ...)
{
    va_list ap;
    int remaining;
    if (sb->pos >= sb->size - 1) return;
    remaining = sb->size - sb->pos;
    va_start(ap, fmt);
    int n = vsnprintf(sb->buf + sb->pos, remaining, fmt, ap);
    va_end(ap);
    if (n > 0 && n < remaining)
        sb->pos += n;
    else if (n >= remaining)
        sb->pos = sb->size - 1;
}

/* Component name table */
static const char g_comp_names[] = "xyzw";

/**
 * Emit a swizzle suffix.
 * If the swizzle is identity (.xyzw), emit nothing (saves readability).
 */
static void emit_swizzle(StrBuf *sb, const NV2AVshSwizzle *swz)
{
    /* Check for identity swizzle */
    if (swz->x == 0 && swz->y == 1 && swz->z == 2 && swz->w == 3)
        return;

    sb_append(sb, ".%c%c%c%c",
              g_comp_names[swz->x & 3],
              g_comp_names[swz->y & 3],
              g_comp_names[swz->z & 3],
              g_comp_names[swz->w & 3]);
}

/**
 * Emit a scalar swizzle for ILU ops that replicate a single component.
 * Uses .x/.y/.z/.w for the selected component.
 */
static void emit_scalar_swizzle(StrBuf *sb, const NV2AVshSwizzle *swz)
{
    /* ILU operations use only one component; the swizzle X field selects it */
    sb_append(sb, ".%c", g_comp_names[swz->x & 3]);
}

/**
 * Emit a source operand reference.
 *
 * Handles register bank selection, swizzle, negate, and relative addressing.
 */
static void emit_source(StrBuf *sb, const NV2AVshSrcOperand *src, int scalar)
{
    if (src->negate)
        sb_append(sb, "(-");

    switch (src->reg_type) {
    case NV2A_VSH_REG_TEMP:
        if (src->reg_index == 12)
            sb_append(sb, "R12"); /* oPos alias */
        else
            sb_append(sb, "R%d", src->reg_index);
        break;
    case NV2A_VSH_REG_INPUT:
        sb_append(sb, "v%d", src->reg_index);
        break;
    case NV2A_VSH_REG_CONST:
        if (src->rel_addr)
            sb_append(sb, "c[a0 + %d]", src->reg_index);
        else
            sb_append(sb, "c[%d]", src->reg_index);
        break;
    default:
        sb_append(sb, "float4(0,0,0,0)");
        break;
    }

    if (scalar)
        emit_scalar_swizzle(sb, &src->swizzle);
    else
        emit_swizzle(sb, &src->swizzle);

    if (src->negate)
        sb_append(sb, ")");
}

/**
 * Emit a write mask suffix (.xyzw subset).
 * The mask is encoded as: bit3=x, bit2=y, bit1=z, bit0=w.
 */
static void emit_write_mask(StrBuf *sb, uint8_t mask)
{
    if (mask == 0xF) return; /* Full write, no mask needed */

    sb_append(sb, ".");
    if (mask & 0x8) sb_append(sb, "x");
    if (mask & 0x4) sb_append(sb, "y");
    if (mask & 0x2) sb_append(sb, "z");
    if (mask & 0x1) sb_append(sb, "w");
}

/**
 * Map NV2A output register enum to an HLSL variable name.
 */
static const char *output_reg_name(NV2AVshOutputReg reg)
{
    switch (reg) {
    case NV2A_VSH_OUT_POS:  return "oPos";
    case NV2A_VSH_OUT_D0:   return "oD0";
    case NV2A_VSH_OUT_D1:   return "oD1";
    case NV2A_VSH_OUT_FOG:  return "oFog";
    case NV2A_VSH_OUT_PTS:  return "oPts";
    case NV2A_VSH_OUT_B0:   return "oB0";
    case NV2A_VSH_OUT_B1:   return "oB1";
    case NV2A_VSH_OUT_T0:   return "oT0";
    case NV2A_VSH_OUT_T1:   return "oT1";
    case NV2A_VSH_OUT_T2:   return "oT2";
    case NV2A_VSH_OUT_T3:   return "oT3";
    default:                return NULL;
    }
}

/**
 * Emit a destination assignment (temp and/or output register write).
 *
 * The NV2A can write to both a temp register and an output register
 * simultaneously from the same operation. We emit two assignments
 * when both are active.
 *
 * @param prefix  The destination: temp register name
 * @param dst     The destination operand
 * @param rhs     The HLSL expression to assign (right-hand side)
 */
static void emit_dest_assign(StrBuf *sb, const NV2AVshDstOperand *dst,
                              const char *rhs)
{
    /* Write to temp register if valid */
    if (dst->temp_reg >= 0 && dst->write_mask != 0) {
        if (dst->temp_reg == 12)
            sb_append(sb, "    R12");
        else
            sb_append(sb, "    R%d", dst->temp_reg);
        emit_write_mask(sb, dst->write_mask);
        sb_append(sb, " = (%s)", rhs);
        emit_write_mask(sb, dst->write_mask);
        sb_append(sb, ";\n");
    }

    /* Write to output register if specified */
    if (dst->output_reg != NV2A_VSH_OUT_NONE && dst->output_mask != 0) {
        const char *name = output_reg_name(dst->output_reg);
        if (name) {
            if (dst->output_reg == NV2A_VSH_OUT_FOG) {
                /* oFog is scalar: the first enabled component supplies x. */
                const char *components="xyzw";
                int component=0;
                while (!(dst->output_mask & (8 >> component))) ++component;
                sb_append(sb,"    oFog.x = (%s).%c;\n",rhs,components[component]);
                return;
            }
            sb_append(sb, "    %s", name);
            emit_write_mask(sb, dst->output_mask);
            sb_append(sb, " = (%s)", rhs);
            emit_write_mask(sb, dst->output_mask);
            sb_append(sb, ";\n");
        }
    }
}

/**
 * Emit the HLSL for one MAC operation.
 */
static void emit_mac_op(StrBuf *sb, const NV2AVshInstruction *inst)
{
    StrBuf expr;
    char expr_buf[512];
    sb_init(&expr, expr_buf, sizeof(expr_buf));

    switch (inst->mac_op) {
    case NV2A_VSH_MAC_NOP:
        return;

    case NV2A_VSH_MAC_MOV:
        /* dst = A */
        emit_source(&expr, &inst->mac_src[0], 0);
        break;

    case NV2A_VSH_MAC_MUL:
        /* dst = A * B */
        sb_append(&expr, "(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, " * ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_MAC_ADD:
        /* dst = A + C */
        sb_append(&expr, "(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, " + ");
        emit_source(&expr, &inst->mac_src[2], 0);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_MAC_MAD:
        /* dst = A * B + C */
        sb_append(&expr, "(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, " * ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, " + ");
        emit_source(&expr, &inst->mac_src[2], 0);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_MAC_DP3:
        /* dst.xyzw = dot(A.xyz, B.xyz) replicated */
        sb_append(&expr, "dot(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ".xyz, ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ".xyz).xxxx");
        break;

    case NV2A_VSH_MAC_DPH:
        /* dst = dot(float4(A.xyz, 1.0), B) */
        sb_append(&expr, "dot(float4(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ".xyz, 1.0), ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ").xxxx");
        break;

    case NV2A_VSH_MAC_DP4:
        /* dst.xyzw = dot(A, B) replicated */
        sb_append(&expr, "dot(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ", ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ").xxxx");
        break;

    case NV2A_VSH_MAC_DST:
        /* dst = float4(1.0, A.y * B.y, A.z, B.w) */
        sb_append(&expr, "float4(1.0, ");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ".y * ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ".y, ");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ".z, ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ".w)");
        break;

    case NV2A_VSH_MAC_MIN:
        sb_append(&expr, "min(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ", ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_MAC_MAX:
        sb_append(&expr, "max(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ", ");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_MAC_SLT:
        /* dst = (A < B) ? 1.0 : 0.0
         * SLT is the complement of SGE: slt(a,b) = 1 - step(b, a)
         * Equivalent to: step(a, b) where a < b yields 1
         * Using explicit form for clarity: */
        sb_append(&expr, "(1.0 - step(");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ", ");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, "))");
        break;

    case NV2A_VSH_MAC_SGE:
        /* dst = (A >= B) ? 1.0 : 0.0
         * step(edge, x) returns 1 if x >= edge, 0 otherwise */
        sb_append(&expr, "step(");
        emit_source(&expr, &inst->mac_src[1], 0);
        sb_append(&expr, ", ");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_MAC_ARL:
        sb_append(&expr, "floor(");
        emit_source(&expr, &inst->mac_src[0], 0);
        sb_append(&expr, ")");
        break;

    default:
        return;
    }

    sb_append(sb, "    precise float4 mac_value = (%s);\n", expr_buf);
}

/**
 * Emit the HLSL for one ILU operation.
 */
static void emit_ilu_op(StrBuf *sb, const NV2AVshInstruction *inst)
{
    StrBuf expr;
    char expr_buf[512];
    sb_init(&expr, expr_buf, sizeof(expr_buf));

    switch (inst->ilu_op) {
    case NV2A_VSH_ILU_NOP:
        return;

    case NV2A_VSH_ILU_MOV:
        /* dst = C */
        emit_source(&expr, &inst->ilu_src, 0);
        break;

    case NV2A_VSH_ILU_RCP:
        /* dst = (1.0 / C.x).xxxx */
        sb_append(&expr, "(1.0 / ");
        emit_source(&expr, &inst->ilu_src, 1);
        sb_append(&expr, ").xxxx");
        break;

    case NV2A_VSH_ILU_RCC:
        sb_append(&expr, "nv_rcc(");
        emit_source(&expr, &inst->ilu_src, 1);
        sb_append(&expr, ").xxxx");
        break;

    case NV2A_VSH_ILU_RSQ:
        /* dst = (1.0 / sqrt(abs(C.x))).xxxx */
        sb_append(&expr, "rsqrt(abs(");
        emit_source(&expr, &inst->ilu_src, 1);
        sb_append(&expr, ")).xxxx");
        break;

    case NV2A_VSH_ILU_EXP:
        sb_append(&expr, "nv_exp(");
        emit_source(&expr, &inst->ilu_src, 1);
        sb_append(&expr, ")");
        break;

    case NV2A_VSH_ILU_LOG: {
        sb_append(&expr, "nv_log(");
        emit_source(&expr, &inst->ilu_src, 1);
        sb_append(&expr, ")");
        break;
    }

    case NV2A_VSH_ILU_LIT: {
        /* NV2A LIT instruction:
         *   dst.x = 1.0
         *   dst.y = max(src.x, 0.0)
         *   dst.z = (src.x > 0) ? pow(max(src.y, 0), clamp(src.w, -128, 128)) : 0
         *   dst.w = 1.0
         *
         * We emit a helper call. The lit() HLSL intrinsic has similar but
         * not identical semantics, so we use an inline expansion. */
        sb_append(&expr, "float4(1.0, max(");
        emit_source(&expr, &inst->ilu_src, 0);
        sb_append(&expr, ".x, 0.0), (");
        emit_source(&expr, &inst->ilu_src, 0);
        sb_append(&expr, ".x > 0.0) ? exp2(clamp(");
        emit_source(&expr, &inst->ilu_src, 0);
        sb_append(&expr, ".w, -128.0, 128.0) * log2(max(");
        emit_source(&expr, &inst->ilu_src, 0);
        sb_append(&expr, ".y, 0.0) + 1e-30)) : 0.0, 1.0)");
        break;
    }

    default:
        return;
    }

    sb_append(sb, "    precise float4 ilu_value = (%s);\n", expr_buf);
}

/**
 * Map NV2A input register index to a D3D11 input semantic.
 *
 * Xbox NV2A vertex shader input registers map to vertex attributes:
 *   v0  = Position
 *   v1  = Blend weight
 *   v2  = Normal
 *   v3  = Diffuse color
 *   v4  = Specular color
 *   v5  = Fog coordinate
 *   v6  = Point size / back diffuse
 *   v7  = Back specular
 *   v8  = Texture coord 0
 *   v9  = Texture coord 1
 *   v10 = Texture coord 2
 *   v11 = Texture coord 3
 *   v12-v15 = Additional attributes
 *
 * We use generic ATTR semantics so the input layout can match any
 * vertex buffer format at bind time.
 */
static const char *input_semantic_name(int reg_index)
{
    /* All inputs use the generic TEXCOORD semantic with unique indices
     * to avoid mismatches. The input layout will map them correctly. */
    (void)reg_index;
    return "ATTR";
}

int d3d8_vsh_generate_hlsl(const NV2AVshProgram *program,
                            char *buf, int bufsize)
{
    StrBuf sb;
    int i;
    uint16_t inputs = program->inputs_read;

    sb_init(&sb, buf, bufsize);

    /* Constant buffer: 192 float4 constants */
    sb_append(&sb,
        "/* Auto-generated NV2A vertex shader */\n"
        "\n"
        "cbuffer VSH_Constants : register(b1) {\n"
        "    float4 c[%d];\n"
        "    float4 viewport_offset;\n"
        "    float4 viewport_scale;\n"
        "};\n"
        "\n", NV2A_VS_MAX_CONSTANTS);

    /* NV vertex program scalar instructions have distinct component results.
       RCC clamps the magnitude and preserves the reciprocal's sign bit. */
    sb_append(&sb,
        "float nv_rcc(float x) { float r=1.0/x; "
        "float m=clamp(abs(r),asfloat(0x1F800000u),asfloat(0x5F800000u)); "
        "return asfloat(asuint(m)|(asuint(r)&0x80000000u)); }\n"
        "float4 nv_exp(float x) { float f=floor(x); "
        "return float4(exp2(f),x-f,exp2(x),1.0); }\n"
        "float4 nv_log(float x) { float a=abs(x); "
        "if(a==0.0) return float4(asfloat(0xFF800000u),1.0,asfloat(0xFF800000u),1.0); "
        "float l=log2(a); float f=floor(l); return float4(f,a/exp2(f),l,1.0); }\n\n");

    /* Input structure - only declare used inputs */
    sb_append(&sb, "struct VS_IN {\n");
    for (i = 0; i < NV2A_VS_MAX_INPUTS; i++) {
        if (inputs & (1u << i)) {
            sb_append(&sb, "    %s4 v%d : ATTR%d;\n", (program->integer_inputs & (1u<<i)) ? "int" : "float", i, i);
        }
    }
    sb_append(&sb, "};\n\n");

    /* Output structure */
    sb_append(&sb,
        "struct VS_OUT {\n"
        "    precise float4 oPos : SV_POSITION;\n"
        "    float4 oD0  : COLOR0;\n"
        "    float4 oD1  : COLOR1;\n"
        "    float4 oT0  : TEXCOORD0;\n"
        "    float4 oT1  : TEXCOORD1;\n"
        "    float4 oT2  : TEXCOORD2;\n"
        "    float4 oT3  : TEXCOORD3;\n"
        "    float  oFog : FOG;\n"
        "    float  oPts : PSIZE;\n"
        "    float4 oB0  : TEXCOORD4;\n"
        "    float4 oB1  : TEXCOORD5;\n"
        "};\n\n");

    /* Main function */
    sb_append(&sb, "VS_OUT main(VS_IN input) {\n");

    /* Declare temporary registers R0-R12 */
    sb_append(&sb, "    /* Temporary registers */\n");
    for (i = 0; i <= 12; i++) {
        sb_append(&sb, "    precise float4 R%d = float4(0,0,0,0);\n", i);
    }

    /* Address register */
    sb_append(&sb, "    int a0 = 0;\n\n");

    /* Alias input registers for readability */
    sb_append(&sb, "    /* Input register aliases */\n");
    for (i = 0; i < NV2A_VS_MAX_INPUTS; i++) {
        if (inputs & (1u << i)) {
            sb_append(&sb, "    float4 v%d = (float4)input.v%d%s;\n", i, i,
                      (program->bgra_inputs & (1u << i)) ? ".bgra" : "");
        }
    }
    sb_append(&sb, "\n");

    /* Output register variables */
    sb_append(&sb,
        "    /* Output registers (initialized to zero) */\n"
        "    precise float4 oPos = float4(0,0,0,1);\n"
        "    float4 oD0  = float4(0,0,0,1);\n"
        "    float4 oD1  = float4(0,0,0,1);\n"
        "    float4 oFog = float4(0,0,0,0);\n"
        "    float4 oPts = float4(0,0,0,0);\n"
        "    float4 oB0  = float4(0,0,0,0);\n"
        "    float4 oB1  = float4(0,0,0,0);\n"
        "    float4 oT0  = float4(0,0,0,1);\n"
        "    float4 oT1  = float4(0,0,0,1);\n"
        "    float4 oT2  = float4(0,0,0,1);\n"
        "    float4 oT3  = float4(0,0,0,1);\n"
        "\n");

    /* R12 is aliased to oPos on NV2A */
    sb_append(&sb, "    /* R12 is aliased to oPos */\n");
    sb_append(&sb, "    #define R12 oPos\n\n");

    /* Emit instructions */
    sb_append(&sb, "    /* --- Program body (%d instructions) --- */\n",
              program->length);

    for (i = 0; i < program->length; i++) {
        const NV2AVshInstruction *inst = &program->insns[i];

        sb_append(&sb, "\n    /* Instruction %d */\n", i);

        sb_append(&sb, "    {\n");
        if (inst->mac_op != NV2A_VSH_MAC_NOP) emit_mac_op(&sb, inst);
        if (inst->ilu_op != NV2A_VSH_ILU_NOP) emit_ilu_op(&sb, inst);
        /* Both units read before either writes. Paired ILU uses temp R1. */
        if (inst->mac_op == NV2A_VSH_MAC_ARL) sb_append(&sb, "    a0 = (int)mac_value.x;\n");
        else if (inst->mac_op != NV2A_VSH_MAC_NOP) emit_dest_assign(&sb, &inst->mac_dst, "mac_value");
        if (inst->ilu_op != NV2A_VSH_ILU_NOP) emit_dest_assign(&sb, &inst->ilu_dst, "ilu_value");
        sb_append(&sb, "    }\n");
    }

    /* Undo the R12 alias */
    sb_append(&sb, "\n    #undef R12\n\n");

    /* Populate output structure */
    sb_append(&sb,
        "    /* Write outputs */\n"
        "    VS_OUT o;\n"
        "    o.oPos = float4((oPos.xyz - viewport_offset.xyz) / viewport_scale.xyz * oPos.w, oPos.w);\n"
        "    o.oD0  = saturate(oD0);\n"  /* Colors clamped to [0,1] */
        "    o.oD1  = saturate(oD1);\n"
        "    o.oT0  = oT0;\n"
        "    o.oT1  = oT1;\n"
        "    o.oT2  = oT2;\n"
        "    o.oT3  = oT3;\n"
        "    o.oFog = oFog.x;\n"
        "    o.oPts = oPts.x;\n"
        "    o.oB0  = saturate(oB0);\n"
        "    o.oB1  = saturate(oB1);\n"
        "    return o;\n"
        "}\n");

    return sb.pos;
}

