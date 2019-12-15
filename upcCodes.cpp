/*
	Check UPC codes
	10/30/2019
*/

#include <iostream>
using namespace std;


  // total = 0
  // multiplier = 3
  // loop 20 times incrementing i by 1
     // pick off the i'th character
     // if the character is a digit then
        // convert the character to a number
        // total = total + number*multiplier
        // change the multiplier
  // end loop

  // if the total is a multiple of ten then write 'ok'
  // else
    // do the same check as above but go through the loop backwards
    // if the total is a multiple of ten then write 'ok - backwards'
    // else write 'error'

int main() {
	string code;
	int multiplier = 3;
	int sum;
	cout << "Enter UPC code" << endl;
	while(getline(cin, code)) {
		sum = 0;
		for (int i = 0; i < 19; i++) {
			if (code[i] >= '0' && code[i] <= '9') {
				sum += (code[i] - 48) * multiplier;
				multiplier = multiplier == 1 ? 3 : 1;

			}
			 cout << code[i];
		}
		if (sum % 10 == 0) cout << " ok" << endl;
		else {
			sum = 0;
			multiplier = 3;
			for (int i = 19; i >= 0; i--) {
				if (code[i] >= '0' && code[i] <= '9') {
					sum += (code[i] - 48) * multiplier;
					multiplier = multiplier == 1 ? 3 : 1;
				}
			}
			if (sum % 10 == 0) cout << " ok - backwards" << endl;
			else cout << " error" << endl;
		}
	}
}