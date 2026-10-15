"""Compare the shipped Java overlay with an independent archive reconstruction."""
from pathlib import Path
import hashlib,json,subprocess,sys
root=Path(__file__).resolve().parents[1];game=root.with_name('NHL07-x64')
sys.path.insert(0,str(game/'tools'))
from game_archives import big_entries,big_write,refpack_literal,original_decompress
cfg=json.loads((root/'local-toolchains.json').read_text());java=Path(cfg['java'])/'bin'
work=root/'build/localization-check';classes=work/'classes';classes.mkdir(parents=True,exist_ok=True)
sources=[root/'android/java/org/nhl07/port'/n for n in ['EaData.java','LocalizationOverlay.java']]+[root/'tests/launcher/Nhl07LocalizationContract.java']
def run(args):
    r=subprocess.run(list(map(str,args)),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=120)
    assert r.returncode==0,r.stdout+r.stderr
    return r.stdout.strip()
run([java/'javac.exe','--release','17','-d',classes,*sources])
patches=root/'android/assets/localization/ru';records=[]
for mode,fapt in [('original',game/'disc/preload/fapt.viv'),('updated',game/'mods/rosters/preload/fapt.viv')]:
    output=work/mode;print(run([java/'java.exe','-cp',classes,'org.nhl07.port.Nhl07LocalizationContract',game/'disc',patches,fapt,output]))
    expected={}
    def rebuild(path,updates,source=None):
        raw=(source or game/'disc'/path).read_bytes();entries=big_entries(raw)
        assert updates.keys()<=entries.keys()
        for name,value in updates.items():entries[name]=refpack_literal(value)
        data=big_write(entries);expected[path]=data;assert data==(output/path).read_bytes(),path
        for name,value in updates.items():assert original_decompress(big_entries(data)[name])==value,(path,name)
        return data
    def header(data):return data[:int.from_bytes(data[12:16],'big')]
    local=rebuild('fe/local.viv',{name:(patches/name).read_bytes() for name in ['frontEnglish.bin','gameEnglish.bin','LOCALE_ENGLISH.loc']})
    rebuild('preload/fmisc.viv',{'local.bh':header(local),'debugfnt.xfn':(patches/'subtitle.xfn').read_bytes()})
    rebuild('preload/fboot.viv',{'fonts.big':(patches/'fonts.big').read_bytes()})
    comapt=rebuild('fe/comapt.viv',{'fonts.big':(patches/'fonts.big').read_bytes()})
    gameapt=rebuild('fe/gameapt.viv',{'fonts.big':(patches/'game-fonts.big').read_bytes()})
    rebuild('preload/gloadscr.viv',{'LOAD_FONT.xfn':(patches/'subtitle.xfn').read_bytes()})
    rebuild('preload/fapt.viv',{'comapt.bh':header(comapt)},fapt)
    rebuild('preload/gmisc.viv',{'gameapt.bh':header(gameapt)})
    for name in ['gamefont.xfn','popupfnt.xfn','subtitle.xfn']:
        expected['fe/'+name]=(patches/name).read_bytes();assert (output/'fe'/name).read_bytes()==expected['fe/'+name]
    records.append({'roster':mode,'files':{n:hashlib.sha256(b).hexdigest() for n,b in expected.items()}})
report={'failed':0,'modes':records,'all_font_copies_patched':True,'cached_headers_match':True,'active_roster_db_header_preserved':True,'java_byte_exact_independent_python':True,'original_decoder_checks':16,'scope':'Archive/font consistency; actual game return requires device verification'}
(root/'analysis/localization-overlay-validation.json').write_text(json.dumps(report,indent=2))
print('Localization overlay passed: original and updated roster; 22 files byte exact; original decoder checks passed.')
