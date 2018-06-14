# COLORS-IN-C,C++ & JAVA

This is a library for using colors in C ,C++ & JAVA in your terminal or UI. For knowing the supported colors see
[COLORS](docs/COLORS.md).

## COMPILE AND RUN

### USAGE IN C (:octocat: LINUX :octocat:)

1. Download ZIP and extract or clone the repository using

```bash
git clone https://github.com/GauravWalia19/COLORS-IN-C-Cpp-JAVA.git
```

2. Navigate to download or cloning place folder(Open terminal and follow commands)

```bash
cd ~
cd Downloads
cd COLORS-IN-C-Cpp-JAVA-master || cd COLORS-IN-C-Cpp-JAVA
cd src/C-C++
bash c.sh
```

3. If U want to use in your code than **create a file with extension of c (hello.c) there. Write the code given below:**

*Terminal*

```bash
touch hello.c
```

*Open file hello.c in Text Editor and write code given below:*

```c
 #include "colors.h"
 #include <stdio.h>
 int main()
 {
 	printf("%sThis is a green color",GREEN); //this will print green color text
 }
```

4. Compile and Run using commands:

```bash
gcc hello.c -o hello
./hello
```

### USAGE IN C++ (:octocat: LINUX :octocat:)

1. Download ZIP or clone the repository using

```bash
 git clone https://github.com/GauravWalia19/COLORS-IN-C-Cpp-JAVA.git
```

2. Navigate to download or cloning place folder(Open terminal and follow commands)

```bash
cd ~
cd Downloads
cd COLORS-IN-C-Cpp-JAVA-master || cd COLORS-IN-C-Cpp-JAVA
cd src/C-C++
bash cpp.sh
```

3. If U want to use in your code than **create a file with extension of cpp (hello.cpp) there. Write the code given below:**

*Terminal*

```bash
touch hello.cpp
```

*Open file hello.cpp in Text Editor and write code given below:*

```c++
#include "colors.h"
#include <iostream>
using namespace std;
int main()
{
   cout << GREEN << "This is a green color"; //this will print green color text
}
```

4. Compile and Run using commands:

```bash
g++ hello.cpp -o hello.out
./hello.out
```

### USAGE IN JAVA (:octocat: LINUX :octocat:)

## DEPENDANCIES

1. gcc complier/g++ complier/javac compiler
2. Text Editor like atom,gedit,etc;

## SUPPORTED LANGUAGES

1. C
2. C++
3. JAVA

## AUTHOR

:copyright: Gaurav Walia
