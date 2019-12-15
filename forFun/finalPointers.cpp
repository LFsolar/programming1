/*
	relation between new vs pointers and arrays
*/

#include <iostream>
using namespace std;

int main() {
	int x = 8;
	int * pX = &x;
	
	cout << *pX << endl;
}