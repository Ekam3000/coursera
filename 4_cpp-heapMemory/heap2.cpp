/**
 * C++ program allocating and double-freeing (!!) memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
using uiuc::Cube;

int main() {
  Cube *c1 = new Cube;
  Cube *c2 = c1;

  c2->setLength( 10 );

  delete c2; // c2 willbe easily be deleted

  delete c1;  // !!
  //If we try and delete C1, our data's not there.
  //So because the data's not there, you're going to expect the compiler to give us an error, because it's going to try and double free memory that doesn't exist.

  return 0;
}
