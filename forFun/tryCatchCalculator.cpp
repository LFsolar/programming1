/*
	Lisa Sun
	12/8/2019
	Calculator with exception handling
*/
#include <iostream>
#include <string>
using namespace std;

// Calculate
double doMath(double no1, double no2, char op) {
	if (op == '+') return no1 + no2;
	else if (op == '-') return no1 - no2;
	else if (op == '*') return no1 * no2;
	else return no1 / no2;
}

// Check for user reuse
bool getConfirm(char * more) {
	cout << "What you like to calculate more? y/n" << endl;
	cin >> *more;
	try {
		if (!(*more == 'y' || *more == 'n')) throw 4;
		return true;
	} catch (int e) {
		cout << "Error " << e << ": Enter y or n" << endl;
	}
}

int main() {
	// operator
	char math;
	string num1;
	string num2;
	double dub1;
	double dub2;
	int i = 0;
	char more = 'y';
	bool confirm;
	
	while (more == 'y') {
		cout << "What operator will you use?" << endl;
		cin >> math;
		cout << "What is your 1st number?" << endl;
		cin >> num1;
		cout << "What is your 2nd number?" << endl;
		cin >> num2;
		
		try {
			// Check if operator
			if (!(math == '+' || math == '-' || math == '*' || math == '/')) 
				throw 1;
			
			// Check if numeric
			while(num1[i]) {
				if (!isdigit(num1[i]) && num1[i] != '.') {
					throw 2;
					break;
				}
				i++;
			}
			i = 0;
			while(num2[i]) {
				if (!isdigit(num2[i]) && num2[i] != '.') {
					throw 2;
					break;
				}
				i++;
			}		
			
			// Convert strings to integers
			dub1 = stod(num1);
			dub2 = stod(num2);
			
			// Check if divisor is 0
			if (math == '/' && dub2 == 0) throw 0;
			
			cout << num1 << math << num2 << '=' << doMath(dub1, dub2, math) 
				<< endl;
		} catch (int e) {
			switch (e) {
				case 0: cout << "Error " << e << ": Divide by 0 error" << endl; 
					break;
				case 1: cout << "Error " << e << ": Invalid operator" << endl; 
					break;
				case 2: cout << "Error " << e << ": NonNumerical value" << endl; 
					break;
			}
		} catch (...) {
			cout << "Undefined Error" << endl;
		}
		
		confirm = false;
		
		// Check if user wants to recalculate
		while (!confirm) {
			confirm = getConfirm(&more);
		}
	}
}