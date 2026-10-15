"""Build-time GPU replacements reject another instruction or image revision."""
import unittest
from unittest.mock import patch

from . import lifter
from .disasm import Instruction, Operand


class NativeLoweringsTest(unittest.TestCase):
    def lower(self, instruction, profile):
        with patch.object(lifter, "NATIVE_LOWERINGS", {instruction.address: profile}):
            return "\n".join(lifter.Lifter().lift_instruction(instruction))

    def test_constants_use_native_api_and_preserve_rep_register_effects(self):
        instruction = Instruction(0x175E1, 2, "rep movsd", "", "f3 a5")
        output = self.lower(instruction, {"bytes": "f3a5", "kind": "vertex_constants",
                                         "register": 96, "count": 4})
        self.assertIn("nfs_native_vertex_constants(96u,esi,4u)", output)
        self.assertIn("esi += ecx*4u; edi += ecx*4u; ecx=0;", output)
        self.assertNotIn("MEM32", output)

    def test_metadata_store_is_removed_only_at_verified_address(self):
        instruction = Instruction(0x175AF, 6, "mov", "dword ptr [eax], 0x41ea4", "c700a41e0400")
        instruction.operands = [Operand(type="mem", mem_base="eax"),
                                Operand(type="imm", imm=0x41EA4)]
        output = self.lower(instruction, {"bytes": "c700a41e0400", "kind": "omit_gpu_write"})
        self.assertIn("replaced by native API", output)
        instruction.address += 6
        with patch.object(lifter, "NATIVE_LOWERINGS", {0x175AF: {"kind": "omit_gpu_write"}}):
            original = "\n".join(lifter.Lifter().lift_instruction(instruction))
        self.assertIn("MEM32", original)

    def test_changed_opcode_is_rejected(self):
        instruction = Instruction(0x175E1, 2, "rep movsd", "", "f3a4")
        with self.assertRaisesRegex(ValueError, "byte mismatch"):
            self.lower(instruction, {"bytes": "f3a5", "kind": "vertex_constants"})

    def test_cannot_omit_a_register_write(self):
        instruction = Instruction(0x175AF, 2, "mov", "eax, ebx", "89d8")
        instruction.operands = [Operand(type="reg", reg="eax"), Operand(type="reg", reg="ebx")]
        with self.assertRaisesRegex(ValueError, "memory MOV"):
            self.lower(instruction, {"bytes": "89d8", "kind": "omit_gpu_write"})

    def test_cannot_replace_arbitrary_instruction_with_constant_upload(self):
        instruction = Instruction(0x175E1, 1, "nop", "", "90")
        with self.assertRaisesRegex(ValueError, "REP MOVSD"):
            self.lower(instruction, {"bytes": "90", "kind": "vertex_constants"})


if __name__ == "__main__":
    unittest.main()
