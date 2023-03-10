#!/bin/bash
# Create a static library from a set of object files
gcc -c *.c
ar rcs liball.a *.o
rm *.o