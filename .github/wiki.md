# :rainbow: RAINBOW (repo)

A library for using colours in C,C++ and JAVA in a terminal. It works on Linux,I am  not sure whether it works on windows or not,but it can work on mac also. The usage of C,C++ and JAVA is given below you can choose according to your language you love. Samples will soon be added.

## :cloud: USAGE IN C (:octocat: LINUX :octocat:)

### 1. Download ZIP and extract or clone the repository using

```bash
git clone https://github.com/GauravWalia19/RAINBOW.git
```

### 2. Navigate to download or cloning place folder(Open terminal and follow commands)

```bash
cd ~
cd Downloads
cd RAINBOW-master || cd RAINBOW
cd src/C-C++
bash c.sh
```

### 3. If U want to use in your code than create a file with extension of c (hello.c) there. Write the code given below

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

### 4. Compile and Run using commands

```bash
gcc hello.c -o hello
./hello
```

## :cloud: USAGE IN C++ (:octocat: LINUX :octocat:)

### 1. Download ZIP or clone the repository using

```bash
 git clone https://github.com/GauravWalia19/RAINBOW.git
```

### 2. Navigate to download or cloning place folder. Open terminal and follow commands

```bash
cd ~
cd Downloads
cd RAINBOW-master || cd RAINBOW
cd src/C-C++
bash cpp.sh
```

### 3. If U want to use in your code than create a file with extension of cpp (hello.cpp) there. Write the code given below

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

### 4. Compile and run using commands

```bash
g++ hello.cpp -o hello.out
./hello.out
```

## :cloud: USAGE IN JAVA (:octocat: LINUX :octocat:)

### 1. Download the ZIP or clone the repository using

```bash
 git clone https://github.com/GauravWalia19/RAINBOW.git
```

### 2. Navigate to the download or cloning place folder(Open terminal and follow commands)

```bash
cd ~
cd Downloads
cd RAINBOW-master || cd RAINBOW
cd src/JAVA
bash java.sh
```

### 3. If U want to use in your code than create a file with extension of cpp (hello.cpp) there. Write the code given below:

*Terminal*

```bash
touch hello.java
```

*Open file hello.java in Text Editor and write code given below:*

```java
public class hello
{
    public static void main(String[] args)
    {
        rain obj = new rain();
        System.out.println(obj.BRED + "Hello World" + obj.RESET);

        rainbow ob = new rainbow();
        System.out.println(ob.getBRED("Hello World"));
    }
}
```

### 4. Compile and Run using commands:

```bash
javac hello.java
java hello
```
## :octocat: HAPPY CODING :octocat: :copyright: Gaurav Walia