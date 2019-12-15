/*
  Make a linked list by yourself.
*/

#include <iostream>

using namespace std;

struct Node {
  int info;
  Node * next;
};

int main() {
  Node * p;
  Node * head = NULL; // intermediate position holder
  int num = 1;

  // Make 4 nodes.
  for (int i = 0; i < 4; i++) {
    p = new Node;
    p -> info = num++;
    p -> next = head;
    cout << "p = " << p << " and p -> next = " << p -> next
	 << " and head = " << head
         << " p -> info = " << p -> info << '\n';

    head = p;
    cout << "Now head = " << head << "\n\n";
  }

  // Traverse the linked list
  num--;
  while(p) {
    cout << "Node number " << num-- << " is "
	 << p -> info << '\n';
    p = p -> next;
  }

  return 0;
}
