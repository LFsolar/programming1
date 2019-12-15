/*
Lisa Sun
9/16/2019
This program performs integer division.
*/

#include <iostream>

using namespace std;

int main() {
  string line;
  int a = 0;
  int b = 0;
  int i = 0;
 
  cout << "Start dividing integers. Ex: 100/4\n";
  getline(cin, line);

  // Isolate the numerator.
  while (line[i] != '/') {
    a += line[i] - 48;
    i++;
  }

  // Skip the '/'.
  i++;

  // Isolate the denominator.
  while (line[i]) {
    b+= line[i] - 48;
    i++;
  } 

  cout << a << "/" << b << " = " << a/b << '\n';

  return 0;
}
