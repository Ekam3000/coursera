/**
 * C++ program copying a Cube class. 
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  Cube c; // default constructor invoked
  Cube myCube; // default constructor invoked

  myCube = c; // no copy constructor invoked 
//but here both myCube and c have already been instructed.They've already been created by different default constructors.
//A constructor's job is to actually create the object itself, and not just copy things between two existing objects.
// bcoz we are not doing any construction , just copying . so its just an assignment not a construction 
  return 0;
}
