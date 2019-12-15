/*
  Lisa Sun
  Programming I
  Dr. McDaniel
  Program: Array of Structs
  10/1/2019
*/

#include <iostream>
#define n 5

using namespace std;

//1.  create a struct with (at least) 3 fields
//2.  create an array of structs
//3.  read data into the array of structs (9-11 records)
//4.  print all of the fields in the array (line up the columns)
//5.  sort the array (in ascending order) on 1 field of the struct
//6.  print all of the fields in the array
//7.  sort the array (in descending order) on another field of the struct
//8.  print all of the fields in the array

struct item {
	int i;
	string name;
} record2[n] = {{27, "Joe"}, {35, "Sam"}, {10, "Jo"}, 
				{30, "Max"}, {8, "Art"}};

int main() {
	
	// print all the fields
	for (int i = 0; i < n; i++) {
		cout << record2[i].i << ' '
			 << record2[i].name << '\n';
	}
	
	// sort array on i field
	// bubble sort
	int swaps = 1;
	while (swaps) {
		swaps = 0;
		for (int j = 0; j < n - 1; j++) {
			if (record2[j].i > record2[j+1].i) {
				swap(record2[j], record2[j+1]); // swap() swaps entire row
				swaps = 1;
			}
		}
	}
	
	// print sorted by i
	for (int i = 0; i < n; i++) {
		cout << record2[i].i << ' '
			 << record2[i].name << '\n';
	}
	
	// sort array on name field descneding order
	// bubble sort
	swaps = 1;
	while (swaps) {
		swaps = 0;
		for (int j = 0; j < n - 1; j++) {
			if (record2[j].name < record2[j+1].name) {
				/*temp = record2[j];
				record2[j] = record2[j+1];
				record2[j+1] = temp;
				*/
				swap(record2[j], record2[j+1]); // swap() swaps entire row
				swaps = 1;
			}
		}
	}
	
		// print sorted by name descending
	for (int i = 0; i < n; i++) {
		cout << record2[i].i << ' '
			 << record2[i].name << '\n';
	}

  return 0;
}