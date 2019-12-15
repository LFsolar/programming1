/*
	Shell sort
	Why do I need to use swaps variable?
	This program does not use swaps variable.
*/

#include <iostream>

using namespace std;

void shellsort(int ar[], int n) {
	int gap = n/2;
	while (gap) {
		// Check the 1st half of array, + middle number if array n is odd.
		for (int i = 0; i < n - gap; i++)
			if(ar[i] > ar[i + gap]) swap(ar[i], ar[i + gap]);
		
		cout << "gap = " << gap << '\n';
		for(int i = 0; i < n; i++) {
			cout << ar[i] << ' ';
		}
		cout << '\n';
		gap /= 2;
	}
	
}

void shellsortBill(int ar[], int N)
  {
    int  gap = N/2;
    while (gap)
      {
        int swaps = 1;
        while (swaps--) 
          for (int i = 0; i < N-gap; i++)
            if (ar[i] > ar[i+gap])
              swaps = 1,swap(ar[i], ar[i+gap]);
          
        cout << "gap " << gap << endl;
        for (int i = 0; i < N; i++) cout << ar[i] << ' ';
        cout << endl;
        gap /= 2;
      }
  }

int main() {
	int n = 15;
	//int ar[n];
	
	/*
	// Fill array with random numbers 0-99.
	for(int i = 0; i < n; i++) {
		ar[i] = rand() % 100;
	}
	*/
	
	int ar[n] = {42, 53, 75, 46, 38, 24, 72, 33, 76, 11, 16, 77, 68, 59, 0};
	
	cout << "Original array:\n";
	for (int i = 0; i < n; i++) {
		cout << ar[i] << ' ';
	}
	cout << '\n';
	
	//shellsort(ar, n);
	shellsortBill(ar, n);

	return 0;
}