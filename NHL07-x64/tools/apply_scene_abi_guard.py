"""Detect the first scene child that corrupts its parent's saved registers/stack."""
from pathlib import Path
import hashlib,json,re
root=Path(__file__).resolve().parents[1];xbe=(root/'input/default.xbe').read_bytes()
assert hashlib.sha256(xbe).hexdigest()=='438eaeada465b3b560a7578436504274525e904534a62753ea1e16be87ed6c83'
path=root/'src/recomp/gen/recomp_0196.c';source=path.read_text();body=re.search(r'void sub_0042B4F0\(void\)\n\{.*?\n\}',source,re.S).group()
old='''    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0042B50Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B50Bu); } /* indirect call */
    }'''
new='''    { uint32_t _icall_esp = g_esp;
    uint32_t _scene_index=esi,_scene_parent=edi,_scene_event=ebx,_scene_target=MEM32(edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0042B50Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B50Bu); } /* indirect call */
    if(esi!=_scene_index||edi!=_scene_parent||ebx!=_scene_event||esp!=_icall_esp){
        fprintf(stderr,"[NHL07-SCENE-ABI] child=%08X parent=%08X event=%08X index=%u->%u edi=%08X ebx=%08X esp=%08X->%08X\\n",
            _scene_target,_scene_parent,_scene_event,_scene_index,esi,edi,ebx,_icall_esp,esp);abort();
    }
    }'''
assert (old in body)!=(new in body)
if old in body:source=source.replace(body,body.replace(old,new))
if '#include <stdio.h>' not in source:source=source.replace('#include <math.h>','#include <math.h>\n#include <stdio.h>\n#include <stdlib.h>')
path.write_text(source,encoding='utf-8')
(root/'analysis/scene-abi-guard.json').write_text(json.dumps(dict(
    function='0x0042B4F0',original_sha256=hashlib.sha256(xbe[0x42b4f0-0x10000:0x42b51b-0x10000]).hexdigest(),
    scope='Diagnostic check only: original child call must preserve EBX/ESI/EDI and consume its original return plus one argument. No register or control-flow repair.',
    evidence='Original parent uses ESI as child index and EDI as parent after every indirect child call; its argument must be popped by the child.'),indent=2))
print('Scene child ABI diagnostic installed')
