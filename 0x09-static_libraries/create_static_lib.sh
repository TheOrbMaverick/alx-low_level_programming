#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library from the object files
ar -rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o

echo "Static library liball.a created."
