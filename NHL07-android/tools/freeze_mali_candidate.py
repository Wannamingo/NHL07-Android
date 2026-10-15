"""Freeze the current system-GLES APK, debug core, sources and supplied evidence.

Run after packaging and updating STATUS.txt / PERFORMANCE.txt. Relative
--evidence paths resolve against this Android project (workspace-relative
paths also work if unambiguous). Evidence retains its workspace-relative path.
The tool never builds, installs, changes release claims, or overwrites a prior
checkpoint. Original game inputs, local toolchains and signing keys are omitted.
"""
from pathlib import Path
import argparse
import datetime
import hashlib
import json
import os
import re
import shutil
import struct
import uuid
import zipfile


ROOT = Path(__file__).resolve().parents[1]
WORKSPACE = ROOT.parents[1]
PROJECTS = (ROOT, ROOT.with_name('NHL07-x64'))
SOURCE_FOLDERS = ('src', 'tools', 'tests', 'vendor', 'android', 'java', 'deps')
SKIP_DIRS = {
    '.git', '.svn', '.hg', '.vs', '.idea', '.gradle', '__pycache__',
    'node_modules', 'toolchains', 'cmakefiles', 'build', 'out', 'dist',
    'obj', 'bin', 'archives', 'checkpoints',
}
SECRET_NAMES = {
    'local-toolchains.json', 'local.properties', 'gradle.properties',
    'credentials', 'credentials.json', 'secrets', 'secrets.json',
}
SECRET_SUFFIXES = {'.keystore', '.jks', '.p12', '.pfx', '.pem', '.key'}
OUTPUT_SUFFIXES = {
    '.pyc', '.pyo', '.o', '.obj', '.a', '.lib', '.so', '.dll', '.exe',
    '.pdb', '.class', '.dex', '.apk', '.aab', '.zip', '.7z', '.rar',
    '.tar', '.gz', '.xz', '.bz2', '.iso', '.xbe', '.viv',
}
MOD_SOURCE_SUFFIXES = {
    '.json', '.py', '.txt', '.md', '.csv', '.xml', '.yaml', '.yml',
    '.toml', '.c', '.cpp', '.h', '.hpp',
}


def require(condition, message):
    if not condition:
        raise ValueError(message)


def digest_stream(stream):
    digest = hashlib.sha256()
    for chunk in iter(lambda: stream.read(1024 * 1024), b''):
        digest.update(chunk)
    return digest.hexdigest()


def sha(path):
    with Path(path).open('rb') as stream:
        return digest_stream(stream)


def workspace_relative(path):
    resolved = Path(path).resolve(strict=True)
    require(resolved.is_relative_to(WORKSPACE), f'Path leaves workspace: {path}')
    return resolved.relative_to(WORKSPACE).as_posix()


def is_link(path):
    return path.is_symlink() or (hasattr(path, 'is_junction') and path.is_junction())


def excluded(path):
    """Common restrictions for sources and explicitly requested evidence."""
    relative = workspace_relative(path)
    parts = [part.casefold() for part in Path(relative).parts]
    name = parts[-1]
    directories = parts if path.is_dir() else parts[:-1]
    if any(part in SKIP_DIRS or part.startswith('cmake-build-') for part in directories):
        return 'generated, toolchain, archive or checkpoint directory'
    for project in PROJECTS:
        if path.resolve().is_relative_to(project):
            local = path.resolve().relative_to(project).parts
            if local and local[0].casefold() in {'disc', 'input', 'saves'}:
                return 'original game input or save directory'
    if parts[0] == 'sources':
        return 'synced reference material'
    if name in SECRET_NAMES or name.startswith(('.env', 'credentials.', 'secrets.')):
        return 'local configuration or secret file'
    if path.suffix.casefold() in SECRET_SUFFIXES:
        return 'signing or credential material'
    if path.suffix.casefold() in OUTPUT_SUFFIXES:
        return 'compiled output, archive or original disc asset'
    return None


def walk_files(folder):
    require(folder.is_dir() and not is_link(folder), f'Expected ordinary directory: {folder}')
    workspace_relative(folder)

    def on_error(error):
        raise error

    for base, dirs, names in os.walk(folder, topdown=True, onerror=on_error, followlinks=False):
        base = Path(base)
        dirs[:] = sorted(name for name in dirs if name.casefold() not in SKIP_DIRS
                         and not name.casefold().startswith('cmake-build-')
                         and not is_link(base / name))
        for name in sorted(names):
            path = base / name
            require(not is_link(path), f'Refusing linked file: {path}')
            workspace_relative(path)
            yield path


def file_record(path):
    return {'path': workspace_relative(path), 'bytes': path.stat().st_size, 'sha256': sha(path)}


def resolve_evidence(value):
    path = Path(value)
    candidates = [path] if path.is_absolute() else [ROOT / path, WORKSPACE / path]
    matches = {candidate.resolve() for candidate in candidates if candidate.exists()}
    require(len(matches) == 1, f'Evidence path missing or ambiguous: {value}')
    resolved = matches.pop()
    workspace_relative(resolved)
    require(not is_link(resolved), f'Refusing linked evidence: {resolved}')
    return resolved


def elf_summary(stream):
    stream.seek(0)
    header = stream.read(64)
    require(len(header) == 64 and header[:7] == b'\x7fELF\x02\x01\x01', 'Expected ELF64 little-endian core')
    require(struct.unpack_from('<H', header, 16)[0] == 3, 'Expected shared ELF core')
    require(struct.unpack_from('<H', header, 18)[0] == 183, 'Expected AArch64 core')
    offset = struct.unpack_from('<Q', header, 32)[0]
    entry_size, count = struct.unpack_from('<HH', header, 54)
    require(entry_size >= 56 and 0 < count < 1024, 'Invalid ELF program headers')
    alignments = []
    for index in range(count):
        stream.seek(offset + index * entry_size)
        data = stream.read(56)
        require(len(data) == 56, 'Truncated ELF program header')
        entry = struct.unpack('<IIQQQQQQ', data)
        if entry[0] == 1:
            alignments.append(entry[-1])
    require(alignments and min(alignments) >= 16384, 'Core lacks 16 KiB LOAD alignment')
    return {'machine': 'ELF64 AArch64', 'load_alignments': alignments}


def validate_artifacts():
    apk_metadata = ROOT / 'analysis/apk.json'
    build_metadata = ROOT / 'analysis/build.json'
    apk = json.loads(apk_metadata.read_text(encoding='utf-8'))
    build = json.loads(build_metadata.read_text(encoding='utf-8'))
    require(apk.get('system_only') is True, 'APK metadata does not declare system-only graphics')
    require(apk.get('graphics_libraries') == [], 'Custom graphics libraries are declared')
    require(apk.get('turnip_sha256') is None, 'Turnip is declared in APK metadata')
    require(apk.get('graphics_default') == 0 and apk.get('graphics_modes') == ['System GLES'],
            'APK exposes a custom graphics mode')
    require(build.get('custom_graphics') is False, 'Core build metadata enables custom graphics')
    require(apk.get('signature_verified') is True and apk.get('zip_alignment_16k') is True,
            'Package verification metadata is incomplete')
    require(apk.get('complete_disc_or_xbe_included') is False, 'Package metadata declares original game executable/disc')
    require(apk.get('abi') == 'arm64-v8a', 'Expected ARM64 Android package')
    require(apk.get('debuggable') is False, 'Expected a non-debuggable candidate APK')
    version = apk.get('version', '')
    require(isinstance(version, str) and re.fullmatch(r'[A-Za-z0-9][A-Za-z0-9._-]{0,95}', version)
            and '..' not in version, 'Unsafe or missing package version')
    require(type(apk.get('version_code')) is int and apk['version_code'] > 0,
            'Missing package version code')
    artifact = Path(apk['apk']).resolve(strict=True)
    core = Path(build['artifact']).resolve(strict=True)
    workspace_relative(artifact)
    workspace_relative(core)
    require(core == (ROOT / 'build/libnhl07_core.so').resolve(), 'Unexpected debug core path')
    require(artifact.is_file() and not is_link(artifact) and core.is_file() and not is_link(core),
            'Artifact paths must be ordinary files')
    require(sha(artifact) == apk['sha256'] and artifact.stat().st_size == apk['bytes'],
            'Current APK differs from package metadata')
    require(sha(core) == build['sha256'] == apk['native_debug_sha256'],
            'Current debug core differs from build/package metadata')
    with core.open('rb') as stream:
        debug_elf = elf_summary(stream)
    core_member = f"lib/{apk['abi']}/{core.name}"
    with zipfile.ZipFile(artifact) as archive:
        names = archive.namelist()
        require(len(names) == len(set(names)), 'Duplicate APK entries')
        require([name for name in names if name.startswith('lib/')] == [core_member],
                'Actual APK contains additional native libraries')
        forbidden = ('turnip', 'freedreno', 'adrenotools', 'libegl_angle', 'libglesv2_angle')
        require(not any(name.casefold().startswith('assets/graphics/') or
                        any(word in name.casefold() for word in forbidden) or
                        name.casefold().endswith(('.iso', '.xbe', '.viv')) for name in names),
                'Actual APK contains custom graphics or original disc assets')
        for member in archive.infolist():
            if member.is_dir():
                continue
            with archive.open(member) as stream:
                magic = stream.read(4)
                require(magic != b'\x7fELF' or member.filename == core_member,
                        f'Unexpected embedded ELF asset: {member.filename}')
        with archive.open(core_member) as stream:
            stripped_elf = elf_summary(stream)
            stream.seek(0)
            require(digest_stream(stream) == apk['native_apk_sha256'],
                    'Embedded stripped core differs from package metadata')
        require(stripped_elf['load_alignments'] == apk['load_alignments'], 'APK ELF alignment metadata differs')
        require(archive.testzip() is None, 'APK CRC verification failed')
    for name in ('STATUS.txt', 'PERFORMANCE.txt'):
        text = (ROOT / name).read_text(encoding='utf-8')
        require(version in text and apk['sha256'].casefold() in text.casefold(),
                f'{name} must identify the current version and exact APK SHA256 before freezing')
    return apk, build, artifact, core, debug_elf, stripped_elf


def collect_sources():
    files = set()
    for project in PROJECTS:
        require(project.is_dir(), f'Missing source project: {project}')
        require((project / 'CMakeLists.txt').is_file(), f'Missing CMake source: {project}')
        files.add(project / 'CMakeLists.txt')
        for name in SOURCE_FOLDERS:
            if (project / name).is_dir():
                files.update(path for path in walk_files(project / name) if not excluded(path))
        for name in ('mods/localization', 'mods/rosters'):
            if (project / name).is_dir():
                files.update(path for path in walk_files(project / name)
                             if path.suffix.casefold() in MOD_SOURCE_SUFFIXES and not excluded(path))
    return sorted(files, key=workspace_relative)


def collect_evidence(requested):
    files = {ROOT / name for name in ('analysis/apk.json', 'analysis/build.json', 'STATUS.txt', 'PERFORMANCE.txt')}
    # Current and future proof JSONs are included without a version-specific
    # allowlist. Extra logs, captures or whole benchmark folders are explicit.
    for project in PROJECTS:
        if (project / 'analysis').is_dir():
            files.update(path for path in walk_files(project / 'analysis')
                         if path.suffix.casefold() == '.json' and not excluded(path))
    for value in requested:
        selected = resolve_evidence(value)
        if selected.is_dir():
            reason = excluded(selected)
            require(reason is None, f'Excluded evidence directory ({reason}): {selected}')
            found = list(walk_files(selected))
            require(found, f'Empty evidence directory: {selected}')
        else:
            found = [selected]
        for path in found:
            reason = excluded(path)
            require(reason is None, f'Excluded requested evidence ({reason}): {path}')
            files.add(path)
    for path in files:
        require(path.is_file() and not is_link(path), f'Missing or linked evidence: {path}')
    return sorted(files, key=workspace_relative)


def write_json(path, value):
    path.write_text(json.dumps(value, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--evidence', nargs='+', action='append', default=[],
                        help='Additional existing files/directories, relative to Android project or workspace')
    args = parser.parse_args()
    requested = [value for group in args.evidence for value in group]
    apk, build, artifact, core, debug_elf, stripped_elf = validate_artifacts()
    source_records = [file_record(path) for path in collect_sources()]
    evidence_records = [file_record(path) for path in collect_evidence(requested)]
    now = datetime.datetime.now(datetime.timezone.utc)
    checkpoint = ROOT / 'checkpoints' / (
        now.strftime('%Y%m%d-%H%M%SZ') + '-mali-' + apk['version'] + '-' + str(apk['version_code']))
    require(checkpoint.resolve().is_relative_to(ROOT), 'Checkpoint destination leaves Android project')
    require(not checkpoint.exists(), f'Checkpoint already exists: {checkpoint}')
    staging = checkpoint.with_name(checkpoint.name + '.partial-' + uuid.uuid4().hex[:8])
    staging.mkdir(parents=True, exist_ok=False)
    copied = {}

    def copy_pinned(source, destination, expected):
        target = staging / destination
        key = target.relative_to(staging).as_posix()
        require(key.casefold() not in {name.casefold() for name in copied}, f'Destination collision: {key}')
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)
        require(sha(target) == expected, f'File changed while freezing: {source}')
        copied[key] = {'sha256': expected, 'bytes': target.stat().st_size,
                       'source': workspace_relative(source)}

    apk_name = 'NHL07-RG477M-' + apk['version'] + '.apk'
    copy_pinned(artifact, 'artifacts/' + apk_name, apk['sha256'])
    copy_pinned(core, 'artifacts/' + core.name, apk['native_debug_sha256'])
    for record in evidence_records:
        copy_pinned(WORKSPACE / record['path'], 'evidence/' + record['path'], record['sha256'])
    for name, expected in (('analysis/apk.json', apk), ('analysis/build.json', build)):
        frozen_metadata = staging / 'evidence' / workspace_relative(ROOT / name)
        require(json.loads(frozen_metadata.read_text(encoding='utf-8')) == expected,
                f'Metadata changed during freeze: {name}')
    for name in ('STATUS.txt', 'PERFORMANCE.txt'):
        frozen_text = (staging / 'evidence' / workspace_relative(ROOT / name)).read_text(encoding='utf-8')
        require(apk['version'] in frozen_text and apk['sha256'].casefold() in frozen_text.casefold(),
                f'Document changed to a different candidate: {name}')
    sidecar = staging / 'artifacts' / (Path(apk_name).stem + '.sha256')
    sidecar.write_text(apk['sha256'] + '  ' + apk_name + '\n', encoding='ascii')

    source_zip = staging / 'sources.zip'
    with zipfile.ZipFile(source_zip, 'x', zipfile.ZIP_DEFLATED, compresslevel=6, strict_timestamps=False) as archive:
        seen = set()
        for record in source_records:
            relative = record['path']
            require(relative.casefold() not in seen, f'Source archive collision: {relative}')
            seen.add(relative.casefold())
            archive.write(WORKSPACE / relative, relative)
    with zipfile.ZipFile(source_zip) as archive:
        require(len(archive.infolist()) == len(source_records), 'Source ZIP entry count differs')
        for record in source_records:
            with archive.open(record['path']) as stream:
                require(digest_stream(stream) == record['sha256'],
                        f'Source changed while freezing: {record["path"]}')
    write_json(staging / 'source-pin.json', {'format': 1, 'files': source_records,
               'scope': list(SOURCE_FOLDERS) + ['CMakeLists.txt', 'mods/localization text', 'mods/rosters text'],
               'excluded_directories': sorted(SKIP_DIRS),
               'excluded_suffixes': sorted(OUTPUT_SUFFIXES | SECRET_SUFFIXES),
               'excluded_local_configuration': sorted(SECRET_NAMES)})
    # Hash every frozen file by its full checkpoint path. The manifest is the
    # sole exception because its own hash is supplied in a separate sidecar.
    frozen = {}
    for path in sorted(staging.rglob('*')):
        if path.is_file():
            relative = path.relative_to(staging).as_posix()
            frozen[relative] = {'sha256': sha(path), 'bytes': path.stat().st_size}
            if relative in copied:
                frozen[relative]['source'] = copied[relative]['source']
    manifest = {
        'format': 1, 'kind': 'System GLES Mali candidate snapshot',
        'created_utc': now.isoformat(), 'version': apk['version'], 'version_code': apk['version_code'],
        'package': apk['package'], 'apk_sha256': apk['sha256'],
        'native_debug_sha256': apk['native_debug_sha256'], 'native_apk_sha256': apk['native_apk_sha256'],
        'verified_system_only': True, 'actual_apk_native_libraries': ['lib/arm64-v8a/' + core.name],
        'actual_apk_custom_graphics_assets': False, 'debug_core': debug_elf, 'apk_core': stripped_elf,
        'package_signature_previously_verified': apk['signature_verified'],
        'signature_reverified_by_freeze': False, 'source_files': len(source_records),
        'files': frozen, 'requested_evidence': requested,
        'claims': 'STATUS/PERFORMANCE and evidence are copied verbatim. Freezing does not establish installation, gameplay, FPS gains or recovery behavior.',
        'source_relationship': 'Current workspace source snapshot. Core hashes match build/package metadata; compilation-to-source attestation is not inferred.',
    }
    write_json(staging / 'manifest.json', manifest)
    manifest_sha = sha(staging / 'manifest.json')
    (staging / 'manifest.sha256').write_text(manifest_sha + '  manifest.json\n', encoding='ascii')
    for relative, record in frozen.items():
        require(sha(staging / relative) == record['sha256'], f'Frozen file changed: {relative}')
    require(not checkpoint.exists(), f'Checkpoint appeared during freeze: {checkpoint}')
    require(staging.resolve().is_relative_to(ROOT) and checkpoint.resolve().is_relative_to(ROOT),
            'Checkpoint rename leaves Android project')
    staging.rename(checkpoint)
    print(json.dumps({'checkpoint': str(checkpoint), 'version': apk['version'],
                      'apk_sha256': apk['sha256'], 'manifest_sha256': manifest_sha,
                      'source_files': len(source_records), 'frozen_files': len(frozen)}, indent=2))


if __name__ == '__main__':
    main()
