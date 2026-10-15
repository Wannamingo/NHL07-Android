#pragma once
#include <stddef.h>
#include <stdint.h>

#define NHL07_TEAM_TEXT_FIELD_BYTES 32u
#define NHL07_TEAM_TEXT_UTF8_BYTES 4096u
/* At most the original 31-byte field's 3-byte-per-character UTF-8 bound. */
#define NHL07_APT_TEXT_SCRATCH_BYTES 94u

/* Metadata accompanies the exact original producer and copied guest field.
   The 32-byte guest ABI remains unchanged; no inverse encoding is attempted. */
typedef struct {
    char utf8[NHL07_TEAM_TEXT_UTF8_BYTES];
    uint8_t legacy[NHL07_TEAM_TEXT_FIELD_BYTES];
    size_t utf8_bytes;
    int utf8_ready, legacy_ready;
} Nhl07TeamTextCapture;

typedef struct {
    Nhl07TeamTextCapture teams[2];
} Nhl07TeamTextState;

int nhl07_team_text_capture_utf8(Nhl07TeamTextCapture *capture,
                               const char *source, size_t available);
int nhl07_team_text_capture_legacy(Nhl07TeamTextCapture *capture,
                                 const uint8_t *source, size_t available);
int nhl07_team_text_publish(Nhl07TeamTextState *state, unsigned side,
                           const Nhl07TeamTextCapture *capture,
                           const uint8_t field[NHL07_TEAM_TEXT_FIELD_BYTES]);
size_t nhl07_team_text_render(const Nhl07TeamTextState *state, unsigned side,
                             const uint8_t field[NHL07_TEAM_TEXT_FIELD_BYTES],
                             char *output, size_t capacity);
