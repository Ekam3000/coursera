/**
 * C++ code showing improper use of memory (returning a reference to a stack variable).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

double someOtherFunction();  // Forward decl

#include <iostream>
#include "Cube.h"
using uiuc::Cube;

Cube *CreateUnitCube() {
  Cube cube;
  cube.setLength(15);
  return &cube;
}
int main() {
  Cube *c = CreateUnitCube();
  //So, that means CreateUnitCube returned value is cube and that means that c points to the stack memory.

  //One thing you'll remember is we said that the stack frame exists only so long as the function is running, so here on line 16, we return the memory address of cube, but because we've returned from that function, we see that this memory is no longer allocated to us.

  // so,  that memory has been deallocated by the system, it may not be reused yet, we don't know what's happening in that memory, it may still be a cube, it may not be a cube.
  someOtherFunction();
  double a = c->getSurfaceArea();
  std::cout << "Surface Area: " << a << std::endl;
  double v = c->getVolume();
  std::cout << "Volume: " << v << std::endl;
  return 0;
}
//Here we see the surface area and the volume are zero, that's absolutely not what we expected, but was a result of that memory being reused by the system for another purpose, that just happened to fill up that memory with zeros.

// Some other function that does something that uses some stack memory.
// In this code, we calculate the total volume of cubes of length from 0..99.
double someOtherFunction() {
  Cube cubes[100];
  double totalVolume = 0;

  for (int i = 0; i < 100; i++) {
    cubes[i].setLength(i);
    totalVolume += cubes[i].getVolume();
  }

  return totalVolume;
}

/* see the differnce b/t the above code and the below code*/
/*

#include<iostream>
// This class Pair has already been defined for you.
// (You may not change this definition.)
class Pair {
public:
  int first, second;
  void check() {
    first = 5;
    std::cout << "Congratulations! The check() method of the Pair class \n has executed. (But, this isn't enough to guarantee \n that your code is correct.)" << std::endl;
  }
};

// Insert your declaration and implementation of the function pairFactory()
// below, by replacing "..." with proper C++ code. Be sure to declare the
// function type to return a pointer to a Pair.

Pair * pairFactory() {
  // ...
  // (You can use as many lines as you want.)
  Pair*pair= new Pair; // noticing line
  return pair; // should return the address of the heap memory 
}

// Your function should be able to satisfy the tests below. You should try
// some other things to convince yourself. If you have a bug in this problem,
// the usual symptom is that after you submit, the grader will crash with a
// system error. :-)
int main() {
  Pair *p; // pointer object
  p = pairFactory();
  
  // This function call should work without crashing:
  p->check();
  
  // Deallocating the heap memory. (Assuming it was made on the heap!)
  delete p; // noticing line

  std::cout << "If you can see this text, the system hasn't crashed yet!" << std::endl;  

  return 0;
}

*/