#!/bin/bash
gcc -c -fPIC libdynamic.c -o libdynamic.o
gcc -shared -o liball.so libdynamic.o
