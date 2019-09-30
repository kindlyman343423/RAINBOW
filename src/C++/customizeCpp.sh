#!bin/bash

# check for file emptyness
if [ -z "$1" ]; then
    echo -e "try: bash customizeCpp.sh filename.cpp"
    exit
fi

# check for file extension
if [ ${1: -4} != ".cpp" ];then
    echo -e "try: bash customizeCpp.sh filename.cpp"
    exit
fi

echo -e "Customize your file: $1 according to needs"

option=0

while [ $option -ne 8 ]
do
    echo -e "1. rainFormat.hpp"
    echo -e "2. rainColor.hpp"
    echo -e "3. rainBackground.hpp"
    echo -e "4. rainFormatColor.hpp"
    echo -e "5. rainFormatBG.hpp"
    echo -e "6. rainColorBG.hpp"
    echo -e "7. rainbow.hpp"
    echo -e "8. done"

    echo "Select option: "
    read option

    case $option in
    1) sed  '1s;^;#include "rainFormat.hpp"\n;' $1 > custom.c; echo "added rainFormat.hpp to $1";;
    2) sed  '1s;^;#include "rainColor.hpp"\n;' $1 > custom.c; echo "added rainColor.hpp to $1";;
    3) sed  '1s;^;#include "rainBackground.hpp"\n;' $1 > custom.c; echo "added rainBackground.hpp to $1";;
    4) sed  '1s;^;#include "rainFormatColor.hpp"\n;' $1 > custom.c; echo "added rainFormatColor.hpp to $1";;
    5) sed  '1s;^;#include "rainFormatBG.hpp"\n;' $1 > custom.c; echo "added rainFormatBG.hpp to $1";;
    6) sed  '1s;^;#include "rainColorBG.hpp"\n;' $1 > custom.c; echo "added rainColorBG.hpp to $1";;
    7) sed  '1s;^;#include "rainbow.hpp"\n;' $1 > custom.c; echo "added rainbow.hpp to $1";;
    esac

    if [ -f custom.cpp ]; then
        cp custom.cpp $1
    fi
done

if [ -f custom.cpp ]; then
rm custom.cpp
else
echo "cache removed"
fi

echo -e "CUSTOMIZE DONE !!!"