/**
 * Simple use of C++ templates.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <string>
using std::cout;
using std::endl;

#include "Cube.h"
using uiuc::Cube;
//A template variable is defined by declaring it before the beginning of a class or function:
/*
template<typename T>
class List
{
  ...
  private:
  T data_;
}
template<typename T>
T max(T a, T b)
{
  if(a>b){ return a;}
  return b;
}
//Templated variables are actually checked at compile time, which allows for errors to be caught before we even run our program.
*/
// We'll call this my_max to avoid conflicts with the "max" in the
// standard libraries.
template <typename T>
T my_max(T a, T b) {
  if (a > b) { return a; }
  return b;
}

int main() {
  cout << "my_max(3, 5): " << my_max(3, 5) << endl;
  cout << "my_max('a', 'd'): " << my_max('a', 'd') << endl;
  
  // Here we construct std::string objects from the literal strings in
  // quotation marks, because the std::string object already implements
  // the ">" operator to do alphabetical ordering. A plain string literal
  // is an array of const char, which wouldn't support that correctly.
  // (Instead, it would just compare the addresses of the arrays.)
  cout << "my_max(std::string(\"Hello\"), std::string(\"World\")): "
       << my_max(std::string("Hello"), std::string("World")) << endl;

/*
Note that here, first we should create std::string objects from these string literals. For example, we should use std::string("Hello") instead of just "Hello".

This is because the standard library lets us compare std::string objects by alphabetical order using operators like ">". However, if we directly compare these string literals using ">" as shown by this screen, we'll end up simply comparing the addresses of two arrays of const char. That's not what we want.*/
  // You need to finish implementing the ">" operator for Cube to get the
  // next line to work!
  // cout << "my_max( Cube(3), Cube(6) ): " << my_max( Cube(3), Cube(6) ) << endl;

  return 0;
}
