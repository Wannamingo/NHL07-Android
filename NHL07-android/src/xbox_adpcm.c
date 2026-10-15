/* Xbox consumes the first 64 frames of each independently decoded IMA block.
   Decoder: pinned xemu / ADPCM-XQ, BSD-3-Clause, notice in deps/adpcm-xq/. */
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include "adpcm.h"
int nhl07_decode_xbox_adpcm(const uint8_t *data,unsigned bytes,unsigned channels,int16_t *output) {
    if(!data||!output||channels<1||channels>2||bytes%(36*channels))return 0;
    int16_t decoded[130];unsigned blocks=bytes/(36*channels);
    for(unsigned i=0;i<blocks;i++) {
        if(adpcm_decode_block(decoded,data+i*36*channels,36*channels,channels)!=65)return 0;
        memcpy(output+i*64*channels,decoded,64*channels*sizeof(int16_t));
    }
    return 1;
}
