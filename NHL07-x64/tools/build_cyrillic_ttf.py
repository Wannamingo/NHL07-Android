"""Append Cyrillic outlines to the two original APT UI fonts, preserving Latin."""
from pathlib import Path
import hashlib,io,json,sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT.parent.parent/'work/nhl07-tools/fonttools'))
from fontTools.ttLib import TTFont
from fontTools.pens.recordingPen import DecomposingRecordingPen
from fontTools.pens.ttGlyphPen import TTGlyphPen
from fontTools.pens.transformPen import TransformPen
from game_archives import big_entries,original_decompress,big_write

original=original_decompress(big_entries((ROOT/'disc/preload/fboot.viv').read_bytes())['fonts.big'])
entries=big_entries(original);original_entries=dict(entries);records=[]
characters=set(json.loads((ROOT/'analysis/localization/russian-character-set.json').read_text()))
for name,data in entries.items():
    font=TTFont(io.BytesIO(data));before=font.getGlyphOrder()[:];cmap=font.getBestCmap()
    latin={g:font['glyf'][g].compile(font['glyf']) for g in before}
    smallcaps='sxbMenu' in name
    donor_path=Path('C:/Windows/Fonts/arialbi.ttf' if smallcaps else 'C:/Windows/Fonts/ARIALN.TTF')
    donor=TTFont(donor_path);donor_map=donor.getBestCmap();donor_glyphs=donor.getGlyphSet()
    # Match actual Latin cap height; retain the original font's layout metrics.
    scale=font['glyf'][cmap[ord('A')]].yMax/donor['glyf'][donor_map[ord('A')]].yMax
    additions={}
    for code in sorted(characters):
        if code<32 or not chr(code).isprintable() or code in cmap:continue
        source_code=ord(chr(code).upper()) if smallcaps and len(chr(code).upper())==1 else code
        assert source_code in donor_map,hex(code)
        source_name=donor_map[source_code];name_new='ru'+format(code,'04X')
        recording=DecomposingRecordingPen(donor_glyphs);donor_glyphs[source_name].draw(recording)
        pen=TTGlyphPen(None);recording.replay(TransformPen(pen,(scale,0,0,scale,0,0)))
        glyph=pen.glyph();glyph.recalcBounds(font['glyf']);font['glyf'][name_new]=glyph
        advance=round(donor['hmtx'][source_name][0]*scale)
        font['hmtx'][name_new]=(advance,getattr(glyph,'xMin',0));additions[code]=name_new
    font.setGlyphOrder(before+list(additions.values()))
    for table in font['cmap'].tables:
        if table.isUnicode():table.cmap.update(additions)
    font['maxp'].numGlyphs=len(font.getGlyphOrder());font['head'].modified=0
    stream=io.BytesIO();font.save(stream);result=stream.getvalue();check=TTFont(io.BytesIO(result))
    assert all(check['glyf'][g].compile(check['glyf'])==v for g,v in latin.items())
    assert all(c in check.getBestCmap() for c in characters if c>=32 and chr(c).isprintable())
    assert all(check['hmtx'][g]==font['hmtx'][g] for g in before)
    entries[name]=result
    records.append({'name':name,'source_sha256':hashlib.sha256(data).hexdigest(),'sha256':hashlib.sha256(result).hexdigest(),
        'glyphs_added':len(additions),'original_outlines_preserved':True,'donor_font':str(donor_path),'donor_sha256':hashlib.sha256(donor_path.read_bytes()).hexdigest()})
output=big_write(entries);target=ROOT/'mods/localization/ru/fonts.big';target.write_bytes(output)
assert original_decompress(big_entries((ROOT/'disc/fe/comapt.viv').read_bytes())['fonts.big'])==original
game_entries=big_entries(original_decompress(big_entries((ROOT/'disc/fe/gameapt.viv').read_bytes())['fonts.big']))
for name,data in game_entries.items():
    assert data==original_entries[name],'Game font differs from the audited front-end font'
    game_entries[name]=entries[name]
game_output=big_write(game_entries);(ROOT/'mods/localization/ru/game-fonts.big').write_bytes(game_output)
(ROOT/'analysis/localization/cyrillic-ttf.json').write_text(json.dumps({'failed':0,'fonts':records,'sha256':hashlib.sha256(output).hexdigest(),
    'game_fonts_sha256':hashlib.sha256(game_output).hexdigest(),'all_apt_copies':['preload/fboot.viv','fe/comapt.viv','fe/gameapt.viv'],
    'format_documentation':'https://fonttools.readthedocs.io/en/latest/pens/ttGlyphPen.html'},indent=2))
print(json.dumps(records,indent=2))
