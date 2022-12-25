/**
 * An empty BinaryTree.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

#include "BinaryTree.h"

int main() {

  std::cout << std::endl << "Instantiating an object... (no output expected)" << std::endl;
  BinaryTree<int> t;

  std::cout << "Exiting..." << std::endl;

  std::cout << "(This example doesn't have the complete implementation," << std::endl
    << " so please see the other binary tree example directories for more.)" << std::endl << std::endl;

  return 0;
}
/*
the height of a binary tree is the  number of edges in the longest path from the root to a leaf.
binary tree full: if every node has either zero children or two children

binary tree perfect: if all interior nodes have two childrens and leaves
are at the same level

binary tree complete : if the tree is perfect up until the last level and all leaf node son the last level are pushed to the left 

is a full tree complete-> No

is a complete tree full -> No
*/