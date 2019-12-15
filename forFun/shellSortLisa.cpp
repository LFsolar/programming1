/*
  Shell sort an array.
*/

#include <iostream>

using namespace std;

int main() {
  int n = 5;
  int array [n];
  int gap = n / 2;
  int unsorted = 1;
  int temp;

  for (int i = 0; i < n; i++) {
    array[i] = rand()%100;
  }

  // Display unsorted array.
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << '\n';

  // Shell sort.
  while (unsorted) {
    unsorted = 0;
    for (int i = 0; i < n - gap; i++) {
      if (array[i] > array[i + gap]) {
		unsorted++;
		temp = array[i];
	    array[i] = array[i + gap];
		array[i + gap] = temp;
	  }
	}
	gap--;
	cout << "gap = " << gap << '\n';
  }
  
  // Display sorted array.
  for (int i = 0; i < n; i++) {
	cout << array[i] << ' ';
  }
  cout << '\n';

  return 0;
}
