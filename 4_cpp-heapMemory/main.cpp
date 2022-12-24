/**
 * C++ program printing various memory values using heap-allocated memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int *numPtr = new int;
//in C++, if we ever need memory that is longer than the life cycle of a function, we have to use heap memory.
//The only way to create and keep memory in C++ is the use of the new keyword.
//Stack memory always starts at a high address and grow down.
//Heap memory starts at low addresses and grows up.
  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " <<  numPtr << std::endl;
  std::cout << "&numPtr: " << &numPtr << std::endl;

  *numPtr = 42;
  std::cout << "*numPtr assigned 42." << std::endl;

  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " <<  numPtr << std::endl;
  std::cout << "&numPtr: " << &numPtr << std::endl;

  return 0;
}