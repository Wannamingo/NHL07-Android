#include "exact_bytes.h"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sys/mman.h>
#include <unistd.h>

using Compare = bool (*)(const void*, const void*, std::size_t);
__attribute__((noinline)) static bool libc_equal(const void* a, const void* b, std::size_t n) {
    return std::memcmp(a, b, n) == 0;
}
__attribute__((noinline)) static bool neon128(const void* a, const void* b, std::size_t n) {
    return nhl07_exact_bytes::equal128(a, b, n);
}
__attribute__((noinline)) static bool neon256(const void* a, const void* b, std::size_t n) {
    return nhl07_exact_bytes::equal256(a, b, n);
}
__attribute__((noinline)) static bool scan256(const void* a, const void* b, std::size_t n) {
    return nhl07_exact_bytes::equal_scan256(a, b, n);
}
static Compare volatile algorithms[] = {libc_equal, neon128, neon256, scan256};
static const char* names[] = {"libc_memcmp", "neon128", "neon256", "scan256"};
static constexpr unsigned algorithm_count = sizeof(names) / sizeof(names[0]);
static unsigned long long passed;
static volatile unsigned sink;
static void check(bool condition) {
    if (!condition) { std::fprintf(stderr, "EXACT_BYTES failed at check %llu\n", passed); std::abort(); }
    ++passed;
}
static double now(clockid_t clock) {
    timespec t{}; clock_gettime(clock, &t); return t.tv_sec + t.tv_nsec * 1e-9;
}
static void contracts() {
    const std::size_t max_size = 1024 * 1024;
    std::vector<std::uint8_t> a(max_size + 64), b(max_size + 64);
    for (std::size_t i = 0; i < a.size(); ++i) a[i] = static_cast<std::uint8_t>((i * 131) ^ (i >> 8));
    for (unsigned x = 0; x < 32; ++x) for (unsigned y = 0; y < 32; ++y) {
        for (std::size_t n : {0u, 1u, 7u, 15u, 16u, 17u, 63u, 64u, 65u, 127u, 128u,
                              129u, 255u, 256u, 257u, 511u, 512u, 513u, 4095u}) {
            std::copy_n(a.data() + x, n, b.data() + y);
            for (unsigned alg = 1; alg < algorithm_count; ++alg) check(algorithms[alg](a.data() + x, b.data() + y, n));
            if (n) {
                b[y + n - 1] ^= 0x80;
                for (unsigned alg = 1; alg < algorithm_count; ++alg) check(!algorithms[alg](a.data() + x, b.data() + y, n));
                b[y + n - 1] ^= 0x80;
            }
        }
    }
    for (std::size_t n : {64u, 127u, 128u, 129u, 255u, 256u, 257u, 1024u, 4096u, 65536u, 1048576u}) {
        std::copy_n(a.data() + 3, n, b.data() + 11);
        for (std::size_t i = 0; i < n; ++i) {
            b[11 + i] ^= 1;
            for (unsigned alg = 1; alg < algorithm_count; ++alg) check(!algorithms[alg](a.data() + 3, b.data() + 11, n));
            b[11 + i] ^= 1;
        }
        for (unsigned alg = 1; alg < algorithm_count; ++alg) check(algorithms[alg](a.data() + 3, b.data() + 11, n));
        std::printf("MUTATIONS bytes=%zu passed=%llu\n", n, passed); std::fflush(stdout);
    }
    const std::size_t page = static_cast<std::size_t>(sysconf(_SC_PAGESIZE));
    auto guarded = [page]() {
        void* mapping = mmap(nullptr, page * 3, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
        check(mapping != MAP_FAILED);
        check(mprotect(static_cast<char*>(mapping) + page, page, PROT_READ | PROT_WRITE) == 0);
        return static_cast<std::uint8_t*>(mapping);
    };
    std::uint8_t* ga = guarded(); std::uint8_t* gb = guarded();
    for (std::size_t n = 0; n <= std::min(page, std::size_t{4096}); ++n) {
        auto* pa = ga + page * 2 - n; auto* pb = gb + page * 2 - n;
        if (n) { std::fill_n(pa, n, 0xa5); std::fill_n(pb, n, 0xa5); }
        for (unsigned alg = 1; alg < algorithm_count; ++alg) check(algorithms[alg](pa, pb, n));
        if (n) {
            pb[n - 1] ^= 1;
            for (unsigned alg = 1; alg < algorithm_count; ++alg) check(!algorithms[alg](pa, pb, n));
        }
    }
    munmap(ga, page * 3); munmap(gb, page * 3);
    std::printf("EXACT_BYTES passed=%llu failed=0\n", passed); std::fflush(stdout);
}
static void benchmark() {
    for (std::size_t total : {1024u * 1024u, 200u * 1024u * 1024u}) {
        std::vector<std::uint8_t> a(total + 64), b(total + 64);
        for (std::size_t i = 0; i < a.size(); ++i) a[i] = static_cast<std::uint8_t>((i * 131) ^ (i >> 8));
        b = a;
        const unsigned passes = total < 2 * 1024 * 1024 ? 2048 : 10;
        for (unsigned repeat = 0; repeat < 3; ++repeat) for (unsigned order = 0; order < algorithm_count; ++order) {
            unsigned alg = (repeat + order) % algorithm_count;
            Compare compare = algorithms[alg];
            const double cpu_start = now(CLOCK_PROCESS_CPUTIME_ID), wall_start = now(CLOCK_MONOTONIC);
            unsigned result = 0;
            for (unsigned pass = 0; pass < passes; ++pass) {
                std::size_t offset = 0; unsigned texture = 0;
                while (offset < total) {
                    // Vary texture sizes and starting alignment, still compare every requested byte.
                    std::size_t chunk = std::min(total - offset, std::size_t{4096} << (texture % 9));
                    const std::size_t alignment = texture % 32;
                    result += compare(a.data() + offset + alignment, b.data() + offset + alignment, chunk);
                    offset += chunk; ++texture;
                }
            }
            sink = result;
            const double wall_ms = (now(CLOCK_MONOTONIC) - wall_start) * 1000;
            const double cpu_ms = (now(CLOCK_PROCESS_CPUTIME_ID) - cpu_start) * 1000;
            std::printf("BENCH mode=%s algorithm=%s repeat=%u logical_bytes=%llu wall_ms=%.6f cpu_ms=%.6f\n",
                total < 2 * 1024 * 1024 ? "warm" : "streaming", names[alg], repeat,
                static_cast<unsigned long long>(total) * passes, wall_ms, cpu_ms);
            std::fflush(stdout);
        }
    }
}
int main(int argc, char** argv) {
    if (argc > 1 && std::strcmp(argv[1], "--bench-only") == 0) benchmark();
    else if (argc > 1 && std::strcmp(argv[1], "--contracts-only") == 0) contracts();
    else { contracts(); benchmark(); }
    return sink == 0xffffffffu ? 1 : 0;
}
