#!/bin/bash
gcc -wall -Wextra -Werror -pedamtic .c *.c
ar rc liball.a *.o
