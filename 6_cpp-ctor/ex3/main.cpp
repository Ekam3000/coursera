/**
 * C++ program using the Cube's one arugment constructor.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

int main() {
  uiuc::Cube c;  // !!!
  //Because we only have our one parameter constructor, we know that there is no automatic default constructor.
  //So, in line 12, when we're trying to call this zero parameter constructor, it's not going to find anything to call it.
  //Because C++ is strongly typed language, it's going to find this error at compile time.
  std::cout << "Volume: " << c.getVolume() << std::endl;
  return 0;
}