/**
 * Simple C++ class for representing a Cube.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

// All header (.h) files start with "#pragma once":
#pragma once //Note the #pragma once at the beginning. Instructions beginning with # are special commands for the compiler, called preprocessor directives. This instruction prevents the header file from being automatically included multiple times in a complex project, which would cause errors.

// A class is defined with the `class` keyword, the name
// of the class, curly braces, and a required semicolon
// at the end:
class Cube {
  public:  // Public members:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};
