/* Bit-exact DSP arithmetic / complete effect-chain validation and benchmark.
   The immutable reference multiply comes from the pinned GPL DSP interpreter. */
#include "native_dsp.c"
#include "dsp_reference_multiply.h"
#include <time.h>
#ifdef _WIN32
#include <windows.h>
static double now_seconds(void) {
    LARGE_INTEGER tick, rate; QueryPerformanceCounter(&tick); QueryPerformanceFrequency(&rate);
    return (double)tick.QuadPart / (double)rate.QuadPart;
}
#else
static double now_seconds(void) {
    struct timespec value; clock_gettime(CLOCK_MONOTONIC, &value);
    return (double)value.tv_sec + (double)value.tv_nsec * 1e-9;
}
#endif
static uint32_t random_state = 0x91a723db;
static uint32_t random_word(void) {
    random_state = random_state * 1664525u + 1013904223u; return random_state;
}
static unsigned checks;
static int multiply_check(uint32_t a, uint32_t b, uint8_t sign) {
    uint32_t original[3], current[3];
    reference_dsp_mul56(a, b, original, sign); dsp_mul56(a, b, current, sign);
    if (memcmp(original, current, sizeof(original))) {
        fprintf(stderr, "multiply mismatch %08x %08x sign=%u\n", a, b, sign); return 0;
    }
    ++checks; return 1;
}
static void save_part(FILE *f, const void *p, size_t length) {
    if (fwrite(p, 1, length, f) != length) abort();
}
static uint64_t hash_words(uint64_t hash, const uint32_t *words, size_t count_words) {
    for (size_t i = 0; i < count_words; ++i) { hash ^= words[i]; hash *= UINT64_C(1099511628211); }
    return hash;
}
int main(int argc, char **argv) {
    if (argc != 4) return 2;
    const uint32_t edges[] = {0, 1, 2, 0x7ff, 0x800, 0xfff, 0x1000, 0x7ffffe,
        0x7fffff, 0x800000, 0x800001, 0xfffffe, 0xffffff, 0x1000000,
        0x1800000, 0x7fffffff, 0x80000000, 0xffffffff};
    for (unsigned s = 0; s < 256; ++s)
        for (unsigned a = 0; a < ARRAY_SIZE(edges); ++a)
            for (unsigned b = 0; b < ARRAY_SIZE(edges); ++b)
                if (!multiply_check(edges[a], edges[b], (uint8_t)s)) return 1;
    for (unsigned i = 0; i < 2000000; ++i) {
        uint32_t a = random_word(), b = random_word(); uint8_t s = (uint8_t)(random_word() >> 24);
        if (!multiply_check(a, b, s)) return 1;
    }
    FILE *image_file = fopen(argv[1], "rb"); if (!image_file) return 2;
    fseek(image_file, 0, SEEK_END); long image_bytes = ftell(image_file); rewind(image_file);
    uint8_t *image = malloc((size_t)image_bytes); if (!image) return 2;
    if (fread(image, 1, (size_t)image_bytes, image_file) != (size_t)image_bytes) return 2;
    fclose(image_file);
    int32_t input[1024], output[1024]; uint64_t digest = UINT64_C(1469598103934665603);
    FILE *snapshot = fopen(argv[2], "wb"); if (!snapshot) return 2;
    if (!nhl07_dsp_load(image, (size_t)image_bytes)) return 1;
    random_state = 0x12345678;
    for (unsigned frame = 0; frame < 64; ++frame) {
        for (unsigned i = 0; i < 1024; ++i)
            input[i] = frame == 0 ? 0 : (int32_t)((random_word() >> 12) - 0x80000) & 0xffffff;
        if (!nhl07_dsp_frame(input, output)) return 1;
        digest = hash_words(digest, (const uint32_t *)output, 1024);
        save_part(snapshot, output, sizeof(output));
        save_part(snapshot, core->registers, sizeof(core->registers));
        save_part(snapshot, core->stack, sizeof(core->stack));
        save_part(snapshot, core->xram, sizeof(core->xram));
        save_part(snapshot, core->yram, sizeof(core->yram));
        save_part(snapshot, core->pram, sizeof(core->pram));
        save_part(snapshot, scratch, scratch_bytes);
    }
    fclose(snapshot);
    unsigned frames = (unsigned)strtoul(argv[3], NULL, 10); if (frames < 100 || frames > 100000) return 2;
    if (!nhl07_dsp_load(image, (size_t)image_bytes)) return 1;
    random_state = 0x12345678; double started = now_seconds();
    for (unsigned frame = 0; frame < frames; ++frame) {
        for (unsigned i = 0; i < 1024; ++i)
            input[i] = (int32_t)((random_word() >> 12) - 0x80000) & 0xffffff;
        if (!nhl07_dsp_frame(input, output)) return 1;
        digest = hash_words(digest, (const uint32_t *)output, 1024);
    }
    double elapsed = now_seconds() - started;
    printf("DSP_OPT passed=%u snapshot_frames=64 benchmark_frames=%u seconds=%.9f ns_per_dsp_frame=%.3f digest=%016llx instructions=%llu dma_bytes=%llu\n",
        checks, frames, elapsed, elapsed * 1e9 / frames, (unsigned long long)digest,
        (unsigned long long)instructions, (unsigned long long)dma_bytes);
    free(image); return 0;
}
