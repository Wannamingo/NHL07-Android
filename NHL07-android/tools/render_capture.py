"""Lossless PNG of the actual GLES readback; standard library only."""
from pathlib import Path
import struct,zlib
root=Path(__file__).resolve().parents[1]
def png(path,width,height,rgb):
    def chunk(kind,payload): return struct.pack('>I',len(payload))+kind+payload+struct.pack('>I',zlib.crc32(kind+payload))
    raw=b''.join(b'\0'+rgb[y*width*3:(y+1)*width*3] for y in range(height))
    path.write_bytes(b'\x89PNG\r\n\x1a\n'+chunk(b'IHDR',struct.pack('>IIBBBBB',width,height,8,2,0,0,0))+chunk(b'IDAT',zlib.compress(raw))+chunk(b'IEND',b''))
if __name__=='__main__':
    for name in ['first-render','latest-frame']:
        source=root/'analysis'/(name+'.ppm')
        if not source.is_file():continue
        data=source.read_bytes();kind,size,maximum,rgb=data.split(b'\n',3)
        assert kind==b'P6' and maximum==b'255';w,h=map(int,size.split());assert len(rgb)==w*h*3
        png(root/'analysis'/(name+'.png'),w,h,rgb)
        print('Saved actual GPU readback:',name,w,h)
