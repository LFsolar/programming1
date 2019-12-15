/*
	A queue using nodes that switch on and off.
	Instead of poping out nodes, turn them off.
	10/20/2019
	
	FINISHED!
*/
#include <iostream>
using namespace std;

struct Node {
	int info;
	bool empty = true;
	Node * next;
};

Node * oldest;
Node * newest;

void push(int num) {
	if (newest -> next -> empty) {
		newest = newest -> next;
		newest -> empty = false;
		newest -> info = num;
	}
}

void pop(int &num) {
	if (!(oldest -> empty)) {
		num = oldest -> info;
		oldest -> empty = true;
		oldest = oldest -> next;
	}
}

int main() {
	int n = 5;
	int x;
	Node arr[n];
	newest = &arr[0];
	oldest = &arr[1];
	
	for (int i = 0; i < n; i++) {
		arr[i].next = &arr[(i + 1) % n];
	}
	
	push(10);
	push(15);
	push(20);
	push(30);
	push(49);
	push(50);
	pop(x);
	pop(x);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i].info << ' ' << arr[i].empty << endl;
	}
	
	cout << "x = " << x << endl;
	
	return 0;
}