/*
	Computes federal tax.
	Tests function.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double fedTax(double pye) {
	double bracket1 = 8000;
	double bracket2 = 20000;
	double tax1 = 0.15;
	double tax2 = 0.28;
	
	if (pye < bracket1)
		return 0;
	else if (pye < bracket2)
		return (pye - bracket1) * tax1;
	// To to take away 1 cent to calculate tax that's < bracket2
	else return (pye - bracket2) * tax2 + fedTax(bracket2 - 0.01);
}

double fedTax2018(double pye) {
	double bracket1 = 9525;
	double bracket2 = 38700;
	double bracket3 = 82500;
	double bracket4 = 157500;
	double bracket5 = 200000;
	double bracket6 = 500000;
	double tax1 = 0.1;
	double tax2 = 0.12;
	double tax3 = 0.22;
	double tax4 = 0.24;
	double tax5 = 0.32;
	double tax6 = 0.35;
	double tax7 = 0.37;
	
	if (pye < bracket1)
		return pye * tax1;
	else if (pye < bracket2)
	// Take away .1 cent to calculate tax that's < bracket1
		return (pye - bracket1) * tax2 + fedTax2018(bracket1 - 0.001);
	else if (pye < bracket3)
		return (pye - bracket2) * tax3 + fedTax2018(bracket2 - 0.001);
	else if (pye < bracket4)
		return (pye - bracket3) * tax4 + fedTax2018(bracket3 - 0.001);
	else if (pye < bracket5)
		return (pye - bracket4) * tax5 + fedTax2018(bracket4 - 0.001);
	else if (pye < bracket6)
		return (pye - bracket5) * tax6 + fedTax2018(bracket5 - 0.001);
	else return (pye - bracket6) * tax7 + fedTax2018(bracket6 - 0.001);
}

// Test
#if __INCLUDE_LEVEL__ < 1
int main() {
	cout << fixed << setprecision(2);
	cout << fedTax2018(8000) << endl;
	cout << fedTax2018(10000) << endl;
	cout << fedTax2018(40000) << endl;
	cout << fedTax2018(90000) << endl;
	cout << fedTax2018(180000) << endl;
	cout << fedTax2018(280000) << endl;
	cout << fedTax2018(580000) << endl;
}
#endif