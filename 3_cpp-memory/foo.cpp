/**
 * C++ program printing memory addresses of variables across two functions.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

void foo() {
  int x = 42;
  std::cout << " x in foo(): " <<  x << std::endl;
  std::cout << "&x in foo(): " << &x << std::endl;
}

int main() {
  int num = 7;
  std::cout << " num in main(): "   <<  num << std::endl;
  std::cout << "&num in main(): " << &num << std::endl;

  foo();

  return 0;
}

//the third thing we expect to see is that x is going to have the value of 42, and the last thing we expect to see is the address of x is going to be a large number just like the memory address of num, except for it's going to be slightly smaller, slightly close to zero because we see that foo is below where main was running.