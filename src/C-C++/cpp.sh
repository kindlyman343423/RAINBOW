#!bin/bash
echo "USING C++"
echo "CODE:"
cat sample.cpp
echo "OUTPUT:"
g++ sample.cpp -o hello.out
./hello.out
