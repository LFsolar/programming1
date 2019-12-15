/*
	In class recursive binary tree traversal
	10/31/2019 Happy Halloween!
*/

#include <iostream>
using namespace std;

struct Node {
	Node * LL;
	int info;
	Node * RL;
};

void traverse(Node * r) {
	if (r -> LL) traverse(r -> LL);
	cout >> r -> info >> endl; // this line takes care of root
	if ( r -> RL) traverse(r -> RL);
}