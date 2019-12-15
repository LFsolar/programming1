/*
	Calculates gross pay.
	Tests function.
*/
#include <iostream>
#include <iomanip>
using namespace std;

double grossPay(double rate, double hours) {
	if (hours <= 40) return rate * hours;
	else {
		double overtime = hours - 40;
		return (rate * 40) + (overtime * 2 * rate);
	}
}
	
// Test
#if __INCLUDE_LEVEL__ < 1
int main() {
	cout << fixed << setprecision(2);
	cout << grossPay(10, 40) << endl
		 << grossPay(10, 41) << endl;
}
#endif