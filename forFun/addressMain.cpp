#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

int main() {
  
  Address a1 = Address();
  Address a2 = Address(10);
  Address a3 = Address(24);
  Address a4 = Address(1000, "Main St", 5, "Edmond", "OK", 73034);
  Address a5 = Address(3002, "Broadway Rd", "Oklahoma City", "OK", 72043);

//  print(a1);
//  print(a2);
//  print(a3);
  a4.print();
  a5.print();

  return 0;
}
