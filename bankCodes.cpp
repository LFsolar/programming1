/*
	Validates bank codes
*/
#include <iostream>
using namespace std;

  // read in a bank number
  // write the bank number, and the multipliers 
  // compute the checksum
    // loop 8 times using i as a control variable
      // pick off the i'th digit
        // ch = bank number[i] 
        // digit[i]  = ch-48;
      // multiply it by the appropriate weight
      // print the product
      // add the product to the subtotal
      // save the subtotal in an array (in subtotal[i]) 
    // end loop
  // loop 8 times printing the subtotals
  // print the last subtotal computed
  // compute the check digit
  // print the check digit 
  // if the subtotal % 10 == the last digit
  // then
    // write 'the check code is valid'
  // else
    // write 'the check code is invalid'
int rotateMultiplier(int multiplier) {
	if (multiplier == 7) return 3;
	else if (multiplier == 3) return 9;
	else return 7;
}


int main() {
	string bankNums;
	int multiplier;
	int sum = 0;
	int numLength = 8;
	
	cout << "Enter bank numbers\n";
	while (getline(cin, bankNums)) {
		cout << bankNums << endl;
		multiplier = 9;
		for (int i = 0; i < numLength; i++) {
			sum += (bankNums - 48) * rotateMultiplier(multiplier);
		}
		if (sum % 10 == bankNums[8])
	}
	
	return 0;
}