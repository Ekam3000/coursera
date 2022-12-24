/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

namespace uiuc {
  Cube::Cube() {
    length_ = 1;
    std::cout << "Default constructor invoked!" << std::endl;
  }
// copy constructor ->
//a copy constructor is a special type of constructor that allows us to make a copy of an existing object.
// so a copy constructor creates a new object.

// automatic copy constructor
//an automatic copy constructor is defined for us if we don't provide any copy constructor whatsoever.The automatic copy constructor is going to copy the contents of all variables.

//custom copy constructor 
//The function needs to be a class constructor, so it needs to follow all the rules for a class constructor, and it must have exactly one argument, and that argument must be a constant reference to the same type as the class itself.
  Cube::Cube(const Cube & obj) {
    length_ = obj.length_;//Since this's only variable, that's all this function needs to do.
    std::cout << "Copy constructor invoked!" << std::endl;
  }
//This custom copy constructor takes in an object, and the goal is to copy the contents of the object into our current instance

// copy constructor are invoked automatically :
//times that it is invoked is when ->
//1.we pass an object as a parameter by value into another function,
//2. if we return an object by value from a function.
//3. initializing a new object
  double Cube::getVolume() {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
