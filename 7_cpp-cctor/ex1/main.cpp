/**
 * C++ program copying a Cube class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

void foo(Cube cube) {
  // Nothing :)
}

int main() {
  Cube c; //default constructor
  foo(c); // copy constructor invoked
//Because its arguments being passed into a function, we know it has to be copied from main into the foo stack frame.
  return 0;
}
