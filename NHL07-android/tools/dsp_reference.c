/* Standalone research adapter to the unmodified, pinned xemu DSP56300 core.
   Upstream sources and GPL notice remain in work/nhl07-dsp-reference/. */
#include "dsp_cpu.c"
int main(int argc,char **argv) {
    if(argc!=4){fprintf(stderr,"usage: dsp_reference code-file origin word-count\n");return 2;}
    dsp_core_t *dsp=calloc(1,sizeof(*dsp));if(!dsp)return 2;dsp56k_reset_cpu(dsp);
    unsigned origin=(unsigned)strtoul(argv[2],NULL,0),words=(unsigned)strtoul(argv[3],NULL,0);
    if(origin+words>DSP_PRAM_SIZE)return 2;
    FILE *f=fopen(argv[1],"rb");if(!f)return 2;
    if(fread(dsp->pram+origin,4,words,f)!=words)return 2;fclose(f);
    dsp->pc=origin;
    while(dsp->pc<origin+words) {
        unsigned at=dsp->pc,length=disasm_instruction(dsp,DSP_DISASM_MODE);
        if(!length){fprintf(stderr,"disassembly stopped at %04x\n",at);return 3;}
        printf("%04x: %06x ",at,dsp->pram[at]);
        if(length==2)printf("%06x ",dsp->pram[at+1]);else printf("       ");
        printf("%s\n",dsp->disasm_str_instr);dsp->pc+=length;
    }
    free(dsp);return 0;
}
