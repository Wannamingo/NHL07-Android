#pragma once
#include <array>
#include <vector>
#include <cstdint>
#include <cstring>
using Nhl07ImmediateVertex=std::array<float,64>;
enum class Nhl07ImmediateResult {Unrecognized,Handled,End,Invalid};
class Nhl07ImmediateVertices {
    Nhl07ImmediateVertex current{};
    Nhl07ImmediateResult finish(unsigned attribute){
        if(attribute==0&&active){if(vertices.size()>=65536)return Nhl07ImmediateResult::Invalid;vertices.push_back(current);}
        return Nhl07ImmediateResult::Handled;
    }
    static float floating(uint32_t word){float value;std::memcpy(&value,&word,4);return value;}
public:
    bool active=false;unsigned primitive=0;
    std::vector<Nhl07ImmediateVertex> vertices;
    Nhl07ImmediateVertices(){for(unsigned i=0;i<16;i++)current[i*4+3]=1.f;}
    Nhl07ImmediateResult accept(unsigned method,uint32_t value){
        if(method&3)return Nhl07ImmediateResult::Invalid;
        if(method==0x17fc){
            if(!value){if(!active)return Nhl07ImmediateResult::Invalid;active=false;return Nhl07ImmediateResult::End;}
            if(active||value>10)return Nhl07ImmediateResult::Invalid;
            active=true;primitive=value;vertices.clear();return Nhl07ImmediateResult::Handled;
        }
        unsigned attribute,component;
        if(method>=0x1500&&method<=0x1508){
            component=(method-0x1500)/4;current[component]=floating(value);current[3]=1.f;
            return component==2?finish(0):Nhl07ImmediateResult::Handled;
        }
        if(method>=0x1518&&method<=0x1524){
            component=(method-0x1518)/4;current[component]=floating(value);
            return component==3?finish(0):Nhl07ImmediateResult::Handled;
        }
        if(method>=0x1880&&method<=0x18fc){
            attribute=(method-0x1880)/8;component=((method-0x1880)/4)%2;
            current[attribute*4+component]=floating(value);current[attribute*4+2]=0.f;current[attribute*4+3]=1.f;
            return component==1?finish(attribute):Nhl07ImmediateResult::Handled;
        }
        if(method>=0x1a00&&method<=0x1afc){
            attribute=(method-0x1a00)/16;component=((method-0x1a00)/4)%4;
            current[attribute*4+component]=floating(value);
            return component==3?finish(attribute):Nhl07ImmediateResult::Handled;
        }
        if(method>=0x1940&&method<=0x197c){
            attribute=(method-0x1940)/4;
            for(unsigned c=0;c<4;c++)current[attribute*4+c]=float((value>>(c*8))&255)/255.f;
            return finish(attribute);
        }
        if(method>=0x1900&&method<=0x193c){
            attribute=(method-0x1900)/4;current[attribute*4]=float(int16_t(value));current[attribute*4+1]=float(int16_t(value>>16));
            current[attribute*4+2]=0.f;current[attribute*4+3]=1.f;return finish(attribute);
        }
        if(method>=0x1980&&method<=0x19fc){
            attribute=(method-0x1980)/8;component=((method-0x1980)/4)%2;
            current[attribute*4+component*2]=float(int16_t(value));current[attribute*4+component*2+1]=float(int16_t(value>>16));
            return component==1?finish(attribute):Nhl07ImmediateResult::Handled;
        }
        return Nhl07ImmediateResult::Unrecognized;
    }
};
inline bool nhl07_immediate_indices(unsigned primitive,size_t count,std::vector<uint16_t> &indices,unsigned &host_primitive){
    indices.clear();host_primitive=primitive;
    if(count>65536||!primitive||primitive>10)return false;
    if(primitive==8){
        if(count%4)return false;host_primitive=5;
        for(unsigned i=0;i<count;i+=4)for(unsigned local:{0u,1u,2u,0u,2u,3u})indices.push_back(uint16_t(i+local));
    }else if(primitive==9){
        if(count&&((count%2)||count<4))return false;host_primitive=5;
        for(unsigned i=0;i+3<count;i+=2)for(unsigned local:{0u,1u,3u,0u,3u,2u})indices.push_back(uint16_t(i+local));
    }else{
        if(primitive==10)host_primitive=7;
        for(unsigned i=0;i<count;i++)indices.push_back(uint16_t(i));
    }
    return true;
}
