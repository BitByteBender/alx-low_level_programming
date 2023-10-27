#!/bin/bash

gcc -c -fno-pic *.c
ar rc liball.a *.o
