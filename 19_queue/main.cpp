/**
 * Simple use of std::queue.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <queue>

int main() {
  // Create a std::queue:
  std::queue<std::string> q;

  // Add several strings to the queue:
  q.push( "Orange" );
  q.push( "Blue" );
  q.push( "Illinois" );

  // Print the front of the queue out and pop it off:
  std::cout << "First pop(): " << q.front() << std::endl;
  q.pop();

  // Add another string and then print ouf the front of the queue:
  q.push( "Illini" );
  std::cout << "Second pop(): " << q.front() << std::endl;

  return 0;
}
/*
internally a queue can be implemented with either of array or linked list(a doubly linked list)
crete, push ,pop,empty in both kind of implementation will take O(1) time
*/