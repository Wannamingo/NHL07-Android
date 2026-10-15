/* Compare the ARM64 compiled routines with fresh original-x86 oracle vectors. */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void nhl07_test_init(void *memory,const uint32_t *regs);
void nhl07_test_run(unsigned kind,uint32_t *regs);
/* Diagnostic file capture is outside the original decoder's behavior. */
void nhl07_trace_decompress_input(uint32_t source,uint32_t destination){(void)source;(void)destination;}
static void read_exact(FILE *file,void *out,size_t size) {
    if(fread(out,1,size,file)!=size) {fprintf(stderr,"Invalid CPU fixture\n");exit(2);}
}
int main(int argc,char **argv) {
    if(argc!=2) return 2;
    FILE *file=fopen(argv[1],"rb");if(!file) return 2;
    uint32_t count;read_exact(file,&count,4);
    if(count>1000) return 2;
    unsigned char *memory=calloc(1,0x1000000),*expected=malloc(0x100000);
    if(!memory||!expected) return 2;
    for(unsigned c=0;c<count;c++) {
        uint32_t header[5],regs[8],reference[8];
        read_exact(file,header,sizeof(header));read_exact(file,regs,sizeof(regs));
        read_exact(file,reference,sizeof(reference));
        unsigned kind=header[0],attached=header[1],callbacks=header[2],input_size=header[3],size=header[4];
        if(input_size>=0x100000||size>=0x100000) return 2;
        memset(memory,0,0x1000000);
        *(uint32_t *)(memory+regs[4])=0xf00000;
        if(kind==0) {
            *(uint32_t *)(memory+regs[4]+4)=attached;
            *(uint32_t *)(memory+0x8e171c)=callbacks?0x8f0000:0;
            *(uint32_t *)(memory+0x8e1720)=callbacks?0x8f0010:0;
        } else {
            *(uint32_t *)(memory+regs[4]+4)=0xa00000;
            *(uint32_t *)(memory+regs[4]+8)=0xb00000;
        }
        read_exact(file,memory+0xa00000,input_size);read_exact(file,expected,size);
        nhl07_test_init(memory,regs);nhl07_test_run(kind,regs);
        for(unsigned r=0;r<8;r++) {
            if(kind==1 && r==5) continue; /* Framed EBP is local in generated C. */
            if(regs[r]!=reference[r]) {
                fprintf(stderr,"case=%u register=%u actual=%08X expected=%08X\n",c,r,regs[r],reference[r]);return 1;
            }
        }
        if(memcmp(memory+0xb00000,expected,size)) {fprintf(stderr,"case=%u output mismatch\n",c);return 1;}
        printf("case %u matched; decoded bytes %u\n",c,size);
    }
    printf("ARM64 differential checks passed: %u\n",count);
    fclose(file);free(memory);free(expected);return 0;
}
