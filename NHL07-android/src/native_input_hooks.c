#include "recomp_types.h"
#include "native_input.h"
void sub_0079AAC3(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_input_call(NHL_INPUT_XInitDevices,args);
    g_esp+=12;
}
void sub_0079CCA1(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_input_call(NHL_INPUT_XGetDevices,args);
    g_esp+=8;
}
void sub_0079CCC3(void) {
    uint32_t args[3]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    g_eax=nhl07_input_call(NHL_INPUT_XGetDeviceChanges,args);
    g_esp+=16;
}
void sub_0079E209(void) {
    uint32_t args[1]={0};
    g_eax=nhl07_input_call(NHL_INPUT_XGetDeviceEnumerationStatus,args);
    g_esp+=4;
}
void sub_007A4CC1(void) {
    uint32_t args[4]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    args[2]=MEM32(g_esp+12);
    args[3]=MEM32(g_esp+16);
    g_eax=nhl07_input_call(NHL_INPUT_XInputOpen,args);
    g_esp+=20;
}
void sub_007A4D17(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_input_call(NHL_INPUT_XInputClose,args);
    g_esp+=8;
}
void sub_007A4D23(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_input_call(NHL_INPUT_XInputGetCapabilities,args);
    g_esp+=12;
}
void sub_007A4EFB(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_input_call(NHL_INPUT_XInputGetState,args);
    g_esp+=12;
}
void sub_007A4FA1(void) {
    uint32_t args[1]={0};
    args[0]=MEM32(g_esp+4);
    g_eax=nhl07_input_call(NHL_INPUT_XInputPoll,args);
    g_esp+=8;
}
void sub_007A4F6E(void) {
    uint32_t args[2]={0};
    args[0]=MEM32(g_esp+4);
    args[1]=MEM32(g_esp+8);
    g_eax=nhl07_input_call(NHL_INPUT_XInputSetState,args);
    g_esp+=12;
}
