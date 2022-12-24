/**
 * C++ program aliasing a Cube class by reference.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube
  Cube & myCube = c; // we transfer the money to another person by aliasing the money because we have a reference variable here. so mycube becomes an alias of C.

  return 0;
}
// in this program . cube is contructed only once 