#include "draw_upload_plan.h"
#include <cstdio>
#include <cstring>
#include <vector>
#include <random>
#include <climits>
static unsigned passed,failed;
#define CHECK(test) do{if(test)++passed;else{++failed;std::fprintf(stderr,"FAIL line=%d %s\n",__LINE__,#test);}}while(0)

static void compare_fetch(const std::vector<Nhl07DrawUploadInput> &inputs,uint32_t maximum,
        std::vector<uint8_t> &guest,bool require_reduction=false){
    Nhl07DrawUploadPlan plan{};CHECK(nhl07_draw_upload_plan(inputs.data(),inputs.size(),maximum,plan,uint32_t(guest.size())));
    CHECK(plan.input_count==inputs.size()&&plan.group_count<=inputs.size());
    std::array<std::vector<uint8_t>,16> copied;
    uint64_t total=0,original=0;
    for(unsigned g=0;g<plan.group_count;g++){
        auto range=plan.groups[g];CHECK(uint64_t(range.address)+range.bytes<=guest.size());
        copied[g].assign(guest.begin()+range.address,guest.begin()+range.address+range.bytes);total+=range.bytes;
    }
    for(size_t i=0;i<inputs.size();i++){
        const auto &input=inputs[i];const auto binding=plan.bindings[i];CHECK(binding.group<plan.group_count);
        const auto range=plan.groups[binding.group];
        CHECK(range.address+binding.offset==input.address&&binding.offset%input.alignment==0);
        CHECK((16+binding.offset)%input.alignment==0); // Stream arena base aligned to 16.
        CHECK(uint64_t(binding.offset)+uint64_t(maximum)*input.stride+input.element_bytes<=range.bytes);
        for(uint32_t vertex=0;vertex<=maximum;vertex++){
            const auto *expected=guest.data()+input.address+vertex*input.stride;
            const auto *actual=copied[binding.group].data()+binding.offset+vertex*input.stride;
            CHECK(std::memcmp(actual,expected,input.element_bytes)==0);
        }
        original+=uint64_t(maximum)*input.stride+input.element_bytes;
    }
    CHECK(plan.original_bytes==original&&plan.upload_bytes==total);
    if(require_reduction)CHECK(total<original);
}
int main(){
    std::vector<uint8_t> guest(65536);for(size_t i=0;i<guest.size();i++)guest[i]=uint8_t((i*73+i/17)&255);
    std::vector<Nhl07DrawUploadInput> interleaved{{128,32,12,4},{140,32,8,4},{148,32,4,1}};
    Nhl07DrawUploadPlan plan{};CHECK(nhl07_draw_upload_plan(interleaved.data(),interleaved.size(),7,plan));
    CHECK(plan.group_count==1&&plan.groups[0].address==128&&plan.groups[0].bytes==248);
    CHECK(plan.bindings[1].offset==12&&plan.bindings[2].offset==20);
    compare_fetch(interleaved,7,guest,true);
    // Replanning/copying after a guest change must expose that exact new byte.
    guest[140+5*32]^=255;compare_fetch(interleaved,7,guest,true);
    compare_fetch({{100,4,4,4},{104,4,4,4}},0,guest); // Adjacent ranges.
    CHECK(nhl07_draw_upload_plan(std::array<Nhl07DrawUploadInput,2>{{{100,4,4,4},{104,4,4,4}}}.data(),2,0,plan)&&plan.group_count==1&&plan.groups[0].bytes==8);
    compare_fetch({{103,16,4,1},{104,16,4,4}},3,guest,true); // Prefix padding to 100.
    CHECK(nhl07_draw_upload_plan(std::array<Nhl07DrawUploadInput,2>{{{103,16,4,1},{104,16,4,4}}}.data(),2,3,plan)&&plan.groups[0].address==100);
    compare_fetch({{101,16,2,2},{104,16,4,4}},3,guest); // Incompatible residues: separate overlapping groups.
    CHECK(nhl07_draw_upload_plan(std::array<Nhl07DrawUploadInput,2>{{{101,16,2,2},{104,16,4,4}}}.data(),2,3,plan)&&plan.group_count==2);
    compare_fetch({{1,16,4,4},{17,16,4,4}},1,guest); // Odd physical source, valid relative offsets.
    compare_fetch({{0,1,1,1},{2,4,4,4}},0,guest); // Cannot pad below guest zero.
    compare_fetch({{40,4,16,4},{44,4,4,4}},4,guest,true); // Element wider than stride remains valid.
    compare_fetch({{200,16,4,4},{100,16,4,4},{150,16,4,4}},0,guest); // Unsorted, disjoint.
    compare_fetch({},0,guest);
    CHECK(nhl07_draw_upload_plan(nullptr,0,0,plan)&&plan.group_count==0);
    std::array<Nhl07DrawUploadInput,17> too_many{};CHECK(!nhl07_draw_upload_plan(too_many.data(),17,0,plan));
    CHECK(!nhl07_draw_upload_plan(nullptr,1,0,plan));
    auto invalid=[&](Nhl07DrawUploadInput a,uint32_t maximum=0,uint32_t memory=0x4000000u){
        plan.group_count=15;CHECK(!nhl07_draw_upload_plan(&a,1,maximum,plan,memory));CHECK(plan.group_count==0&&plan.input_count==0);
    };
    invalid({0x4000000u,4,4,4});invalid({0x3ffffffu,4,4,4});invalid({UINT_MAX,UINT_MAX,UINT_MAX,4},UINT_MAX);
    invalid({10,0,4,4});invalid({10,4097,4,4});invalid({10,4,0,4});invalid({10,4,17,4});
    invalid({10,4,4,0});invalid({10,4,4,3});invalid({10,4,4,32});invalid({10,4,3,2});
    invalid({0,4,4,4},0,0);invalid({0,4,4,4},0,0x4000001u);invalid({0,4096,16,4},UINT_MAX);
    Nhl07DrawUploadInput edge{0x3fffffcu,4,4,4};CHECK(nhl07_draw_upload_plan(&edge,1,0,plan)&&plan.groups[0].bytes==4);
    // Deterministic varied layouts compare actual uploaded byte arrays with an
    // independent per-input fetch oracle, including shared/unaligned spans.
    std::mt19937 random(0x4e484c07);
    for(unsigned test=0;test<5000;test++){
        unsigned count=1+random()%16,maximum=random()%65;std::vector<Nhl07DrawUploadInput> inputs;
        for(unsigned i=0;i<count;i++){
            uint32_t alignment=1u<<(random()%3),element=(1+random()%4)*alignment,stride=1+random()%256;
            uint32_t base=(test%2?random()%8192:4096+(random()%64));inputs.push_back({base,stride,element,alignment});
        }
        compare_fetch(inputs,maximum,guest);
    }
    std::printf("DRAW_UPLOAD_PLAN passed=%u failed=%u randomized_layouts=5000\n",passed,failed);return failed?1:0;
}
