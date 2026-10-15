"""Native replacements must intercept direct C calls and retain fallback bodies."""
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch
from . import config, translator
from .manual_scan import native_entries, scan
from .__main__ import _load_manual_protection


class NativeEntriesTest(unittest.TestCase):
    def test_scan_and_protect_without_excluding_original(self):
        with tempfile.TemporaryDirectory() as d:
            p = Path(d) / "manual.c"
            p.write_text("int sub_00010000_native(void) {}\n#if 0\nint sub_00010010_native(void) {}\n#endif\n", encoding="utf-8")
            self.assertEqual(native_entries(p), {0x10000})
            skip, wrap, refs = scan(p)
            self.assertFalse(skip | wrap | refs)
            protected, _ = _load_manual_protection(None, p)
            self.assertIn(0x10000, protected)

    def test_guard_precedes_body_and_default_is_unmodified(self):
        base = 0x10000
        image = bytes.fromhex("b8 78 56 34 12 c3")
        config._install([config.Section(".text", base, len(image), 0, len(image), True)],
                        entry_point=base, kernel_thunk_addr=base, origin="native-guard-test")
        db = {base: {"end": base + len(image), "size": len(image)}}
        with patch.object(translator, "NATIVE_ENTRIES", {base}):
            body = translator.FunctionTranslator(image, db).translate_function(base, db[base])
        self.assertEqual(body.count("if (sub_00010000_native()) return;"), 1)
        self.assertLess(body.index("if (sub_00010000_native())"), body.index("eax = 0x12345678;"))
        with patch.object(translator, "NATIVE_ENTRIES", set()):
            plain = translator.FunctionTranslator(image, db).translate_function(base, db[base])
        self.assertNotIn("_native", plain)


if __name__ == "__main__":
    unittest.main()
