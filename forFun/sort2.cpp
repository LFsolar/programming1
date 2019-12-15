/*
  Lisa Sun
  P4.2
  9/12/2019
  This program swaps 2 values if the 2nd value is greater.
*/

#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int temp;

  cout << "Give me two integers.  Ex: 39 80\n";
  cin >> a >> b;

  if (b > a)
  {
    temp = b;
    b = a;
    a = temp;
  }

  cout << a << ", " << b << '\n';

  return 0;
};
