#!/bin/bash

echo "now build for lv-emulator"
make -f scripts/build/Makefile

echo "done! cleaning artifacts..."
make -f scripts/build/Makefile clean

echo "there you go! look at /lv/bin/game"
echo "have fun!"