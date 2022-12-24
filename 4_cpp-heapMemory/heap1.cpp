/**
 * C++ program allocating and free'ing heap memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
using uiuc::Cube;

int main() {
  int *p = new int; 
  // this line is going to allocate two differnt variables -> first the pointer p , which is going to be on the stack . its just a ordinary pointer . second variable is new int allocated on heap .. and pointer pointing to this memory

  Cube *c = new Cube;
// the new operator in C++ will always do three things:
//1. allocate memory on the heap for the data structure
//2. initialize the data structure
//3. return a pointer to the start of the data structure.

  *p = 42;
 // (*c).setLength(4);
 
  // when the object is stored via a pointer , access can be made to member functions using the -> operator 
  c->setLength(4);

  delete c;  c = nullptr;
  delete p;  p = nullptr;
  return 0;
}
//nullptr represents a pointer to "nwhere"
// address 0x0 is reserved and never used by the syatem
// address 0x0 will always generate an segmentation fault when accessed
// calls to delete 0x0 is ignorned.So it's an address that can't be deleted.

/*
We'd like to clarify some common misunderstandings. Remember that after the line "delete c;" the pointer c still stores the address of the deleted variable, which is no longer valid to dereference and is therefore dangerous. The pointer won't be automatically set to nullptr. Then, you should manually set c to nullptr if you want to better protect against coding mistakes:

delete c;

c = nullptr*/