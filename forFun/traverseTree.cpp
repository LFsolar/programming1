/*
	Traverse the binary tree and printout in order
	10/24/2019
*/

#include <iostream>
#include <iomanip>
#include <stack>
#include <stdlib.h>
#define NN 100
using namespace std;

struct node {
	node * ll;
	int info;
	node * rl;
	node() {ll = rl = NULL;}
};

struct node * root;

void traverseLisa(node * root) {
	node * nextLeftMost;
	node * walker = root;
	stack<node*> stak;
	// Go to left-most node
	while (walker -> ll != NULL) {
		nextLeftMost = walker;
		walker = walker -> ll;
		cout << *walker << endl;
	}
	// now reached leftmost node
	stak.push(walker);
	cout << stak.top() -> info << endl;
	stak.pop();
	// now go right
	while(walker -> rl != NULL) {
		walker = walker -> rl;
		cout << *walker << endl;
		stak.push(walker);
		while (walker -> ll != NULL) {
			walker = walker -> ll;
			cout << *walker << endl;
			stak.push(walker);
		}
		while(!stak.empty()) {
			walker = stak.top();
			cout << *walker << endl;
			cout << stak.top() -> info << endl;
			stak.pop();
		}
	}
	
	walker = root;
	
	if (walker -> ll == NULL) {
		// use this info
	} //else
		// keep walking down the left
	
}

int main() {
	struct node * root = NULL, *t, *t2;
	int done;
	int m = NN;
	cout << "the random numbers" << endl;
	cout << endl;
	
	for (int i = 0; i < m; i++) {
		t2 = new node;
		t2 -> info = rand() % 20000;
		cout << setw(6) << t2 -> info;
		// insert into the tree
		if (root == NULL) root = t2;
		else {
			t = root;
			done = 0;
			while (!done) {
				if (t2 -> info < t -> info)
					if (t -> ll == NULL)
						t -> ll = t2, done = 1;
					else
						t = t -> ll;
				else
					if (t -> rl == NULL)
						t -> rl = t2, done = 1;
					else
						t = t -> rl;
			}
		}
	}
	
	cout << endl << endl;
	cout << "starting traverseLisa" << endl;
	traverseLisa(root);
	cout << endl << endl;
	return 0;
}