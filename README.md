# :rainbow: RAINBOW (COLORS-IN-C,C++ & JAVA)

This is a library for using colors in C ,C++ & JAVA in your terminal or UI. For knowing the supported colors see
[COLORS](docs/COLORS.md).

## :rainbow: COMPILE AND RUN

### :cloud: USAGE IN C (:octocat: LINUX :octocat:)

#### 1. Download ZIP and extract or clone the repository using

```bash
git clone https://github.com/GauravWalia19/RAINBOW.git
```

#### 2. Navigate to download or cloning place folder(Open terminal and follow commands)

```bash
cd ~
cd Downloads
cd RAINBOW-master || cd RAINBOW
cd src/C-C++
bash c.sh
```

#### 3. If U want to use in your code than create a file with extension of c (hello.c) there. Write the code given below

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

#### 4. Compile and Run using commands

```bash
gcc hello.c -o hello
./hello
```

### :cloud: USAGE IN C++ (:octocat: LINUX :octocat:)

#### 1. Download ZIP or clone the repository using

```bash
 git clone https://github.com/GauravWalia19/RAINBOW.git
```

#### 2. Navigate to download or cloning place folder. Open terminal and follow commands

```bash
cd ~
cd Downloads
cd RAINBOW-master || cd RAINBOW
cd src/C-C++
bash cpp.sh
```

#### 3. If U want to use in your code than create a file with extension of cpp (hello.cpp) there. Write the code given below

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

#### 4. Compile and run using commands

```bash
g++ hello.cpp -o hello.out
./hello.out
```

### :cloud: USAGE IN JAVA (:octocat: LINUX :octocat:)

#### 1. Download the ZIP or clone the repository using

```bash
 git clone https://github.com/GauravWalia19/RAINBOW.git
```

#### 2. Navigate to the download or cloning place folder(Open terminal and follow commands)

```bash
cd ~
cd Downloads
cd RAINBOW-master || cd RAINBOW
cd src/JAVA
bash java.sh
```

#### 3. If U want to use in your code than create a file with extension of cpp (hello.cpp) there. Write the code given below:

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

#### 4. Compile and Run using commands:

```bash
javac hello.java
java hello
```

## :rainbow: DEPENDANCIES

1. Specific language compiler:
* **C** -> **gcc compiler**
* **C++** -> **g++ compiler**
* **JAVA** -> **javac compiler**
2. Text Editor like atom,gedit,etc;
3. Linux Terminal

## :rainbow: SUPPORTED LANGUAGES

1. C
2. C++
3. JAVA

## :rainbow: CONTRIBUTING TO RAINBOW

* See [CONTRIBUTION](CONTRIBUTING.md)
* See [CODE OF CONDUCT](CODE_OF_CONDUCT.md)
* For pull request follow [PULL REQUEST TEMPLATE](.github/PULL_REQUEST_TEMPLATE.md)
* For making ISSUE
  * [BUG REPORT](.github/ISSUE_TEMPLATE/bug_report.md)
  * [FEATURE REQUEST](.github/ISSUE_TEMPLATE/feature_request.md)

## :rainbow: AUTHOR

:copyright: Gaurav Walia
