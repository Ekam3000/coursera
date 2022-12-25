/**
 * A `Cube` class inheriting from a `Shape`
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include "Shape.h"

namespace uiuc {
//initialization 
/*
When a derived class is initialized, the derived class must
construct the base class:

* Cube must construct Shape
* By default, uses default constructor
* Custom constructor can be used with an initialization list

*/
  Cube::Cube(double width, uiuc::HSLAPixel color) : Shape(width) {
    color_ = color;
  }

  double Cube::getVolume() const {
    // Cannot access Shape::width_ due to it being `private`
    // ...instead we use the public Shape::getWidth(), a public function
    return getWidth() * getWidth() * getWidth();
  }
}
/*
Initializer List

The syntax to initialize the base class is called the
initializer list and can be used for several purposes:

* Initialize a base class ——
* Initialize the current class using another constructor
* Initialize the default values of member variables

*/