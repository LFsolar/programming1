/*
	Recursive factorial
	
	Factorial equation:
	n! = n(n-1)(n-2)...(2)(1)
	0! = 1
	
	10/30/2019
	
	// reduce doesn't work right
*/

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x) {
	if (x > 0)
		return x * factorial(x - 1);
	else
		return 1;
}

// addPowers sums all the powers of a number.
// Ex: 2^4 + 2^3 + 2^2 + 2^1 + 2^0
int addPowers(int x, int y) {
	if (y > 0)
		return pow(x, y) + addPowers(x, y - 1);
	else
		return 1;
}

// reduce will divide a number until the divisor is 1
double reduce(double x) {
	if (x > 1)
		return x / reduce(x - 1);
	else
		return 1;
}

int main() {
	string select;
	int x;
	int y;
	double z;
	cout << "Which operation would you like to perform?\n"
		 << "1. factorial\n"
		 <<	"2. addPowers\n"
		 << "3. reduce\n";
		 
	cin >> select;
	if (select == "1" || select == "factorial") {
		cout << "What factorial would you like to find?" << endl;
		cin >> x;
		cout << x << "! is " << factorial(x) << endl;
	} else if (select == "2" || select == "addPowers") {
		cout << "What base and power would you like to find?" << endl;
		cin >> x >> y;
		cout << "The sum of the powers of " << x << " to the " << y << " is " 
			 << addPowers(x, y) << endl;		
	} else if (select == "3" || select == "reduce") {
		cout << "What number would you like to reduce?" << endl;
		cin >> z;
		cout << z << " reduced is " << reduce(z) << endl;		
	}
	
	
	return 0;
}