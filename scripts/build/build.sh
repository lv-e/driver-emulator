#!/bin/sh

echo "now build for lv-emulator"
make -f /lv/scripts/build/Makefile

echo "done! cleaning artifacts..."
make -f /lv/scripts/build/Makefile clean

echo "there you go! look at /lv/bin/game"
echo "have fun!"