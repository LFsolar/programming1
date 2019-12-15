/*
	Use pointers to navagate an array
*/

#include <iostream>

using namespace std;

// Use a pointer to access next element.
int showNext(const int * ip) {
	return *(ip + 1);
}

struct Node {
	int num;
	string name;
};

// Use pointer to access next element in a struct.

// return a pointer
int * returnNext(int * ip) {
	return ip + 1;
}

int main() {
	int n = 5;
	int arr[n] = {10, 20, 30, 40, 50};
	
	// The original array.
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
	
	cout << "The element after " << arr[0] << " is " 
		 << showNext(&arr[0]) << '\n';
	
	return 0;
}