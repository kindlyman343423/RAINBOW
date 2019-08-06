#!bin/bash

echo -e "Customize your file: $1 according to needs"
# gcc sample.c -o a.out
# ./a.out

# echo $1
# sed -e '1ihello world' c.sh > hello.txt

# echo "rainbow.h"

# sed  '1s;^;DATA-Line-1\n;' sample.c > hello.c

option=0

while [ $option -ne 8 ]
do
    echo -e "1. rainFormat.h"
    echo -e "2. rainColor.h"
    echo -e "3. rainBackground.h"
    echo -e "4. rainFormatColor.h"
    echo -e "5. rainFormatBG.h"
    echo -e "6. rainColorBG.h"
    echo -e "7. rainbow.h"
    echo -e "8. done"

    echo "Select option: "
    read option

    case $option in
    1) sed  '1s;^;#include "rainFormat.h"\n;' $1 > custom.c; echo "added rainFormat.h to $1";;
    2) sed  '1s;^;#include "rainColor.h"\n;' $1 > custom.c; echo "added rainColor.h to $1";;
    3) sed  '1s;^;#include "rainBackground.h"\n;' $1 > custom.c; echo "added rainBackground.h to $1";;
    4) sed  '1s;^;#include "rainFormatColor.h"\n;' $1 > custom.c; echo "added rainFormatColor.h to $1";;
    5) sed  '1s;^;#include "rainFormatBG.h"\n;' $1 > custom.c; echo "added rainFormatBG.h to $1";;
    6) sed  '1s;^;#include "rainColorBG.h"\n;' $1 > custom.c; echo "added rainColorBG.h to $1";;
    7) sed  '1s;^;#include "rainbow.h"\n;' $1 > custom.c; echo "added rainbow.h to $1";;
    esac

    cp custom.c $1
done

echo -e "CUTOMIZE DONE !!!"