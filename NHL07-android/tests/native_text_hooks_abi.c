/* Actual generated text converters with a controlled team-name producer.
   The producer models the audited 0028C380 frame and RET16; its database and
   unrelated player-configuration work are deliberately outside this fixture. */
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "native_text_hooks.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ptrdiff_t g_xbox_mem_offset;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
RECOMP_TLS int g_df,g_fp_top,g_fp_cmp;
RECOMP_TLS double g_fp_stack[8];
RECOMP_TLS uint16_t g_fp_control_word,g_fp_cc;
RECOMP_TLS RecompXmm g_xmm0,g_xmm1,g_xmm2,g_xmm3,g_xmm4,g_xmm5,g_xmm6,g_xmm7;
RECOMP_TLS RecompMmx g_mm0,g_mm1,g_mm2,g_mm3,g_mm4,g_mm5,g_mm6,g_mm7;
RECOMP_TLS uint32_t g_fs_base;

void sub_0028C380(void);
void sub_002F6E70(void);
void sub_00368890(void);
void sub_002F6E70_nhl07_text_original(void);
void sub_00368890_nhl07_text_original(void);

static uint8_t *memory;
static unsigned checks;
#define CHECK(expression) do { ++checks; if (!(expression)) { \
    fprintf(stderr,"Failed ABI check %u at line %d: %s\n",checks,__LINE__,#expression); \
    exit(1); \
} } while (0)

typedef struct {
    uint32_t eax_,ecx_,edx_,esp_,ebx_,esi_,edi_,ebp_,seh_;
    int df_,fp_top_,fp_cmp_;
    double fp_[8];
    uint16_t fp_control_,fp_cc_;
    RecompXmm xmm_[8];
    RecompMmx mm_[8];
    uint32_t fs_;
} Registers;

static void read_registers(Registers *r) {
    memset(r,0,sizeof(*r));
    r->eax_=g_eax;r->ecx_=g_ecx;r->edx_=g_edx;r->esp_=g_esp;
    r->ebx_=g_ebx;r->esi_=g_esi;r->edi_=g_edi;r->ebp_=g_ebp;r->seh_=g_seh_ebp;
    r->df_=g_df;r->fp_top_=g_fp_top;r->fp_cmp_=g_fp_cmp;
    memcpy(r->fp_,g_fp_stack,sizeof(r->fp_));r->fp_control_=g_fp_control_word;r->fp_cc_=g_fp_cc;
    r->xmm_[0]=g_xmm0;r->xmm_[1]=g_xmm1;r->xmm_[2]=g_xmm2;r->xmm_[3]=g_xmm3;
    r->xmm_[4]=g_xmm4;r->xmm_[5]=g_xmm5;r->xmm_[6]=g_xmm6;r->xmm_[7]=g_xmm7;
    r->mm_[0]=g_mm0;r->mm_[1]=g_mm1;r->mm_[2]=g_mm2;r->mm_[3]=g_mm3;
    r->mm_[4]=g_mm4;r->mm_[5]=g_mm5;r->mm_[6]=g_mm6;r->mm_[7]=g_mm7;r->fs_=g_fs_base;
}

static void initialize_registers(uint32_t stack) {
    unsigned index;
    g_eax=0xabc00001;g_ecx=0xabc00002;g_edx=0xabc00003;g_esp=stack;
    g_ebx=0xabc00004;g_esi=0xabc00005;g_edi=0xabc00006;g_ebp=0xabc00007;g_seh_ebp=0xabc00008;
    g_df=0;g_fp_top=3;g_fp_cmp=-1;g_fp_control_word=0x37f;g_fp_cc=0x4500;
    for(index=0;index<8;++index)g_fp_stack[index]=index+0.125;
    memset(&g_xmm0,0x10,sizeof(g_xmm0));memset(&g_xmm1,0x21,sizeof(g_xmm1));
    memset(&g_xmm2,0x32,sizeof(g_xmm2));memset(&g_xmm3,0x43,sizeof(g_xmm3));
    memset(&g_xmm4,0x54,sizeof(g_xmm4));memset(&g_xmm5,0x65,sizeof(g_xmm5));
    memset(&g_xmm6,0x76,sizeof(g_xmm6));memset(&g_xmm7,0x87,sizeof(g_xmm7));
    memset(&g_mm0,0x98,sizeof(g_mm0));memset(&g_mm1,0xa9,sizeof(g_mm1));
    memset(&g_mm2,0xba,sizeof(g_mm2));memset(&g_mm3,0xcb,sizeof(g_mm3));
    memset(&g_mm4,0xdc,sizeof(g_mm4));memset(&g_mm5,0xed,sizeof(g_mm5));
    memset(&g_mm6,0xfe,sizeof(g_mm6));memset(&g_mm7,0x0f,sizeof(g_mm7));g_fs_base=0x880000;
}

static void russian(int enabled) {
#ifdef _WIN32
    _putenv_s("NHL07_LANGUAGE_DIR",enabled?"fixture-russian":"");
#else
    if(enabled)setenv("NHL07_LANGUAGE_DIR","fixture-russian",1);
    else unsetenv("NHL07_LANGUAGE_DIR");
#endif
}

/* This stub invokes the ACTUAL generated 002F6E70 via the production wrapper
   with the audited full-name local pointer. No lossy-text inverse is used. */
void sub_0028C380_nhl07_text_original(void) {
    uint32_t entry=g_esp,side=MEM32(entry+8),output=entry-0x542;
    uint32_t saved_ebx=g_ebx,saved_esi=g_esi,saved_edi=g_edi;
    uint8_t *field=memory+0x8f5b2c+(side<2?side:0)*0x778;
    g_esp=entry-0x594;
    PUSH32(g_esp,0xffffffff);PUSH32(g_esp,output);PUSH32(g_esp,0x50000);PUSH32(g_esp,0x28c424);
    sub_002F6E70();g_esp+=12;
    strncpy((char *)field,(const char *)(memory+output),32);field[31]=0;
    g_eax=0xabc00a11;g_ecx=0xabc00c11;g_edx=0xabc00d11;
    g_ebx=saved_ebx;g_esi=saved_esi;g_edi=saved_edi;
    g_esp=entry+20;
}

static void producer(unsigned side,const char *text,int wrapped) {
    uint32_t entry=0x30000;
    strcpy((char *)(memory+0x50000),text);
    initialize_registers(entry);
    MEM32(entry)=0xbeef0001;MEM32(entry+4)=0x55550000;MEM32(entry+8)=side;
    MEM32(entry+12)=side?11:5;MEM32(entry+16)=0;
    if(wrapped)sub_0028C380();else sub_0028C380_nhl07_text_original();
    CHECK(g_esp==entry+20);
}

static void handoff(uint32_t source,uint32_t destination,int wrapped) {
    uint32_t entry=0x32000;
    initialize_registers(entry);MEM32(entry)=0xbeef0002;
    MEM32(entry+4)=source;MEM32(entry+8)=destination;
    if(wrapped)sub_00368890();else sub_00368890_nhl07_text_original();
    CHECK(g_esp==entry+4);
}

int main(int argc,char **argv) {
    static const char home[]="\xd0\xa3\xd1\x80\xd0\xb0\xd0\xb3\xd0\xb0\xd0\xbd\xd1\x8b \xd0\x9a\xd0\xb0\xd1\x80\xd0\xbe\xd0\xbb\xd0\xb8\xd0\xbd\xd1\x8b\xc2\xae";
    static const char away[]="\xd0\xad\xd0\xb4\xd0\xbc\xd0\xbe\xd0\xbd\xd1\x82\xd0\xbe\xd0\xbd \xd0\x9e\xd0\xb9\xd0\xbb\xd0\xb5\xd1\x80\xd0\xb7\xc2\xae";
    static const char *names[]={"Carolina Hurricanes","Edmonton Oilers",home,away,"English^name"};
    Registers reference,actual;
    uint8_t field[32],output[256];
    unsigned enabled,which;
    FILE *table;
    CHECK(argc==2);
    memory=(uint8_t *)calloc(1,0x1000000);CHECK(memory!=NULL);
    g_xbox_mem_offset=(ptrdiff_t)memory;
    table=fopen(argv[1],"rb");CHECK(table!=NULL);
    CHECK(fread(memory+0x8c3458,1,208,table)==208);fclose(table);
    MEM32(0x8fb948)=1;

    for(enabled=0;enabled<2;++enabled) {
        russian(enabled);
        for(which=0;which<sizeof(names)/sizeof(names[0]);++which) {
            unsigned side=which%2;
            producer(side,names[which],0);read_registers(&reference);
            memcpy(field,memory+0x8f5b2c+side*0x778,32);
            producer(side,names[which],1);read_registers(&actual);
            CHECK(!memcmp(&reference,&actual,sizeof(reference)));
            CHECK(!memcmp(field,memory+0x8f5b2c+side*0x778,32));
            handoff(0x8f5b2c+side*0x778,0x8fc908,0);read_registers(&reference);
            memcpy(output,memory+0x8fc908,256);
            CHECK(g_eax==strlen((const char *)(memory+0x8fc908)));
            CHECK(g_ecx==g_eax); /* Proven effect of original nonempty loop. */
            handoff(0x8f5b2c+side*0x778,0x8fc908,1);read_registers(&actual);
            if(enabled) {
                const char *wanted=which==4?"English\nname":names[which];
                CHECK(!strcmp((const char *)(memory+0x8fc908),wanted));
                CHECK(g_eax==strlen(wanted));CHECK(g_ecx==g_eax);
                reference.eax_=actual.eax_;reference.ecx_=actual.ecx_;
            } else CHECK(!memcmp(output,memory+0x8fc908,256));
            CHECK(!memcmp(&reference,&actual,sizeof(reference)));
            CHECK(!memcmp(field,memory+0x8f5b2c+side*0x778,32));
        }
    }
    /* Wrong destination, mutated fields, unrelated source and language off
       must all preserve the exact original register and output effects. */
    russian(1);producer(0,home,1);
    for(which=0;which<4;++which) {
        uint32_t source=which==2?0x51000:0x8f5b2c;
        uint32_t destination=which==0?0x52000:0x8fc908;
        if(which==1)memory[0x8f5b2c+2]='x';
        if(which==2)strcpy((char *)(memory+source),"Unrelated^text");
        if(which==3)russian(0);
        handoff(source,destination,0);read_registers(&reference);memcpy(output,memory+destination,256);
        handoff(source,destination,1);read_registers(&actual);
        CHECK(!memcmp(&reference,&actual,sizeof(reference)));
        CHECK(!memcmp(output,memory+destination,256));
    }
    russian(0);free(memory);
    printf("NHL07 team text ABI checks=%u failed=0 actual_generated_converters=1 controlled_producer=1\n",checks);
    return 0;
}
