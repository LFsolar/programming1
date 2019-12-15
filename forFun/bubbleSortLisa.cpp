/*
  make a bubble sort
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int temp;
  int unsorted = 1;

  // Generate random int array.
  int n = 10;
  int array [n];
  for (int i = 0; i < n - 1; i++) {
    array[i] = rand()%100;
  } 
  
  // Display origianl array.
  for (int i = 0; i < n - 1; i++) {
    cout << array[i] << " ";
  }
  cout << '\n';

  // Bubble sort the array.
  while (unsorted) {
    unsorted = 0;
    for (int i = 0; i < n -2; i++) {
      if (array[i] > array[i + 1]) {
	unsorted++;
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }

  // Display sorted array;
  for (int i = 0; i < n - 1; i++) {
    cout << array[i] << " ";
  }

  cout << '\n';

  return 0;
}
