/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

namespace uiuc {  
  Cube::Cube(double length) {
    length_ = length;
    std::cout << "Created $" << getVolume() << std::endl;
  } // created a cube 

  Cube::Cube(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Created $" << getVolume() << " via copy" << std::endl;
  } // created a cube via copy 

  Cube & Cube::operator=(const Cube & obj) {
    std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << std::endl;
    length_ = obj.length_;
    return *this;
  } // assignment operator transforms an instance from one value to another value
  // cube transform its old volumn into the new volume 

// all of these three are creating money.

// so we should be be careful about when these things get invoked in our code.

// in computer science , whenever an object is created its taking up memory 
  double Cube::getVolume() const {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
