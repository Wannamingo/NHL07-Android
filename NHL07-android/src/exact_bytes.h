#pragma once
#include <cstddef>
#include <cstdint>
#include <cstring>
#if defined(__aarch64__)
#include <arm_neon.h>
#endif

// Exact equality only: each invocation checks the current bytes, including tails.
// No hash, address-based freshness assumption, or skipped validation is involved.
namespace nhl07_exact_bytes {
template <std::size_t Chunk, bool FullScan = false>
inline bool equal_neon(const void* lhs, const void* rhs, std::size_t size) {
    static_assert(Chunk == 128 || Chunk == 256, "Supported comparison chunks");
    if (lhs == rhs || size == 0) return true;
#if defined(__aarch64__)
    auto* a = static_cast<const std::uint8_t*>(lhs);
    auto* b = static_cast<const std::uint8_t*>(rhs);
    uint8x16_t all_different = vdupq_n_u8(0);
    while (size >= Chunk) {
        uint8x16_t d0 = veorq_u8(vld1q_u8(a), vld1q_u8(b));
        uint8x16_t d1 = veorq_u8(vld1q_u8(a + 16), vld1q_u8(b + 16));
        uint8x16_t d2 = veorq_u8(vld1q_u8(a + 32), vld1q_u8(b + 32));
        uint8x16_t d3 = veorq_u8(vld1q_u8(a + 48), vld1q_u8(b + 48));
        for (std::size_t offset = 64; offset < Chunk; offset += 64) {
            d0 = vorrq_u8(d0, veorq_u8(vld1q_u8(a + offset), vld1q_u8(b + offset)));
            d1 = vorrq_u8(d1, veorq_u8(vld1q_u8(a + offset + 16), vld1q_u8(b + offset + 16)));
            d2 = vorrq_u8(d2, veorq_u8(vld1q_u8(a + offset + 32), vld1q_u8(b + offset + 32)));
            d3 = vorrq_u8(d3, veorq_u8(vld1q_u8(a + offset + 48), vld1q_u8(b + offset + 48)));
        }
        const uint8x16_t different = vorrq_u8(vorrq_u8(d0, d1), vorrq_u8(d2, d3));
        if constexpr (FullScan) all_different = vorrq_u8(all_different, different);
        else if (vmaxvq_u8(different)) return false;
        a += Chunk; b += Chunk; size -= Chunk;
    }
    uint8x16_t tail = all_different;
    while (size >= 16) {
        tail = vorrq_u8(tail, veorq_u8(vld1q_u8(a), vld1q_u8(b)));
        a += 16; b += 16; size -= 16;
    }
    if (vmaxvq_u8(tail)) return false;
    while (size--) if (*a++ != *b++) return false;
    return true;
#else
    return std::memcmp(lhs, rhs, size) == 0;
#endif
}
inline bool equal128(const void* a, const void* b, std::size_t size) {
    return equal_neon<128>(a, b, size);
}
inline bool equal256(const void* a, const void* b, std::size_t size) {
    return equal_neon<256>(a, b, size);
}
inline bool equal_scan256(const void* a, const void* b, std::size_t size) {
    return equal_neon<256, true>(a, b, size);
}
}
