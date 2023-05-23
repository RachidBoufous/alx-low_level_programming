#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
gcc -c -fPIC -o liball.a *.o