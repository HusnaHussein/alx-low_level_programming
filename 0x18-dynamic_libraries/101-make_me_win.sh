#!/bin/bash
gcc -shared -o myproject.so -fPIC test.c
export LD_PRELOAD=./myproject.so:$LD_LIBRARY_PATH
