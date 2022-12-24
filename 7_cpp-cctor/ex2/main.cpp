/**
 * C++ program copying a Cube class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

Cube foo() {
  Cube c; //default constructor called
  return c; // copy constructor called->  we need to copy it over to main so that main can make use of it.
}

int main() {
  Cube c2 = foo(); //we see that c2 needs to take on the value of what's returned back from foo. So expect a third copy constructor to copy from the main stack frame into the variable c2.
  return 0;
}
