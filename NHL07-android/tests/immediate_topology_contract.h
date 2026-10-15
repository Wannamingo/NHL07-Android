#pragma once
#include "../src/immediate_vertices.h"
#include <algorithm>
#include <limits>

struct Nhl07ImmediateTopologyStats {size_t calls=0,max_indices=0,max_capacity=0;};

// Reuse one owning-thread vector, as draw_immediate_batch does. Expected
// triangles are independently obtained by triangulating each quad's ordered
// polygon corners; every resulting index and both triangle windings are read.
template<class Check>
Nhl07ImmediateTopologyStats nhl07_immediate_topology_contract(Check check){
    static thread_local std::vector<uint16_t> indices;
    indices.clear();Nhl07ImmediateTopologyStats stats;
    const uint16_t *retained_storage=nullptr;
    auto run=[&](unsigned primitive,size_t count){
        const size_t previous_capacity=indices.capacity();
        if(!indices.empty())retained_storage=indices.data();
        std::fill(indices.begin(),indices.end(),uint16_t(0xdead));
        unsigned host=0xfeed;
        const bool actual=nhl07_immediate_indices(primitive,count,indices,host);
        const bool valid=primitive>=1&&primitive<=10&&count<=65536&&
            (primitive!=8||count%4==0)&&
            (primitive!=9||!count||(count>=4&&count%2==0));
        check(actual==valid,"persistent topology accepts only exact original count rules");
        const unsigned expected_host=!valid?primitive:(primitive==8||primitive==9)?5:primitive==10?7:primitive;
        check(host==expected_host,"host primitive never retains previous topology");
        size_t expected=0;
        if(valid)expected=primitive==8?(count/4)*6:primitive==9?(count?((count-2)/2)*6:0):count;
        check(indices.size()==expected&&indices.size()<=196602,"persistent vector has exact current size and bounded logical index count");
        check(indices.capacity()>=indices.size(),"index storage covers complete current topology");
        if(expected<=previous_capacity){
            check(indices.capacity()==previous_capacity,"clear/rewrite never reallocates when capacity is sufficient");
            if(expected&&retained_storage)check(indices.data()==retained_storage,"nonempty index storage pointer stays stable within retained capacity");
        }
        if(!indices.empty())retained_storage=indices.data();
        for(size_t i=0;i<expected;++i){
            size_t wanted=i;
            if(primitive==8||primitive==9){
                const size_t quad=i/6,triangle=(i%6)/3,vertex=i%3;
                const size_t polygon_corner=triangle==0?vertex:vertex==0?0:vertex+1;
                const size_t ordered_corner=primitive==8?polygon_corner:
                    polygon_corner<2?polygon_corner:polygon_corner==2?3:2;
                wanted=quad*(primitive==8?4:2)+ordered_corner;
            }
            check(indices[i]==wanted&&indices[i]<count,"every reused index equals independent current triangulation without stale tail or16bit wrap");
        }
        if(valid&&(primitive==8||primitive==9))for(size_t i=0;i<expected;i+=3){
            auto point=[&](uint16_t index){
                std::array<int,2> xy{};
                if(primitive==8){unsigned local=index%4;xy[0]=local==1||local==2;xy[1]=local>=2;}
                else {xy[0]=index/2;xy[1]=index%2;}
                return xy;
            };
            const auto a=point(indices[i]),b=point(indices[i+1]),c=point(indices[i+2]);
            const int area=(b[0]-a[0])*(c[1]-a[1])-(b[1]-a[1])*(c[0]-a[0]);
            check(area==(primitive==8?1:-1),"both quad triangles preserve the ordered polygon winding");
        }
        stats.max_indices=std::max(stats.max_indices,indices.size());
        stats.max_capacity=std::max(stats.max_capacity,indices.capacity());++stats.calls;
    };
    // Different kinds and shorter batches repeatedly share the same storage.
    run(8,4);run(9,6);run(5,3);run(10,7);run(1,1);run(8,0);run(9,0);run(10,0);
    for(size_t count:{size_t(4),size_t(16),size_t(256),size_t(4096),size_t(65536)}){run(8,count);run(9,count);run(5,count);}
    for(unsigned primitive=1;primitive<=10;++primitive){
        run(primitive,65536);
        for(size_t count:{size_t(0),size_t(1),size_t(2),size_t(3),size_t(4),size_t(5),size_t(6),size_t(8),size_t(17)})run(primitive,count);
        run(primitive,65537);run(primitive,std::numeric_limits<size_t>::max());
    }
    for(unsigned primitive:{0u,11u,255u,std::numeric_limits<unsigned>::max()}){
        run(primitive,0);run(primitive,4);run(primitive,65536);
    }
    // A large previous batch and invalid calls must leave no old suffix.
    run(9,65536);run(8,5);run(9,2);run(0,4);run(8,4);run(9,4);run(1,1);
    check(stats.max_indices==196602,"largest valid quad strip reaches exactly196602indices");
    check(indices==std::vector<uint16_t>({0}),"final one-point recovery has no retained previous indices");
    return stats;
}
