#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar rcs liball.a *.o
echo deleted *.o | rm -I *.o
