#!bin/sh
cd src
echo "USING C"
echo "CODE:"
cat sample.c
echo "OUTPUT:"
gcc sample.c -o hello
./hello
echo ""
echo "-----------------------------------------------"
echo "USING C++"
echo "CODE:"
cat sample.c
echo "OUTPUT:"
g++ sample.cpp -o hello
./hello
echo ""
