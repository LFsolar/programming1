/*
See if C++ has inherent casting or conversion.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "letters in an int: " << endl;
  int inny = 'c';
  cout << inny <<endl;

  cout << "double to int: " << endl;
  int inny2 = 1.9999;
  cout << inny2 << endl;

  cout << "int to double: " << endl;
  double dub = 3;
  cout << dub << endl;

  cout << "char to double: " << endl;
  double dub2 = 'c';
  cout << dub2 << endl;

  cout << "int to char" << endl;
  char chary = 9;
  char chary2 = 99;
  cout << "9 is : " << chary << endl << "99 is: " << chary2 << endl;

  return 0;
}
