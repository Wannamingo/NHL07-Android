"""Convert a user's Legacy Xbox roster to a separate NHL 07 update package.

Never modifies the ISO, the reference extraction, or source roster. Field names
are verified against NHLView NG's read-only Delphi field annotations. Common
ratings are converted between Legacy's 36..99 and NHL 07's 50..99 ranges.
"""
from pathlib import Path
import argparse,collections,hashlib,json,re,struct,unicodedata,zipfile,zlib
from roster_db import Database
from game_archives import big_entries,big_write,original_decompress,refpack_literal

ROOT=Path(__file__).resolve().parents[1]
SKATER={'BALA':'YqOX','PENA':'ShqX','SACC':'KQBB','WACC':'ObeE','FACE':'KrwV',
    'ACCE':'ckxF','SPEE':'bEdA','POTE':'koEt','DEKG':'iCvN','CHKG':'oisw','TOUG':'gUBy',
    'PUCK':'YqXz','AGIL':'pyYq','AGGR':'oskO','PASS':'oRUd','ENDU':'kIjD','INJU':'seUB',
    'SPOW':'DCvJ','WPOW':'Hvje'}
GOALIE={'BRKA':'Nhuq','REBC':'SiKH','SREC':'oLxj','SPEE':'bEdA','POKE':'UqhP',
    'INTE':'miXH','POTE':'koEt','AGIL':'pyYq',
    '5HOL':'nMNR','PASS':'oRUd','ENDU':'kIjD','GSH_':'DTrq',
    'SSH_':'vcIl','GSL_':'ejux','SSL_':'mshm'}
LINES={'L1C_':'ctKP','L1LW':'aAvX','L1RW':'pfiv','L1LD':'opNr','L1RD':'bSAb',
    'L2C_':'PufE','L2LW':'PGhZ','L2RW':'Adsx','L2LD':'BvDt','L2RD':'OQOd',
    'L3C_':'CLEN','L3LW':'IkTY','L3RW':'TbGw','L3LD':'Sxps','L3RD':'Jmcc',
    'L4C_':'lxRC','L4LW':'pOUV','L4RW':'mxhB',
    'K1C_':'aRgN','K1LW':'BWVK','K1LD':'bjni','K1RD':'AAai',
    'K2C_':'tmxm','K2LW':'EMLM','K2LD':'WZZk','K2RD':'FGkk',
    '31C_':'bNDE','31LD':'rrTM','31RD':'kQGw','32C_':'oOKP','32LD':'GtFK','32RD':'VSQu',
    'P1C_':'OsHB','P1LW':'iXft','P1RW':'tIqR','P1LD':'sKFN','P1RD':'jxQx',
    'P2C_':'BnOW','P2LW':'Plxr','P2RW':'MykP','P2LD':'NYLL','P2RD':'Onyv',
    '41C_':'pPkW','41LW':'FMkb','41LD':'XBWz','41RD':'EGLX',
    '42C_':'yoNB','42LW':'Auad','42LD':'ajIB','42RD':'BcVZ',
    'G1__':'WPGf','G2__':'Imzy','X1__':'sNcy','X2__':'uklz',
    'S1__':'XUMR','S2__':'pxVU','S3__':'vBOv','S4__':'AkyJ','S5__':'uAxS'}

def normalize(s):return ''.join(c for c in unicodedata.normalize('NFKD',s.lower()) if c.isalnum())
def fit(s,limit):
    s=s.replace('®','').replace('™','').strip()
    try:b=s.encode('cp1252')
    except UnicodeEncodeError:b=unicodedata.normalize('NFKD',s).encode('ascii',errors='ignore')
    return b[:limit].decode('cp1252')
def rating(value):return max(0,min(49,value+36-50))
def dob7(b):return (b['YEAR']+1959,b['MONT'],b['DAY_'])
def dobl(b):return (b['dnFq']+1910,b['pLKJ']+1,b['iwsK']+1)
def identity(b,legacy=False):
    return (normalize(b['RMbQ'] if legacy else b['LNME']),
        normalize(b['PedH'] if legacy else b['FNME'])[:1],dobl(b) if legacy else dob7(b))

def convert(base_viv,roster):
    assert roster[:10]==b'RosterFile' and len(roster)<8*1024*1024
    decoder=zlib.decompressobj();decoded=decoder.decompress(roster[48:],24*1024*1024+1)
    assert decoder.eof and not decoder.unconsumed_tail and len(decoded)<24*1024*1024
    legacy=Database(decoded);assert legacy.byteorder=='big'
    for name in ['cPbu','caBZ','ulGe','ttOk','yvSd','yuHm']:assert name in legacy.tables
    files=big_entries(base_viv)
    original={name:Database(original_decompress(files[name])) for name in ['nhl2007.tdb','nhlbioatt.tdb','nhlrost.tdb','nhlonlinerost.tdb']}
    db=original['nhl2007.tdb'];bio=db.tables['SPBT'].rows();skater=db.tables['SPAI'].rows();goalie=db.tables['SGAI'].rows()
    players=db.tables['PLAY'].rows();teams=db.tables['STEA'].rows()
    legacy_bio={r['zIBw']:r for r in legacy.tables['cPbu'].rows()}
    legacy_index={r['qEfv']:r for r in legacy.tables['caBZ'].rows() if r['BERR']==0}
    legacy_teams={r['qEfv']:r for r in legacy.tables['ttOk'].rows()}
    legacy_skater={r['zIBw']:r for r in legacy.tables['yvSd'].rows()}
    legacy_goalie={r['zIBw']:r for r in legacy.tables['yuHm'].rows()}
    original_by_identity={identity(b):b for b in bio}
    # Recover country/state code translations from exact name+DOB overlaps,
    # rather than treating Legacy numeric codes as NHL 07 numeric codes.
    nations=collections.defaultdict(collections.Counter);states=collections.defaultdict(collections.Counter)
    for b in legacy_bio.values():
        old=original_by_identity.get(identity(b,True))
        if old:nations[b['hleL']][old['INTL']]+=1;states[b['IxvQ']][old['STAT']]+=1
    nation_map={k:v.most_common(1)[0][0] for k,v in nations.items()}
    state_map={k:v.most_common(1)[0][0] for k,v in states.items()}
    # Legacy country codes differ from NHL 07 SSTT indices. These names are
    # cross-checked against the source national squads and player birthplaces.
    country_names={0:'Canada',14:'USA',66:'Denmark',67:'Finland',68:'Norway',69:'Sweden',
        70:'Belarus',74:'Latvia',76:'Russia',78:'Austria',82:'Czech Republic',84:'France',
        85:'Germany',95:'Slovakia',97:'Switzerland',109:'Australia'}
    states_by_name={s['NAME']:s['INDX'] for s in db.tables['SSTT'].rows()}
    nation_map.update({k:states_by_name[v] for k,v in country_names.items()})
    state_map.update(nation_map)
    provinces=['Alberta','British Columbia','Manitoba','New Brunswick','Newfoundland',
        'Northwest Territories','Nova Scotia','Nunavut','Ontario','Prince Edward Island','Quebec','Saskatchewan','Yukon']
    usa='Alabama,Alaska,Arizona,Arkansas,California,Colorado,Connecticut,Delaware,DC,Florida,Georgia,Hawaii,Idaho,Illinois,Indiana,Iowa,Kansas,Kentucky,Louisiana,Maine,Maryland,Massachusetts,Michigan,Minnesota,Mississippi,Missouri,Montana,Nebraska,Nevada,New Hampshire,New Jersey,New Mexico,New York,North Carolina,North Dakota,Ohio,Oklahoma,Oregon,Pennsylvania,Rhode Island,South Carolina,South Dakota,Tennessee,Texas,Utah,Vermont,Virginia,Washington,West Virginia,Wisconsin,Wyoming'.split(',')
    state_map.update({i:states_by_name[name] for i,name in enumerate(provinces,1) if name in states_by_name})
    state_map.update({i:states_by_name[name] for i,name in enumerate(usa,15) if name in states_by_name})
    source_team={i:i for i in range(30)}
    source_team.update({22:229,30:226,31:228})
    output_rosters=[];source_to_target={};converted=[];unknown_nations=[]
    # PLAY.INDX is the roster-facing player ID; PLAY.ID__ is the biography ID.
    # They differ for international/national duplicate player registrations.
    next_bio=max(b['INDX'] for b in bio)+1;next_player=max(p['INDX'] for p in players)+1
    # This is an original valid generated-player template, not an Xbox 360 face.
    template=db.tables['DPBT'].rows()[0]
    for target_team,source in source_team.items():
        roster_rows=[r for r in legacy.tables['ulGe'].rows() if r['BSXd']==source]
        assert 18<=len(roster_rows)<=40,(source,len(roster_rows))
        for r in roster_rows:
            ix=legacy_index[r['TWSX']];assert ix['qFky'] in legacy_bio
            b=legacy_bio[ix['qFky']];key=b['zIBw']
            if key not in source_to_target:
                old=original_by_identity.get(identity(b,True))
                if old:
                    target_id=old['INDX'];new=dict(old)
                    player_id=next(p['INDX'] for p in players if p['TBLE']==0 and p['ID__']==target_id)
                else:
                    target_id=next_bio;next_bio+=1;player_id=next_player;next_player+=1
                    new={k:template.get(k,0) for k in db.tables['SPBT'].fields}
                    new['INDX']=target_id
                    players.append({'TBLE':0,'INDX':player_id,'ID__':target_id})
                assert target_id<8192 and player_id<8192
                new.update(FNME=fit(b['PedH'],20),LNME=fit(b['RMbQ'],20),CITY=fit(b['JzFM'],20),
                    HEIG=b['QBpy'],WEIG=max(0,min(255,b['WZNs']-30)),HAND=b['pkRG'],
                    POS_=b['aljv'],POSD=1<<b['aljv'],YEAR=max(0,min(63,dobl(b)[0]-1959)),
                    MONT=dobl(b)[1],DAY_=dobl(b)[2],TEAM=target_team,JERS=r['tRVs'],ROOK=0)
                if b['hleL'] not in nation_map:unknown_nations.append(b['hleL'])
                new['INTL']=nation_map.get(b['hleL'],new['INTL'])
                new['STAT']=state_map.get(b['IxvQ'],new['INTL'])
                if old:bio[bio.index(old)]=new
                else:bio.append(new)
                is_goalie=b['aljv']==4
                attributes=(legacy_goalie if is_goalie else legacy_skater).get(key)
                assert attributes is not None,(b['PedH'],b['RMbQ'],'missing attributes')
                target_table='SGAI' if is_goalie else 'SPAI';mapping=GOALIE if is_goalie else SKATER
                target_rows=goalie if is_goalie else skater
                existing=next((a for a in target_rows if a['INDX']==target_id),None)
                a=dict(existing) if existing else dict(db.tables['DGAI' if is_goalie else 'DPAI'].rows()[0])
                a['INDX']=target_id
                for dst,src in mapping.items():a[dst]=rating(attributes[src])
                a['FIGH']=min(3,attributes['YqJH'])
                if is_goalie:
                    a['STYL']=min(3,attributes['sFgQ']);a['FLOP']=0
                    for dst,src in {'POSI':'fdgB','PADL':'UVkI','CONS':'KzvQ'}.items():
                        a[dst]=2 if attributes[src]+36>=85 else 1 if attributes[src]+36>=60 else 0
                else:
                    a['PCBI']=attributes['baRY'];a['ODBI']=attributes['EksY'];a['SPBI']=attributes['hlsv']
                    # No equivalent awareness/poise stats exist in NHL 07.
                    # Its Hero and Prestige fields use Legacy overall as an
                    # explicit conversion rule, never an alleged exact mapping.
                    a['HERO']=a['PRES']=rating(attributes['FUWe'])
                if existing:target_rows[target_rows.index(existing)]=a
                else:target_rows.append(a)
                source_to_target[key]=(target_id,player_id)
                converted.append({'first':new['FNME'],'last':new['LNME'],'source_bio_id':key,
                    'target_bio_id':target_id,'target_player_id':player_id,'position':new['POS_'],
                    'original_face_retained':bool(old),'source_overall':attributes['FUWe']+36})
            _,player_id=source_to_target[key]
            newr={k:0 for k in original['nhlrost.tdb'].tables['ROST'].fields}
            newr.update(TEAM=target_team,INDX=player_id,JERS=r['tRVs'],CAPT=min(3,r['lcCm']),DRES=1 if r['jZSh']==1 else 0)
            for dst,src in LINES.items():newr[dst]=r[src]
            output_rosters.append(newr)
        team=next(t for t in teams if t['INDX']==target_team)
        source_data=legacy_teams[source]
        full=source_data['JkmY']
        if source==226:full='Vegas Golden Knights'
        elif source==228:full='Seattle Kraken'
        elif source==229:full='Utah Mammoth'
        team.update(FNME=fit(full,31),SNME=fit(source_data['ITNQ'].replace('_',' ').title(),32),
            ABBR={226:'VGK',228:'SEA',229:'UTA'}.get(source,fit(source_data['RPbr'],5)))
    main_roster=[r for r in db.tables['ROST'].rows() if r['TEAM'] not in source_team]+output_rosters
    changed={'SPBT':bio,'SPAI':skater,'SGAI':goalie,'PLAY':players,'STEA':teams,'ROST':main_roster}
    for team in source_team:
        entries=[r for r in output_rosters if r['TEAM']==team]
        for line in ['G1__','G2__','L1C_','L1LW','L1RW','L1LD','L1RD','L2C_','L2LW','L2RW','L2LD','L2RD','L3C_','L3LW','L3RW','L3LD','L3RD','L4C_','L4LW','L4RW']:
            assert sum(r[line] for r in entries)==1,(team,line,'line must have one player')
    files['nhl2007.tdb']=refpack_literal(db.rewrite(changed))
    for name in ['nhlbioatt.tdb']:
        files[name]=refpack_literal(original[name].rewrite({k:v for k,v in changed.items() if k in original[name].tables}))
    for name in ['nhlrost.tdb','nhlonlinerost.tdb']:
        retained=[r for r in original[name].tables['ROST'].rows() if r['TEAM'] not in source_team]
        files[name]=refpack_literal(original[name].rewrite({'ROST':retained+output_rosters}))
    # Check every new packed stream through the actual original decoder.
    changed_files=['nhl2007.tdb','nhlbioatt.tdb','nhlrost.tdb','nhlonlinerost.tdb']
    for name in changed_files:
        decoded_output=original_decompress(files[name]);Database(decoded_output)
    report={'format':'NHL07-ROSTER-1','source_sha256':hashlib.sha256(roster).hexdigest(),
        'base_viv_sha256':hashlib.sha256(base_viv).hexdigest(),'source_to_target_teams':source_team,
        'teams':len(source_team),'unique_players':len(converted),'roster_slots':len(output_rosters),
        'new_generated_faces':sum(not p['original_face_retained'] for p in converted),
        'unknown_nation_codes':sorted(set(unknown_nations)),'players':converted,
        'changed_files':changed_files,'limitations':[
            'Player data and line assignments converted; NHL 07 gameplay rating model differs from Legacy.',
            'Original NHL 07 face/portrait retained only for exact identity matches; new players use a valid original generated-player template.',
            'NHL 07 original uniforms, arenas, logos and commentary retained.',
            'Vegas/Seattle occupy Eastern/Western All-Star slots; Utah replaces Phoenix; Winnipeg replaces Atlanta.',
            'Existing saved seasons retain their own rosters; 32-team dynasty scheduling is not validated.',
            'Non-NHL clubs and original free-agent list retain NHL 07 reference data.']}
    return big_write(files),report

if __name__=='__main__':
    ap=argparse.ArgumentParser();ap.add_argument('--zip',required=True);ap.add_argument('--label',default='Legacy 2026–27');ap.add_argument('--date',default='2026-10-06');args=ap.parse_args()
    source=Path(args.zip)
    with zipfile.ZipFile(source) as z:
        names=[n for n in z.namelist() if not n.startswith('__MACOSX/') and not n.endswith('/') and n!='roster.properties']
        assert len(names)==1;roster=z.read(names[0])
    viv,report=convert((ROOT/'disc/db/db.viv').read_bytes(),roster)
    out=ROOT/'mods/rosters';out.mkdir(parents=True,exist_ok=True)
    (out/'db.viv').write_bytes(viv);report.update(label=args.label,rosterDate=args.date,payload_sha256=hashlib.sha256(viv).hexdigest())
    fapt=big_entries((ROOT/'disc/preload/fapt.viv').read_bytes())
    header_size=struct.unpack_from('>I',viv,12)[0];fapt['db.bh']=refpack_literal(viv[:header_size])
    updated_fapt=big_write(fapt);(out/'preload').mkdir(exist_ok=True);(out/'preload/fapt.viv').write_bytes(updated_fapt)
    assert original_decompress(big_entries(updated_fapt)['db.bh'])==viv[:header_size]
    report['cached_index_archive_sha256']=hashlib.sha256(updated_fapt).hexdigest()
    (out/'conversion.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
    metadata=f'format=NHL07-ROSTER-1\npayload=db.viv\nsha256={report["payload_sha256"]}\nlabel={args.label}\nrosterDate={args.date}\nxbeSha256=438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83\n'
    with zipfile.ZipFile(out/'NHL07-Legacy-2026-27.zip','w',compression=zipfile.ZIP_DEFLATED) as z:z.writestr('db.viv',viv);z.writestr('roster.properties',metadata)
    print(json.dumps({k:v for k,v in report.items() if k!='players'},ensure_ascii=False,indent=2))
