/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

//Next, it does #include "Cube.h" just like in the Cube.cpp file. You have to include the necessary headers in every cpp file where they are needed. However, you shouldn't use #include to literally include one cpp file in another! There is no need to write #include "Cube.cpp" because the function definitions in the Cube.cpp file will be compiled separately and then linked to the code from the main.cpp file
int main() {
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  std::cout << "Volume: " << volume << std::endl;

  return 0;
}
