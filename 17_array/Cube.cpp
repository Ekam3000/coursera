/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>
// the opstream header includes operations for reading/writing to files and the console itself , including std:: cout.
// std ::cout--> console out
// std denoting the standard template library namespace
namespace uiuc {  
  Cube::Cube(double length) {
    length_ = length;
  }

// Cube :: means we are going to implement our function
  double Cube::getVolume() const {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }

  bool Cube::operator==(const Cube & other) {
    return (length_ == other.length_);
  }
}
