#!/bin/bash
gcc -c *.c | ar -rc liball.a *.o 
gcc -c *.c
 ar -rc liball.a *.o
