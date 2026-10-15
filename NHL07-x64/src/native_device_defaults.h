/* XDK 5849 fields audited in 75C7C0 (SetViewport), 75E320 (viewport vectors),
   75F0A0 (viewport methods). Native CreateDevice owns the default viewport. */
static void nhl07_device_defaults(uint32_t device,uint32_t width,uint32_t height,
                                  uint32_t back,uint32_t depth) {
    MEM32(device+0x1a04)=back;MEM32(device+0x1a08)=depth;
    MEM32(device+0x1a10)=back;
    MEM32(device+0x954)=width;MEM32(device+0x958)=height;
    MEM32(device+0x95c)=0x3f800000;MEM32(device+0x960)=0x3f800000;
    MEM32(device+0x948)=0x4b7fffff; /* D24S8: 2^24-1 */
    MEM32(device+0x940)=MEM32(device+0x944)=0x3f800000;
    MEM32(device+0xee0)=MEM32(device+0xee4)=0;
    MEM32(device+0xee8)=width;MEM32(device+0xeec)=height;
    MEM32(device+0xef0)=0;MEM32(device+0xef4)=0x3f800000;
}
