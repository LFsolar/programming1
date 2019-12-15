#include <iostream>
using namespace std;
int main() {
  double x, y, preY;
  cout << "Enter a number to find the square root of\n";
  cin >> x;
  preY = x;
  y = x / 2;
  while (y != preY) {
    preY = y;
    y = (x / y + y) / 2;
    cout << y << endl;
  }

  cout << y << endl;
  return 0;
}
