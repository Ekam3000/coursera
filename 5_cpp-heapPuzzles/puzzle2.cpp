/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x = new int;
  int &y = *x;
  // reference variable -> going to have alias(a false name) of another piece of memory which allows us to give a name to a piece of memory.So y is going to alias the dereference value of x.
 // so heap memory ka name y rakh diya 
  y = 4;

  cout << &x << endl;
  cout << x << endl;
  cout << *x << endl;

  cout << &y << endl;
  cout << y << endl;
  // cout << *y << endl; //-> we cant do this 

  return 0;
}
