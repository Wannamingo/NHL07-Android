#pragma once
#include <stddef.h>
#include <stdint.h>
typedef struct NhlDspEffect {
    uint32_t code_offset,code_bytes,state_offset,state_bytes,y_offset,y_bytes,scratch_offset,scratch_bytes;
} NhlDspEffect;
int nhl07_dsp_load(const uint8_t *image,size_t bytes);
int nhl07_dsp_frame(const int32_t input[1024],int32_t output[1024]);
int nhl07_dsp_effect(unsigned index,const int32_t input[1024],int32_t output[1024]);
unsigned nhl07_dsp_effect_count(void);
const NhlDspEffect *nhl07_dsp_effect_info(unsigned index);
const uint32_t *nhl07_dsp_program(void);
const uint32_t *nhl07_dsp_state(void);
int nhl07_dsp_set_data(unsigned effect,unsigned offset,const void *data,unsigned bytes,int deferred);
int nhl07_dsp_get_data(unsigned effect,unsigned offset,void *data,unsigned bytes);
void nhl07_dsp_commit(void);
uint64_t nhl07_dsp_instructions(void);
uint64_t nhl07_dsp_dma_bytes(void);
