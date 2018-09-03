#!bin/bash

# NEW BASH
b=1
c=2
d=3
e=4
f=5
while [ true ]
do

echo "SELECT ONE OPTION"
echo ""
echo "1. See using rain.java customizable library"
echo "2. OUTPUT of using rain.java"
echo "3. See using rainbow.java functional library"
echo "4. OUPUT of using rainbow.java"
echo "5. EXIT"
read a

if [ $a -eq $b ]; then
echo "SAMPLE CODE:"
cat Usingrain.java
echo ""

elif [ $a -eq $c ]; then
echo "OUTPUT:"
javac  Usingrain.java
java Usingrain

elif [ $a -eq $d ]; then
echo "SAMPLE CODE:"
cat Usingrainbow.java

elif [ $a -eq $e ]; then
echo "OUTPUT:"
javac Usingrainbow.java
java Usingrainbow

else
break
fi

done