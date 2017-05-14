#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o libholberton.so *.o
