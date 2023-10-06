#!/bin/bash

# Compile all .c files and create a static library liball.a
gcc -c *.c
ar rcs liball.a *.o
