/*
	Binary tree
	Class handout
	10/22/2019
	
	a non-recursive traversal of a binary tree of structs
*/

#include <iostream>
#include <iomanip>
#include <stack>
#include <stdlib.h>
#define NN 100
using namespace std;

struct node {
	// is ll, not 11
	node * ll;
	int info;
	node * rl;
	// Constructor
	// What if this was removed? Nothing happens because setting to NULL is
	// 	redundant.
	node() {ll = rl = NULL;}
};

struct node * root;

void traverse_using_a_stack (node * t) {
	stack<node *> stak;
	while (t) {
		do {
			stak.push(t);
			t = t -> ll;
		} while (t);
		
		do {
			t = stak.top();
			stak.pop();
			cout << setw(6) << t -> info;
		} while (!t -> rl && !stak.empty());
		t = t -> rl;
	}
}

int main() {
	struct node * root = NULL, * t, * t2;
	int done;
	int m = NN;
	cout << "the random number" << endl;
	cout << endl;
	
	for (int i = 0; i < m; i++) {
		t2 = new node;
		t2 -> info = rand() % 20000;
		
		// Echo check
		cout << setw(6) << t2 -> info;
		
		// insert into the tree
		if (root == NULL) root = t2;
		else {
			t = root;
			done = 0;
			while (!done) {
				if (t2 -> info < t -> info) {
					if (t -> ll == NULL) {
						t -> ll = t2;
						// Found a place to put in t2, so we can stop looking.
						done = 1;
					} else t = t-> ll;
				} else {
					if (t -> rl == NULL) {
						t -> rl = t2;
						done = 1;
					} else t = t -> rl;
				}
			}
		}
	}
	
	cout << endl << endl;
	cout << "starting traverse_using_a_stack" << endl;
	traverse_using_a_stack (root);
	cout << endl << endl;
	return 0;
}