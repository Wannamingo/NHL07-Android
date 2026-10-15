"""Flag restores must compile even without arithmetic or a consuming branch."""
import unittest
from . import config
from .translator import FunctionTranslator

class FlagDeclarationTest(unittest.TestCase):
    def test_standalone_popfd_declares_all_written_temporaries(self):
        base=0x10000;image=bytes.fromhex('9d c3')
        config._install([config.Section('.text',base,len(image),0,len(image),True)],
                        entry_point=base,kernel_thunk_addr=base,origin='popfd-declarations-test')
        db={base:{'end':base+len(image),'size':len(image)}}
        code=FunctionTranslator(image,db).translate_function(base,db[base])
        self.assertIn('int _flags = 0;',code)
        self.assertIn('uint32_t _fa = 0, _fb = 0;',code)
        self.assertIn('int32_t _fas = 0, _fbs = 0;',code)
        self.assertIn('POP32(esp, _fa)',code)

if __name__=='__main__': unittest.main()
