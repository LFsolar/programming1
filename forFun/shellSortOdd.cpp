/*
	Shell sort with odd N
*/

#include <iostream>

using namespace std;

void shellSort(int ar[], int N)
  {
    int  gap = N/2;
    while (gap)
      {
        int swaps = 1;
        while (swaps--) {
          for (int i = 0; i < N-gap; i++)
            if (ar[i] > ar[i+gap])
              swaps = 1,swap(ar[i], ar[i+gap]);
          
        cout << "\ngap " << gap << endl;
        for (int i = 0; i < N; i++) cout << ar[i] << ' ';
        cout << endl;
        gap /= 2;
		
      }
  }

int main() {
	int n = 9;
	
	// Make array with random numbers 0-99.
	int ar[n];
	
	for (int i = 0; i < n; i++) {
		ar[i] = rand() % 100;
	}
	
	// Display original array.
	cout << "Original array:\n";
	for (int i = 0; i < n; i++) {
		cout << ar[i] << ' ';
	}
	cout << '\n';
	
	shellSort(ar, n);

	cout << '\n';
	
}