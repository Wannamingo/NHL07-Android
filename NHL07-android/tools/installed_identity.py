"""Prevent benchmark metadata from naming a different APK than the live app."""
import json,subprocess
def require_installed_apk(root,prefix):
    def run(*args):
        p=subprocess.run(prefix+list(args),capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=30)
        assert p.returncode==0,p.stdout+p.stderr
        return p.stdout
    paths=run('shell','pm','path','org.nhl07.port').splitlines()
    base=next(line[len('package:'):] for line in paths if line.startswith('package:') and line.endswith('/base.apk'))
    actual=run('shell','sha256sum',base).split()[0]
    expected=json.loads((root/'analysis/apk.json').read_text())['sha256']
    assert actual==expected,f'Installed APK {actual} differs from current artifact {expected}; install the intended candidate before recording performance'
    return actual
