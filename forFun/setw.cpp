/*
play around with setw()
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout <<"000000000111111111122222222223333333333444444444455555555556\n";
  cout <<"123456789012345678901234567890123456789012345678901234567890\n";
  cout <<"before setw(5)" << setw(5) << "after setw(5)\n";
  cout << "before setw(30)" << setw(30) << "after setw(30)"
       << '\n';

  return 0;
}
