"""Pack Russian copies of the exact NHL 07 USA locale key tables."""
from pathlib import Path
import hashlib,json,re,struct,unicodedata
from game_archives import original_decompress,refpack_literal
ROOT=Path(__file__).resolve().parents[1];analysis=ROOT/'analysis/localization';out=ROOT/'mods/localization/ru';out.mkdir(parents=True,exist_ok=True)
draft=json.loads((analysis/'russian-mt-draft.json').read_text(encoding='utf-8'))
overrides={}
for line in (ROOT/'mods/localization/russian-overrides.tsv').read_text(encoding='utf-8').splitlines():
    if not line or (line.startswith('#') and '\t' not in line):continue
    english,russian=line.split('\t',1);overrides[english.casefold()]=russian
token=re.compile(r'%(?:[1-9]\d*\$)?[-+#0]*(?:\d+|\*)?(?:\.(?:\d+|\*))?[hlLzjt]*[diuoxXfFeEgGaAcspn%]|%[1-9]\d*|%[A-Za-z]|%')
ea_tag=re.compile(r'\[<%\d+ [A-Za-z]+>\]')
# Club abbreviations are identifiers used in fixed-size score display fields.
from roster_db import Database
from game_archives import big_entries
db=Database(original_decompress(big_entries((ROOT/'disc/db/db.viv').read_bytes())['nhl2007.tdb']))
abbreviations={t[k] for t in db.tables['STEA'].rows() for k in ['ABBR','AABB'] if t[k]}
def upper(value):return ''.join(x if token.fullmatch(x or '') else x.upper() for x in re.split('('+token.pattern+')',value))
def translated(text):
    core=text.strip();manual=core if core in abbreviations else overrides.get(core.casefold())
    if manual is not None:
        if any(c.isalpha() for c in core) and core.isupper():manual=upper(manual)
        left=text[:len(text)-len(text.lstrip())];right=text[len(text.rstrip()):];result=left+manual+right
    else:result=draft[text]
    result=unicodedata.normalize('NFC',result).replace('\u0301','').replace('\u0300','')
    # English ordinal suffixes follow printf placeholders in the source.
    result=re.sub(r'(%d)(?:th|st|nd|rd)\b',r'\1-й',result)
    assert token.findall(result)==token.findall(text),(text,result,'format changed')
    assert ea_tag.findall(result)==ea_tag.findall(text),(text,result,'EA substitution tag changed')
    assert result.count('^')==text.count('^'),(text,result,'EA line break changed')
    return result,manual is not None
files=[];characters=set();coverage={'manual':0,'draft':0,'retained':0};review=[]
for name in ['frontEnglish.bin','gameEnglish.bin']:
    original=(analysis/name).read_bytes();entries=json.loads((analysis/(name+'.json')).read_text(encoding='utf-8'));n=len(entries)
    blob=bytearray();offsets=[];translations=[]
    for entry in entries:
        text,manual=translated(entry['text']);offsets.append(16+8*n+len(blob));blob+=text.encode('utf-8')+b'\0\0\0\0';translations.append(text);characters.update(text)
        coverage['manual' if manual else 'retained' if text==entry['text'] else 'draft']+=1
        if text==entry['text'] and re.search('[A-Za-z]{3,}',text) and not manual:review.append(entry['text'])
    result=original[:16+4*n]+struct.pack('<'+'I'*n,*offsets)+blob
    assert struct.unpack_from('<I',result,4)[0]==n
    for entry,offset,expected in zip(entries,offsets,translations):
        actual=result[offset:result.index(0,offset)].decode('utf-8');assert actual==expected
    assert original_decompress(refpack_literal(result))==result
    (out/name).write_bytes(result);files.append({'name':name,'keys':n,'source_sha256':hashlib.sha256(original).hexdigest(),'sha256':hashlib.sha256(result).hexdigest()})
system=[
    '2.04.00','2.08.04','Продолжить','Продолжить без сохранения','Освободить место','Да','Нет','Отмена',
    'Недостаточно места для сохранения. Освободите ещё %1 блок(ов).',
    'Загрузка %1. Не извлекайте устройства памяти и не отключайте геймпады.',
    'Файл %1 повреждён и не может быть использован.',
    'Устройство памяти %1 было извлечено. Загрузка не завершена.',
    'Файл с таким именем уже существует. Сохранение заменит предыдущий файл. Продолжить?',
    'Недостаточно места для сохранения игры.',
    'На устройстве памяти %1 недостаточно места. Освободите ещё %2 блок(ов).',
    'Заменить сохранённую игру?',
    'Заменить %1 на устройстве памяти %2?',
    'Сохранение %1. Не выключайте устройство.',
    'Сохранение на устройство памяти %1. Не извлекайте устройства памяти и не отключайте геймпады.',
    'Не удалось сохранить %1.',
    'Устройство памяти %1 было извлечено. Сохранение не завершено.',
    'Удалить сохранённую игру?',
    'Удаление %1. Не выключайте устройство.',
    'Удаление %1 с устройства памяти %2. Не извлекайте устройства памяти и не отключайте геймпады.',
    'Не удалось удалить %1.',
    'Устройство памяти %1 было извлечено. Удаление не завершено.',
    'Диск Xbox','Устройство памяти']
original=(analysis/'LOCALE_ENGLISH.loc').read_bytes();start=struct.unpack_from('<I',original,16)[0];n=struct.unpack_from('<I',original,start+12)[0];assert n==len(system)==28
offsets=[];blob=bytearray()
for i,text in enumerate(system):
    old_offset=start+struct.unpack_from('<I',original,start+16+4*i)[0];end=old_offset
    while original[end:end+2]!=b'\0\0':end+=2
    old=original[old_offset:end].decode('utf-16-le');assert token.findall(old)==token.findall(text)
    offsets.append(16+4*n+len(blob));blob+=text.encode('utf-16-le')+b'\0\0\0\0';characters.update(text)
block=bytearray(original[start:start+16])+struct.pack('<'+'I'*n,*offsets)+blob;struct.pack_into('<I',block,4,len(block))
result=original[:start]+block;(out/'LOCALE_ENGLISH.loc').write_bytes(result)
assert original_decompress(refpack_literal(result))==result
files.append({'name':'LOCALE_ENGLISH.loc','keys':28,'source_sha256':hashlib.sha256(original).hexdigest(),'sha256':hashlib.sha256(result).hexdigest()})
(analysis/'russian-text-validation.json').write_text(json.dumps({'files':files,'failed':0,'coverage':coverage,'human_reviewed_overrides':len(overrides),'system_dialogs_reviewed':28,
    'format_tokens_preserved':True,'ea_substitution_tags_preserved':True,'ea_line_breaks_preserved':True,'club_abbreviations_preserved':True,'retained_english_review_count':len(set(review)),
    'limitations':['Bulk descriptions use an offline translation draft; hockey vocabulary and all visible screens require review','Device rendering and game-language switching not yet validated']},indent=2))
(analysis/'russian-retained-review.json').write_text(json.dumps(sorted(set(review)),ensure_ascii=False,indent=2),encoding='utf-8')
(analysis/'russian-character-set.json').write_text(json.dumps(sorted(ord(c) for c in characters)),encoding='utf-8')
print(json.dumps({'coverage':coverage,'overrides':len(overrides),'retained_review':len(set(review)),'files':files},indent=2))
