#!bin/bash

echo -e "Customize your file: $1 according to needs"
# gcc sample.c -o a.out
# ./a.out

# echo $1
# sed -e '1ihello world' c.sh > hello.txt

# echo "rainbow.h"
# sed -e '1ihello world' sample.c > hello.c
option=0

while [ $option -ne 6 ]
do
    echo -e "1. rainformat.h"
    echo -e "2. raincolor.h"
    echo -e "3. rainbackground.h"
    echo -e "4. rainformatcolor.h"
    echo -e "5. rainformatbackground.h"
    echo -e "6. done"

    echo "Select option: "
    read option

    case $option in
    1) sed -e '1i#include "rainformat.h"' $1;echo "added rainformat.h to $1";;
    2) echo "added raincolor.h to $1";;
    3) echo "added rainbackground.h to $1";;
    4) echo "added rainformatcolor.h to $1";;
    5) echo "added rainformatbackground.h to $1";;
    esac
done
