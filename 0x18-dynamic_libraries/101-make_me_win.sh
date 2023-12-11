#!/bin/bash
gcc -shared -o myprintf.so test.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
