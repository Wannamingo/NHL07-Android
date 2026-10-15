"""Publish the current verified checkpoint."""
from pathlib import Path
if (Path(__file__).resolve().parents[1].with_name('NHL07-android')/'analysis/prerelease-device-validation.json').exists():
    from write_prerelease_checkpoint import main
elif (Path(__file__).resolve().parents[1].with_name('NHL07-android')/'analysis/russian-device-validation.json').exists():
    from write_localized_checkpoint import main
else:
    from write_checkpoint import main
if __name__=="__main__":main()
