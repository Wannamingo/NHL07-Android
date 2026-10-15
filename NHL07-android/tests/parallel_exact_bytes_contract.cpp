#include "parallel_exact_bytes.h"
#include <array>
#include <chrono>
#include <cstdlib>
#include <memory>
#include <vector>
#if defined(_WIN32)
#define NOMINMAX
#include <windows.h>
#else
#include <sys/mman.h>
#endif
static uint64_t checks;
static volatile uint64_t sink;
static void check(bool okay,const char *reason){if(!okay){std::fprintf(stderr,"PARALLEL_EXACT FAIL %s check=%llu\n",reason,(unsigned long long)checks);std::exit(1);}++checks;}
static size_t page_size(){
#if defined(_WIN32)
    SYSTEM_INFO info;GetSystemInfo(&info);return info.dwPageSize;
#else
    return size_t(sysconf(_SC_PAGESIZE));
#endif
}
struct Guarded {
    uint8_t *mapping;size_t page,readable;
    explicit Guarded(size_t requested):page(page_size()),readable((requested+page-1)/page*page){
#if defined(_WIN32)
        mapping=static_cast<uint8_t *>(VirtualAlloc(nullptr,readable+page*2,MEM_RESERVE|MEM_COMMIT,PAGE_NOACCESS));check(mapping!=nullptr,"guard allocation");
        DWORD old=0;check(VirtualProtect(mapping+page,readable,PAGE_READWRITE,&old)!=0,"guard readable area");
#else
        mapping=static_cast<uint8_t *>(mmap(nullptr,readable+page*2,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));check(mapping!=MAP_FAILED,"guard allocation");
        check(mprotect(mapping+page,readable,PROT_READ|PROT_WRITE)==0,"guard readable area");
#endif
    }
    uint8_t *start(){return mapping+page;}
    uint8_t *end(){return mapping+page+readable;}
    ~Guarded(){
#if defined(_WIN32)
        check(VirtualFree(mapping,0,MEM_RELEASE)!=0,"guard release");
#else
        check(munmap(mapping,readable+page*2)==0,"guard release");
#endif
    }
};
static void contracts(){
    Nhl07ParallelExactBytes parallel(1024,false),fast(1024,true);
    std::vector<uint8_t> a(2097152+128),b(a.size());for(size_t i=0;i<a.size();i++)a[i]=uint8_t((i*131)^(i>>7));
    for(unsigned x=0;x<32;x++)for(unsigned y=0;y<32;y++)for(size_t n:{0u,1u,7u,15u,16u,17u,63u,64u,65u,127u,128u,129u,511u,512u,513u,1023u,1024u,1025u,2047u,2048u,2049u,4095u}){
        std::memcpy(b.data()+y,a.data()+x,n);
        check(parallel.equal(a.data()+x,b.data()+y,n),"equal all alignments and dispatch boundaries");
        check(fast.equal(a.data()+x,b.data()+y,n),"affinity equal all alignments");
        if(n){b[y+n-1]^=0x80;check(!parallel.equal(a.data()+x,b.data()+y,n),"last byte mismatch");check(!fast.equal(a.data()+x,b.data()+y,n),"affinity last byte mismatch");}
    }
    for(size_t n:{1025u,4097u,131073u,262145u,524289u,1048576u}){
        std::memcpy(b.data()+17,a.data()+3,n);
        const size_t split=(n/2)&~size_t(63);
        std::vector<size_t> positions{0,1,15,16,63,64,split-1,split,split+1,n/2,n-2,n-1};
        uint32_t seed=0x9e3779b9;for(unsigned j=0;j<128;j++){seed=seed*1664525u+1013904223u;positions.push_back(seed%n);}
        for(size_t position:positions){
            b[17+position]^=1;
            check(std::memcmp(a.data()+3,b.data()+17,n)!=0,"libc mutation oracle");
            check(!parallel.equal(a.data()+3,b.data()+17,n),"caller/worker/boundary mutation detected");
            check(!fast.equal(a.data()+3,b.data()+17,n),"affinity caller/worker mutation detected");
            b[17+position]^=1;check(parallel.equal(a.data()+3,b.data()+17,n),"mutation restoration checked immediately");
        }
    }
    for(size_t threshold:{128u*1024u,256u*1024u,512u*1024u,1024u*1024u}){
        Nhl07ParallelExactBytes candidate(threshold,false);
        for(size_t n:{threshold-1,threshold,threshold+1,threshold*2+1}){
            std::memcpy(b.data()+1,a.data()+7,n);check(candidate.equal(a.data()+7,b.data()+1,n),"production threshold equal");
            for(size_t at:{size_t(0),n/2,n-1}){b[1+at]^=0x42;check(!candidate.equal(a.data()+7,b.data()+1,n),"production threshold half mutation");b[1+at]^=0x42;}
        }
    }
    for(size_t n:{0u,1u,127u,128u,1023u,1024u,1025u,4095u,4096u,4097u,131071u,131072u,131073u,262143u,262144u,262145u,524287u,524288u,524289u}){
        Guarded ga(n+64),gb(n+64);
        auto *pa=ga.end()-n,*pb=gb.end()-n;std::memset(pa,0xa5,n);std::memset(pb,0xa5,n);
        check(parallel.equal(pa,pb,n),"end guard exact equal");check(fast.equal(pa,pb,n),"affinity end guard exact equal");
        if(n){pb[n-1]^=1;check(!parallel.equal(pa,pb,n),"worker half reaches final byte without overread");check(!fast.equal(pa,pb,n),"affinity worker end guard");}
        pa=ga.start();pb=gb.start();std::memset(pa,0x5a,n);std::memset(pb,0x5a,n);
        check(parallel.equal(pa,pb,n),"start guard exact equal");
        if(n){pb[0]^=1;check(!parallel.equal(pa,pb,n),"caller early mismatch still waits worker before unmapping");}
        // Destruction immediately unmaps input after equal() returns. A worker
        // that returns asynchronously would fault here or in a following job.
    }
    check(parallel.stats().jobs>0&&fast.stats().jobs>0,"persistent worker was exercised");
    std::printf("PARALLEL_EXACT passed=%llu failed=0 affinity_requested=1 affinity_applied=%d affinity_mask=%llx page_bytes=%zu\n",
        (unsigned long long)checks,fast.affinity().applied,(unsigned long long)fast.affinity().mask,page_size());std::fflush(stdout);
}
#if defined(__linux__)
static uint64_t clock_ns(clockid_t id){timespec t{};check(clock_gettime(id,&t)==0,"benchmark clock");return uint64_t(t.tv_sec)*1000000000ull+t.tv_nsec;}
struct Span {size_t offset,size;bool equal;};
struct Algorithm {const char *name;std::unique_ptr<Nhl07ParallelExactBytes> comparer;bool equal(const void *a,const void *b,size_t n){return comparer?comparer->equal(a,b,n):std::memcmp(a,b,n)==0;}};
static void benchmark(){
    std::array<Algorithm,9> algorithms{{{"libc_memcmp",nullptr},
        {"parallel128_noaff",std::make_unique<Nhl07ParallelExactBytes>(128u*1024u,false,true)},
        {"parallel256_noaff",std::make_unique<Nhl07ParallelExactBytes>(256u*1024u,false,true)},
        {"parallel512_noaff",std::make_unique<Nhl07ParallelExactBytes>(512u*1024u,false,true)},
        {"parallel1024_noaff",std::make_unique<Nhl07ParallelExactBytes>(1024u*1024u,false,true)},
        {"parallel128_fastaff",std::make_unique<Nhl07ParallelExactBytes>(128u*1024u,true,true)},
        {"parallel256_fastaff",std::make_unique<Nhl07ParallelExactBytes>(256u*1024u,true,true)},
        {"parallel512_fastaff",std::make_unique<Nhl07ParallelExactBytes>(512u*1024u,true,true)},
        {"parallel1024_fastaff",std::make_unique<Nhl07ParallelExactBytes>(1024u*1024u,true,true)}}};
    for(auto &algorithm:algorithms)if(algorithm.comparer){auto af=algorithm.comparer->affinity();std::printf("PARALLEL_CONFIG {\"algorithm\":\"%s\",\"threshold\":%zu,\"worker_affinity_requested\":%s,\"worker_affinity_applied\":%s,\"worker_affinity_mask\":%llu,\"worker_affinity_error\":%d}\n",algorithm.name,algorithm.comparer->threshold(),af.requested?"true":"false",af.applied?"true":"false",(unsigned long long)af.mask,af.error);}
    const size_t payload=64ull*1024*1024;
    for(size_t pool:{2ull*1024*1024,64ull*1024*1024}){
        std::vector<uint8_t> a(pool+128),b(pool+128);for(size_t i=0;i<a.size();i++)a[i]=uint8_t((i*131)^(i>>7));
        for(auto align:std::array<std::array<unsigned,2>,3>{{{{0,0}},{{3,17}},{{31,1}}}})for(unsigned mixed=0;mixed<2;mixed++){
            constexpr size_t sizes[]={1024,16384,65536,131072,262144,524288,1048576,65536,131072,262144};
            std::vector<Span> spans;size_t at=0;unsigned index=0;
            while(at+1024+128<pool){size_t n=sizes[index%10];if(at+n+128>pool)n=1024;bool equal=!mixed||index%97!=0;spans.push_back({at,n,equal});
                std::memcpy(b.data()+at+align[1],a.data()+at+align[0],n);if(!equal)b[at+align[1]+(index%2?n-1:0)]^=1;at+=n+128;++index;}
            for(unsigned repeat=0;repeat<3;repeat++)for(unsigned order=0;order<algorithms.size();order++){
                auto &algorithm=algorithms[(repeat+order)%algorithms.size()];
                for(const auto &span:spans)sink+=algorithm.equal(a.data()+span.offset+align[0],b.data()+span.offset+align[1],span.size);
                auto before=algorithm.comparer?algorithm.comparer->stats():Nhl07ParallelExactBytes::Stats{};
                if(algorithm.comparer)check(before.worker_cpu_clock_valid,"full worker CPU clock available");
                uint64_t logical=0,calls=0,result=0,expected=0;const uint64_t process_cpu_start=clock_ns(CLOCK_PROCESS_CPUTIME_ID),cpu_start=clock_ns(CLOCK_THREAD_CPUTIME_ID),wall_start=clock_ns(CLOCK_MONOTONIC);
                while(logical<payload)for(const auto &span:spans){result+=algorithm.equal(a.data()+span.offset+align[0],b.data()+span.offset+align[1],span.size);expected+=span.equal;logical+=span.size;++calls;}
                const uint64_t wall=clock_ns(CLOCK_MONOTONIC)-wall_start,caller_cpu=clock_ns(CLOCK_THREAD_CPUTIME_ID)-cpu_start,process_cpu=clock_ns(CLOCK_PROCESS_CPUTIME_ID)-process_cpu_start;
                auto after=algorithm.comparer?algorithm.comparer->stats():Nhl07ParallelExactBytes::Stats{};sink=result;
                check(result==expected,"benchmark exact fixture oracle");
                std::printf("PARALLEL_BENCH {\"pool_bytes\":%zu,\"alignment_a\":%u,\"alignment_b\":%u,\"mixed_mutations\":%u,\"algorithm\":\"%s\",\"repeat\":%u,\"calls\":%llu,\"logical_bytes\":%llu,\"wall_ns\":%llu,\"caller_cpu_ns\":%llu,\"worker_cpu_ns\":%llu,\"process_cpu_ns\":%llu,\"worker_jobs\":%llu,\"worker_requested_bytes\":%llu}\n",pool,align[0],align[1],mixed,algorithm.name,repeat,(unsigned long long)calls,(unsigned long long)logical,(unsigned long long)wall,(unsigned long long)caller_cpu,(unsigned long long)(after.worker_cpu_ns-before.worker_cpu_ns),(unsigned long long)process_cpu,(unsigned long long)(after.jobs-before.jobs),(unsigned long long)(after.worker_requested_bytes-before.worker_requested_bytes));std::fflush(stdout);
            }
        }
    }
}
#endif
int main(int argc,char **argv){
    if(argc>1&&!std::strcmp(argv[1],"--bench-only")){
#if defined(__linux__)
        benchmark();
#else
        return 2;
#endif
    }else contracts();
    return sink==~uint64_t(0)?1:0;
}
