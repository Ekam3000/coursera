/**
 * C++ program using the & operator to find the address of a variable in memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int num = 7;

  std::cout << "Value: "   <<  num << std::endl;
  std::cout << "Address: " << &num << std::endl;

  return 0;
}
// lifecycle of any variable created inside of a function is exactly as long as the function is being ran


