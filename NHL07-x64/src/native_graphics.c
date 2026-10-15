/* NHL 07/XDK 5849 -> Windows D3D11. Only implemented interfaces are intercepted.
   Host COM pointers never enter the 32-bit guest address space. */
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recomp_types.h"
#include "native_graphics.h"
#include "native_device_defaults.h"
#include "d3d8_xbox.h"
#include "xbox_memory_layout.h"

#define DEVICE_GLOBAL 0x00785178u
#define DEVICE_STORAGE 0x00785180u
#define DEVICE_SIZE 0x24A0u
extern uint32_t xbox_HeapAlloc(uint32_t size,uint32_t alignment);
extern void nhl07_invalidate_vertex_cache(void);
extern uint32_t nhl07_guest_resource_reference(int add_ref,uint32_t resource);
extern void nhl07_capture_first_draw(const uint32_t *args,uint32_t push_begin,uint32_t push_end);
static HWND window;
static IDirect3D8 *d3d;
static IDirect3DDevice8 *device;
static uint32_t push_buffer,back_buffer,depth_buffer;
static unsigned frames;
static unsigned char gamma_ramp[768]; /* Xbox gamma entries are bytes, unlike Windows WORDs. */
typedef struct Surface {
    uint32_t guest,refs;
    IDirect3DSurface8 *host;
    D3DSURFACE_DESC desc;
} Surface;
static Surface surfaces[32];
static unsigned surface_count;
static void *guest(uint32_t address) { return address?(void *)(g_xbox_mem_offset+(uintptr_t)address):NULL; }
static float as_float(uint32_t value) { float result;memcpy(&result,&value,4);return result; }
static uint32_t unavailable(const char *what,uint32_t value) {
    fprintf(stderr,"[NHL07-GRAPHICS-MISSING] %s value=%08X\n",what,value);
    fflush(stderr);exit(5);
}
static LRESULT CALLBACK window_proc(HWND hwnd,UINT message,WPARAM w,LPARAM l) {
    if(message==WM_CLOSE) {DestroyWindow(hwnd);return 0;}
    if(message==WM_DESTROY) {PostQuitMessage(0);return 0;}
    return DefWindowProcW(hwnd,message,w,l);
}
static void pump_messages(void) {
    MSG message;
    while(PeekMessageW(&message,NULL,0,0,PM_REMOVE)) {
        if(message.message==WM_QUIT) exit(0);
        TranslateMessage(&message);DispatchMessageW(&message);
    }
}
static Surface *surface(uint32_t address) {
    for(unsigned i=0;i<surface_count;i++) if(surfaces[i].guest==address) return &surfaces[i];
    return NULL;
}
static uint32_t surface_proxy(IDirect3DSurface8 *host) {
    if(!host || surface_count==32) return 0;
    Surface *s=&surfaces[surface_count++];
    s->guest=xbox_HeapAlloc(32,16);s->refs=1;s->host=host;
    if(!s->guest || FAILED(host->lpVtbl->GetDesc(host,&s->desc))) return 0;
    memset(guest(s->guest),0,32);
    MEM32(s->guest)=0x50001;
    MEM32(s->guest+12)=((uint32_t)s->desc.Format<<8)|0x10022;
    uint32_t pitch=(s->desc.Width*4+63)&~63u;
    MEM32(s->guest+16)=(s->desc.Width-1)|((s->desc.Height-1)<<12)|((pitch/64-1)<<24);
    return s->guest;
}
static HRESULT create_device(const uint32_t *args) {
    uint32_t p=args[4];
    if(!p || !args[5] || device) return E_INVALIDARG;
    MEM32(args[5])=0;
    D3DPRESENT_PARAMETERS pp={0};
    pp.BackBufferWidth=MEM32(p);pp.BackBufferHeight=MEM32(p+4);
    pp.BackBufferFormat=(D3DFORMAT)MEM32(p+8);pp.BackBufferCount=MEM32(p+12);
    pp.MultiSampleType=(D3DMULTISAMPLE_TYPE)MEM32(p+16);
    pp.SwapEffect=(D3DSWAPEFFECT)MEM32(p+20);pp.Windowed=TRUE;
    pp.EnableAutoDepthStencil=MEM32(p+32);pp.AutoDepthStencilFormat=(D3DFORMAT)MEM32(p+36);
    pp.Flags=MEM32(p+40);pp.FullScreen_PresentationInterval=0;
    fprintf(stderr,"[NHL07-GRAPHICS] create %ux%u format=%X depth=%X enabled=%u multisample=%X\n",
        pp.BackBufferWidth,pp.BackBufferHeight,pp.BackBufferFormat,pp.AutoDepthStencilFormat,
        pp.EnableAutoDepthStencil,pp.MultiSampleType);
    if(!pp.BackBufferWidth || !pp.BackBufferHeight || pp.BackBufferWidth>4096 || pp.BackBufferHeight>4096)
        return E_INVALIDARG;
    if(MEM32(p+52)||MEM32(p+56)||MEM32(p+60)||MEM32(p+64))
        return unavailable("caller-supplied presentation surfaces",MEM32(p+52));
    WNDCLASSW wc={0};wc.lpfnWndProc=window_proc;wc.hInstance=GetModuleHandleW(NULL);
    wc.lpszClassName=L"NHL07NativeGraphics";wc.hCursor=LoadCursor(NULL,IDC_ARROW);
    RegisterClassW(&wc);
    RECT size={0,0,(LONG)pp.BackBufferWidth,(LONG)pp.BackBufferHeight};
    AdjustWindowRect(&size,WS_OVERLAPPEDWINDOW,FALSE);
    window=CreateWindowExW(0,wc.lpszClassName,L"NHL 07 — native development build",
        WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,size.right-size.left,size.bottom-size.top,
        NULL,NULL,wc.hInstance,NULL);
    if(!window) return HRESULT_FROM_WIN32(GetLastError());
    pp.hDeviceWindow=window;
    d3d=xbox_Direct3DCreate8(120);
    if(!d3d) return E_FAIL;
    HRESULT hr=d3d->lpVtbl->CreateDevice(d3d,0,1,window,args[3],&pp,&device);
    if(FAILED(hr)) return hr;
    IDirect3DSurface8 *back=NULL,*depth=NULL;
    hr=device->lpVtbl->GetBackBuffer(device,0,0,&back);
    if(FAILED(hr)) return hr;
    if(pp.EnableAutoDepthStencil) {
        hr=device->lpVtbl->CreateDepthStencilSurface(device,pp.BackBufferWidth,pp.BackBufferHeight,
            pp.AutoDepthStencilFormat,D3DMULTISAMPLE_NONE,&depth);
        if(FAILED(hr)) return hr;
    }
    hr=device->lpVtbl->SetRenderTarget(device,back,depth);
    if(FAILED(hr)) return hr;
    back_buffer=surface_proxy(back);depth_buffer=depth?surface_proxy(depth):0;
    push_buffer=xbox_HeapAlloc(0x80000,4096);
    if(!back_buffer || !push_buffer || (depth && !depth_buffer)) return E_OUTOFMEMORY;
    memset(guest(DEVICE_STORAGE),0,DEVICE_SIZE);
    MEM32(DEVICE_GLOBAL)=DEVICE_STORAGE;
    MEM32(DEVICE_STORAGE)=push_buffer;MEM32(DEVICE_STORAGE+4)=push_buffer+0x80000-4096;
    MEM32(DEVICE_STORAGE+0x1A14)=back_buffer;MEM32(DEVICE_STORAGE+0x1A18)=back_buffer;
    MEM32(DEVICE_STORAGE+0x1A1C)=back_buffer;
    MEM32(DEVICE_STORAGE+0x196C)=0x11; /* one sample in each dimension */
    MEM32(DEVICE_STORAGE+0x96C)=0x3f800000;MEM32(DEVICE_STORAGE+0x970)=0x3f800000;
    nhl07_device_defaults(DEVICE_STORAGE,pp.BackBufferWidth,pp.BackBufferHeight,back_buffer,depth_buffer);
    for(unsigned channel=0;channel<3;channel++) for(unsigned i=0;i<256;i++) gamma_ramp[channel*256+i]=(unsigned char)i;
    memcpy(guest(DEVICE_STORAGE+0x1E04),gamma_ramp,sizeof(gamma_ramp));
    memcpy(guest(DEVICE_STORAGE+0x2104),gamma_ramp,sizeof(gamma_ramp));
    MEM32(args[5])=DEVICE_STORAGE;
    ShowWindow(window,SW_SHOW);UpdateWindow(window);
    fprintf(stderr,"[NHL07-GRAPHICS] native D3D11 device created, back=%08X depth=%08X\n",back_buffer,depth_buffer);
    return S_OK;
}

uint32_t nhl07_graphics_call(NhlGraphicsApi api,const uint32_t *args) {
    if(api==NHL_GFX_Direct3D_CreateDevice) return create_device(args);
    if(!device) return unavailable("API before CreateDevice",api);
    switch(api) {
    case NHL_GFX_D3DDevice_DrawIndexedVertices:
        nhl07_capture_first_draw(args,push_buffer,MEM32(DEVICE_STORAGE));
        return unavailable("DrawIndexedVertices: shaders, streams and states require translation",args[0]);
    case NHL_GFX_D3DDevice_FlushVertexCache:
        nhl07_invalidate_vertex_cache();return 0;
    case NHL_GFX_D3DDevice_GetGammaRamp:
        if(!args[0]) return E_INVALIDARG;
        memcpy(guest(args[0]),gamma_ramp,sizeof(gamma_ramp));return 0;
    case NHL_GFX_D3DDevice_SetBackBufferScale:
        fprintf(stderr,"[NHL07-GRAPHICS] back buffer scale %.3f %.3f\n",as_float(args[0]),as_float(args[1]));
        if(as_float(args[0])!=1.0f || as_float(args[1])!=1.0f) return unavailable("non-unit back buffer scale",args[0]);
        MEM32(DEVICE_STORAGE+0x96C)=args[0];MEM32(DEVICE_STORAGE+0x970)=args[1];return 0;
    case NHL_GFX_D3DDevice_Clear: {
        if((args[2]&0xF0) && (args[2]&0xF0)!=0xF0) return unavailable("partial color clear",args[2]);
        uint32_t flags=((args[2]&1)?D3DCLEAR_ZBUFFER:0)|((args[2]&2)?D3DCLEAR_STENCIL:0)|((args[2]&0xF0)?D3DCLEAR_TARGET:0);
        HRESULT hr=device->lpVtbl->Clear(device,args[0],guest(args[1]),flags,args[3],as_float(args[4]),args[5]);
        fprintf(stderr,"[NHL07-GRAPHICS] clear flags=%X result=%08lX\n",args[2],hr);return hr;
    }
    case NHL_GFX_D3DDevice_Swap:
        pump_messages();
        if(MEM32(DEVICE_STORAGE)!=push_buffer) return unavailable("untranslated inline GPU commands",MEM32(DEVICE_STORAGE)-push_buffer);
        ++frames;
        fprintf(stderr,"[NHL07-GRAPHICS] present %u\n",frames);
        return device->lpVtbl->Swap(device,args[0]);
    case NHL_GFX_D3DDevice_SetFlickerFilter:
    case NHL_GFX_D3DDevice_SetSoftDisplayFilter:
        /* Analogue TV-encoder options have no corresponding digital window setting. */
        return 0;
    case NHL_GFX_D3DDevice_GetBackBuffer2: {
        if(args[0]!=0 && args[0]!=0xffffffff) return unavailable("additional swap buffer",args[0]);
        Surface *s=surface(back_buffer);++s->refs;return back_buffer;
    }
    case NHL_GFX_D3DDevice_GetDepthStencilSurface2:
        if(depth_buffer) ++surface(depth_buffer)->refs;
        return depth_buffer;
    case NHL_GFX_D3DSurface_GetDesc: {
        Surface *s=surface(args[0]);uint32_t out=args[1];
        if(!s || !out) return unavailable("surface description",args[0]);
        MEM32(out)=s->desc.Format;MEM32(out+4)=1;MEM32(out+8)=s->desc.Usage;
        MEM32(out+12)=s->desc.Size;MEM32(out+16)=s->desc.MultiSampleType;
        MEM32(out+20)=s->desc.Width;MEM32(out+24)=s->desc.Height;return 0;
    }
    case NHL_GFX_D3DDevice_SetRenderTarget: {
        Surface *s=surface(args[0]),*depth=surface(args[1]);
        if(!s || (args[1]&&!depth)) return unavailable("render target",args[0]);
        return device->lpVtbl->SetRenderTarget(device,s->host,depth?depth->host:NULL);
    }
    case NHL_GFX_D3DResource_AddRef:
    case NHL_GFX_D3DResource_Release: {
        Surface *s=surface(args[0]);
        if(!s) return nhl07_guest_resource_reference(api==NHL_GFX_D3DResource_AddRef,args[0]);
        if(api==NHL_GFX_D3DResource_AddRef) return ++s->refs;
        if(!s->refs) return unavailable("unbalanced release",args[0]);
        return --s->refs; /* The swap chain retains the presentation surfaces. */
    }
    default: return unavailable("native graphics interface",api);
    }
}
