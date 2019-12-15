#include <iostream>

using namespace std;

int main() {

  int i = 5;
  int *p;
  p = &i; // & means address of
  cout << "i = 5 and p = &i, p = " << p;
  cout  << '\n'; // different output everytime

  // access pointer location
  cout << "i = 5 and *p = " << *p << '\n';
  i = 48;
  cout << "i = 48 and p = " << p << '\n';
  cout << "i = 48 and *p = " << *p << '\n';
  cout << "i = 48 and i = " << i << '\n';

  return 0;

}
