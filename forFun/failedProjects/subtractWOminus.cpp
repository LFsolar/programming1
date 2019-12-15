/*
  Subtract 2 numbers without using the "-" operator.

  FAILED.  Needed to use "-" in toBinary fxn.  
  Knowledge needed: Get bit data of a number.
*/

#include <iostream>
#include <cmath>

using namespace std;

int toBinary(int num) {
  // Can use bit data from RAM, but I don't know how to
  // get the bit data, so using log2s.
  int maxExponent = (int) (log2(num));
  
  int binaryNum [maxExponent + 1];
  int j = 0;
  // Go down all integers of exponent, until 0 is used.
  for (int i = maxExponent; i >= 0; i--) {
    /////////////////if (num <----FAILED HERE :( ///////////////////
    j++;
  }



  return maxExponent;
}

int main() {
  int a = 20;
  int aBase2;
  int b = 3;
  int bBase2;

  // Convert to binary.
  aBase2 = toBinary(a);
  // Use ^ to find difference.

  // Convert to base 10.
  

  // Print out
  cout << "The highest exponent of 2 is " << aBase2 << '\n';
}

