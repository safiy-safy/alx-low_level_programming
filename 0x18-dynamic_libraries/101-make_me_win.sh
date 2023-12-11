#!/bin/bash
wget -p .. https://raw.githubusercontent.com/safiy-safy/alx-low_level_programming/a8478bed4543969031bfe0cb4875ef41ddbcfd2d/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
