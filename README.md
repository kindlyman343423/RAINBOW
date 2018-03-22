# COLORS-IN-C
This is a library for using colors in C in your terminal or UI. For knowing the supported colors see
[COLORS](COLORS.md)

## COMPILE AND BUILD
### USAGE IN C
#### In LINUX:
1. Download ZIP or clone the repository using
> git clone https://github.com/GauravWalia19/COLORS-IN-C.git

2.
```
 #include "colors.h"
 #include <stdio.h>
 int main()
 {
 	printf("%sThis is a green color",GREEN); //this will print green color text
 }
```

### USAGE IN C++
#### In LINUX:
```
#include "colors.h"
#include <iostream>
using namespace std;
int main()
{
   cout << GREEN << "This is a green color"; //this will print green color text
}
```

## DEPENDANCIES
1. gcc complier
2. Text Editor like atom,gedit,etc;

## SUPPORTED LANGUAGES
1. C
2. C++
