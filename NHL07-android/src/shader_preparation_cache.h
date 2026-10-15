#pragma once
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>
#include <string>

// Render-thread-only caches of CPU data. No guest pointer, GL name, binding or
// context state is retained. Hits require equality of every supplied word;
// conservative extra words can only cause a miss. Entries and lookup work are
// bounded, and the most recent entry is checked first for adjacent draws.
template<class Value, size_t Capacity, size_t MaximumWords>
class Nhl07ExactWordsCache {
    static_assert(Capacity != 0 && MaximumWords != 0, "nonempty bounded cache");
public:
    struct Entry {
        std::array<uint32_t, MaximumWords> words{};
        size_t word_count=0;
        uint64_t identity=0;
        Value value{};
    };
    struct Stats {uint64_t hits=0, misses=0;};

    template<class Prepare>
    const Entry *get(const uint32_t *words, size_t count, Prepare prepare) {
        if (!words || !count || count>MaximumWords) return nullptr;
        auto matches=[&](const Entry &entry) {
            return entry.identity && entry.word_count==count &&
                std::memcmp(entry.words.data(),words,count*sizeof(uint32_t))==0;
        };
        if (matches(entries_[recent_])) {++stats_.hits; return &entries_[recent_];}
        for (size_t i=0; i<Capacity; ++i) if (i!=recent_ && matches(entries_[i])) {
            recent_=i; ++stats_.hits; return &entries_[i];
        }
        // Identities never repeat, including after clear(), so another CPU
        // cache can safely refer to an entry that has since been evicted.
        if (sequence_==std::numeric_limits<uint64_t>::max()) return nullptr;
        Entry &entry=entries_[next_];
        entry.identity=0;
        prepare(words,count,entry.value);
        std::memcpy(entry.words.data(),words,count*sizeof(uint32_t));
        entry.word_count=count;
        entry.identity=++sequence_;
        recent_=next_; next_=(next_+1)%Capacity; ++stats_.misses;
        return &entry;
    }
    void clear() {
        for (auto &entry:entries_) {entry.identity=0; entry.word_count=0; entry.value=Value{};}
        recent_=next_=0;
    }
    const Stats &stats() const {return stats_;}
    static constexpr size_t capacity() {return Capacity;}
private:
    std::array<Entry,Capacity> entries_{};
    size_t recent_=0,next_=0;
    uint64_t sequence_=0;
    Stats stats_{};
};

// Every register read by the current PS source decoder, excluding color
// constants (uniform data). Raw unused bits/stages are retained conservatively.
using Nhl07ShaderPixelWords=std::array<uint32_t,36>;
template<class ReadRegister>
Nhl07ShaderPixelWords nhl07_shader_pixel_words(ReadRegister read) {
    Nhl07ShaderPixelWords words{}; words[0]=read(0x1e60);
    for (unsigned i=0;i<8;++i) {
        words[1+i*4]=read(0x260+i*4);
        words[2+i*4]=read(0xac0+i*4);
        words[3+i*4]=read(0xaa0+i*4);
        words[4+i*4]=read(0x1e40+i*4);
    }
    words[33]=read(0x288); words[34]=read(0x28c); words[35]=read(0x1e70);
    return words;
}
using Nhl07ShaderPreparationWords=std::array<uint32_t,39>;
inline Nhl07ShaderPreparationWords nhl07_shader_preparation_words(
        uint64_t vertex_identity,uint16_t bgra,uint16_t integer,
        const Nhl07ShaderPixelWords &pixel) {
    Nhl07ShaderPreparationWords words{};
    words[0]=uint32_t(vertex_identity); words[1]=uint32_t(vertex_identity>>32);
    words[2]=uint32_t(bgra)|(uint32_t(integer)<<16);
    std::memcpy(words.data()+3,pixel.data(),sizeof(pixel)); return words;
}

// Preserve the original binary std::string pipeline key exactly. Prepared
// entries own this string; the existing GL program cache remains unchanged.
inline std::string nhl07_shader_pipeline_key(int length,uint16_t bgra,uint16_t integer,
        const uint32_t *program,const void *pixel,size_t pixel_bytes) {
    if (length<1 || length>136 || !program || (!pixel && pixel_bytes)) return {};
    std::string key; key.reserve(sizeof(length)+sizeof(bgra)+sizeof(integer)+size_t(length)*16+pixel_bytes);
    key.append(reinterpret_cast<const char *>(&length),sizeof(length));
    key.append(reinterpret_cast<const char *>(&bgra),sizeof(bgra));
    key.append(reinterpret_cast<const char *>(&integer),sizeof(integer));
    key.append(reinterpret_cast<const char *>(program),size_t(length)*16);
    if (pixel_bytes) key.append(reinterpret_cast<const char *>(pixel),pixel_bytes);
    return key;
}
