#pragma once
#include "d3d8_xbox.h"
typedef int DXGI_FORMAT;
typedef struct ID3D11VertexShader ID3D11VertexShader;
typedef struct ID3D11PixelShader ID3D11PixelShader;
typedef struct ID3D11Buffer ID3D11Buffer;
typedef struct ID3D11InputLayout ID3D11InputLayout;
typedef struct D3D11_INPUT_ELEMENT_DESC {
    const char *SemanticName;unsigned SemanticIndex;DXGI_FORMAT Format;
    unsigned InputSlot,AlignedByteOffset,InputSlotClass,InstanceDataStepRate;
} D3D11_INPUT_ELEMENT_DESC;
