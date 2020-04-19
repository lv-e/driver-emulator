#!/bin/sh

echo "now build for lv-emulator at /lv/source"

cd /lv/source
make -f /lv/scripts/build/Makefile

echo "done! cleaning artifacts..."
make -f /lv/scripts/build/Makefile clean

echo "there you go! look at /lv/bin/game"
echo "have fun!"