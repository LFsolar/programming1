/*
	Access struct members with pointer + bytes
	1st member is always 8 bytes, followed by second member's 2 bytes.
	Always a surplus of 8 bytes.
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct node {
	node * p3;
	node * p2;
	int num; // int size = 4 bytes
	node * p; // pointer size = 8 bytes
	//node * p2;
	int num2;
	//string line2;
} root;

int main() {
	node * pointer = &root;
	root.num = 45;
	root.p = new node;
	root.num2 = 100;
	
	cout << setw(13) << "&root = " << setw(15) << &root << endl;
	cout << setw(13) << "&root.p2 = " << setw(15) << &(root.p2) << endl;
	cout << setw(13) << "&root.num = " << setw(15) << &(root.num) << endl;
	cout << setw(13) << "&root.p = " << setw(15) << &(root.p) << endl;
	cout << setw(13) << "&root.num2 = " << setw(15) << &(root.num2) << endl;
	// cout << setw(13) << "&root.num2 = " << setw(15) << &(root.num2) << endl;
//	cout << setw(13) << "&root.p2 = " << setw(15) << &(root.p2) << endl;
//	cout << setw(13) << "&root.line2 = " << setw(15) << &(root.line2) << endl;
	
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(node*) = " << sizeof(node*) << endl;
	cout << "sizeof(root.num)= " << sizeof(root.num) << endl;
	cout << "sizeof(root.p) = " << sizeof(root.p) << endl;
	cout << "sizeof(root) = " << sizeof(root) << endl;
//	cout << "pointer = " << pointer << endl;
//	cout << "pointer + 4 = " << pointer + 4 << endl;
}