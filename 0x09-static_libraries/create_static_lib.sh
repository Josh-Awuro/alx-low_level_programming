#!/bin/bash
gcc -Wall -Wextra -pendantic -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a