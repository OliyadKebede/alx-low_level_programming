#!/bin/bash
wget -O /tmp/win.so https://github.com/OliyadKebede/alx-low_level_programming/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
