/*
	Make a queue.
	incomplete
*/

#include <iostream>
using namespace std;

struct Node {
	int info;
	Node * next;
};

Node * newest = NULL;
Node * oldest = NULL;

void push(int num) {
	newest -> info = num;
	newest = newest -> next;
}

void pop(int &num) {
	Node * p = oldest;
	num = oldest -> info;
	// Remove popped Node
	
	// put in empty Node
	Node * replacement = new Node;
	replacement = p;
	
	// Unlink the popped Node, and link up the chain	
	replacement -> next = oldest -> next;

	oldest = oldest -> next;
}

int main() {
	int n = 3;
	int x;
	Node arr[n];
	newest = oldest = &arr[0];
	
	// Link each next and make circular
	for (int i = 0; i < n; i++) {
		arr[i].next = &arr[(i+1) % n];
	}
	
	push(1);
	push(2);
	push(3);
	pop(x);
	//push(4);
	//push(5);
	
	// Display all elements in array.
	for (int i = 0; i < n; i++) {
		cout << arr[i].info << ' ';
	}
	cout << "\nx = " << x << endl;
	
	return 0;
}