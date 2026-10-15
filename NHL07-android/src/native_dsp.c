/* NHL 07 effect-image loader and portable DSP execution.
   DSP core: pinned xemu/espes/Hatari implementation, GPL-2.0-or-later.
   Image format/decoder: independently recovered from this game's XDK code. */
#include "dsp_cpu.c"
#include "dsp_dma.c"
#include "native_dsp.h"
static dsp_core_t *core;
static DSPDMAState dma;
static uint8_t *scratch;
static size_t scratch_bytes;
static NhlDspEffect effects[64];
static unsigned count;
static uint64_t instructions,dma_bytes;
static uint32_t state_image_offset,pending_state[DSP_XRAM_SIZE];
static uint8_t dirty_state[DSP_XRAM_SIZE];
static uint32_t word(const uint8_t *p){uint32_t x;memcpy(&x,p,4);return x;}
static uint64_t step(uint64_t state) {
    uint32_t lo=(uint32_t)state,hi=(uint32_t)(state>>32);
    uint32_t next_lo=(lo>>1)|(hi<<31);
    uint32_t next_hi=((((lo<<2)^lo)<<1)^lo)<<28;
    next_hi=((next_hi^hi)&0x80000000u)|(hi>>1);
    return (uint64_t)next_lo|((uint64_t)next_hi<<32);
}
static void decode(uint64_t key,const uint8_t *source,size_t bytes,uint8_t *out) {
    uint64_t seed=step(0x7fa49bca49de12baull);
    for(unsigned i=0;i<80;i++)seed=step(seed);
    uint64_t state=step(seed);
    for(size_t i=0;i<bytes;i++) {
        unsigned shift=(unsigned)(i&7)*8;uint8_t base=(uint8_t)(seed>>shift),k=(uint8_t)(key>>shift);
        state=step(state);out[i]=base^(uint8_t)state^(uint8_t)(source[i]-k*base);
    }
}
static uint32_t mem_read(void *opaque,int space,uint32_t address){return dsp56k_read_memory(opaque,space,address);}
static void mem_write(void *opaque,int space,uint32_t address,uint32_t value){dsp56k_write_memory(opaque,space,address,value);}
static void scratch_rw(void *opaque,uint8_t *buffer,uint32_t address,size_t length,bool write) {
    (void)opaque;
    if((uint64_t)address+length>scratch_bytes){fprintf(stderr,"[NHL07-DSP] scratch out of bounds %X + %zu\n",address,length);abort();}
    if(write)memcpy(scratch+address,buffer,length);else memcpy(buffer,scratch+address,length);
    dma_bytes+=length;
}
static void fifo_rw(void *opaque,uint8_t *buffer,unsigned index,size_t length,bool write) {
    (void)opaque;(void)buffer;(void)write;
    fprintf(stderr,"[NHL07-DSP-MISSING] FIFO %u bytes=%zu\n",index,length);abort();
}
static uint32_t peripheral_read(dsp_core_t *dsp,uint32_t address) {
    (void)dsp;
    switch(address) {
    case 0xffffc5:return dma.eol?0x80:0;
    case 0xffffd4:return dsp_dma_read(&dma,DMA_NEXT_BLOCK);
    case 0xffffd5:return dsp_dma_read(&dma,DMA_START_BLOCK);
    case 0xffffd6:return dsp_dma_read(&dma,DMA_CONTROL);
    case 0xffffd7:return dsp_dma_read(&dma,DMA_CONFIGURATION);
    default:fprintf(stderr,"[NHL07-DSP-MISSING] peripheral read %X\n",address);abort();
    }
}
static void peripheral_write(dsp_core_t *dsp,uint32_t address,uint32_t value) {
    (void)dsp;
    switch(address) {
    case 0xffffc5:if(value&0x80)dma.eol=false;break;
    case 0xffffd4:dsp_dma_write(&dma,DMA_NEXT_BLOCK,value);break;
    case 0xffffd5:dsp_dma_write(&dma,DMA_START_BLOCK,value);break;
    case 0xffffd6:dsp_dma_write(&dma,DMA_CONTROL,value);break;
    case 0xffffd7:dsp_dma_write(&dma,DMA_CONFIGURATION,value);break;
    default:fprintf(stderr,"[NHL07-DSP-MISSING] peripheral write %X\n",address);abort();
    }
}
int nhl07_dsp_load(const uint8_t *image,size_t bytes) {
    if(!image||bytes<0x820)return 0;
    uint32_t code_words=word(image+0x804),state_offset=word(image+0x808),state_words=word(image+0x80c);
    uint64_t descriptor=0x818ull+((uint64_t)code_words+state_words)*4;
    if(code_words>=DSP_PRAM_SIZE || state_words+0x80>DSP_XRAM_SIZE || state_offset!=0x818+code_words*4 || descriptor+8>bytes)return 0;
    unsigned n=word(image+descriptor);uint32_t allocated=word(image+descriptor+4);
    if(!n||n>64||descriptor+8+(uint64_t)n*40!=bytes||allocated>16*1024*1024)return 0;
    uint8_t keys[512];uint64_t seed=step(0x7fa49bca49de12baull);for(unsigned i=0;i<80;i++)seed=step(seed);
    decode(seed,image+descriptor+8+n*32,n*8,keys);
    dsp_core_t *next=calloc(1,sizeof(*next));uint8_t *next_scratch=calloc(1,(size_t)allocated+0xc000);
    if(!next||!next_scratch){free(next);free(next_scratch);return 0;}
    uint32_t position=0x818;
    for(unsigned i=0;i<n;i++) {
        NhlDspEffect e;memcpy(&e,image+descriptor+8+i*32,32);
        if(e.code_offset!=position||e.code_bytes%4||e.state_bytes%4||e.state_offset<state_offset||
            (uint64_t)e.code_offset+e.code_bytes>state_offset||(uint64_t)e.state_offset+e.state_bytes>descriptor||
            (uint64_t)e.scratch_offset+e.scratch_bytes>allocated+0xc000ull) {free(next);free(next_scratch);return 0;}
        uint64_t key;memcpy(&key,keys+i*8,8);
        decode(key,image+e.code_offset,e.code_bytes,(uint8_t *)next->pram+e.code_offset-0x818);
        effects[i]=e;position+=e.code_bytes;
    }
    /* The observed image has one unencrypted RTS after the effect programs. */
    if(state_offset-position!=4 || word(image+position)!=0xc){free(next);free(next_scratch);return 0;}
    next->pram[(position-0x818)/4]=0xc;
    for(unsigned i=0;i<code_words;i++)if(next->pram[i]>0xffffff){free(next);free(next_scratch);return 0;}
    memcpy(next->xram+0x80,image+state_offset,state_words*4);
    for(unsigned i=0;i<state_words;i++)next->xram[i+0x80]&=0xffffff;
    free(core);free(scratch);core=next;scratch=next_scratch;scratch_bytes=allocated+0xc000;count=n;
    dsp56k_reset_cpu(core);core->is_gp=true;core->read_peripheral=peripheral_read;core->write_peripheral=peripheral_write;
    memset(&dma,0,sizeof(dma));dma.mem_opaque=core;dma.mem_read=mem_read;dma.mem_write=mem_write;dma.scratch_rw=scratch_rw;dma.fifo_rw=fifo_rw;
    state_image_offset=state_offset;memset(dirty_state,0,sizeof(dirty_state));
    instructions=0;dma_bytes=0;return 1;
}
static int state_range(unsigned effect,unsigned offset,unsigned bytes,uint32_t *address) {
    if(!core||effect>=count||offset>effects[effect].state_bytes||bytes>effects[effect].state_bytes-offset)return 0;
    *address=0x80*4+effects[effect].state_offset-state_image_offset+offset;return 1;
}
int nhl07_dsp_set_data(unsigned effect,unsigned offset,const void *data,unsigned bytes,int deferred) {
    uint32_t address;if(!data||!state_range(effect,offset,bytes,&address))return 0;
    if(!bytes)return 1;unsigned first=address/4,last=(address+bytes-1)/4;
    if(deferred) {
        for(unsigned i=first;i<=last;i++)if(!dirty_state[i])pending_state[i]=core->xram[i];
        memcpy((uint8_t *)pending_state+address,data,bytes);
        for(unsigned i=first;i<=last;i++){pending_state[i]&=0xffffff;dirty_state[i]=1;}
    } else {
        memcpy((uint8_t *)core->xram+address,data,bytes);
        for(unsigned i=first;i<=last;i++){core->xram[i]&=0xffffff;pending_state[i]=core->xram[i];dirty_state[i]=0;}
    }
    return 1;
}
int nhl07_dsp_get_data(unsigned effect,unsigned offset,void *data,unsigned bytes) {
    uint32_t address;if(!data||!state_range(effect,offset,bytes,&address))return 0;
    memcpy(data,(uint8_t *)core->xram+address,bytes);return 1;
}
void nhl07_dsp_commit(void) {
    if(!core)return;for(unsigned i=0;i<DSP_XRAM_SIZE;i++)if(dirty_state[i]){core->xram[i]=pending_state[i];dirty_state[i]=0;}
}
static int execute(uint32_t origin,uint32_t end,const int32_t *input,int32_t *output) {
    if(!core)return 0;
    memcpy(core->mixbuffer,input,1024*4);
    /* Call the original effect entry with an actual DSP return-stack frame. */
    core->pc=origin;if(end==0xfff)dsp_stack_push(core,end,core->registers[DSP_REG_SR],0);
    unsigned limit=1000000;
    while(core->pc!=end && limit) {--limit;dsp56k_execute_instruction(core);instructions++;}
    if(core->pc!=end){fprintf(stderr,"[NHL07-DSP] instruction budget exceeded PC=%X\n",core->pc);return 0;}
    memcpy(output,core->mixbuffer,1024*4);return 1;
}
int nhl07_dsp_frame(const int32_t input[1024],int32_t output[1024]) {return execute(0,0xfff,input,output);}
int nhl07_dsp_effect(unsigned i,const int32_t input[1024],int32_t output[1024]) {
    if(i>=count)return 0;
    const NhlDspEffect *e=&effects[i];uint32_t origin=(e->code_offset-0x818)/4;
    return execute(origin,origin+e->code_bytes/4,input,output);
}
unsigned nhl07_dsp_effect_count(void){return count;}
const NhlDspEffect *nhl07_dsp_effect_info(unsigned i){return i<count?&effects[i]:NULL;}
const uint32_t *nhl07_dsp_program(void){return core?core->pram:NULL;}
const uint32_t *nhl07_dsp_state(void){return core?core->xram:NULL;}
uint64_t nhl07_dsp_instructions(void){return instructions;}
uint64_t nhl07_dsp_dma_bytes(void){return dma_bytes;}
