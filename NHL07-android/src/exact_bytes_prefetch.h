#pragma once
#include <cstddef>
#include <cstdint>
#include <cstring>
#if defined(__aarch64__)
#include <arm_neon.h>
#endif

// Experimental exact equality kernels. Not used by the game until a device
// benchmark demonstrates an advantage. Every requested byte is checked on an
// equal result; no hashes, generations, stale frames or resource assumptions.
namespace nhl07_exact_prefetch {
template<std::size_t Block, bool Prefetch>
inline bool equal(const void *lhs, const void *rhs, std::size_t size) {
    static_assert(Block == 1024 || Block == 2048, "Validated block sizes");
    if (size == 0 || lhs == rhs) return true;
#if defined(__aarch64__)
    auto *a = static_cast<const std::uint8_t *>(lhs);
    auto *b = static_cast<const std::uint8_t *>(rhs);
    // Small palettes and early mutations retain the libc fast path.
    if (size < 128) return std::memcmp(a, b, size) == 0;
    if (vmaxvq_u8(veorq_u8(vld1q_u8(a), vld1q_u8(b)))) return false;
    a += 16; b += 16; size -= 16;
    while (size >= Block) {
        if constexpr (Prefetch) {
            // All prefetch addresses are inside the requested resource. The
            // guard-page contract also covers this path, including short tails.
            if (size >= Block + 256) {
                for (std::size_t offset = 0; offset < 256; offset += 64) {
                    __builtin_prefetch(a + Block + offset, 0, 3);
                    __builtin_prefetch(b + Block + offset, 0, 3);
                }
            }
        }
        uint8x16_t d0 = vdupq_n_u8(0), d1 = d0, d2 = d0, d3 = d0;
        // Four independent chains reduce horizontal reductions and dependency
        // latency relative to the previously rejected 128/256-byte kernels.
        for (std::size_t offset = 0; offset < Block; offset += 64) {
            d0 = vorrq_u8(d0, veorq_u8(vld1q_u8(a + offset), vld1q_u8(b + offset)));
            d1 = vorrq_u8(d1, veorq_u8(vld1q_u8(a + offset + 16), vld1q_u8(b + offset + 16)));
            d2 = vorrq_u8(d2, veorq_u8(vld1q_u8(a + offset + 32), vld1q_u8(b + offset + 32)));
            d3 = vorrq_u8(d3, veorq_u8(vld1q_u8(a + offset + 48), vld1q_u8(b + offset + 48)));
        }
        if (vmaxvq_u8(vorrq_u8(vorrq_u8(d0, d1), vorrq_u8(d2, d3)))) return false;
        a += Block; b += Block; size -= Block;
    }
    uint8x16_t different = vdupq_n_u8(0);
    while (size >= 16) {
        different = vorrq_u8(different, veorq_u8(vld1q_u8(a), vld1q_u8(b)));
        a += 16; b += 16; size -= 16;
    }
    if (vmaxvq_u8(different)) return false;
    while (size--) if (*a++ != *b++) return false;
    return true;
#else
    return std::memcmp(lhs, rhs, size) == 0;
#endif
}
inline bool block1024(const void *a, const void *b, std::size_t n) {return equal<1024, false>(a,b,n);}
inline bool prefetch1024(const void *a, const void *b, std::size_t n) {return equal<1024, true>(a,b,n);}
inline bool prefetch2048(const void *a, const void *b, std::size_t n) {return equal<2048, true>(a,b,n);}
}
