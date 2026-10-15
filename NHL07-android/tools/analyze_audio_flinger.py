"""Compare one app's current playback-track counters in two saved dumpsys snapshots.

Offline only: no ADB and no stream changes. Deliberately reject identity changes,
counter resets/wraps, flushes, missing columns and ambiguous matches.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
from datetime import datetime, timezone
from pathlib import Path


class SnapshotError(ValueError):
    """The saved snapshots cannot support this comparison."""


def normalize_dump_text(content: str) -> str:
    """Normalize only text: ADB shell CRLF can become CRCRLF on Windows save."""
    return re.sub(r"\r+\n", "\n", content).replace("\r", "\n")


_HEADER_TOKEN = re.compile(
    r"Port\s+Id|Chn\s+mask|VS\s+dB|[GLR]\s+dB|Main\s+Buf|Aux\s+Buf|\S+",
    re.IGNORECASE,
)
_REQUIRED = {"Type", "Id", "Active", "Client", "Session", "SRate", "Server", "Underruns"}
_SEMANTIC_SOURCES = [
    {
        "url": "https://android.googlesource.com/platform/frameworks/av/+/82aaf94a5b18939e4d790bbc752031f3070704a3",
        "supports": "AudioFlinger dumpsys reports underrun frames, replacing its older occurrence counter.",
    },
    {
        "url": "https://android.googlesource.com/platform/frameworks/av/+/23f552f22abd6bf336484c7085efd46bebd67d89/services/audioflinger/Tracks.cpp",
        "supports": "Playback-track dump fields use mCblk->mServer and getUnderrunFrames().",
    },
    {
        "url": "https://android.googlesource.com/platform/frameworks/av/+/a78e104/media/libmedia/AudioTrackShared.cpp",
        "supports": "ServerProxy::releaseBuffer increments mServer by the released buffer's frame count.",
    },
    {
        "url": "https://android.googlesource.com/platform/frameworks/av/+/381fd1ea6b79bf6d145e211880c4fe49cce8f784/services/audioflinger/Threads.cpp",
        "supports": "Fast-track accounting can charge a partial underrun as a whole mixer period.",
    },
]


def _header(line: str) -> list[str] | None:
    words = [re.sub(r"\s+", " ", x) for x in _HEADER_TOKEN.findall(line.strip())]
    if words[:3] != ["Type", "Id", "Active"]:
        return None
    if len(set(words)) != len(words):
        raise SnapshotError("Duplicate playback-track header column")
    if not _REQUIRED <= set(words):
        raise SnapshotError("Playback-track header lacks " + ", ".join(sorted(_REQUIRED - set(words))))
    return words


def _integer(value: str, field: str, base: int = 10, suffix: str = "") -> int:
    pattern = r"(?:0[xX])?[0-9a-fA-F]+" if base == 16 else r"\d+"
    match = re.fullmatch("(" + pattern + ")" + ("[" + re.escape(suffix) + "]?" if suffix else ""), value)
    if not match:
        raise SnapshotError(f"Invalid {field}: {value!r}")
    number = int(match[1], base)
    if number > 0xFFFFFFFF:
        raise SnapshotError(f"{field} is outside the supported uint32 range")
    return number


def parse_tracks(content: str) -> list[dict]:
    """Read current track tables only, excluding Local log / historical rows.

    Multiword header columns are normalized. Data columns are indexed by their
    names, so additional/reordered columns after Active do not shift counters.
    A blank normal-track Type and appended display markers are supported.
    """
    rows: list[dict] = []
    columns = None
    for line_number, line in enumerate(normalize_dump_text(content).splitlines(), 1):
        candidate = _header(line)
        if candidate is not None:
            columns = candidate
            continue
        if columns is None:
            continue
        if not line.strip():
            # read_text() universal-newline decoding may already have turned
            # a stored CRCRLF into two LF characters; retain the table header.
            continue
        tokens = line.split()
        active_at = next((i for i, token in enumerate(tokens[:5]) if token in {"yes", "no"}), None)
        if active_at is None or active_at < 1 or not tokens[active_at - 1].isdigit():
            columns = None
            continue
        # Type can be empty (normal track), F1, P, S or F1 P. Its Id is always
        # immediately before the Active yes/no token in this named table.
        values = {"Type": " ".join(tokens[:active_at - 1]), "Id": tokens[active_at - 1], "Active": tokens[active_at]}
        remaining = tokens[active_at + 1:]
        tail_columns = columns[3:]
        if len(remaining) < len(tail_columns):
            raise SnapshotError(f"Truncated playback-track row at line {line_number}")
        if len(remaining) > len(tail_columns):
            # AAudio latency appends t/k after its numeric latency. No other
            # unidentified extra token is accepted, to avoid column drift.
            if tail_columns[-1] != "Latency" or len(remaining) != len(tail_columns) + 1 or remaining[-1] not in {"t", "k"}:
                raise SnapshotError(f"Unexpected playback-track fields at line {line_number}")
            remaining[-2:] = [" ".join(remaining[-2:])]
        values.update(zip(tail_columns, remaining))
        row = {
            "line": line_number,
            "raw": line.strip(),
            "columns": columns,
            "fields": values,
            "pid": _integer(values["Client"], "Client"),
            "track_id": _integer(values["Id"], "Id"),
            "session": _integer(values["Session"], "Session"),
            "port_id": _integer(values["Port Id"], "Port Id") if "Port Id" in values else None,
            "sample_rate_hz": _integer(values["SRate"], "SRate"),
            "server_frames": _integer(values["Server"], "Server", 16),
            "underrun_frames": _integer(values["Underruns"], "Underruns", suffix="*<?"),
            "flushed_frames_modulo_10000000": _integer(values["Flushed"], "Flushed") if "Flushed" in values else None,
        }
        if row["sample_rate_hz"] <= 0:
            raise SnapshotError(f"Zero sample rate at line {line_number}")
        rows.append(row)
    return rows


def select_track(content: str, pid: int, track_id: int, package: str | None = None) -> dict:
    rows = [r for r in parse_tracks(content) if r["pid"] == pid and r["track_id"] == track_id]
    if len(rows) != 1:
        raise SnapshotError(f"Expected one current track for PID {pid}, Id {track_id}; found {len(rows)}")
    if package is not None:
        mapping = re.compile(r"^\s*" + str(pid) + r"\s+\d+\s+" + re.escape(package) + r"\s*$", re.MULTILINE)
        if not mapping.search(content):
            raise SnapshotError(f"Snapshot does not map PID {pid} to package {package}")
    return rows[0]


def compare_tracks(before: dict, after: dict) -> dict:
    for field in ("pid", "track_id", "session", "port_id", "sample_rate_hz"):
        if before[field] != after[field]:
            raise SnapshotError(f"Track identity changed: {field}")
    for field in ("Format", "Chn mask"):
        if before["fields"].get(field) != after["fields"].get(field):
            raise SnapshotError(f"Track format changed: {field}")
    if before["flushed_frames_modulo_10000000"] != after["flushed_frames_modulo_10000000"]:
        raise SnapshotError("Track flush counter changed; buffer consumption is not a continuous comparison")
    for name, row in (("before", before), ("after", after)):
        if row["fields"]["Active"] != "yes":
            raise SnapshotError(f"Selected {name} track is inactive")
    server = after["server_frames"] - before["server_frames"]
    underruns = after["underrun_frames"] - before["underrun_frames"]
    if min(server, underruns) < 0:
        raise SnapshotError("Counter decreased: reset, recreation or uint32 wrap; no automatic wrap inference")
    rate = before["sample_rate_hz"]
    return {
        "server_advance_frames": server,
        "underrun_frames": underruns,
        "underrun_to_server_advance_ratio": underruns / server if server else None,
        "underrun_to_server_advance_percent": 100 * underruns / server if server else None,
        "server_advance_seconds_at_track_rate": server / rate,
        "underrun_frame_tally_seconds_at_track_rate": underruns / rate,
        "zero_server_advance": server == 0,
    }


def analyze(before_path: Path, after_path: Path, pid: int, track_id: int,
            package: str | None = None, app_logcat: Path | None = None, apk: Path | None = None) -> dict:
    snapshots = []
    for path in (before_path, after_path):
        data = path.read_bytes()
        content = data.decode("utf-8-sig")
        snapshots.append({
            "path": str(path.resolve()), "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data),
            "track": select_track(content, pid, track_id, package),
        })
    result = {
        "schema": 1,
        "created_utc": datetime.now(timezone.utc).isoformat(),
        "tool": "analyze_audio_flinger.py",
        "tool_sha256": hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
        "selection": {"pid": pid, "track_id": track_id, "package": package},
        "before": snapshots[0], "after": snapshots[1],
        "delta": compare_tracks(snapshots[0]["track"], snapshots[1]["track"]),
        "audible_quality_verified": False,
        "counter_semantics": {
            "Underruns": "AOSP playback-track tally of desired but unavailable frames; not an underrun-event count.",
            "Server": "Hexadecimal uint32 mServer buffer-release cursor; not a measured wall-clock total or audible speaker position.",
            "ratio": "Underrun-frame delta divided by successful server-cursor advance. This is not a proven percentage of total playback time lost.",
            "vendor_scope": "Interpretation follows AOSP source; the device vendor's exact audioserver binary has not been reverse engineered.",
        },
        "limitations": [
            "Counters do not verify waveform correctness, clipping, music continuity or subjective audible quality.",
            "Fast tracks may count a partial underrun as a whole mixer period, so the frame tally is not an exact missing-sample measurement.",
            "Only the explicitly selected current PID/track is compared; device-wide mixer statistics and historical Local log rows are excluded.",
            "Endpoint identity and flush checks cannot exclude an intervening lifecycle event that returns to identical displayed counters.",
            "Counter resets/wraps, changed identity or format, displayed flush changes, missing columns and ambiguous matches are rejected.",
            "No elapsed host time is inferred from these snapshots. Snapshot ordering must be provided correctly by the caller.",
        ],
        "semantic_sources": _SEMANTIC_SOURCES,
    }
    for name, path in (("app_logcat", app_logcat), ("local_apk", apk)):
        if path is not None:
            data = path.read_bytes()
            result[name] = {"path": str(path.resolve()), "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}
    if apk is not None:
        result["local_apk"]["installed_identity_verified_by_this_tool"] = False
    return result


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("before", type=Path)
    parser.add_argument("after", type=Path)
    parser.add_argument("--pid", type=int, required=True)
    parser.add_argument("--track", type=int, required=True)
    parser.add_argument("--package")
    parser.add_argument("--app-logcat", type=Path)
    parser.add_argument("--apk", type=Path, help="Hash local APK only; does not prove its installed identity")
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    try:
        result = analyze(args.before, args.after, args.pid, args.track, args.package, args.app_logcat, args.apk)
    except (SnapshotError, OSError, UnicodeError) as error:
        parser.exit(2, "AudioFlinger comparison rejected: " + str(error) + "\n")
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"output": str(args.out.resolve()), "selection": result["selection"], "delta": result["delta"]}, indent=2))


if __name__ == "__main__":
    main()
