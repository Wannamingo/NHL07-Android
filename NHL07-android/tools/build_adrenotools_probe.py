#!/usr/bin/env python3
"""Build pinned, unmodified AdrenoTools sources for an isolated Android probe.

This script does not build or modify the NHL07 APK and never invokes ADB.
"""
from __future__ import annotations

import argparse
import datetime as dt
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import stat
import subprocess
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
DEPS = ROOT / "deps" / "libadrenotools-probe"
BUILD = ROOT / "build" / "adrenotools-probe"
SOURCES = (
    ("libadrenotools", "8fae8ce254dfc1344527e05301e43f37dea2df80",
     "8c03f2a5f562fb5d61ac52d85b72e58742e464d7ea05235dae58d95550767193", "source"),
    ("liblinkernsbypass", "aa3975893d83ef1bc84c321ec60c65fbf1287887",
     "f3b08297d2ad89967e6043dfcc5ed00f2472f8e64ccb21db163e89871fc75237",
     "source/lib/linkernsbypass"),
)


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def inside(path: Path, root: Path) -> Path:
    resolved = path.resolve()
    resolved.relative_to(root.resolve())
    return resolved


def unpack_pinned(name: str, commit: str, digest: str, destination: str,
                  allow_download: bool) -> dict:
    archive = inside(DEPS / "archives" / f"{name}-{commit}.zip", DEPS)
    url = f"https://codeload.github.com/bylaws/{name}/zip/{commit}"
    if not archive.exists():
        if not allow_download:
            raise RuntimeError(f"Pinned archive missing: {archive}; use --fetch to download it")
        archive.parent.mkdir(parents=True, exist_ok=True)
        with urllib.request.urlopen(url, timeout=30) as response:
            payload = response.read(2_000_001)
        if len(payload) > 2_000_000 or hashlib.sha256(payload).hexdigest() != digest:
            raise RuntimeError(f"Unexpected source archive: {name}")
        archive.write_bytes(payload)
    if sha256(archive) != digest:
        raise RuntimeError(f"Source archive hash mismatch: {archive}")
    output_root = inside(DEPS / destination, DEPS)
    files = []
    with zipfile.ZipFile(archive) as zf:
        infos = zf.infolist()
        if len(infos) > 500 or sum(x.file_size for x in infos) > 10_000_000:
            raise RuntimeError("Source archive exceeds the expected size")
        for item in infos:
            part = PurePosixPath(item.filename)
            if (part.is_absolute() or ".." in part.parts or "\\" in item.filename
                    or not part.parts or part.parts[0] != f"{name}-{commit}"):
                raise RuntimeError(f"Unsafe archive path: {item.filename}")
            if stat.S_ISLNK(item.external_attr >> 16):
                raise RuntimeError(f"Archive symlinks are unsupported: {item.filename}")
            if item.is_dir() or len(part.parts) == 1:
                continue
            out = inside(output_root.joinpath(*part.parts[1:]), output_root)
            payload = zf.read(item)
            out.parent.mkdir(parents=True, exist_ok=True)
            if out.exists() and out.read_bytes() != payload:
                raise RuntimeError(f"Refusing to overwrite changed upstream source: {out}")
            if not out.exists():
                out.write_bytes(payload)
            files.append({"path": str(out.relative_to(DEPS)).replace("\\", "/"),
                          "sha256": hashlib.sha256(payload).hexdigest(), "bytes": len(payload)})
    return {"repository": f"https://github.com/bylaws/{name}", "commit": commit,
            "archive_url": url, "archive": str(archive), "archive_sha256": digest,
            "archive_bytes": archive.stat().st_size, "files": files}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--fetch", action="store_true", help="Download a missing pinned source archive")
    args = parser.parse_args()
    pins = [unpack_pinned(*source, args.fetch) for source in SOURCES]
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8-sig"))
    ndk = Path(config["ndk"])
    ninja = Path(config["ninja"])
    cmake = Path(config["cmake"])
    for tool in (ninja, cmake, ndk / "build/cmake/android.toolchain.cmake"):
        if not tool.is_file():
            raise RuntimeError(f"Missing local tool: {tool}")
    BUILD.mkdir(parents=True, exist_ok=True)
    temp = BUILD / "temp"
    temp.mkdir(exist_ok=True)
    env = dict(os.environ, TEMP=str(temp), TMP=str(temp), MSBUILDDISABLENODEREUSE="1")
    clang = ndk / "toolchains/llvm/prebuilt/windows-x86_64/bin/clang++.exe"
    probe_source = ROOT / "tests/adrenotools_loader_probe.cpp"
    probe_binary = BUILD / "adrenotools_loader_probe"
    commands = [
        [str(cmake), "-S", str(DEPS / "source"), "-B", str(BUILD), "-G", "Ninja",
         f"-DCMAKE_MAKE_PROGRAM={ninja}",
         f"-DCMAKE_TOOLCHAIN_FILE={ndk / 'build/cmake/android.toolchain.cmake'}",
         "-DANDROID_ABI=arm64-v8a", "-DANDROID_PLATFORM=android-30",
         "-DANDROID_STL=c++_static", "-DCMAKE_BUILD_TYPE=Release",
         "-DCMAKE_CXX_STANDARD=17", "-DCMAKE_CXX_STANDARD_REQUIRED=ON",
         "-DBUILD_SHARED_LIBS=ON", "-DGEN_INSTALL_TARGET=OFF",
         "-DCMAKE_SHARED_LINKER_FLAGS=-Wl,-z,max-page-size=16384"],
        [str(cmake), "--build", str(BUILD), "--parallel", "4"],
        [str(clang), "--target=aarch64-linux-android30", "-std=c++17", "-O2", "-Wall", "-Wextra",
         "-Wno-missing-field-initializers", "-static-libstdc++", "-Wl,-z,max-page-size=16384",
         "-I", str(DEPS / "source/include"), str(probe_source), "-o", str(probe_binary), "-ldl", "-landroid"],
    ]
    transcript = []
    for command in commands:
        result = subprocess.run(command, env=env, cwd=ROOT, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT, text=True, encoding="utf-8", errors="replace")
        transcript.extend([json.dumps(command), result.stdout, f"exit_code={result.returncode}"])
        if result.returncode:
            (ROOT / "logs" / "adrenotools-probe-build.log").write_text("\n".join(transcript), encoding="utf-8")
            raise RuntimeError(f"Build command failed ({result.returncode}); see logs/adrenotools-probe-build.log")
    readelf = ndk / "toolchains/llvm/prebuilt/windows-x86_64/bin/llvm-readelf.exe"
    artifacts = []
    audit_dir = ROOT / "analysis/driver/adrenotools-probe"
    audit_dir.mkdir(parents=True, exist_ok=True)
    for binary in sorted(BUILD.rglob("*.so")):
        metadata = subprocess.run([str(readelf), "-h", "-l", "-d", "--dyn-syms", str(binary)],
                                  capture_output=True, text=True, encoding="utf-8", errors="replace", check=True).stdout
        audit = audit_dir / f"{binary.name}.readelf.txt"
        audit.write_text(metadata, encoding="utf-8")
        if "AArch64" not in metadata or "DYN" not in metadata:
            raise RuntimeError(f"Unexpected binary architecture/type: {binary}")
        loads = [line.strip() for line in metadata.splitlines() if line.strip().startswith("LOAD ")]
        if not loads or any(not line.endswith("0x4000") for line in loads):
            raise RuntimeError(f"Expected 16 KB load alignment: {binary}")
        needed = re.findall(r"Shared library: \[(.+?)\]", metadata)
        artifacts.append({"path": str(binary), "sha256": sha256(binary),
                          "bytes": binary.stat().st_size, "needed": needed,
                          "elf_report": str(audit), "elf_report_sha256": sha256(audit)})
    expected = {"libadrenotools.so", "libhook_impl.so", "libmain_hook.so",
                "libfile_redirect_hook.so", "libgsl_alloc_hook.so"}
    if {Path(a["path"]).name for a in artifacts} != expected:
        raise RuntimeError("Unexpected built library set")
    log = ROOT / "logs/adrenotools-probe-build.log"
    log.parent.mkdir(exist_ok=True)
    log.write_text("\n".join(transcript), encoding="utf-8")
    licenses = []
    for source_root in (DEPS / "source", DEPS / "source/lib/linkernsbypass"):
        for filename in ("LICENSE", "LICENSE.md", "COPYING"):
            path = source_root / filename
            if path.is_file():
                licenses.append({"path": str(path), "sha256": sha256(path),
                                 "text": path.read_text(encoding="utf-8")})
    report = {"created_utc": dt.datetime.now(dt.timezone.utc).isoformat(),
              "scope": "Build-only isolated Android ARM64 loader libraries; no APK changes, ADB, device execution, EGL, WSI or game/FPS validation",
              "sources": pins, "licenses": licenses, "source_changes": [],
              "ndk": str(ndk), "ndk_source_properties": (ndk / "source.properties").read_text(),
              "android_api": 30, "abi": "arm64-v8a", "cpp_standard": 17,
              "stl": "c++_static", "commands": commands, "artifacts": artifacts,
              "build_log": str(log), "build_log_sha256": sha256(log),
              "probe": {"path": str(probe_binary), "sha256": sha256(probe_binary),
                        "bytes": probe_binary.stat().st_size, "source": str(probe_source),
                        "source_sha256": sha256(probe_source), "device_executed": False,
                        "usage": "adrenotools_loader_probe /absolute/hookDir/ /absolute/driverDir/",
                        "scope": "Loader enumeration and Mesa Turnip identity plus WSI advertisement only; no surface, EGL or GPU commands"},
              "script": str(Path(__file__).resolve()), "script_sha256": sha256(Path(__file__))}
    path = ROOT / "analysis/adrenotools-probe-build.json"
    path.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"report": str(path), "artifacts": artifacts}, indent=2))


if __name__ == "__main__":
    main()
