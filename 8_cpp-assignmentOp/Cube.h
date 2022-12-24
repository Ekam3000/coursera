/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube();  // Custom default constructor
      Cube(const Cube & obj);  // Custom copy constructor
// if an assignment operator is not provided , the C++ compiler provides an automatic assignment operator.
// the automatic assignment operator will copy the contents of all member variables.  

// custom assignment operator -->
/*
  Is a public member function of the class.
  Has the function name operator=.
  Has a return value of a reference of the class' type.
  Has exactly one argument
   - The argument must be const reference of the class' type.

*/
      Cube & operator=(const Cube & obj);  // Custom assignment operator

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
