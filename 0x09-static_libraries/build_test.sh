#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -L. -lmy -o test_program
