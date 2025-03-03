/**
 * C++ class for a "stack" of cubes in a Tower of Hanoi puzzle.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#pragma once

#include <vector>
#include "uiuc/Cube.h"
using uiuc::Cube;

class Stack {
  public:
    void push_back(const Cube & cube);
    Cube removeTop();
    Cube & peekTop();
    unsigned size() const;

    // An overloaded operator<<, allowing us to print the stack via `cout<<`:
    friend std::ostream& operator<<(std::ostream & os, const Stack & stack);
    //This friend ostream function allows us to "cout" an object. output of an object in a textual way
  private:
    std::vector<Cube> cubes_; // vector of cube objects 
};
