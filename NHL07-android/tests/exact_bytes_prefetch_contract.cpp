#include "exact_bytes_prefetch.h"
#include "exact_bytes.h"
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sys/mman.h>
#include <unistd.h>

using Compare = bool (*)(const void *, const void *, std::size_t);
__attribute__((noinline)) static bool libc_equal(const void *a,const void *b,std::size_t n) {return std::memcmp(a,b,n)==0;}
__attribute__((noinline)) static bool prior256(const void *a,const void *b,std::size_t n) {return nhl07_exact_bytes::equal256(a,b,n);}
__attribute__((noinline)) static bool block1024(const void *a,const void *b,std::size_t n) {return nhl07_exact_prefetch::block1024(a,b,n);}
__attribute__((noinline)) static bool prefetch1024(const void *a,const void *b,std::size_t n) {return nhl07_exact_prefetch::prefetch1024(a,b,n);}
__attribute__((noinline)) static bool prefetch2048(const void *a,const void *b,std::size_t n) {return nhl07_exact_prefetch::prefetch2048(a,b,n);}
static Compare volatile algorithms[]={libc_equal,prior256,block1024,prefetch1024,prefetch2048};
static const char *names[]={"libc_memcmp","prior_neon256","block1024","prefetch1024","prefetch2048"};
static unsigned long long checks;
static volatile std::uint64_t sink;
static void check(bool value,const char *message) {if(!value){std::fprintf(stderr,"EQUALITY_PREFETCH FAIL %s check=%llu\n",message,checks);std::exit(1);}++checks;}
static std::uint64_t clock_ns(clockid_t id) {timespec t{};check(clock_gettime(id,&t)==0,"clock");return std::uint64_t(t.tv_sec)*1000000000ull+t.tv_nsec;}
static void verify(const void *a,const void *b,std::size_t n,bool equal) {
    check(libc_equal(a,b,n)==equal,"independent libc oracle");
    for(unsigned i=1;i<5;i++)check(algorithms[i](a,b,n)==equal,"exact candidate bytes");
}
static void contracts() {
    std::vector<std::uint8_t> a(1048576+128),b(a.size());
    for(std::size_t i=0;i<a.size();i++)a[i]=std::uint8_t((i*131)^(i>>7));
    for(unsigned x=0;x<64;x++)for(unsigned y=0;y<64;y++){
        for(std::size_t n:{0u,1u,7u,15u,16u,17u,63u,64u,65u,127u,128u,129u,255u,256u,257u,511u,512u,513u,1023u,1024u,1025u,2047u,2048u,2049u,4095u}){
            std::memcpy(b.data()+y,a.data()+x,n);verify(a.data()+x,b.data()+y,n,true);
            if(n){b[y+n-1]^=0x80;verify(a.data()+x,b.data()+y,n,false);}
        }
    }
    for(std::size_t n:{129u,1025u,2049u,4097u,16385u}){
        std::memcpy(b.data()+11,a.data()+3,n);
        for(std::size_t position=0;position<n;position++){
            b[11+position]^=1;verify(a.data()+3,b.data()+11,n,false);b[11+position]^=1;
        }
        verify(a.data()+3,b.data()+11,n,true);
    }
    // Large mip chains: mutations in every SIMD lane, block/tail boundaries
    // and deterministic random positions. Avoid a quadratic 1-TiB test.
    std::uint32_t seed=0x9e3779b9u;
    for(std::size_t n:{65537u,262147u,1048576u}){
        std::memcpy(b.data()+7,a.data()+31,n);
        for(unsigned sample=0;sample<1024;sample++){
            seed=seed*1664525u+1013904223u;
            std::size_t position=sample<128?sample:sample<256?n-1-(sample-128):seed%n;
            b[7+position]^=std::uint8_t(1u<<(sample%8));verify(a.data()+31,b.data()+7,n,false);b[7+position]^=std::uint8_t(1u<<(sample%8));
        }
        verify(a.data()+31,b.data()+7,n,true);
    }
    // Separate palette mutations must be visible even when texture pixels
    // are identical. This is the conjunction used by the actual cache.
    std::array<std::uint8_t,1024> palette_a{},palette_b{};
    for(unsigned position=0;position<palette_a.size();position++){
        palette_b[position]=1;
        for(unsigned i=1;i<5;i++)check(algorithms[i](a.data(),a.data(),a.size())&&!algorithms[i](palette_a.data(),palette_b.data(),palette_a.size()),"palette-only mutation");
        palette_b[position]=0;
    }
    const std::size_t page=std::size_t(sysconf(_SC_PAGESIZE));
    const std::size_t readable=((8193+page-1)/page)*page;
    auto guarded=[&](){auto *p=static_cast<std::uint8_t *>(mmap(nullptr,readable+2*page,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));check(p!=MAP_FAILED,"guard mapping");check(mprotect(p+page,readable,PROT_READ|PROT_WRITE)==0,"guard readable");return p;};
    auto *ga=guarded(),*gb=guarded();
    for(std::size_t n=0;n<=8193;n++){
        auto *pa=ga+page+readable-n,*pb=gb+page+readable-n;
        std::memset(pa,0xa5,n);std::memset(pb,0xa5,n);verify(pa,pb,n,true);
        if(n){pb[n-1]^=1;verify(pa,pb,n,false);}
        // The first byte also borders an inaccessible page in this case.
        if(n){std::memset(ga+page,0xa5,n);std::memset(gb+page,0xa5,n);verify(ga+page,gb+page,n,true);}
    }
    check(munmap(ga,readable+2*page)==0&&munmap(gb,readable+2*page)==0,"guard unmap");
    std::printf("EQUALITY_PREFETCH passed=%llu failed=0 page_bytes=%zu\n",checks,page);std::fflush(stdout);
}
struct Span {std::size_t offset,size;bool equal;};
static void benchmark(bool quick) {
    const std::size_t payload=quick?64ull*1024*1024:256ull*1024*1024;
    const unsigned repeats=quick?3:7;
    for(std::size_t pool:{2ull*1024*1024,64ull*1024*1024}){
        std::vector<std::uint8_t> a(pool+128),b(pool+128);
        for(std::size_t i=0;i<a.size();i++)a[i]=std::uint8_t((i*131)^(i>>7));
        for(auto align:std::array<std::array<unsigned,2>,3>{{{{0,0}},{{3,17}},{{31,1}}}}){
            for(unsigned mixed=0;mixed<2;mixed++){
                // Deliberately synthetic distribution of observed-compatible
                // texture/mip-chain byte sizes, plus independent 1-KiB palettes.
                constexpr std::size_t sizes[]={1024,16384,65536,131072,262144,524288,1048576,65536,131072,262144};
                std::vector<Span> spans;std::size_t at=0;unsigned index=0;
                while(at+1024+128<pool){
                    std::size_t n=sizes[index%10];if(at+n+128>pool)n=1024;
                    bool equal=!mixed||index%97!=0;spans.push_back({at,n,equal});
                    std::memcpy(b.data()+at+align[1],a.data()+at+align[0],n);
                    if(!equal)b[at+align[1]+(index%2?n-1:0)]^=1;
                    at+=n+128;++index;
                }
                for(unsigned repeat=0;repeat<repeats;repeat++)for(unsigned order=0;order<5;order++){
                    unsigned algorithm=(repeat+order)%5;auto compare=algorithms[algorithm];
                    std::uint64_t expected=0,result=0,logical=0,calls=0;
                    // Each candidate sees identical byte ranges and call order;
                    // warm up once outside timing and rotate candidate order.
                    for(const auto &s:spans)sink+=compare(a.data()+s.offset+align[0],b.data()+s.offset+align[1],s.size);
                    auto cpu_start=clock_ns(CLOCK_THREAD_CPUTIME_ID),wall_start=clock_ns(CLOCK_MONOTONIC);
                    while(logical<payload)for(const auto &s:spans){
                        result+=compare(a.data()+s.offset+align[0],b.data()+s.offset+align[1],s.size);expected+=s.equal;logical+=s.size;++calls;
                    }
                    auto wall_ns=clock_ns(CLOCK_MONOTONIC)-wall_start,cpu_ns=clock_ns(CLOCK_THREAD_CPUTIME_ID)-cpu_start;sink=result;
                    check(result==expected,"benchmark result matches exact fixture oracle");
                    std::printf("EQUALITY_BENCH {\"pool_bytes\":%zu,\"alignment_a\":%u,\"alignment_b\":%u,\"mixed_mutations\":%u,\"algorithm\":\"%s\",\"repeat\":%u,\"calls\":%llu,\"logical_bytes\":%llu,\"wall_ns\":%llu,\"cpu_ns\":%llu}\n",pool,align[0],align[1],mixed,names[algorithm],repeat,(unsigned long long)calls,(unsigned long long)logical,(unsigned long long)wall_ns,(unsigned long long)cpu_ns);std::fflush(stdout);
                }
            }
        }
    }
}
int main(int argc,char **argv) {
    bool only_contract=argc>1&&!std::strcmp(argv[1],"--contracts-only"),only_bench=argc>1&&!std::strcmp(argv[1],"--bench-only");
    bool quick=false;for(int i=1;i<argc;i++)if(!std::strcmp(argv[i],"--quick"))quick=true;
    if(!only_bench)contracts();if(!only_contract)benchmark(quick);
    return sink==~std::uint64_t(0)?1:0;
}
