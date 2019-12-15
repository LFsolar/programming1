/*
	Make a binary tree
	10/16/2019

*/

#include <iostream>
using namespace std;

struct Node {
	int info;
	Node * right = NULL;
	Node * left = NULL;
} root;

//Node * leftLink;
//Node * rightLink;
Node * currentNode;

void insert(int num) {
	// Why must I instatiate the Node with a pointer?
	Node * p = new Node;
	p -> info = num;
	bool freeNode = true;
	
	while (freeNode) {
		while (num >= currentNode -> info && freeNode) {
			if (currentNode -> right == NULL) {
				currentNode -> right = p;
				freeNode = false;
			// Else keep walking down
			} else currentNode = currentNode -> right;
		}
		while (num < currentNode -> info && freeNode) {
			if (currentNode -> left == NULL) {
				currentNode -> left = p;
				freeNode = false;
			} else currentNode = currentNode -> left;
		}
	}
	
	currentNode = &root;
}


int main() {
	currentNode = &root;
	root.info = 20;
	insert(5);
	insert(4);
	insert(4);
	
	cout << root.info << ' ' << root.right << ' ' << root.left << endl
		 << root.left -> info << endl
		 << root.left -> left -> info << endl
		 << root.left -> left -> right -> info << endl;
	
	return 0;
}