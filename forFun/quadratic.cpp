/*
Lisa Sun
9/5/2019
Chapter 4
This program calculates quadratic formulas.
It will state if there are no solutions.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  double x;
  double discrim;

  cout << "Enter the values for a, b, and c.  Ex: 11 45 9"  << endl;
  cin >> a >> b >> c;

  discrim = b * b - 4 * a * c;
  // If discriminate is negative, there is no solution.
  if (discrim < 0) cout << "There are no solutions" << endl;
  else {
    x = (-b + sqrt(discrim)) / 2 * a;
    cout << "x is " << x << " and ";
    x = (-b - sqrt(discrim)) / 2 * a;
    cout << x << endl;
  }
  return 0;
}
