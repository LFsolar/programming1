/*
	Shell sort showing gap-dependant iterations.
	As opposed to iterations dependant on transversing array 1x.
*/

#include <iostream>

using namespace std;

void shellsort(int ar[], int n) {
	int gap = n/2;
	
	for (gap; gap > 0; gap /= 2) {
		
	}
}

int main() {
	int n = 5;
	int ar[n];
	
	for (int i = 0; i < n; i++) {
		ar[i] = rand() % 100;
	}

	return 0;
}
