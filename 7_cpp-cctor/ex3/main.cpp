/**
 * C++ program copying a Cube class. 
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  Cube c;
  Cube myCube = c; //mycube taking the value of c. the value of c is copied to myCube . so copy constructor called
  // or Cube myCube(c)
  return 0;
}
