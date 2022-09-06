#!/bin/bash
gcc -c *.c && gcc -shared *.o -o liball.so

