#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c
gcc *.c -c -fPIC
gcc *.o -shared -o libholberton.so

ls -la lib*
nm -D libholberton.so

gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

ldd len
rm *.o
