/*
Lisa Sun
Chapter 3

Write a program that reads in the name and salary of an employee
object. Here the salary will denote an hourly wage, such as $9.25. Then ask how
many hours the employee worked in the past week. Be sure to accept fractional
hours. Compute the pay. Any overtime work (over 40 hours per week) is paid at
150 percent of the regular wage. Print a paycheck for the employee.

This program calculates employee pay then prints a paycheck.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  double wage;
  double workHrs;
  double pay;
  double overtimeHrs = 0;
  int overtimeMultiple = 150;
  double overtimePay = 0;

  cout << "What is the employee's first and last name?  Ex: Jane Doe\n";
  getline(cin, name);
  cout << "What is their hourly wage?  Ex: 9.25\n";
  cin >> wage;
  cout << "In the past week, how many hours did they work?  Ex: 40.9\n";
  cin >> workHrs;

  // Compute overtime pay.
  if (workHrs > 40) {
    overtimeHrs = workHrs - 40;
    overtimePay = wage * overtimeMultiple * overtimeHrs;
  }

  // Compute total pay.
  pay = wage * (workHrs - overtimeHrs) + overtimePay;

  cout << "Here is the paycheck for " << name << endl;
  cout << "Employee name: " << name << endl;
  cout << "Pay: $" << pay << endl;
  cout << "Thank you\n";

  return 0;
}
