/**
 * Simple C++ program using variables.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int i = 4;
  i = i + 2;
  
  char c = 'a';

  std::cout << i << " " << c << std::endl;

  return 0;
}

/*
Please remember: You can use any of these editors for editing your code text, but for actually building (compiling), you need to use the makefiles that we provide. These are special scripts designed to work with the terminal program "Make", which is executed in the Bash terminal simply by typing make. You will see us refer to "make ..." commands many times in the instructions.

When you type "make" at the terminal
 it will look for a Makefile in the same directory, and it will follow the carefully scripted instructions there to do what we need

We include a Makefile with each project in this course, which is a kind of script that tells the compiler how to build your program. It gives instructions to the compiler and linker about which source files to use. All you need to do is type make on the command line in the appropriate directory. Let's try it out
We can build the project by typing:

make

ec2-user:~/environment/coursera-cs400/cpp-class (master) $ make
g++ -std=c++14 -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c main.cpp -o .objs/main.o
g++ -std=c++14 -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c Cube.cpp -o .objs/Cube.o
g++ .objs/main.o .objs/Cube.o -std=c++14 -o main

ec2-user:~/environment/coursera-cs400/cpp-class (master) $ ls
Cube.cpp  Cube.h  main  main.cpp  Makefile

./main
ec2-user:~/environment/coursera-cs400/cpp-class (master) $ ./main
Volume: 42.1442
ec2-user:~/environment/coursera-cs400/cpp-class (master) $ 
*/