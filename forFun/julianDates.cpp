/*
  Lisa Sun
  P4.10
  9/12/2019
  This program calculates the number of days since January 1, 4713 B.C.
  This number is known as the Julian day number.
*/

#include <iostream>

using namespace std;

int main()
{
  // Day, month, year:
  int jd, jm, jy;
  long jul;

  cout << "Enter the day, month, and year.  Ex: 31 5 1784\n";
  cin >> jd >> jm >> jy;

  // If the year is negative, add 1 to jy.
  // Because there was no year 0.
  jy += jy < 0 ? 1 : 0;

  cout << "The julian year is: " << jy << '\n';

  //  If the month is larger than Febuary, add 1 to jm,
  // otherwise, add 13 to jm and subtract 1 from jy.
  if (jm > 2) jm++;
  else
  {
    jm += 13;
    jy--;
  }

  cout << "The julian month is " << jm << " and the julian year is " << jy << '\n';

  return 0;
}
