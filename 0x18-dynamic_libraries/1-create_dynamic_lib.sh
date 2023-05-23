#!/bin/bash

# Create a list of all the .c files in the current directory
cfiles=( *.c )

# Compile all the .c files into object files
for cfile in "${cfiles[@]}"; do
  gcc -c -fPIC "$cfile"
done

# Link all the object files together to create a dynamic library
gcc -shared -o liball.so "${cfiles[@]}"
