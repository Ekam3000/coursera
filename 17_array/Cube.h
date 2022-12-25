/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#pragma once // this line of code is always present in each header files. this pragma once line instructs the compiler to only compile this code once even if multiple people use our class. we'll only want the definition of our class to be defined exactly once.

namespace uiuc {

// we can choose any namespace we want for our cube. there is no restriction on namespace besides the usual restrictions on variable names..
//a "cube" is rather generic - hundreds of cube-based data structures exist! We will be specific about our Cube and specify that our Cube is within the uiuc namespace!

  class Cube {
    public:
      Cube(double length);  // One argument constructor

      double getVolume() const;
      double getSurfaceArea() const;
      void setLength(double length);

      bool operator==(const Cube & other);

    private:
      double length_;
  };
}
