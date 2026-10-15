/* NHL 07 USA/XDK 5849: preserve Unicode team names across its narrow ABI.

   0028C380 produces the full name into entry ESP-0x542, then its exact
   00230070 case 0 copies that buffer into 8F5B2C + side*778 (31 bytes + NUL).
   002F6E70 otherwise loses Unicode above FF during that production. Retain
   the source here, before conversion, and substitute it only at the matching
   00368890 APT handoff. Every original guest function still executes.
   English and unrelated strings retain their exact original implementation.
*/
#include "native_text_hooks.h"
#include <string.h>

static int valid_utf8(const unsigned char *source, size_t bytes) {
    size_t index = 0;
    while (index < bytes) {
        unsigned first = source[index++], count, value, minimum;
        if (first < 0x80) continue;
        if (first >= 0xc2 && first <= 0xdf) { count=1; value=first&31; minimum=0x80; }
        else if (first >= 0xe0 && first <= 0xef) { count=2; value=first&15; minimum=0x800; }
        else if (first >= 0xf0 && first <= 0xf4) { count=3; value=first&7; minimum=0x10000; }
        else return 0;
        if (count > bytes-index) return 0;
        while (count--) {
            unsigned continuation=source[index++];
            if ((continuation&0xc0)!=0x80) return 0;
            value=(value<<6)|(continuation&63);
        }
        if (value<minimum || value>0x10ffff || (value>=0xd800 && value<=0xdfff)) return 0;
    }
    return 1;
}

int nhl07_team_text_capture_utf8(Nhl07TeamTextCapture *capture,
                               const char *source, size_t available) {
    size_t length=0;
    memset(capture,0,sizeof(*capture));
    if (!source) return 0;
    if (available>NHL07_TEAM_TEXT_UTF8_BYTES) available=NHL07_TEAM_TEXT_UTF8_BYTES;
    while (length<available && source[length]) ++length;
    if (!length || length==available || !valid_utf8((const unsigned char *)source,length)) return 0;
    memcpy(capture->utf8,source,length+1);
    capture->utf8_bytes=length;
    capture->utf8_ready=1;
    return 1;
}

int nhl07_team_text_capture_legacy(Nhl07TeamTextCapture *capture,
                                 const uint8_t *source, size_t available) {
    size_t length=0;
    capture->legacy_ready=0;
    memset(capture->legacy,0,sizeof(capture->legacy));
    if (!capture->utf8_ready || !source || available<31) return 0;
    /* Original strncpy(...,32) then field[31]=0; reproduce its padding. */
    while (length<31 && source[length]) {
        capture->legacy[length]=source[length];
        ++length;
    }
    capture->legacy_ready=1;
    return 1;
}

int nhl07_team_text_publish(Nhl07TeamTextState *state, unsigned side,
                           const Nhl07TeamTextCapture *capture,
                           const uint8_t field[NHL07_TEAM_TEXT_FIELD_BYTES]) {
    if (side>=2) return 0;
    memset(&state->teams[side],0,sizeof(state->teams[side]));
    if (!capture || !field || !capture->utf8_ready || !capture->legacy_ready ||
        memcmp(capture->legacy,field,NHL07_TEAM_TEXT_FIELD_BYTES)) return 0;
    state->teams[side]=*capture;
    return 1;
}

size_t nhl07_team_text_render(const Nhl07TeamTextState *state, unsigned side,
                             const uint8_t field[NHL07_TEAM_TEXT_FIELD_BYTES],
                             char *output, size_t capacity) {
    const Nhl07TeamTextCapture *capture;
    size_t index;
    if (side>=2 || !output || !field) return 0;
    capture=&state->teams[side];
    if (!capture->utf8_ready || !capture->legacy_ready || capture->utf8_bytes>=capacity ||
        memcmp(capture->legacy,field,NHL07_TEAM_TEXT_FIELD_BYTES)) return 0;
    for (index=0;index<capture->utf8_bytes;++index)
        output[index]=capture->utf8[index]=='^'?'\n':capture->utf8[index];
    output[index]=0;
    return index;
}

#ifndef NHL07_TEXT_HOOKS_PURE
#include "recomp_types.h"
#include <stdio.h>
#include <stdlib.h>

extern void sub_0028C380_nhl07_text_original(void);
extern void sub_002F6E70_nhl07_text_original(void);
extern void sub_00368890_nhl07_text_original(void);

typedef struct TeamTextScope {
    struct TeamTextScope *previous;
    uint32_t output;
    unsigned side;
    Nhl07TeamTextCapture capture;
} TeamTextScope;

/* The original producers and APT handoff execute on the same guest thread.
   TLS also prevents a background guest worker reusing a stack address. */
static RECOMP_TLS TeamTextScope *text_scope;
static RECOMP_TLS Nhl07TeamTextState text_state;
static RECOMP_TLS unsigned handoffs_logged;

static int russian_enabled(void) {
    const char *directory=getenv("NHL07_LANGUAGE_DIR");
    return directory && directory[0];
}

static void require_cleanup(uint32_t entry, uint32_t bytes, const char *function) {
    if (g_esp!=entry+bytes) {
        fprintf(stderr,"[NHL07-ABI] %s original text cleanup mismatch\n",function);
        abort();
    }
}

void sub_0028C380(void) {
    uint32_t entry=g_esp;
    unsigned side=MEM32(entry+8);
    TeamTextScope scope;
    if (!russian_enabled() || side>=2 || entry<0x542) {
        sub_0028C380_nhl07_text_original();
        return;
    }
    memset(&scope,0,sizeof(scope));
    scope.previous=text_scope;
    scope.output=entry-0x542;
    scope.side=side;
    text_scope=&scope;
    sub_0028C380_nhl07_text_original();
    require_cleanup(entry,20,"0028C380"); /* Original RET 16. */
    text_scope=scope.previous;
    if (nhl07_team_text_publish(&text_state,side,&scope.capture,
            (const uint8_t *)(g_xbox_mem_offset+(uintptr_t)(0x8f5b2cu+side*0x778u)))) {
        fprintf(stderr,"[NHL07-TEXT] retained team side=%u utf8_bytes=%zu; guest field unchanged\n",
                side,scope.capture.utf8_bytes);
    }
}

void sub_002F6E70(void) {
    uint32_t entry=g_esp, source=MEM32(entry+4), output=MEM32(entry+8);
    TeamTextScope *scope=text_scope;
    int retained=scope && output==scope->output;
    if (retained) {
        nhl07_team_text_capture_utf8(&scope->capture,
            (const char *)(g_xbox_mem_offset+(uintptr_t)source),NHL07_TEAM_TEXT_UTF8_BYTES);
    }
    sub_002F6E70_nhl07_text_original();
    if (retained) {
        require_cleanup(entry,4,"002F6E70"); /* Original cdecl RET. */
        nhl07_team_text_capture_legacy(&scope->capture,
            (const uint8_t *)(g_xbox_mem_offset+(uintptr_t)output),NHL07_TEAM_TEXT_FIELD_BYTES);
    }
}

void sub_00368890(void) {
    uint32_t entry=g_esp, source=MEM32(entry+4), output=MEM32(entry+8);
    unsigned side;
    size_t bytes;
    /* Run the original first, preserving its register and stack effects. */
    sub_00368890_nhl07_text_original();
    if (!russian_enabled() || output!=0x8fc908u ||
        (source!=0x8f5b2cu && source!=0x8f62a4u)) return;
    require_cleanup(entry,4,"00368890");
    side=source==0x8f5b2cu?0:1;
    bytes=nhl07_team_text_render(&text_state,side,
        (const uint8_t *)(g_xbox_mem_offset+(uintptr_t)source),
        (char *)(g_xbox_mem_offset+(uintptr_t)output),NHL07_APT_TEXT_SCRATCH_BYTES);
    if (!bytes) return;
    g_eax=(uint32_t)bytes;
    g_ecx=(uint32_t)bytes; /* Original ^-replacement loop finishes at length. */
    if (handoffs_logged++<8) {
        fprintf(stderr,"[NHL07-TEXT] APT team side=%u retained UTF-8 bytes=%zu\n",side,bytes);
    }
}
#endif
