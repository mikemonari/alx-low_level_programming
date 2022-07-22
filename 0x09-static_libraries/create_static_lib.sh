#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
gcc rc liball.a *.o
