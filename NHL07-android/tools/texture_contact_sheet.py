"""Diagnostic grid of captured CPU-decoded textures, sorted by adjacent-pixel variation."""
from pathlib import Path
import json
from render_capture import png
root=Path(__file__).resolve().parents[1]
record=json.loads((root/'analysis/latest-apk-device.json').read_text())
directory=Path(record['texture_probes']['directory'])
rows=[]
for path in directory.glob('texture-*.ppm'):
    magic,size,maximum,rgb=path.read_bytes().split(b'\n',3);w,h=map(int,size.split())
    assert magic==b'P6' and maximum==b'255' and len(rgb)==w*h*3
    if w<64 or h<64:continue
    # At most 4096 sampled horizontal neighbors per image.
    points=[(y*w+x)*3 for y in range(0,h,max(1,h//64)) for x in range(0,w-1,max(1,w//64))]
    score=sum(abs(rgb[p+c]-rgb[p+3+c]) for p in points for c in range(3))/max(1,len(points))
    rows.append((score,int(path.stem.split('-')[1]),path,w,h,rgb))
rows.sort(reverse=True)
digits=['111101101101111','010110010010111','111001111100111','111001111001111','101101111001001','111100111001111','111100111101111','111001001001001','111101111101111','111101111001111']
selected=rows[:100];cellw=80;cellh=90;width=10*cellw;height=((len(selected)+9)//10)*cellh;out=bytearray([220])*(width*height*3)
for position,(score,identifier,path,w,h,rgb) in enumerate(selected):
    left=position%10*cellw;top=position//10*cellh
    for y in range(80):
        for x in range(80):
            src=((y*h//80)*w+x*w//80)*3;dst=((top+y)*width+left+x)*3;out[dst:dst+3]=rgb[src:src+3]
    for i,d in enumerate(str(identifier)):
        for p,value in enumerate(digits[int(d)]):
            if value=='1':
                dst=((top+82+p//3)*width+left+3+i*4+p%3)*3;out[dst:dst+3]=b'\0\0\0'
png(root/'analysis/texture-variation-grid.png',width,height,out)
(root/'analysis/texture-variation-grid.json').write_text(json.dumps({'apk_sha256':record['apk_sha256'],'directory':str(directory),'order':[{'id':r[1],'variation':r[0]} for r in selected]},indent=2))
print('Saved diagnostic texture grid with',len(selected),'images')
