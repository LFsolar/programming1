/*
	Singly linked list
	12/9/2019
*/
#include <iostream>
using namespace std;

struct Node {
	int info;
	Node * next;
	Node() {};
} root, node1;

int main() {
	node1.info = 1;
	root.next = &node1;
	cout << "&node1 = " << &node1.info << endl;
	cout << "root.next = " << root.next << endl;
	
	// Array of nodes
	Node nodeArray[5];
	for (int i = 0; i < 5; i++) {
		nodeArray[i].info = i;
		if (i < 4) nodeArray[i].next = &nodeArray[i+1];
		else nodeArray[i].next = NULL;
	}
	int i = 0;
	while(nodeArray[i].next) {
		cout << &nodeArray[i] << endl;
		try {
			if (nodeArray[i-1].next == NULL) throw "empty";
			cout << nodeArray[i-1].next << endl;
		} catch (const char * e) {
			cout << "Start of array, index -1 is empty" << endl;
		}
		cout << endl;
		i++;
	}
}