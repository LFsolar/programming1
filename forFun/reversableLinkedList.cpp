/*
  Make a linked list that can go both forward and backward.
*/

#include <iostream>

using namespace std;

struct Node {
  int info;
  Node * next;
  Node * previous;
};

int main() {
  Node * p;
  Node * head = NULL;
  Node * reverse;
  int num = 0;
  int i = 0;

   p = new Node;


  do {
    p -> info = num++;
    p -> next = head;
    head = p;  
    // Make the next node
    reverse = new Node;
    cout << "reverse = " << reverse << '\n';
    p -> previous = reverse;
    cout << "p -> previous = " << p -> previous << '\n';
    
    i++;
  } while (i < 4);

  // Traverse forward through list.
  while (p) {
    cout << "Node number " << --num << " is " << p -> info
	 << '\n';
    p = p -> next;
  }

  return 0;
}
