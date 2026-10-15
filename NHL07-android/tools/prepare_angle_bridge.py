#!/usr/bin/env python3
"""Prepare isolated, pinned ANGLE copies whose loader imports use libab.so.

Only derived copies change. No APK, Android configuration, ADB or original ELF
file is modified. This is an experiment, not validation of Android rendering.
"""
from __future__ import annotations

import datetime as dt
import hashlib
import json
import os
from pathlib import Path
import struct
import subprocess

ROOT = Path(__file__).resolve().parents[1]
CANDIDATE = ROOT / "analysis/driver/angle-candidates/kubuszok-chromium-7151-arm64"
BUILD = ROOT / "build/angle-bridge"
PINS = {
    "libEGL.so": ("5f2a921ca6eea7ff074670bb511b28d364cf38591a38bd6dd0a914a3969e89c2",
                  "libEGL_angle.so", {"dlopen": "nhldlo"}),
    "libGLESv2.so": ("dcb64eb358a5aeef7d4f8d07a3decb4bed1df0f23b54101ee0b8fccf67cc2e40",
                     "libGLESv2_angle.so", {"dlopen": "nhldlo", "dlclose": "nhldlcx"}),
}


def check(condition: bool, message: str) -> None:
    if not condition:
        raise RuntimeError(message)


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def checked_write(path: Path, data: bytes) -> None:
    path.resolve().relative_to(BUILD.resolve())
    path.parent.mkdir(parents=True, exist_ok=True)
    if path.exists():
        check(path.read_bytes() == data, f"Refusing to overwrite unexpected derived file: {path}")
    else:
        path.write_bytes(data)


class Elf:
    def __init__(self, data: bytes):
        self.data = data
        check(data[:7] == b"\x7fELF\x02\x01\x01", "Expected ELF64 little-endian version 1")
        hdr = self.unpack("<HHIQQQIHHHHHH", 16)
        check(hdr[0] == 3 and hdr[1] == 183 and hdr[2] == 1, "Expected AArch64 ET_DYN ELF")
        shoff, shent, shnum = hdr[5], hdr[10], hdr[11]
        check(shent == 64 and 0 < shnum < 128, "Unexpected section table")
        self.sections = [self.unpack("<IIQQQQIIQQ", shoff + i * shent) for i in range(shnum)]
        dynsyms = [s for s in self.sections if s[1] == 11]
        check(len(dynsyms) == 1, "Expected one dynamic symbol table")
        self.sym = dynsyms[0]
        check(self.sym[9] == 24 and self.sym[5] % 24 == 0, "Unexpected dynamic symbol entry size")
        check(self.sym[6] < shnum, "Invalid dynamic symbol string-table link")
        self.str = self.sections[self.sym[6]]
        check(self.str[1] == 3, "Dynamic symbols must link to a string table")
        self.strings = self.slice(self.str[4], self.str[5])
        self.symbols = [self.unpack("<IBBHQQ", self.sym[4] + i * 24)
                        for i in range(self.sym[5] // 24)]
        self.refs = [(s[0], f"dynsym[{i}]") for i, s in enumerate(self.symbols) if s[0]]
        hashes = [s for s in self.sections if s[1] == 0x6FFFFFF6]
        check(len(hashes) == 1 and not any(s[1] == 5 for s in self.sections),
              "Expected GNU hash only; SYSV symbol hashes cannot remain unchanged")
        self.gnu_symoffset = self.unpack("<IIII", hashes[0][4])[1]
        dynamic = [s for s in self.sections if s[1] == 6]
        check(len(dynamic) == 1 and dynamic[0][6] == self.sym[6], "Unexpected dynamic table")
        self.dynamic = [self.unpack("<qQ", dynamic[0][4] + i)
                        for i in range(0, dynamic[0][5], 16)]
        check(not any(tag == 4 for tag, _ in self.dynamic), "Unexpected DT_HASH")
        for tag, value in self.dynamic:
            if tag in (1, 14, 15, 29, 0x7FFFFFFD, 0x7FFFFFFF):
                self.refs.append((value, f"dynamic[{tag}]") )
        versym = [s for s in self.sections if s[1] == 0x6FFFFFFF]
        check(len(versym) == 1 and versym[0][5] == len(self.symbols) * 2, "Unexpected GNU versym table")
        self.versions = [self.unpack("<H", versym[0][4] + i * 2)[0] & 0x7FFF
                         for i in range(len(self.symbols))]
        self.version_names = {}
        self.version_files = []
        needs = [s for s in self.sections if s[1] == 0x6FFFFFFE]
        check(len(needs) == 1 and needs[0][6] == self.sym[6], "Unexpected GNU version needs")
        section = needs[0]
        cursor = section[4]
        for _ in range(section[7]):
            version, count, filename, aux, nxt = self.unpack("<HHIII", cursor)
            check(version == 1 and 0 < count < 32, "Unexpected version-need entry")
            self.refs.append((filename, "verneed.vn_file"))
            self.version_files.append(filename)
            at = cursor + aux
            for _ in range(count):
                _, _, index, name, next_aux = self.unpack("<IHHII", at)
                self.refs.append((name, "vernaux.vna_name"))
                self.version_names[index & 0x7FFF] = self.string(name)
                at += next_aux
            cursor += nxt

    def slice(self, offset: int, size: int) -> bytes:
        check(0 <= offset <= len(self.data) and 0 <= size <= len(self.data) - offset,
              "ELF field outside file bounds")
        return self.data[offset:offset + size]

    def unpack(self, fmt: str, offset: int) -> tuple:
        return struct.unpack(fmt, self.slice(offset, struct.calcsize(fmt)))

    def string(self, offset: int) -> str:
        check(0 <= offset < len(self.strings), "Invalid dynamic string offset")
        end = self.strings.find(b"\0", offset)
        check(end >= 0, "Unterminated dynamic string")
        return self.strings[offset:end].decode("ascii")

    def isolated_string(self, offset: int, old: str) -> list[str]:
        check(self.string(offset) == old, "Unexpected dynamic string contents")
        end = offset + len(old)
        shared = []
        for other, description in self.refs:
            other_end = other + len(self.string(other))
            if max(offset, other) <= min(end, other_end):
                check(other == offset and self.string(other) == old,
                      f"Cannot rename a shared dynamic string suffix: {old} overlaps {description}")
                shared.append(description)
        return shared


def patch_library(source: Path, expected_sha: str, soname: str, renames: dict) -> dict:
    original = source.read_bytes()
    check(digest(original) == expected_sha, f"Unexpected original ANGLE hash: {source}")
    elf = Elf(original)
    names = {elf.string(v) for tag, v in elf.dynamic if tag == 14}
    check(names == {soname}, "Unexpected ANGLE SONAME")
    needed = [v for tag, v in elf.dynamic if tag == 1 and elf.string(v) == "libdl.so"]
    check(len(needed) == 1, "Expected exactly one libdl.so dependency")
    check(needed[0] in elf.version_files, "libdl.so version requirement must share dependency string")
    patches = []
    for old, new in renames.items():
        matches = [(i, s) for i, s in enumerate(elf.symbols) if elf.string(s[0]) == old]
        check(len(matches) == 1, f"Expected one {old} dynamic symbol")
        index, symbol = matches[0]
        check(symbol[3] == 0 and symbol[1] == 0x12 and symbol[4] == 0 and symbol[5] == 0,
              f"Expected global undefined function: {old}")
        check(index < elf.gnu_symoffset, f"Renamed import participates in GNU hash: {old}")
        check(elf.version_names.get(elf.versions[index]) == "LIBC", f"Unexpected version: {old}")
        check(len(old) == len(new), "Only equal-length import renames are supported")
        patches.append({"kind": "undefined_symbol", "old": old, "new": new,
                        "symbol_index": index, "gnu_hash_symoffset": elf.gnu_symoffset,
                        "version": "LIBC", "string_offset": symbol[0],
                        "file_offset": elf.str[4] + symbol[0],
                        "references": elf.isolated_string(symbol[0], old)})
    actual_targets = {elf.string(s[0]) for s in elf.symbols if s[3] == 0
                      and elf.string(s[0]) in {"dlopen", "dlclose"}}
    check(actual_targets == set(renames), "Unexpected original loader import set")
    patches.append({"kind": "dependency_and_version_file", "old": "libdl.so", "new": "libab.so",
                    "string_offset": needed[0], "file_offset": elf.str[4] + needed[0],
                    "references": elf.isolated_string(needed[0], "libdl.so")})
    derived = bytearray(original)
    for patch in patches:
        start = patch["file_offset"]
        before = patch["old"].encode()
        after = patch["new"].encode()
        check(bytes(derived[start:start + len(before)]) == before, "Overlapping or unexpected patch")
        derived[start:start + len(before)] = after
    changes = []
    offset = 0
    while offset < len(original):
        if original[offset] == derived[offset]:
            offset += 1
            continue
        end = offset + 1
        while end < len(original) and original[end] != derived[end]:
            end += 1
        check(any(p["file_offset"] <= offset and end <= p["file_offset"] + len(p["old"])
                  for p in patches), "Unexpected byte difference")
        changes.append({"offset": offset, "offset_hex": hex(offset),
                        "before_hex": original[offset:end].hex(), "after_hex": bytes(derived[offset:end]).hex()})
        offset = end
    check(len(original) == len(derived), "ELF size must remain unchanged")
    after_elf = Elf(bytes(derived))
    check({after_elf.string(v) for tag, v in after_elf.dynamic if tag == 14} == {soname}, "SONAME changed")
    check("libab.so" in [after_elf.string(v) for tag, v in after_elf.dynamic if tag == 1], "Bridge dependency absent")
    for patch in patches:
        check(after_elf.string(patch["string_offset"]) == patch["new"], "Patched string verification failed")
    control = BUILD / "control" / soname
    output = BUILD / "stage" / soname
    checked_write(control, original)
    checked_write(output, bytes(derived))
    check(source.read_bytes() == original, "Original input changed")
    return {"original": str(source), "original_sha256": expected_sha, "control": str(control),
            "derived": str(output), "derived_sha256": digest(derived), "bytes": len(derived),
            "patches": patches, "byte_differences": changes,
            "changed_byte_count": sum(len(x["before_hex"]) // 2 for x in changes)}


def main() -> None:
    archive = CANDIDATE / "angle-android-arm64.tar.gz"
    check(digest(archive.read_bytes()) == "e93aaece7b1048dcb1fab9102b5df001c8a5d83ee3dbc4fca1d0b6cf1c1d18f9",
          "Pinned ANGLE source archive changed")
    patched = [patch_library(CANDIDATE / "lib" / name, *pin) for name, pin in PINS.items()]
    config = json.loads((ROOT / "local-toolchains.json").read_text(encoding="utf-8-sig"))
    ndk = Path(config["ndk"])
    clang = ndk / "toolchains/llvm/prebuilt/windows-x86_64/bin/clang++.exe"
    readelf = ndk / "toolchains/llvm/prebuilt/windows-x86_64/bin/llvm-readelf.exe"
    source = ROOT / "tests/angle_loader_bridge.cpp"
    version_map = ROOT / "tests/angle_loader_bridge.map"
    binary = BUILD / "stage/libab.so"
    temp = BUILD / "temp"
    temp.mkdir(parents=True, exist_ok=True)
    env = dict(os.environ, TEMP=str(temp), TMP=str(temp))
    command = [str(clang), "--target=aarch64-linux-android30", "-std=c++17", "-O2", "-Wall", "-Wextra",
               "-Werror", "-fPIC", "-shared", "-fno-exceptions", "-fno-rtti", "-nostdlib++",
               "-Wl,-z,max-page-size=16384", "-Wl,-soname,libab.so",
               f"-Wl,--version-script={version_map}", str(source), "-o", str(binary), "-ldl"]
    result = subprocess.run(command, env=env, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                            text=True, encoding="utf-8", errors="replace")
    log = ROOT / "logs/angle-bridge-build.log"
    log.write_text(json.dumps(command) + "\n" + result.stdout + f"\nexit_code={result.returncode}\n", encoding="utf-8")
    check(result.returncode == 0, "Bridge compilation failed; see logs/angle-bridge-build.log")
    audit = subprocess.run([str(readelf), "-h", "-l", "-d", "--dyn-syms", "--version-info", str(binary)],
                           capture_output=True, text=True, encoding="utf-8", errors="replace", check=True).stdout
    check("nhldlo@@LIBC" in audit and "nhldlcx@@LIBC" in audit, "Bridge LIBC-versioned exports missing")
    check("Shared library: [libdl.so]" in audit and "Library soname: [libab.so]" in audit,
          "Bridge must depend on original libdl and have its own SONAME")
    loads = [line.strip() for line in audit.splitlines() if line.strip().startswith("LOAD ")]
    check(loads and all(line.endswith("0x4000") for line in loads), "Bridge 16 KB load alignment missing")
    audit_path = ROOT / "analysis/driver/adrenotools-probe/libab.so.readelf.txt"
    audit_path.write_text(audit, encoding="utf-8")
    for lib in patched:
        output = Path(lib["derived"])
        report = subprocess.run([str(readelf), "-d", "--dyn-syms", "--version-info", str(output)],
                                capture_output=True, text=True, encoding="utf-8", errors="replace", check=True).stdout
        path = audit_path.parent / f"{output.name}.patched.readelf.txt"
        path.write_text(report, encoding="utf-8")
        lib["elf_report"] = str(path)
        lib["elf_report_sha256"] = digest(path.read_bytes())
    report = {"created_utc": dt.datetime.now(dt.timezone.utc).isoformat(),
              "scope": "Isolated derived ELF files and bridge build only; no APK, ADB, system or game changes; no device execution",
              "candidate_commit": "df9c59dcacff", "candidate_archive": str(archive),
              "candidate_archive_sha256": digest(archive.read_bytes()), "libraries": patched,
              "bridge": {"path": str(binary), "sha256": digest(binary.read_bytes()), "bytes": binary.stat().st_size,
                         "source": str(source), "source_sha256": digest(source.read_bytes()),
                         "version_map": str(version_map), "version_map_sha256": digest(version_map.read_bytes()),
                         "android_api": 30, "alignment": 16384, "command": command,
                         "elf_report": str(audit_path), "elf_report_sha256": digest(audit_path.read_bytes()),
                         "api": {"configure": "int nhl07_angle_bridge_configure(void *borrowedLoader); 0 success, -1 error",
                                 "stats": "void nhl07_angle_bridge_get_stats(uint64_t stats[5]); custom opens, custom closes, active borrows, rejected closes, ordinary opens",
                                 "release": "int nhl07_angle_bridge_release(); 0 only after active borrows/rejected closes both zero; does not dlclose owner"}},
              "required_runtime_checks": ["Actual ANGLE EGL initialization and GLES pixel comparison",
                                          "Queried EGL Vulkan device driver ID MESA_TURNIP and pinned Mesa git info",
                                          "At least one custom open, exactly balanced custom closes, zero active borrows/rejected closes after ANGLE cleanup",
                                          "Owner loader stays live until ANGLE libraries are unloaded and bridge release succeeds"],
              "build_log": str(log), "build_log_sha256": digest(log.read_bytes()),
              "script": str(Path(__file__).resolve()), "script_sha256": digest(Path(__file__).read_bytes())}
    path = ROOT / "analysis/angle-bridge-build.json"
    path.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"report": str(path), "bridge": report["bridge"]["sha256"],
                      "stage": str(BUILD / "stage"),
                      "changes": [{"name": Path(x["derived"]).name, "sha256": x["derived_sha256"],
                                   "bytes_changed": x["changed_byte_count"]} for x in patched]}, indent=2))


if __name__ == "__main__":
    main()
