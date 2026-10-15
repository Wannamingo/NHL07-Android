"""Read-only bounded audio-counter observation of the foreground NHL07 game.

Run with Python/Pillow. No launch, input, setting, installation or stream change.
Screenshots and underrun counters cannot establish subjective audible quality.
"""
from pathlib import Path
import argparse
import datetime
import hashlib
import io
import json
import re
import subprocess
import time

from PIL import Image
from analyze_audio_flinger import SnapshotError, analyze, normalize_dump_text, parse_tracks, select_track
from installed_identity import require_installed_apk
from watch_window_match import decode_screencap

ROOT = Path(__file__).resolve().parents[1]
PACKAGE = 'org.nhl07.port'
EXTERNAL = '/sdcard/Android/data/' + PACKAGE + '/files'


def focused_main(window_dump):
    focused = [line for line in window_dump.splitlines() if 'mCurrentFocus=' in line and '=null' not in line]
    if not focused:
        focused = [line for line in window_dump.splitlines() if 'mFocusedApp=' in line and '=null' not in line]
    pattern = re.compile(r'org\.nhl07\.port/(?:org\.nhl07\.port\.)?\.?MainActivity(?:\s|\}|$)')
    return bool(focused) and all(pattern.search(line) for line in focused)


def single_active_track(content, pid):
    rows = [row for row in parse_tracks(content) if row['pid'] == pid and row['fields']['Active'] == 'yes']
    if len(rows) != 1:
        raise SnapshotError(f'Expected one active app playback track for PID {pid}; found {len(rows)}')
    row = rows[0]
    return select_track(content, pid, row['track_id'], PACKAGE)


def self_test():
    assert focused_main('mCurrentFocus=Window{123 u0 org.nhl07.port/.MainActivity}')
    assert focused_main('mCurrentFocus=Window{123 u0 org.nhl07.port/org.nhl07.port.MainActivity}')
    assert focused_main('mCurrentFocus=null\nmFocusedApp=ActivityRecord{123 org.nhl07.port/.MainActivity}')
    assert not focused_main('mCurrentFocus=Window{123 other/.MainActivity}\nmFocusedApp=ActivityRecord{123 org.nhl07.port/.MainActivity}')
    assert not focused_main('mCurrentFocus=Window{123 org.nhl07.port/.LauncherActivity}')
    assert not focused_main('mCurrentFocus=null\nmFocusedApp=null')
    valid = io.BytesIO()
    Image.new('RGB', (2, 2), (32, 80, 160)).save(valid, format='PNG')
    prefix = b'warning from screencap\r\n'
    raw, image, removed = decode_screencap(prefix + valid.getvalue())
    assert raw == valid.getvalue() and image.size == (2, 2) and removed == len(prefix)
    fixture = ROOT / 'analysis/audio-diagnostic-20261015-151732Z/audio-flinger-before.txt'
    assert single_active_track(fixture.read_text(encoding='utf-8'), 8234)['track_id'] == 188
    print('AUDIO_WINDOW offline foreground, PNG-prefix and actual single-active-track checks passed; no ADB used')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--serial')
    parser.add_argument('--label', default='audio-window')
    parser.add_argument('--seconds', type=int, default=60)
    parser.add_argument('--self-test', action='store_true')
    args = parser.parse_args()
    if args.self_test:
        self_test()
        return
    if not args.serial:
        parser.error('--serial is required for device observation')
    if not 10 <= args.seconds <= 300:
        parser.error('--seconds must be between 10 and 300')
    config = json.loads((ROOT / 'local-toolchains.json').read_text())
    prefix = [config['adb'], '-P', str(config['adb_port']), '-s', args.serial]

    def adb(*command, binary=False):
        result = subprocess.run(prefix + list(command), capture_output=True, timeout=10)
        if result.returncode:
            raise RuntimeError((result.stdout + result.stderr).decode('utf-8', 'replace'))
        return result.stdout if binary else normalize_dump_text(result.stdout.decode('utf-8', 'replace'))

    sha = require_installed_apk(ROOT, prefix)
    metadata = json.loads((ROOT / 'analysis/apk.json').read_text())
    pid_text = adb('shell', 'pidof', PACKAGE).strip()
    if not re.fullmatch(r'\d+', pid_text):
        raise RuntimeError('Expected one existing NHL07 process; none or multiple found')
    pid = int(pid_text)

    def guard():
        if adb('shell', 'pidof', PACKAGE).strip() != pid_text:
            raise RuntimeError('NHL07 process stopped or changed')
        if not focused_main(adb('shell', 'dumpsys', 'window')):
            raise RuntimeError('NHL07 MainActivity is not the foreground window')

    guard()
    safe = lambda value: re.sub(r'[^A-Za-z0-9_.-]', '_', str(value))
    stamp = datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%d-%H%M%S-%fZ')
    folder = ROOT / 'analysis' / (safe(args.label) + '-' + safe(metadata['version']) + '-' + safe(args.serial) + '-' + stamp)
    folder.mkdir()
    started = time.monotonic()
    record = {
        'schema': 1, 'serial': args.serial, 'label': args.label,
        'version': metadata['version'], 'version_code': metadata.get('version_code'),
        'apk_sha256': sha, 'native_apk_sha256': metadata.get('native_apk_sha256'),
        'native_debug_sha256': metadata.get('native_debug_sha256'),
        'pid': pid, 'requested_seconds': args.seconds,
        'started_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'read_only_device_observation': True, 'input_sent': False,
        'audible_quality_verified': False, 'gameplay_verified': False, 'fps_benchmark': False,
        'completed': False, 'guards': [], 'screenshots': [],
        'tool_sha256': hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
        'limitations': [
            'Endpoint screenshots require visual inspection and cannot verify music or waveform correctness.',
            'AudioFlinger frame counters are not subjective audible-quality measurements.',
            'Screen capture and diagnostic reads add small observation overhead.',
            'Same process and foreground game are checked at intervals of at most five seconds, excluding ADB command latency.',
        ],
    }

    def save():
        (folder / 'record.json').write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')

    def screenshot(name):
        guard()
        raw, image, removed = decode_screencap(adb('exec-out', 'screencap', '-p', binary=True))
        guard()  # Do not save a capture if focus changed during collection.
        (folder / name).write_bytes(raw)
        record['screenshots'].append({'file': name, 'width': image.width, 'height': image.height,
                                      'stdout_prefix_bytes': removed, 'elapsed_seconds': round(time.monotonic() - started, 3)})

    print(json.dumps({'folder': str(folder), 'version': record['version'], 'pid': pid, 'apk_sha256': sha}), flush=True)
    save()
    failed = None
    try:
        guard()
        before_path = folder / 'audio-flinger-before.txt'
        before_path.write_text(adb('shell', 'dumpsys', 'media.audio_flinger'), encoding='utf-8')
        counter_start = time.monotonic()
        before_track = single_active_track(before_path.read_text(encoding='utf-8'), pid)
        record['track_identity'] = {key: before_track[key] for key in ('pid', 'track_id', 'session', 'port_id', 'sample_rate_hz')}
        record['track_identity']['format'] = before_track['fields'].get('Format')
        record['track_identity']['channel_mask'] = before_track['fields'].get('Chn mask')
        record['counter_start_elapsed_seconds'] = round(counter_start - started, 3)
        (folder / 'startup-before.log').write_text(adb('shell', 'cat', EXTERNAL + '/startup.log'), encoding='utf-8')
        screenshot('before.png')
        deadline = counter_start + args.seconds
        while time.monotonic() < deadline:
            guard()
            elapsed = time.monotonic() - counter_start
            record['guards'].append({'counter_elapsed_seconds': round(elapsed, 3), 'pid_unchanged': True, 'foreground_main': True})
            save()
            print(json.dumps({'audio_window_elapsed_seconds': round(elapsed, 1), 'pid': pid, 'foreground_main': True}), flush=True)
            time.sleep(max(0, min(5, deadline - time.monotonic())))
        guard()
        after_path = folder / 'audio-flinger-after.txt'
        after_path.write_text(adb('shell', 'dumpsys', 'media.audio_flinger'), encoding='utf-8')
        record['counter_window_elapsed_seconds'] = round(time.monotonic() - counter_start, 3)
        after_track = single_active_track(after_path.read_text(encoding='utf-8'), pid)
        if after_track['track_id'] != before_track['track_id']:
            raise SnapshotError('The active application audio track changed during the observation')
        (folder / 'startup-after.log').write_text(adb('shell', 'cat', EXTERNAL + '/startup.log'), encoding='utf-8')
        screenshot('after.png')
        guard()
        if require_installed_apk(ROOT, prefix) != sha:
            raise RuntimeError('Installed APK identity changed during the observation')
        summary = analyze(before_path, after_path, pid, before_track['track_id'], PACKAGE)
        summary['observed_apk_sha256'] = sha
        summary['observed_version'] = metadata['version']
        summary['installed_apk_identity_verified_at_both_endpoints'] = True
        summary['counter_window_elapsed_seconds'] = record['counter_window_elapsed_seconds']
        (folder / 'summary.json').write_text(json.dumps(summary, indent=2) + '\n', encoding='utf-8')
        record['completed'] = True
        record['stop_reason'] = 'Requested bounded observation completed with same process, track and installed APK'
        record['delta'] = summary['delta']
    except (Exception, KeyboardInterrupt) as error:
        failed = error
        record['stop_reason'] = type(error).__name__ + ': ' + str(error)
    finally:
        record['elapsed_seconds'] = round(time.monotonic() - started, 3)
        record['finished_utc'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        record['artifacts'] = {path.name: {'sha256': hashlib.sha256(path.read_bytes()).hexdigest(), 'bytes': path.stat().st_size}
                               for path in folder.iterdir() if path.is_file() and path.name != 'record.json'}
        save()
    print(json.dumps({'folder': str(folder), 'completed': record['completed'], 'stop_reason': record['stop_reason'],
                      'delta': record.get('delta'), 'audible_quality_verified': False}, indent=2), flush=True)
    if failed:
        raise SystemExit(2)


if __name__ == '__main__':
    main()
