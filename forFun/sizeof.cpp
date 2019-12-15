/*
Use sizeof()
*/

#include <iostream>

using namespace std;

int main() {
  int int1 = 1;
  float float1 = 1;
  double double1 = 1;
  bool bool1 = true;
  char char1 = 'a';

  cout << "The size of int1 is " << sizeof(int1) << '\n';
  cout << hex << "The size of intl in hex is " << sizeof(int1) << '\n';
  return 0;
}
