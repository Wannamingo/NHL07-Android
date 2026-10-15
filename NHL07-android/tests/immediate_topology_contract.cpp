#include "immediate_topology_contract.h"
#include <cstdio>
#include <cstdlib>
static unsigned checks;
static void verify(bool okay,const char *name){if(!okay){std::fprintf(stderr,"IMMEDIATE_TOPOLOGY FAIL %s\n",name);std::exit(1);}++checks;}
int main(){
    const auto result=nhl07_immediate_topology_contract(verify);
    std::printf("IMMEDIATE_TOPOLOGY passed=%u failed=0 calls=%zu max_indices=%zu observed_capacity=%zu\n",checks,result.calls,result.max_indices,result.max_capacity);
}
