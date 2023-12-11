#!/bin/bash
wget -O https://github.com/safiy-safy/alx-low_level_programming/blob/c8eddd3e2a0420e27146afcdd756bb18a4ac8f44/0x18-dynamic_libraries/myprintf.so
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
