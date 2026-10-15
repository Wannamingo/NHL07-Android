/* Xbox XPP API over Android's actual gamepad. No Xbox USB driver execution. */
#include <jni.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "native_input.h"
#include "recomp_types.h"
#define GAMEPAD_TYPE 0x79975cu /* Audited at original calls 597BCB and 597C4A. */
#define HANDLE 0x4e480001u
static pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER;
static uint32_t packet=1,reported,opened,visible,changed;
static int initialized,pending_enumeration;
static int connected;
static uint16_t buttons;
static uint8_t analog[8];
static int16_t axes[4];
static void *guest(uint32_t address,unsigned size) {
    uint32_t canonical=address>=0x80000000?address-0x80000000:address;
    if(canonical<0x10000 || (uint64_t)canonical+size>0x4000000) {fprintf(stderr,"[NHL07-INPUT] invalid guest buffer=%08X\n",address);abort();}
    return (void *)(g_xbox_mem_offset+(uintptr_t)address);
}
void nhl07_input_update(int present,uint16_t digital,const int32_t a[8],const int32_t s[4]) {
    pthread_mutex_lock(&lock);int state_changed=connected!=present||buttons!=(uint16_t)digital;
    if(initialized&&!pending_enumeration && connected!=present) {
        visible=present!=0;changed|=1;
    }
    connected=present;buttons=(uint16_t)digital;
    for(unsigned i=0;i<8;i++){uint8_t value=a[i]<0?0:a[i]>255?255:a[i];state_changed|=analog[i]!=value;analog[i]=value;}
    for(unsigned i=0;i<4;i++){int16_t value=s[i]<-32768?-32768:s[i]>32767?32767:s[i];state_changed|=axes[i]!=value;axes[i]=value;}
    if(state_changed)++packet;
    pthread_mutex_unlock(&lock);
}
static void finish_enumeration(void) {
    if(pending_enumeration) {
        visible=connected!=0;changed|=visible;pending_enumeration=0;
    }
}
static void publish_device_record(void) {
    MEM32(GAMEPAD_TYPE)=visible;MEM32(GAMEPAD_TYPE+4)=changed;MEM32(GAMEPAD_TYPE+8)=reported;
}
JNIEXPORT void JNICALL Java_org_nhl07_port_MainActivity_updateController(JNIEnv *env,jclass klass,jboolean present,jint digital,jintArray pressure,jintArray sticks) {
    (void)klass;jint a[8],s[4];
    if((*env)->GetArrayLength(env,pressure)!=8||(*env)->GetArrayLength(env,sticks)!=4)return;
    (*env)->GetIntArrayRegion(env,pressure,0,8,a);(*env)->GetIntArrayRegion(env,sticks,0,4,s);
    nhl07_input_update(present,(uint16_t)digital,a,s);
}
uint32_t nhl07_input_call(NhlInputApi api,const uint32_t *a) {
    uint32_t result=0;pthread_mutex_lock(&lock);
    switch(api) {
    case NHL_INPUT_XInitDevices:
        reported=opened=visible=changed=0;initialized=1;pending_enumeration=1;
        publish_device_record();
        fprintf(stderr,"[NHL07-INPUT] Android controller connected=%d; native XPP initialized\n",connected);break;
    // XInitDevices starts enumeration. Publish Java's actual discovery when
    // changes/status are serviced, preserving the initial insertion event.
    case NHL_INPUT_XGetDeviceEnumerationStatus:finish_enumeration();publish_device_record();break;
    case NHL_INPUT_XGetDevices:
        if(a[0]==GAMEPAD_TYPE){result=visible;reported=visible;changed=0;publish_device_record();}break;
    case NHL_INPUT_XGetDeviceChanges: {
        uint32_t insertions=0,removals=0;
        if(a[0]==GAMEPAD_TYPE) {
            finish_enumeration();
            // Original 79CCC3 includes a port removed and reinserted between
            // polls in BOTH masks, even when its current state is unchanged.
            if(changed){uint32_t reinserted=changed&reported&visible;
                insertions=(visible&~reported)|reinserted;removals=(reported&~visible)|reinserted;}
            changed=0;reported=visible;publish_device_record();
        }
        *(uint32_t *)guest(a[1],4)=insertions;*(uint32_t *)guest(a[2],4)=removals;
        result=(insertions|removals)!=0;break;
    }
    case NHL_INPUT_XInputOpen:
        if(a[0]==GAMEPAD_TYPE&&a[1]==0&&a[2]==0&&visible&&connected){opened=1;result=HANDLE;fprintf(stderr,"[NHL07-INPUT] game opened Android controller port 0\n");}
        break;
    case NHL_INPUT_XInputClose:if(a[0]==HANDLE)opened=0;break;
    case NHL_INPUT_XInputPoll:result=a[0]==HANDLE&&opened&&connected?0:1167;break;
    case NHL_INPUT_XInputGetState:
        if(a[0]!=HANDLE||!opened||!connected){result=1167;break;}
        // Original 7A4EFB copies packet + 18-byte gamepad, with packed axes.
        {uint8_t *p=guest(a[1],22);memcpy(p,&packet,4);memcpy(p+4,&buttons,2);memcpy(p+6,analog,8);memcpy(p+14,axes,8);}break;
    case NHL_INPUT_XInputGetCapabilities:
        if(a[0]!=HANDLE||!opened||!connected){result=1167;break;}
        // Original 7A4D23 clears exactly 25 bytes; subtype at 0, reserved at 1.
        {uint8_t *p=guest(a[1],25);memset(p,0,25);p[0]=1;p[3]=0xff;
         memset(p+5,255,8);for(unsigned i=0;i<4;i++){p[13+i*2]=0xff;p[14+i*2]=0x7f;}}
        break;
    case NHL_INPUT_XInputSetState:
        // Vibration is not advertised in capabilities. Return an explicit error.
        result=50;*(uint32_t *)guest(a[1],4)=result;break;
    default:fprintf(stderr,"[NHL07-INPUT] unsupported API=%u\n",api);abort();
    }
    {static unsigned calls[10];unsigned count=++calls[api];
     if(count<=3)fprintf(stderr,"[NHL07-INPUT-CALL] api=%u call=%u arg0=%08X result=%08X connected=%d reported=%u opened=%u\n",
                         api,count,a[0],result,connected,reported,opened);}
    pthread_mutex_unlock(&lock);return result;
}
