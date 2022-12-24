/**
 * Simple C++ class for representing a Cube.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h" 
//#include "Cube.h" to include all the text from the Cube.h file in the same directory. Because the filename is specified in quotes, as "Cube.h"

double Cube::getVolume() {
  return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
  return 6 * length_ * length_;
}

void Cube::setLength(double length) {
  length_ = length;
}
