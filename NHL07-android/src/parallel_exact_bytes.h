#pragma once
#include <algorithm>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <thread>
#if defined(__linux__)
#include <pthread.h>
#include <sched.h>
#include <time.h>
#include <unistd.h>
#endif

// Isolated experiment, not part of the production texture cache. One owning
// caller and one persistent worker compare disjoint current byte ranges. equal()
// always waits for the worker, including after a caller-side mismatch, so no
// input pointer outlives the call. No hash, dirty tracking, GPU or guest state.
class Nhl07ParallelExactBytes {
public:
    struct Stats {uint64_t calls=0,jobs=0,worker_requested_bytes=0,worker_cpu_ns=0;bool worker_cpu_clock_valid=false;};
    struct Affinity {bool requested=false,applied=false;int error=0;uint64_t mask=0;};
private:
    const size_t threshold_;
    const bool measure_cpu_;
    std::mutex mutex_;
    std::condition_variable work_,done_;
    std::thread worker_;
    const void *a_=nullptr,*b_=nullptr;
    size_t size_=0;
    bool ready_=false,finished_=true,stop_=false,initialized_=false,result_=false;
    Stats stats_;
    Affinity affinity_;
    void apply_worker_affinity(){
#if defined(__linux__)
        if(!affinity_.requested)return;
        const long processors=sysconf(_SC_NPROCESSORS_CONF);
        if(processors<=0||processors>64){affinity_.error=-1;return;}
        long capacities[64]{},maximum=0;
        for(long cpu=0;cpu<processors;cpu++){
            char path[128];std::snprintf(path,sizeof(path),"/sys/devices/system/cpu/cpu%ld/cpu_capacity",cpu);
            FILE *file=std::fopen(path,"r");if(!file){affinity_.error=-2;return;}
            const bool okay=std::fscanf(file,"%ld",&capacities[cpu])==1;std::fclose(file);
            if(!okay||capacities[cpu]<=0){affinity_.error=-3;return;}
            maximum=std::max(maximum,capacities[cpu]);
        }
        cpu_set_t allowed,selected;CPU_ZERO(&allowed);CPU_ZERO(&selected);
        if(sched_getaffinity(0,sizeof(allowed),&allowed)!=0){affinity_.error=-4;return;}
        for(long cpu=0;cpu<processors;cpu++)if(CPU_ISSET(cpu,&allowed)&&capacities[cpu]*10>=maximum*9){CPU_SET(cpu,&selected);affinity_.mask|=uint64_t(1)<<cpu;}
        if(!affinity_.mask){affinity_.error=-5;return;}
        if(sched_setaffinity(0,sizeof(selected),&selected)!=0){affinity_.error=-6;affinity_.mask=0;return;}
        affinity_.applied=true;
#endif
    }
    void worker_main(){
        apply_worker_affinity();
        std::unique_lock<std::mutex> lock(mutex_);initialized_=true;done_.notify_one();
        for(;;){
            work_.wait(lock,[this]{return ready_||stop_;});
            if(stop_)return;
            const void *a=a_,*b=b_;const size_t bytes=size_;ready_=false;
            lock.unlock();
            const bool equal=std::memcmp(a,b,bytes)==0;
            lock.lock();result_=equal;finished_=true;done_.notify_one();
        }
    }
public:
    explicit Nhl07ParallelExactBytes(size_t threshold=256u*1024u,bool fast_worker_cores=false,bool measure_worker_cpu=false):
        threshold_(std::max(size_t(128),threshold)),measure_cpu_(measure_worker_cpu){
        affinity_.requested=fast_worker_cores;worker_=std::thread([this]{worker_main();});
        std::unique_lock<std::mutex> lock(mutex_);done_.wait(lock,[this]{return initialized_;});
    }
    ~Nhl07ParallelExactBytes(){
        {std::lock_guard<std::mutex> lock(mutex_);stop_=true;}work_.notify_one();worker_.join();
    }
    Nhl07ParallelExactBytes(const Nhl07ParallelExactBytes &)=delete;
    Nhl07ParallelExactBytes &operator=(const Nhl07ParallelExactBytes &)=delete;
    bool equal(const void *a,const void *b,size_t bytes){
        ++stats_.calls;
        if(!bytes)return true;
        if(bytes<threshold_)return std::memcmp(a,b,bytes)==0;
        // Both halves are nonempty and cover the requested range exactly.
        const size_t split=(bytes/2)&~size_t(63);
        {
            std::lock_guard<std::mutex> lock(mutex_);a_=static_cast<const uint8_t *>(a)+split;b_=static_cast<const uint8_t *>(b)+split;
            size_=bytes-split;finished_=false;ready_=true;++stats_.jobs;stats_.worker_requested_bytes+=size_;
        }
        work_.notify_one();
        const bool caller_equal=std::memcmp(a,b,split)==0;
        std::unique_lock<std::mutex> lock(mutex_);done_.wait(lock,[this]{return finished_;});
        return caller_equal&&result_;
    }
    Stats stats(){
        std::lock_guard<std::mutex> lock(mutex_);Stats result=stats_;
#if defined(__linux__)
        // Measure the complete worker thread's CPU clock from the caller.
        // Differences include wake/lock/result/notification overhead, unlike
        // a timer placed only around the worker's memcmp instructions.
        clockid_t id;struct timespec t{};
        if(measure_cpu_&&pthread_getcpuclockid(worker_.native_handle(),&id)==0&&clock_gettime(id,&t)==0){
            result.worker_cpu_ns=uint64_t(t.tv_sec)*1000000000ull+t.tv_nsec;result.worker_cpu_clock_valid=true;
        }
#endif
        return result;
    }
    Affinity affinity()const{return affinity_;}
    size_t threshold()const{return threshold_;}
};
