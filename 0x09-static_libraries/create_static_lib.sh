#!/bin/bash
ar rc liball.a *.o | gcc -Wall -pedantic -Wextra -Werror -std=gnu89 -c *.c
