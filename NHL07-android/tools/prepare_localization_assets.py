"""Pin the Russian text/font patch shipped by the launcher."""
from pathlib import Path
import hashlib,io,json,shutil,struct,sys
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
sys.path.insert(0,str(root.parent.parent/'work/nhl07-tools/fonttools'))
sys.path.insert(0,str(game/'tools'))
from fontTools.ttLib import TTFont
from game_archives import big_entries
source=game/'mods/localization/ru';target=root/'android/assets/localization/ru';target.mkdir(parents=True,exist_ok=True)
characters=set(json.loads((game/'analysis/localization/russian-character-set.json').read_text()))
records=[]
for name in ['frontEnglish.bin','gameEnglish.bin','LOCALE_ENGLISH.loc','fonts.big','game-fonts.big','fe/gamefont.xfn','fe/popupfnt.xfn','fe/subtitle.xfn']:
    original=source/name;data=original.read_bytes();destination=target/Path(name).name
    if name.endswith('.xfn'):
        count=struct.unpack_from('<H',data,10)[0];codes={struct.unpack_from('<H',data,128+i*12)[0] for i in range(count)}
        assert all(c in codes for c in characters if c>=32 and chr(c).isprintable()),'Missing translated glyph'
    elif name.endswith('.big'):
        for font in big_entries(data).values():
            codes=TTFont(io.BytesIO(font)).getBestCmap()
            assert all(c in codes for c in characters if c>=32 and chr(c).isprintable()),'Missing APT UI glyph'
    shutil.copy2(original,destination);records.append((destination.name,hashlib.sha256(data).hexdigest()))
version=hashlib.sha256(json.dumps(records).encode()).hexdigest();(target/'version.txt').write_text(version+'\n',encoding='ascii')
(root/'analysis/localization-assets.json').write_text(json.dumps({'version':version,'files':dict(records),'failed':0,'all_visible_text_characters_have_glyphs':True,
    'complete_disc_or_xbe_included':False,'game_rendering_verified':False,'translation_quality':'Core menus and 28 system dialogs manually reviewed; bulk descriptions are offline draft'},indent=2))
print('Russian patch version',version)
