#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nhl07_reverb_test(void *,uint32_t,uint32_t *);
static void read_file(const char *path,void *data,size_t bytes){FILE *f=fopen(path,"rb");if(!f||fread(data,1,bytes,f)!=bytes)abort();fclose(f);}
int main(int argc,char **argv) {
    if(argc!=4)return 2;uint8_t *base=malloc(0x1000000),*memory=malloc(0x1000000),initial[0x118];
    if(!base||!memory)return 2;read_file(argv[1],base,0x1000000);read_file(argv[3],initial,sizeof(initial));
    FILE *f=fopen(argv[2],"rb");uint32_t count;if(!f||fread(&count,4,1,f)!=1)return 2;
    for(unsigned i=0;i<count;i++) {
        uint32_t cw,params[13],stack[3]={0xf00000,0xb10000,0xb00000},esp=0;uint8_t expected[0x220];
        if(fread(&cw,4,1,f)!=1||fread(params,4,13,f)!=13||fread(expected,1,sizeof(expected),f)!=sizeof(expected))return 2;
        memcpy(memory,base,0x1000000);memcpy(memory+0xb00000,initial,sizeof(initial));memcpy(memory+0xb10000,params,sizeof(params));memcpy(memory+0xf10000,stack,sizeof(stack));
        nhl07_reverb_test(memory,cw,&esp);
        if(esp!=0xf1000c||memcmp(memory+0xb00000,expected,sizeof(expected))){fprintf(stderr,"REVERB FAIL case=%u cw=%X esp=%X\n",i,cw,esp);return 1;}
    }
    fclose(f);printf("REVERB_ARM64 passed=%u failed=0\n",count);free(base);free(memory);return 0;
}
