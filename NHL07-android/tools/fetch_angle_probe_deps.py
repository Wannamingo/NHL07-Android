#!/usr/bin/env python3
"""Fetch a hash-pinned ARM64 ANGLE candidate for isolated compatibility probes.

This does not install anything, invoke ADB, alter the game, or claim that the
candidate's Vulkan backend works. The upstream packager is not Google.
"""
from __future__ import annotations

import hashlib
import io
import json
from pathlib import Path, PurePosixPath
import subprocess
import tarfile
import urllib.request

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "analysis/driver/angle-candidates/kubuszok-chromium-7151-arm64"
URL = "https://github.com/kubuszok/sge-angle-natives/releases/download/chromium-7151/angle-android-arm64.tar.gz"
SIZE = 2662248
SHA = "e93aaece7b1048dcb1fab9102b5df001c8a5d83ee3dbc4fca1d0b6cf1c1d18f9"


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def pinned_download() -> bytes:
    path = DEST / "angle-android-arm64.tar.gz"
    if path.exists():
        data = path.read_bytes()
    else:
        request = urllib.request.Request(URL, headers={"User-Agent": "nhl07-local-compat-audit"})
        with urllib.request.urlopen(request, timeout=45) as response:
            if response.headers.get("Content-Length") != str(SIZE):
                raise RuntimeError("Unexpected download length; body was not read")
            data = response.read(SIZE + 1)
        if len(data) != SIZE or sha(data) != SHA:
            raise RuntimeError("ANGLE archive length/hash mismatch")
        path.write_bytes(data)
    if len(data) != SIZE or sha(data) != SHA:
        raise RuntimeError("ANGLE cached archive length/hash mismatch")
    return data


def main() -> None:
    DEST.mkdir(parents=True, exist_ok=True)
    data = pinned_download()
    entries = []
    selected = []
    total_size = 0
    with tarfile.open(fileobj=io.BytesIO(data), mode="r:gz") as archive:
        members = archive.getmembers()
        if len(members) > 300:
            raise RuntimeError("Unexpectedly large ANGLE archive directory")
        for member in members:
            path = PurePosixPath(member.name)
            if path.is_absolute() or ".." in path.parts or member.issym() or member.islnk():
                raise RuntimeError("Unsafe archive entry")
            if not (member.isfile() or member.isdir()):
                raise RuntimeError("Non-regular archive entry")
            total_size += member.size
            if total_size > 64 * 1024 * 1024:
                raise RuntimeError("Unexpected archive expansion")
            entries.append({"name": member.name, "size": member.size, "type": "file" if member.isfile() else "directory"})
            if member.isfile() and (path.suffix == ".so" or path.name.startswith("LICENSE")):
                if member.size > 32 * 1024 * 1024:
                    raise RuntimeError("Unexpected library length")
                stream = archive.extractfile(member)
                if stream is None:
                    raise RuntimeError("Missing regular archive entry")
                content = stream.read(member.size + 1)
                if len(content) != member.size:
                    raise RuntimeError("Archive entry length mismatch")
                target = DEST.joinpath(*path.parts).resolve()
                if not target.is_relative_to(DEST.resolve()):
                    raise RuntimeError("Archive target escapes isolated directory")
                target.parent.mkdir(parents=True, exist_ok=True)
                if target.exists() and target.read_bytes() != content:
                    raise RuntimeError("Existing extracted dependency differs")
                target.write_bytes(content)
                selected.append({"path": str(target), "archive_name": member.name, "sha256": sha(content), "size": len(content)})
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8"))
    ndk = Path(config["ndk"])
    llvm = ndk / "toolchains/llvm/prebuilt/windows-x86_64/bin"
    for entry in selected:
        path = Path(entry["path"])
        if path.suffix != ".so":
            continue
        for executable, args, suffix in [
            ("llvm-readelf.exe", ["-h", "-d", "-n", "-l", "--dyn-syms"], "elf"),
            ("llvm-strings.exe", [], "strings"),
        ]:
            result = subprocess.run([str(llvm / executable), *args, str(path)], capture_output=True, text=True, encoding="utf-8", errors="replace", check=True)
            text = result.stdout
            if suffix == "strings":
                text = "\n".join(line for line in text.splitlines() if any(token in line for token in ["ANGLE", "Vulkan", "vulkan", "vkCreateAndroid", "2.1.", "libEGL", "libGLES", "OpenGL ES"])) + "\n"
            (DEST / (path.name + "." + suffix + ".txt")).write_text(text, encoding="utf-8")
    report = {
        "scope": "Uninstalled isolated third-party ANGLE candidate; ABI inspection only, not executed",
        "source_release": "https://github.com/kubuszok/sge-angle-natives/releases/tag/chromium-7151",
        "source_workflow": "https://github.com/kubuszok/sge-angle-natives/blob/chromium-7151/.github/workflows/build-angle.yml",
        "source_android_gn_args": "https://github.com/kubuszok/sge-angle-natives/blob/chromium-7151/scripts/gn-args/android-arm64.gn",
        "archive_url": URL, "archive_sha256": SHA, "archive_size": SIZE,
        "entries": entries, "selected": selected,
        "adrenotools_compatibility": "Not yet validated; stock ANGLE opens its own system Vulkan loader and requires an explicit loader bridge for the supplied Turnip HAL",
        "no_adb": True, "game_or_system_modified": False,
    }
    (DEST / "candidate.json").write_text(json.dumps(report, indent=2), encoding="utf-8")
    print(json.dumps({"report": str(DEST / "candidate.json"), "selected": selected}, indent=2))


if __name__ == "__main__":
    main()
