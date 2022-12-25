#include "Shape.h"

Shape::Shape() : Shape(1) {  // the default constructor is going to call the one parameter constructor 
  // Nothing.
}
// So, what's happening here is the default constructor of shape is using the logic in the one parameter of constructive shape to initialize our object, and it's specifically passing and we want a width one shape.
//In our one parameter constructor, we see we have an initializer list here and it initializes the private member variable width to the value that's passed in as width.

/*
So, through the use of initializer list, we were able to initialize the default constructor with a one parameter constructor, and then our one parameter constructor initialize private member variables without ever having to do anything in the code itself.
*/


Shape::Shape(double width) : width_(width) {
  // Nothing.
}

double Shape::getWidth() const {
  return width_;
}
