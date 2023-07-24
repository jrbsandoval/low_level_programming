#!/bin/bash

gcc -std=gnu98 -c *.c
ar -rc $1 *.o
ranlib $1

