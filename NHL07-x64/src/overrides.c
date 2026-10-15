/* Explicit offline boundary. Networking is unavailable in this bring-up build. */
#if defined(_MSC_VER)
#include <intrin.h>
#endif
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <time.h>

/* Original XDK GetExitCodeThread at 44B23A reads KTHREAD.SignalState/+120.
   Guest workers are native host threads; query that actual object directly.
   The old ObReferenceObjectByHandle boundary returned success plus NULL,
   making the original wrapper report STILL_ACTIVE forever after worker exit. */
extern uint32_t xbox_bridge_thread_exit_code(uint32_t,uint32_t *);
void sub_0044B23A(void) {
    uint32_t handle=MEM32(esp+4),out=MEM32(esp+8),code=0;
    uint32_t canonical=out>=0x80000000u?out-0x80000000u:out;
    uint32_t status=(canonical<0x10000u||(uint64_t)canonical+4>0x4000000u)?0xc0000005u:
        xbox_bridge_thread_exit_code(handle,&code);
    if(!status) {
        MEM32(out)=code;eax=1;
        static unsigned observed;
        if(code!=0x103u && observed++<8)fprintf(stderr,"[NHL07-THREAD-EXIT] handle=%08X exit_code=%08X native worker completion observed\n",handle,code);
    } else {
        PUSH32(esp,status);PUSH32(esp,0x0044B280);
        RECOMP_ABI_CALL(0x00449A30u,sub_00449A30);eax=0;
    }
    esp+=12; /* Original RET 8. */
}

/* The single audited WBINVD in the EA data decompressor publishes regular
   CPU-memory writes. There is no guest cache or raw device DMA in this host.
   Preserve ordering with a host fence; GPU uploads still require a separate API.
   This is NOT a general emulation of WBINVD for arbitrary MMIO/device memory. */
void nhl07_publish_decompressed_data(void) {
#if defined(_MSC_VER)
    _ReadWriteBarrier();
    _mm_mfence();
    _ReadWriteBarrier();
#else
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
#endif
}

void nhl07_publish_movie_frame(void) {
    static unsigned frames;
    nhl07_publish_decompressed_data();
    /* Log every publication: sparse logging understated totals below 60 and
       made a completed short intro look like a stalled three-frame movie. */
    fprintf(stderr,"[NHL07-MOVIE] CPU texture frame published=%u\n",++frames);
}

void nhl07_publish_swizzled_texture(void) {
    nhl07_publish_decompressed_data();
    fprintf(stderr,"[NHL07-TEXTURE] CPU swizzled texture published\n");
}

void nhl07_trace_clock_setup(uint32_t stage,uint32_t value) {
    fprintf(stderr,"[NHL07-CLOCK-SETUP] stage=%u value=%u esp=%08X top=%08X ticks=%u\n",stage,value,esp,MEM32(esp),MEM32(0x91a9c4));
}

void nhl07_trace_movie_clock(uint32_t object,uint32_t ready) {
    static unsigned polls;
    uint32_t clock=MEM32(object+0x60);
    if(++polls<=4 || polls%60==0)
        fprintf(stderr,"[NHL07-MOVIE-CLOCK] poll=%u ready=%u object=%08X frame=%u time_frame=%.6f base=%u bias=%u audio=%u audio_time=%u drift=%d clock=%08X last=%u elapsed=%u scale=%u EA=%u/%u\n",
                polls,ready,object,MEM32(object+0x44),(double)MEMF(object+0x48),MEM32(object+0x40),MEM32(object+0x4c),
                MEM32(object+0x58),MEM32(object+0x54),SMEM32(object+0x5c),clock,MEM32(clock),MEM32(clock+8),
                MEM32(clock+0x10),MEM32(0x91a9c4),MEM32(0x91a9c0));
}

void nhl07_trace_movie_request(uint32_t stage,uint32_t object,uint32_t value) {
    static unsigned counts[3];
    unsigned count=++counts[stage];
    if(count>4 && count%60!=0)return;
    if(stage==0) {
        fprintf(stderr,"[NHL07-MOVIE-PLAYER] poll=%u object=%08X player=%08X frame=%08X flags=%u/%u/%u wait=%u done=%u EA=%u\n",
                count,object,MEM32(object+8),MEM32(object+0x10),MEM8(object+0x4a),MEM8(object+0x1ae),
                MEM8(object+0x1af),MEM8(object+0x2f8),MEM8(object+0x300),MEM32(0x91a9c4));
    } else {
        uint32_t provider=MEM32(object+0x68),decoder=provider?MEM32(provider+0x18):0;
        uint32_t vtable=decoder?MEM32(decoder):0;
        fprintf(stderr,"[NHL07-MOVIE-REQUEST] stage=%u poll=%u player=%08X value=%08X target_frame=%u time_frame=%.6f provider=%08X decoder=%08X get_frame=%08X stored_frame=%08X EA=%u\n",
                stage,count,object,value,MEM32(object+0x44),(double)MEMF(object+0x48),provider,decoder,
                vtable?MEM32(vtable+8):0,MEM32(object+0x78),MEM32(0x91a9c4));
    }
}

void nhl07_trace_vp6_decode(uint32_t stage) {
    static struct timespec began;
    static unsigned count;
    struct timespec now;timespec_get(&now,TIME_UTC);
    if(stage==0)began=now;
    else {
        double ms=(double)(now.tv_sec-began.tv_sec)*1000.0+(double)(now.tv_nsec-began.tv_nsec)/1000000.0;
        if(++count<=8||count%60==0)fprintf(stderr,"[NHL07-VP6-DECODE] call=%u milliseconds=%.3f\n",count,ms);
    }
}

/* XNetStartup(XNetStartupParams*): stdcall, one 32-bit argument.
   Do not pretend that an Xbox network service has been initialized. */
void sub_006ED20E(void) {
    fprintf(stderr,"[NHL07-NETWORK] XNetStartup: unavailable (WSASYSNOTREADY=10091)\n");
    g_eax=10091;
    g_esp+=8;
}

/* WSAStartup(WORD, WSADATA*): stdcall, two 32-bit stack slots.
   On failure the caller's output structure is left untouched. */
void sub_006ED225(void) {
    fprintf(stderr,"[NHL07-NETWORK] WSAStartup: unavailable (WSASYSNOTREADY=10091)\n");
    g_eax=10091;
    g_esp+=12;
}

/* CRT thread notification callback, missed by both initial discovery passes.
   Exact original range 005D7E7F..005D7EA9; see analysis/ghidra-recovered/.
   Preserve both attach/detach branches and the guest return addresses. */
void sub_005D7E7F(void) {
    if (MEM32(esp+4) != 0) {
        eax=MEM32(0x008E171C);
        if (eax != 0) {
            uint32_t target=eax;
            PUSH32(esp,0x005D7E91);
            RECOMP_ICALL(target);
        }
    } else {
        eax=MEM32(0x008E1720);
        if (eax != 0) {
            uint32_t target=eax;
            PUSH32(esp,0x005D7E9E);
            RECOMP_ICALL(target);
        }
        PUSH32(esp,0);
        PUSH32(esp,0x005D7EA5);
        RECOMP_ABI_CALL(0x005D1D3A,sub_005D1D3A);
        POP32(esp,ecx);
    }
    esp+=8; /* ret 4: return address plus one argument. */
}
