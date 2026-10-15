#pragma once
#include <array>
#include <algorithm>
#include <cstddef>
#include <cstdint>

// A plan covers only this draw. The caller must copy every group's current
// guest bytes, then configure the original stride/type at binding.offset.
// It retains no guest contents and makes no assumptions about later writes.
struct Nhl07DrawUploadInput {
    uint32_t address=0,stride=0,element_bytes=0,alignment=1;
};
struct Nhl07DrawUploadGroup {
    uint32_t address=0,bytes=0,alignment=1;
};
struct Nhl07DrawUploadBinding {uint32_t group=0,offset=0;};
struct Nhl07DrawUploadPlan {
    std::array<Nhl07DrawUploadGroup,16> groups{};
    std::array<Nhl07DrawUploadBinding,16> bindings{};
    uint32_t input_count=0,group_count=0;
    uint64_t original_bytes=0,upload_bytes=0;
};

inline bool nhl07_draw_upload_plan(const Nhl07DrawUploadInput *inputs,size_t count,
        uint32_t maximum,Nhl07DrawUploadPlan &out,uint32_t memory_bytes=0x4000000u){
    out={};
    if(count>16||(count&&!inputs)||!memory_bytes||memory_bytes>0x4000000u)return false;
    struct Working {uint32_t address,bytes,alignment,members;};
    std::array<Working,16> groups{};size_t n=count;uint64_t original=0;
    for(size_t i=0;i<count;i++){
        const auto &a=inputs[i];
        if(!a.stride||a.stride>4096||!a.element_bytes||a.element_bytes>16||
                !a.alignment||a.alignment>16||(a.alignment&(a.alignment-1))||a.element_bytes%a.alignment)return false;
        const uint64_t bytes=uint64_t(maximum)*a.stride+a.element_bytes;
        if(a.address>=memory_bytes||bytes>uint64_t(memory_bytes)-a.address)return false;
        groups[i]={a.address,uint32_t(bytes),a.alignment,uint32_t(1u<<i)};original+=bytes;
    }
    // Absolute guest addresses need not be scalar-aligned: the old independent
    // uploads used offset zero. Share storage only when every relative offset
    // remains aligned. Powers of two make the residues compatible iff they
    // agree modulo the smaller alignment.
    bool changed=true;
    while(changed){
        changed=false;
        for(size_t i=0;i<n&&!changed;i++)for(size_t j=i+1;j<n;j++){
            const auto a=groups[i],b=groups[j];
            const uint64_t ae=uint64_t(a.address)+a.bytes,be=uint64_t(b.address)+b.bytes;
            if(ae<b.address||be<a.address)continue;
            const uint32_t common=std::min(a.alignment,b.alignment);
            if((a.address^b.address)&(common-1))continue;
            const uint32_t alignment=std::max(a.alignment,b.alignment);
            const uint32_t anchor=a.alignment>=b.alignment?a.address:b.address;
            const uint32_t first=std::min(a.address,b.address);
            const uint32_t padding=(first-anchor)&(alignment-1);
            if(padding>first)continue; // No valid padded start before guest zero.
            const uint32_t base=first-padding;
            groups[i]={base,uint32_t(std::max(ae,be)-base),alignment,a.members|b.members};
            for(size_t k=j+1;k<n;k++)groups[k-1]=groups[k];
            --n;changed=true;break;
        }
    }
    std::sort(groups.begin(),groups.begin()+n,[](const Working &a,const Working &b){return a.address<b.address;});
    Nhl07DrawUploadPlan plan{};plan.input_count=uint32_t(count);plan.group_count=uint32_t(n);plan.original_bytes=original;
    for(size_t g=0;g<n;g++){
        const auto &range=groups[g];plan.groups[g]={range.address,range.bytes,range.alignment};plan.upload_bytes+=range.bytes;
        for(size_t i=0;i<count;i++)if(range.members&(1u<<i))
            plan.bindings[i]={uint32_t(g),inputs[i].address-range.address};
    }
    out=plan;return true;
}
