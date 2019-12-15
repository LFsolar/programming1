/*
Lisa Sun
Programming I
Due: September 5, 2019
Day of the Week
This program will input a month, day, and a year, then
output the day of the week.
*/

#include <iostream>
using namespace std;
int main()
{
  int month;
  int day;
  int year;
  int t;
  int te; // table entry
  int dotw; // day of the week

  cout << "What is the month, day and year? (ex: 1 30 2000)\n";
  cin >> month >> day >> year;

// convert month to table entry
  switch(month)
  {
    case 1: te = 1; break;
    case 2: 
    case 3: te = 4; break;
    case 4: te = 0; break;
    case 5: te = 2; break;
    case 6: te = 5; break;
    case 7: te = 0; break;
    case 8: te = 3; break;
    case 9: te = 6; break;
    case 10: te = 1; break;
    case 11: te = 4; break;
    case 12: te = 6; break;
  }

  // conversions
  t = te + day + year + 6;
  t = t + year / 4 - year / 100 + year / 400;

  // leap year adjustment
  if ((year % 400 == 0) && (month <= 2)) t = t - 1;
  else if (year % 100 == 0) {} /* not a leap year */
    else if ((year % 4 == 0) && (month <= 2))
       t = t - 1;

  dotw = t % 7;
  // convert to day of the week
  switch(dotw)
  {
    case 0: cout << "Saturday" << endl; break;
    case 1: cout << "Sunday" << endl; break;
    case 2: cout << "Monday" << endl; break;
    case 3: cout << "Tuesday" << endl; break;
    case 4: cout << "Wednesday" << endl; break;
    case 5: cout << "Thursday" << endl; break;
    case 6: cout << "Friday" << endl; break;
  }

}
