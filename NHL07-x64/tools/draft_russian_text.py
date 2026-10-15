"""Prepare an offline MT draft, preserving every game formatting token.

The draft is separate from reviewed overrides and is not a validated release.
English text never leaves the local machine. Model provenance is pinned.
"""
from pathlib import Path
import hashlib,json,re,sys,time
ROOT=Path(__file__).resolve().parents[1];workspace=ROOT.parents[1]
runtime=workspace/'work/nhl07-tools/translation';sys.path.insert(0,str(runtime/'python'))
import ctranslate2,sentencepiece
model=runtime/'model/translate-en_ru-1_9';sp=sentencepiece.SentencePieceProcessor(model_file=str(model/'sentencepiece.model'))
translator=ctranslate2.Translator(str(model/'model'),device='cpu',compute_type='int8',intra_threads=4)
folder=ROOT/'analysis/localization';texts=list(dict.fromkeys(x['text'] for name in ['frontEnglish.bin.json','gameEnglish.bin.json'] for x in json.loads((folder/name).read_text(encoding='utf-8'))))
protected=re.compile(r'(\[<[^<>]{1,160}>\]|%(?:[1-9]\d*\$)?[-+#0]*(?:\d+|\*)?(?:\.(?:\d+|\*))?[hlLzjt]*[diuoxXfFeEgGaAcspn%]|%[1-9]\d*|%[A-Za-z]|%|<[^<>]{1,160}>|\^|\[|\]|\r\n|\r|\n|\t)')
segments=[]
for text in texts:
    for piece in protected.split(text):
        if piece and not protected.fullmatch(piece):
            value=piece.strip()
            if re.search('[A-Za-z]',value) and len(value)>2:segments.append(value)
segments=list(dict.fromkeys(segments));cache_file=folder/'russian-mt-segments.json'
cache=json.loads(cache_file.read_text(encoding='utf-8')) if cache_file.exists() else {}
todo=[s for s in segments if s not in cache];started=time.monotonic()
for offset in range(0,len(todo),48):
    batch=todo[offset:offset+48]
    results=translator.translate_batch([sp.encode(s,out_type=str) for s in batch],beam_size=3,max_batch_size=512,batch_type='tokens',max_input_length=1024,max_decoding_length=1024)
    for source,result in zip(batch,results):cache[source]=sp.decode(result.hypotheses[0])
    cache_file.write_text(json.dumps(cache,ensure_ascii=False,indent=2),encoding='utf-8')
    print(f'translated_segments={min(offset+48,len(todo))}/{len(todo)} elapsed={time.monotonic()-started:.1f}s',flush=True)
translated={};invalid=[]
for text in texts:
    pieces=[]
    for piece in protected.split(text):
        if not piece or protected.fullmatch(piece):pieces.append(piece);continue
        match=re.fullmatch(r'(\s*)(.*?)(\s*)',piece,re.S);a,value,b=match.groups();pieces.append(a+cache.get(value,value)+b)
    output=''.join(pieces)
    if protected.findall(output)!=protected.findall(text):invalid.append({'source':text,'draft':output});output=text
    translated[text]=output
(folder/'russian-mt-draft.json').write_text(json.dumps(translated,ensure_ascii=False,indent=2),encoding='utf-8')
(folder/'russian-mt-format-review.json').write_text(json.dumps(invalid,ensure_ascii=False,indent=2),encoding='utf-8')
(folder/'russian-mt-provenance.json').write_text(json.dumps({'tool':'Argos Translate en_ru 1.9 / model English-Russian 2.2','model_archive_sha256':hashlib.sha256((runtime/'en_ru.argosmodel').read_bytes()).hexdigest(),
    'model_source':'https://argos-net.com/v1/translate-en_ru-1_9.argosmodel','method':'Offline CTranslate2 CPU int8, beam 3; protected game formatting tokens; separate human overrides required','strings':len(translated),'segments':len(cache),'reviewed_translation':False},indent=2))
print('Draft ready; review and font/game integration still required',flush=True)
