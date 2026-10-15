"""Extend the original EA FntX font copies with actual Cyrillic glyphs.

The original glyph bitmaps/metrics are preserved. New glyphs are rendered from
local Windows fonts into additional A8 atlas rows; no source files are edited.
EA FFN field layout is checked against AndyGura/nfs-resources-converter notes.
"""
from pathlib import Path
import hashlib,json,struct
from PIL import Image,ImageDraw,ImageFont
ROOT=Path(__file__).resolve().parents[1]
out=ROOT/'mods/localization/ru/fe';out.mkdir(parents=True,exist_ok=True)
codes=[0x401,*range(0x410,0x450),0x451,0x2013,0x2014,0x2022,0x2026,0x2116,0x2191]
results=[]
for name in ['gamefont.xfn','popupfnt.xfn','subtitle.xfn']:
    source=ROOT/'disc/fe'/name;data=source.read_bytes()
    assert data[:4]==b'FntX'
    version,count=struct.unpack_from('<HH',data,8);flags=struct.unpack_from('<I',data,12)[0]
    definitions,kernings,bitmap=struct.unpack_from('<III',data,20)
    wrapper=struct.unpack_from('<I',data,48)[0]
    assert version==414 and not(flags&0x2000) and not kernings
    assert definitions==128 and bitmap==wrapper+32 and data[bitmap]==0x64
    width,height=struct.unpack_from('<HH',data,bitmap+4)
    assert struct.unpack_from('<II',data,wrapper+24)==(width,height)
    atlas=Image.frombytes('L',(width,height),data[bitmap+16:bitmap+16+width*height])
    rows=[data[definitions+i*12:definitions+(i+1)*12] for i in range(count)]
    existing={struct.unpack_from('<H',r)[0] for r in rows}
    smallcaps=name!='popupfnt.xfn';font_path=Path('C:/Windows/Fonts/arialbi.ttf' if smallcaps else 'C:/Windows/Fonts/ARIALN.TTF')
    font=ImageFont.truetype(str(font_path),14 if smallcaps else 16)
    reference_top=font.getbbox('A')[1]
    additions=[];x=1;y=height+2;row_height=0
    for code in codes:
        if code in existing:continue
        char=chr(code).upper() if smallcaps else chr(code)
        left,top,right,bottom=font.getbbox(char);w,h=right-left,bottom-top
        image=Image.new('L',(w,h));ImageDraw.Draw(image).text((-left,-top),char,font=font,fill=255)
        if x+w+1>width:x=1;y+=row_height+2;row_height=0
        advance=round(font.getlength(char));y_offset=top-reference_top
        assert 0<w<256 and 0<h<256 and -128<=left<128 and -128<=y_offset<128
        rows.append(struct.pack('<HBBHHBbbB',code,w,h,x,y,advance,left,y_offset,0));additions.append((image,x,y));x+=w+2;row_height=max(row_height,h)
    new_height=(y+row_height+15)&~15
    combined=Image.new('L',(width,new_height));combined.paste(atlas,(0,0))
    for image,x,y in additions:combined.paste(image,(x,y))
    rows.sort(key=lambda r:struct.unpack_from('<H',r)[0]);assert len({struct.unpack_from('<H',r)[0] for r in rows})==len(rows)
    new_wrapper=(128+len(rows)*12+31)&~31;new_bitmap=new_wrapper+32
    header=bytearray(data[:128]);struct.pack_into('<H',header,10,len(rows));struct.pack_into('<I',header,28,new_bitmap);struct.pack_into('<I',header,48,new_wrapper)
    image_header=bytearray(data[wrapper:bitmap+16]);pixels=combined.tobytes()
    struct.pack_into('<III',image_header,4,len(pixels)+48,48,len(pixels));struct.pack_into('<II',image_header,24,width,new_height)
    struct.pack_into('<I',image_header,32,((len(pixels)+32)<<8)|0x64);struct.pack_into('<HH',image_header,36,width,new_height)
    result=header+b''.join(rows);result+=bytes(new_wrapper-len(result));result+=image_header+pixels;result+=bytes((-len(result))%128)
    struct.pack_into('<I',result,4,len(result));(out/name).write_bytes(result)
    combined.save(ROOT/'analysis/localization'/(name+'.atlas.png'))
    # Verify sorted lookup codes, all original pixel rows, all original metrics,
    # exact new bitmap extents, and all Russian letters including Yo.
    assert combined.crop((0,0,width,height)).tobytes()==atlas.tobytes()
    original_rows={struct.unpack_from('<H',r)[0]:r for r in [data[128+i*12:128+(i+1)*12] for i in range(count)]}
    final_rows={struct.unpack_from('<H',r)[0]:r for r in rows}
    assert all(final_rows[k]==v for k,v in original_rows.items()) and set(codes)<=set(final_rows)
    results.append({'name':name,'source_sha256':hashlib.sha256(data).hexdigest(),'sha256':hashlib.sha256(result).hexdigest(),
        'source_glyphs':count,'glyphs':len(rows),'atlas':[width,new_height],'local_glyph_font':str(font_path),
        'local_glyph_font_sha256':hashlib.sha256(font_path.read_bytes()).hexdigest()})
(ROOT/'analysis/localization/cyrillic-fonts.json').write_text(json.dumps({'fonts':results,'failed':0,'scope':'Sorted original glyphs and pixels preserved; all 66 Russian letters plus punctuation have actual glyphs','limitations':['Original game font loading and Cyrillic display require device validation']},indent=2))
print(json.dumps(results,indent=2))
