/*
Use structs
*/

#include <iostream>

using namespace std;

struct Payroll {
  string name; // string = 8 bytes
  string address; // string = 8 bytes
  double salary; // double = 8 bytes
  int deductions; // int = 4 bytes, total = 28 bytes
} pay2, pay3;

int main() {
  // Now add values to pay2.
  pay2.name = "Lisa Sun";
  
  // Add values to pay3.
  pay3.address = "100 N University";
 
  // Static instantiate.
  Payroll pay4;

  // Add values to pay4.
  pay4.salary = 10.89;

  // Dynamic instantiate with pointer.
  Payroll * p;
  p = new Payroll;

  // Add values to p using the old way, no arrows.
  (*p).name = "Cuddle Bear";
  (*p).address = "123 Bear St";
  (*p).salary = 3.23;
  (*p).deductions = 9;

  // Change p's varaibles using arrows.
  p -> name = "Snuggle Puff";
  p -> address = "432 SnuggleWuggle Rd";

  cout << "pay2.name = " << pay2.name << '\n';
  cout << "pay3.address = " << pay3.address << '\n';
  cout << "pay4.salary = " << pay4.salary << '\n';

  cout << "(*p).name = " << (*p).name << '\n'
       << "(*p).address = " << (*p).address << '\n';

  return 0;
}
