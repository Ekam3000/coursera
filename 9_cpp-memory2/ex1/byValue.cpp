/**
 * C++ program copying a Cube currency by value.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

// transfers a cube to another cube by value 

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube
  Cube myCube = c; // copy constructor called 

  return 0;
}
// at the end of this program , we expect to have created two cubes , so i expect that this program is going to create $2000. which is not waht we want to do
