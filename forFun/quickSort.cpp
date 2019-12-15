/*
	Quick sort
	10/31/2019
	Finished!!!
	Remember: recursion doesn't need while loops
*/

#include <iostream>
#include <array>
using namespace std;

// partition() returns the position, not the value.
int partition2(int ar[], int L, int R) {
	while(L < R) {
		if (ar[L] <= ar[R]) R--;
		swap(ar[L], ar[R]);
		if (L < R) {
		if(ar[L] <= ar[R]) L++;
		swap(ar[L], ar[R]);
		}
	}
	return L;
}

// partition2() returns the position, not the value.
int partition(int ar[], int L, int R) {
	while(L < R) {
		while(L < R && ar[L] <= ar[R]) R--;
		swap(ar[L], ar[R]);
		while(L < R && ar[L] <= ar[R]) L++;
		swap(ar[L], ar[R]);
	}
	return L;
}

void quickSort(int ar[], int L, int R) {
	int unsorted = 1;
	//while(unsorted) {
		unsorted = 0;
		int position = partition(ar, L, R);
		if (position - L > 1) {
			quickSort(ar, L, position - 1);
			unsorted = 1;
			cout << "Testing left position: " << ar[position] << endl;
		}
		if (R - position > 1) {
			//cout << "Testing right position: " << ar[position] << endl;
			quickSort(ar, position + 1, R);
			unsorted = 1;
		}
	//}
}

int main() {
	//int array[] = {4, 2, 1, 5, 9};
	int array[] = {7, 4, 8, 6, 1, 9, 3, 2, 5, 19, 10, 11, 12};
	int length = sizeof(array) / sizeof(*array);
	cout << "array length = " << length << endl;
	//cout << partition2(array, 0, length - 1) << endl;
	quickSort(array, 0, length - 1);
	for (int i = 0; i < length; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
	return 0;
}