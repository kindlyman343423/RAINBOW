#!bin/bash
echo "USING C"
echo "CODE:"
cat sample.c
echo "OUTPUT:"
gcc sample.c -o hello.out
./hello.out
