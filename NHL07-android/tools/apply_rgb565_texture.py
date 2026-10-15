"""Reapply NHL's RGB565 decoder addition after importing generic shader support."""
from pathlib import Path
root=Path(__file__).resolve().parents[1];path=root/'src/shaders/texture_rgba.cpp';source=path.read_text()
old='unsigned texel_bytes=(f==0x0b || f==0x19 || f==0x1f || f==0 || f==1 || f==0x13 || f==0x1b) ? 1 : 4;'
new='unsigned texel_bytes=(f==0x05||f==0x11)?2:(f==0x0b || f==0x19 || f==0x1f || f==0 || f==1 || f==0x13 || f==0x1b) ? 1 : 4;'
assert (old in source)!=(new in source);source=source.replace(old,new)
old='if(f==0x19 || f==0x1f){output[0]=output[1]=output[2]=255;output[3]=*input;}'
new='if(f==0x05||f==0x11)rgb565(u16(input),output);\n        else if(f==0x19 || f==0x1f){output[0]=output[1]=output[2]=255;output[3]=*input;}'
assert new in source or old in source
if new not in source:source=source.replace(old,new)
if source!=path.read_text():path.write_text(source,encoding='utf-8')
print('RGB565 texture decoder preserved')
