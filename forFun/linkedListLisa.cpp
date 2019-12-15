 /*
  Make a linked list.
*/

#include <iostream>
#include <ctime>

using namespace std;

struct Node {
  int info;
  Node * next;
};

int main() {
  // Create the linked list
  Node * p;
  Node * head = NULL; // leaves last node's head as NULL
  
  // Make 4 node objects
  for (int i = 0; i < 4; i++)
    {
      p = new Node;
      cout << "p = " << p << '\n';
    
      // Put random value in each node's info.
      //srand(time(NULL));
      p -> info = rand() % 100;
      cout << p->info << endl;
  
      // The last memory location of the node is the pointer
      // for the 1st memory location of the next pointer.
      p -> next = head;
      head = p;
      cout << "head = " << head << '\n';
    }

  // Traverse the linked list.
  p = head;
  while (p)
    {
      cout << p -> info << ' ' << p-> next << '\n';
      p = p -> next; // jump to the next node
    }

  // This line gives segmentation error because the value is NULL
  cout << "(*p).info = " << (*p).info << '\n';

  return 0;
}
