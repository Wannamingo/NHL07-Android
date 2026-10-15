/* Read-only standalone observation. Never creates a performance-hint session
   and never changes affinity, priorities, governors or device settings. */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <sched.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

static uint64_t monotonic_ns(void){struct timespec t;clock_gettime(CLOCK_MONOTONIC,&t);return (uint64_t)t.tv_sec*1000000000ull+t.tv_nsec;}
static long read_number(const char *path){FILE *f=fopen(path,"r");long result=-1;if(f){if(fscanf(f,"%ld",&result)!=1)result=-1;fclose(f);}return result;}
static long cpu_value(unsigned cpu,const char *node){char path[256];snprintf(path,sizeof(path),"/sys/devices/system/cpu/cpu%u/%s",cpu,node);return read_number(path);}
static int thread_stat(int pid,int tid,long *processor,long *nice,uint64_t *utime,uint64_t *stime){
    char path[128],buffer[8192];snprintf(path,sizeof(path),"/proc/%d/task/%d/stat",pid,tid);FILE *f=fopen(path,"r");if(!f)return 0;
    size_t length=fread(buffer,1,sizeof(buffer)-1,f);fclose(f);buffer[length]=0;
    char *at=strrchr(buffer,')');if(!at)return 0;at+=1;
    // The token following ')' is stat field 3 (state). Field numbers below
    // are the Linux /proc stat ABI, unaffected by spaces in comm names.
    unsigned field=3;char *save=NULL;char *token=strtok_r(at," \n",&save);int got=0;
    while(token){
        if(field==14){*utime=strtoull(token,NULL,10);got|=1;}
        if(field==15){*stime=strtoull(token,NULL,10);got|=2;}
        if(field==19){*nice=strtol(token,NULL,10);got|=4;}
        if(field==39){*processor=strtol(token,NULL,10);got|=8;}
        token=strtok_r(NULL," \n",&save);++field;
    }
    return got==15;
}
int main(int argc,char **argv){
    if(argc!=4)return 2;
    int pid=atoi(argv[1]),tid=atoi(argv[2]),seconds=atoi(argv[3]);if(pid<=0||tid<=0||seconds<1||seconds>30)return 2;
    cpu_set_t mask;CPU_ZERO(&mask);int affinity_ok=sched_getaffinity(tid,sizeof(mask),&mask)==0;uint64_t bits=0;
    if(affinity_ok)for(unsigned i=0;i<64;i++)if(CPU_ISSET(i,&mask))bits|=1ull<<i;
    void *library=dlopen("libandroid.so",RTLD_NOW|RTLD_LOCAL);
    void *(*get_manager)(void)=library?(void *(*)(void))dlsym(library,"APerformanceHint_getManager"):NULL;
    int64_t (*get_rate)(void *)=library?(int64_t (*)(void *))dlsym(library,"APerformanceHint_getPreferredUpdateRateNanos"):NULL;
    void *manager=get_manager?get_manager():NULL;int64_t rate=manager&&get_rate?get_rate(manager):-1;
    printf("CPU_ENVIRONMENT {\"pid\":%d,\"tid\":%d,\"monotonic_ns\":%llu,\"affinity_readable\":%s,\"affinity_hex\":\"%llx\",\"sched_policy\":%d,\"clock_ticks_per_second\":%ld,\"hint_get_manager_symbol\":%s,\"hint_create_session_symbol\":%s,\"hint_report_duration_symbol\":%s,\"hint_manager_present\":%s,\"hint_preferred_rate_ns\":%lld,\"hint_session_created\":false,\"cpus\":[",pid,tid,(unsigned long long)monotonic_ns(),affinity_ok?"true":"false",(unsigned long long)bits,sched_getscheduler(tid),sysconf(_SC_CLK_TCK),get_manager?"true":"false",library&&dlsym(library,"APerformanceHint_createSession")?"true":"false",library&&dlsym(library,"APerformanceHint_reportActualWorkDuration")?"true":"false",manager?"true":"false",(long long)rate);
    for(unsigned cpu=0;cpu<8;cpu++){
        if(cpu)putchar(',');
        printf("{\"cpu\":%u,\"capacity\":%ld,\"hardware_max_khz\":%ld,\"scaling_max_khz\":%ld,\"scaling_min_khz\":%ld}",cpu,cpu_value(cpu,"cpu_capacity"),cpu_value(cpu,"cpufreq/cpuinfo_max_freq"),cpu_value(cpu,"cpufreq/scaling_max_freq"),cpu_value(cpu,"cpufreq/scaling_min_freq"));
    }
    printf("]}\n");fflush(stdout);
    const struct timespec interval={0,500000000};
    for(unsigned sample=0;sample<(unsigned)seconds*2;sample++){
        long cpu=-1,nice=0;uint64_t utime=0,stime=0;int okay=thread_stat(pid,tid,&cpu,&nice,&utime,&stime);
        printf("CPU_ENV_SAMPLE {\"sample\":%u,\"monotonic_ns\":%llu,\"thread_stat_readable\":%s,\"processor\":%ld,\"nice\":%ld,\"utime_ticks\":%llu,\"stime_ticks\":%llu,\"current_khz\":[",sample,(unsigned long long)monotonic_ns(),okay?"true":"false",cpu,nice,(unsigned long long)utime,(unsigned long long)stime);
        for(unsigned i=0;i<8;i++){if(i)putchar(',');printf("%ld",cpu_value(i,"cpufreq/scaling_cur_freq"));}
        printf("]}\n");fflush(stdout);nanosleep(&interval,NULL);
    }
    if(library)dlclose(library);
    return 0;
}
