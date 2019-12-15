/*
Lisa Sun
Chapter 4
9/6/2019

Problem: For some values (for example, 20), the int_name function returns a
string with a leading space (" twenty"). Repair that blemish and ensure that spaces
are inserted only when necessary. Hint: There are two ways of accomplishing this.
Either ensure that leading spaces are never inserted, or remove leading spaces from
the result before returning it.

This program deletes unnecessary spaces and inserts necessary spaces.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string numString;
  int i;

  cout << "Spell out a number." << endl;
  getline(cin, numString);

  // Drop all leading spaces.
  for (i = 0; i < numString.length(); i++) {
    if (numString[i] != ' ') {
      break;
    }
  }

  // print from i position
  // Quotes shown to show no spacing exists before number.
  cout << "Your fixed spelling is: \"";
  for (i; i < numString.length(); i++) cout << numString[i];
  cout << "\"" << endl; 

  return 0;
}
