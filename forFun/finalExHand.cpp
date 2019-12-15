/*
	Exception handling practice
*/
#include <iostream>
using namespace std;

int positiveOnly(int a, int b) {
	string neg;
	int c = a - b;
	if(c <= 0) throw neg;
	return c;
}

int main() {
	try {
		positiveOnly(5, 3);
		positiveOnly(1, 2);
	}
	catch (string neg) {
		cout << "negative value" << endl;
	}
	cout << "postive value" << endl;
}