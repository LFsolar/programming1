/*
	Lisa Sun
	Programming I
	Dr. McDaniels
	Due: November 4, 2019
	Sort an Array of Structs
	This program sorts an array of structs.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


// create a struct with (at least) 3 fields
struct Recipe {
	int order;
	string ingredient;
	double amount;
	string unit;
};

// print all of the fields in the array in a table(line up the columns)
void printRecipeArray(Recipe *structAr, int mn) {
	cout << setw(4) << "Order"
		 << setw(16) << "Ingredient"
		 << setw(10) << "Amount"
		 << setw(16) << "Unit"
		 << '\n'
		 << "-----------------------------------------------\n";
		 
	for (int i = 0; i < mn; i++) {
		cout << setw(4) << structAr[i].order
			 << setw(16) << structAr[i].ingredient
			 << setw(10) << structAr[i].amount
			 << setw(16) << structAr[i].unit
			 << '\n';
	}
	cout << '\n';
}

// sort the array (in ascending order) on "order"
void sortAcendingOrder(Recipe *structAr, int mn) {
	int unswapped = 1;
	while (unswapped) {
		unswapped = 0;
		for (int i = 0; i < mn - 1; i++) {
			if (structAr[i].order > structAr[i + 1].order) {
				swap(structAr[i], structAr[i + 1]);
				unswapped = 1;
			}
		}
	}
}

// sort the array (in descending order) on another field of the struct
void sortDescendingIngredient(Recipe *structAr, int mn) {
	int unswapped = 1;
	while (unswapped) {
		unswapped = 0;
		for (int i = 0; i < mn - 1; i++) {
			if (structAr[i].ingredient < structAr[i + 1].ingredient) {
				swap(structAr[i], structAr[i + 1]);
				unswapped = 1;
			}
		}
	}
}




int main() {
	
	// create an array of structs
	int n = 11;
	Recipe pie [n];
	
	// read data into the array of structs (9-11 records)
	while(cin) {
		for (int i = 0; i < n; i++) {
			cin >> pie[i].order;
			cin >> pie[i].ingredient;
			cin >> pie[i].amount;
			cin >> pie[i].unit;
		}
	}

	// fill last row of Pie using a different method
	pie[10].order = 5;
	pie[10].ingredient = "ice cream";
	pie[10].amount = 10;
	pie[10].unit = "scoops";
	
	// Print unsorted array
	cout << "Unsorted array:\n";
	printRecipeArray(pie, n);
	
	// Sort order field as descending.
	sortAcendingOrder(pie, n);
	
	// print all of the fields in the array
	cout << "Ascending array sorted by \"Order\"\n";
	printRecipeArray(pie, n);
	
	// Sort ingredient field as ascending.
	sortDescendingIngredient(pie, n);
	
	// print all of the fields in the array
	cout << "Decending array sorted by \"Ingredient\"\n";
	printRecipeArray(pie, n);
}