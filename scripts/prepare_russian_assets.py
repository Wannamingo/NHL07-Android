"""Recreate derived localization from the user's extracted disc and font donors.

No disc assets or donor fonts are supplied by this source package. This helper
adapts the already included Java RefPack codec for public build preparation;
the original game/runtime source files are not rewritten.
"""
from pathlib import Path
import argparse
import json
import runpy
import shutil
import struct
import sys
import zipfile

ROOT = Path(__file__).resolve().parents[1]


def unpack(data):
    if data[:2] != b'\x10\xfb':
        return data
    if len(data) < 6:
        raise ValueError('Truncated RefPack')
    size = int.from_bytes(data[2:5], 'big')
    if size > 8 * 1024 * 1024:
        raise ValueError('Oversized RefPack')
    output = bytearray()
    position = 5
    while position < len(data):
        token = data[position]
        position += 1
        length = distance = 0
        needed = 1 if token < 0x80 else 2 if token < 0xc0 else 3 if token < 0xe0 else 0
        if position + needed > len(data):
            raise ValueError('Truncated RefPack command')
        if token < 0x80:
            literal = token & 3
            length = ((token & 0x1c) >> 2) + 3
            distance = ((token & 0x60) << 3) + data[position] + 1
        elif token < 0xc0:
            literal = data[position] >> 6
            length = (token & 63) + 4
            distance = ((data[position] & 63) << 8) + data[position + 1] + 1
        elif token < 0xe0:
            literal = token & 3
            distance = ((token & 16) << 12) + (data[position] << 8) + data[position + 1] + 1
            length = ((token & 12) << 6) + data[position + 2] + 5
        else:
            literal = token & 3 if token >= 0xfc else ((token & 31) << 2) + 4
        position += needed
        if position + literal > len(data) or len(output) + literal + length > size:
            raise ValueError('RefPack extent outside resource')
        output.extend(data[position:position + literal])
        position += literal
        if token >= 0xfc:
            if len(output) != size:
                raise ValueError('RefPack size mismatch')
            return bytes(output)
        if distance > len(output):
            raise ValueError('RefPack back-reference outside resource')
        for _ in range(length):
            output.append(output[-distance])
    raise ValueError('Unfinished RefPack')


def find_casefold(folder, relative):
    path = folder
    for part in relative.split('/'):
        matches = [entry for entry in path.iterdir() if entry.name.casefold() == part.casefold()]
        if len(matches) != 1:
            raise ValueError('Missing or ambiguous disc resource: ' + relative)
        path = matches[0]
    return path


def run_source(path, substitutions=None):
    if not substitutions:
        runpy.run_path(str(path), run_name='__main__')
        return
    code = path.read_text(encoding='utf-8')
    for before, after in substitutions.items():
        if code.count(before) != 1:
            raise ValueError('Expected donor-font expression changed in ' + path.name)
        code = code.replace(before, after)
    exec(compile(code, str(path), 'exec'), {'__name__': '__main__', '__file__': str(path)})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--disc', type=Path)
    parser.add_argument('--smallcaps-font', type=Path)
    parser.add_argument('--regular-font', type=Path)
    parser.add_argument('--artwork-apk', type=Path)
    parser.add_argument('--icon', type=Path)
    parser.add_argument('--background', type=Path)
    parser.add_argument('--self-test', action='store_true')
    args = parser.parse_args()
    game = ROOT / 'NHL07-x64'
    android = ROOT / 'NHL07-android'
    sys.path.insert(0, str(game / 'tools'))
    import game_archives
    if args.self_test:
        for size in (0, 1, 3, 4, 111, 112, 113, 1000):
            data = bytes((i * 17) & 255 for i in range(size))
            assert unpack(game_archives.refpack_literal(data)) == data
        # Literal A + overlapping 3-byte distance-1 copy -> AAAA.
        assert unpack(b'\x10\xfb\x00\x00\x04\x01\x00A\xfc') == b'AAAA'
        for invalid in (b'\x10\xfb', b'\x10\xfb\x00\x00\x01\x00', b'\x10\xfb\x00\x00\x03\xfc'):
            try:
                unpack(invalid)
            except ValueError:
                pass
            else:
                raise AssertionError('Malformed RefPack accepted')
        print('PUBLIC_ASSET_PREPARATION bounded RefPack contracts passed; no assets or device changed')
        return
    if not args.disc or not args.smallcaps_font or not args.regular_font:
        parser.error('--disc, --smallcaps-font and --regular-font are required')
    if not args.smallcaps_font.is_file() or not args.regular_font.is_file():
        parser.error('Supply readable font donor files under the appropriate licenses')
    required = ['fe/local.viv', 'db/db.viv', 'preload/fboot.viv', 'fe/comapt.viv', 'fe/gameapt.viv',
                'fe/gamefont.xfn', 'fe/popupfnt.xfn', 'fe/subtitle.xfn']
    for relative in required:
        source = find_casefold(args.disc.resolve(), relative)
        destination = game / 'disc' / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        if source.resolve() != destination.resolve():
            shutil.copy2(source, destination)
    analysis = game / 'analysis/localization'
    analysis.mkdir(parents=True, exist_ok=True)
    (game / 'mods/localization/ru').mkdir(parents=True, exist_ok=True)
    archive = game_archives.big_entries((game / 'disc/fe/local.viv').read_bytes())
    for name in ('frontEnglish.bin', 'gameEnglish.bin', 'LOCALE_ENGLISH.loc'):
        names = [key for key in archive if key.casefold() == name.casefold()]
        if len(names) != 1:
            raise ValueError('Missing original locale table: ' + name)
        data = unpack(archive[names[0]])
        (analysis / name).write_bytes(data)
        if name.endswith('.bin'):
            count = struct.unpack_from('<I', data, 4)[0]
            if not 0 < count < 100000 or 16 + count * 8 > len(data):
                raise ValueError('Invalid original locale index')
            entries = []
            for index in range(count):
                key = struct.unpack_from('<I', data, 16 + index * 4)[0]
                offset = struct.unpack_from('<I', data, 16 + (count + index) * 4)[0]
                if not 16 + count * 8 <= offset < len(data):
                    raise ValueError('Invalid original locale string extent')
                entries.append({'key': f'{key:08X}', 'text': data[offset:data.index(0, offset)].decode('utf-8')})
            (analysis / (name + '.json')).write_text(json.dumps(entries, ensure_ascii=False, indent=2), encoding='utf-8')
    game_archives.original_decompress = unpack
    run_source(game / 'tools/build_russian_text.py')
    original = "Path('C:/Windows/Fonts/arialbi.ttf' if smallcaps else 'C:/Windows/Fonts/ARIALN.TTF')"
    donors = 'Path(' + repr(str(args.smallcaps_font.resolve())) + ' if smallcaps else ' + repr(str(args.regular_font.resolve())) + ')'
    for name in ('build_cyrillic_fonts.py', 'build_cyrillic_ttf.py'):
        run_source(game / 'tools' / name, {original: donors})
    (android / 'analysis').mkdir(parents=True, exist_ok=True)
    run_source(android / 'tools/prepare_localization_assets.py')
    artwork = {}
    if args.artwork_apk:
        with zipfile.ZipFile(args.artwork_apk) as archive:
            artwork['background.jpg'] = archive.read('assets/launcher/background.jpg')
            icons = [name for name in archive.namelist() if name.startswith('res/') and name.endswith('/game_icon.png')]
            if len(icons) != 1:
                raise ValueError('Missing or ambiguous launcher artwork in APK')
            artwork['game_icon.png'] = archive.read(icons[0])
    if args.icon:
        artwork['game_icon.png'] = args.icon.read_bytes()
    if args.background:
        artwork['background.jpg'] = args.background.read_bytes()
    for name, payload in artwork.items():
        target = android / ('android/assets/launcher/background.jpg' if name == 'background.jpg' else 'android/res/drawable-nodpi/game_icon.png')
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(payload)
    print('Prepared user-owned disc derivatives; these generated binary assets are not licensed by this helper.')


if __name__ == '__main__':
    main()
