/**
 * Simple C++ class for representing a Cube (with a custom constructor).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube();  // Custom default constructor -> its a zero argument constructor
      // if we do not provide any custom contructors , the c++ compiler provides an automatic default constructor for our class for free!
      // All that this automatic default constructor does is it's going to initialize all of the member variables to their default values.

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
