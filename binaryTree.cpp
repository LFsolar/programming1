/*
	in class binary tree example
	10/15/2019
*/

#include <iostream>
using namespace std;

struct Node {
	int info; // 4 byte
	Node * leftLink; // pointer is 8 bytes
	Node * rightLink; // pointer is 8 bytes
};

int main() {
	Node * root = NULL, * p;
	// New does 2 things: 1. allocates space, 2. returns address.
	// Reserve enough memory in heap (free space) for a Node.
	// 20 bytes here bc Node is 20 bytes.
	// now p has the address of the new Node
	p = new Node;
	// same as (*p).info = ____;
	p -> info = rand() % 100;
	
	cout << p << endl;
	
	p -> leftLink = p -> rightLink = NULL;
	root = p; // = NULL
	
	// preserve root, use t
	Node * t = root;
	
	// Now p has a different value:
	p = new Node;
	p -> info = rand() % 100;
	p -> leftLink = p -> rightLink = NULL;
	
	int done = 0;
	
	while(!done) {
			
		// Direct new node to right or left.
		if (p -> info < t -> info) {
			// Find the bottom of the tree to add Node link
			// Goes Left.
			if (t -> leftLink == NULL) {
				t -> leftLink = p;
				done = 1;
				// Else walk down the tree.
			} else t = t -> leftLink;
		// Else go right.
		} else {
			if (t -> rightLink == NULL) {
				t -> rightLink = p;
				done = 1;
			} else t = t -> rightLink;
		}
	}
	return 0;
}