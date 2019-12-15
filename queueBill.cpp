// implement a queue
//
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
 
struct Node
  {
    int info;
	// last element in Node is a pointer to the next Node
    Node *next;
  };

// Create 2 pointers to Nodes and initialize them to NULL
Node * head = NULL, *tail = NULL;

void push(int x)
  {
	  // Make pointer to a new Node called p
     Node * p = new Node;
     p->info = x;
	 // Head will stay pointing to the 1st node from here on
     if (!head) head = tail = p;
	 // Tail always points to the last added node
     else
       {
         tail -> next = p;
         tail = p;
       }
  }

void pop(int &x)
  {
    Node *t = head;
    x = t->info;
	// If there is more than 1 Node remaining
    if (head != tail)
		// Move head to next Node
      head = head->next;
    else
		// if there's only 1 Node, pop the info and reset everything to NULL
      head = tail = NULL;
	 // if don't delete t, then all returned values after the 1st will be behind
	 // by 1 Node.
    delete t;
  }

#if __INCLUDDE_LEVEL < 1
int main()
{
  push(3);
  push(7);
  push(5);
  int i;
  pop(i); cout << i << endl; 
  pop(i); cout << i << endl; 
  pop(i); cout << i << endl; 
}
#endif

