import subprocess
import os

BOARDS = ['redragon/k530', 'redragon/k556']

for kb in BOARDS:
    subprocess.run(f"bin/qmk compile -kb {kb} -km all -j{os.cpu_count()}", shell=True)
