/*
	Lisa Sun
	12/7/2019
	This program passes a function as a parameter.
	It adjusts the amount of rain.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Display Rain
void rain(int drops, int width) {
	while(drops) {
		cout << setw(width) << '|';
		drops--;
	}
	cout << endl;
}

// Adjust rain
void adjustRain(void (fxn)(int, int), int lines) {
	while(lines) {
		rain(20, 10);
		lines--;
	}
}

int main() {
	adjustRain(rain, 10);
}