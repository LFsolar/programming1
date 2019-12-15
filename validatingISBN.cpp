/*
Lisa Sun
Programming I
Due: September 16, 2019
ISBN Codes
This program reads ISBN numbers and checks if
the input is a valid ISBN number.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string digits;
  int i = 0;
  int t;
  int j;
  int remainder;

  cout << "Enter the ISBN number.  Ex: isbn 0-13-216987-8\n" << endl;
  
  // Get all inputs.
  while (getline(cin, digits)) {
    cout << digits << "\t";
    t = 0;
    j = 1;

    // Loop through each character in the line.
    for (i = 0; i < 16; i++) {
      // Only use digits.
      if (digits[i] >= '0' && digits[i] <= '9') {
        t += (digits[i] - 48) * j;
	j++;
      }
    }
    // Remainder to check with last digit
    remainder = t % 11;

    if ( remainder == digits[17] - 48 || remainder == 10 &&
	 digits[17] == 'X') cout << "ok" << endl;
    else cout << "invalid" << endl;
    } 
 
  return 0;
}
