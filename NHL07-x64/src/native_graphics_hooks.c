/* Stack cleanup independently checked against every original RET. */
#include "recomp_types.h"
#include "native_graphics.h"
#include <stdio.h>
#include <stdlib.h>
extern void sub_0076BD40(void);
void sub_0075E1A0(void) {
    uint32_t args[6]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    args[5]=MEM32(g_esp+24);
    g_eax=nhl07_graphics_call(NHL_GFX_Direct3D_CreateDevice,args);
    g_esp+=28;
}
void sub_0075A980(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_GetGammaRamp,args);
    g_esp+=8;
}
void sub_00760AF0(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_SetBackBufferScale,args);
    g_esp+=12;
}
void sub_00761290(void) {
    uint32_t args[6]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    args[4]=MEM32(g_esp+20);
    args[5]=MEM32(g_esp+24);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_Clear,args);
    g_esp+=28;
}
void sub_00760A00(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_Swap,args);
    g_esp+=8;
}
void sub_0075B060(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_SetFlickerFilter,args);
    g_esp+=8;
}
void sub_0075B0B0(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_SetSoftDisplayFilter,args);
    g_esp+=8;
}
void sub_0075C060(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_GetBackBuffer2,args);
    g_esp+=8;
}
void sub_00761130(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DSurface_GetDesc,args);
    g_esp+=12;
}
void sub_0075C7A0(void) {
    uint32_t args[1]={0};
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_GetDepthStencilSurface2,args);
    g_esp+=4;
}
void sub_0075BCC0(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_SetRenderTarget,args);
    g_esp+=12;
}
void sub_007630A0(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DResource_AddRef,args);
    g_esp+=8;
}
void sub_007630E0(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_graphics_call(NHL_GFX_D3DResource_Release,args);
    g_esp+=8;
}
void sub_0075D370(void) {
    uint32_t args[1]={0};
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_FlushVertexCache,args);
    g_esp+=4;
}
void sub_00764020(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    uint32_t saved_sp=g_esp,device=MEM32(0x785178);
    g_ecx=device; PUSH32(g_esp,MEM32(device+0x1c)); PUSH32(g_esp,0x76403d);
    RECOMP_ABI_CALL(0x76bd40u,sub_0076BD40);
    if(g_esp!=saved_sp) {fprintf(stderr,"[NHL07-ABI] draw prepare stack mismatch\n");abort();}
    MEM32(device+8)|=0x800;
    g_eax=nhl07_graphics_call(NHL_GFX_D3DDevice_DrawIndexedVertices,args);
    g_esp+=16;
}
