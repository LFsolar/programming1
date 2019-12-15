/*
	program using try, catch, throw 
	11/7/2019
*/

#include <iostream>
using namespace std;

void checkAlphabetical(string str) {
	for (int i = 0; i < str.length(); i++) {
		// if element is non-alphabetical ASCII
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') {
			throw -1;
		}
	}
}

int main() {
	string firstName;
	cout << "Enter your first name" << endl;
	cin >> firstName;
	
	try {
		checkAlphabetical(firstName);
		cout << "Your name is " << firstName << endl;
	} catch (int j) {
		cout << "Value thrown is " << j << endl;
		cout << "main::Non-alphabetical value entered." << endl;
	}
}