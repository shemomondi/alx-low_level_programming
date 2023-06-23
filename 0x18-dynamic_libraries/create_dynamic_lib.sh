#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c -fPIC "$file" -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

