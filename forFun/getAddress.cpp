/*
Make a bill.cpp on your own
Get the char's hex address to display in output.

Result:  Char pointer p always outputs "Pc" as its datatype.  Int pointer q
	 always outputs "Pi" as its dataype.  Int reference varaible
	 &reference always outputs "Pi" as its dataype.  Boolean reference
	 varaible always outputs "Pb" as its dataype.

Conclusion:  Compilers have their own data types when dealing with
	     memory location.  Pc is the type for Pointer Characters.  Pi
	     is the type for Pointer Integers.  Pb is the type for Pointer
	     booleans.  Pointers and reference varaibles are
	     indistinguishable.
*/

#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main() {
  char ch = 'W';
  char ch2 = 'k';
  int int2 = 60;
  char * p = &ch;
  char * p2 = &ch2;
  int * q = &int2;

  cout << "Before casting, p is data type " /*<< typeid(p).name()*/ << '\n'
       << "unmanipulated, p = " << p << ", *p = " << *p << '\n';
  cout << "p2 = " << p2 << ", *p2 = " << *p2 << '\n';
  cout << "Before casting, q is data type " << typeid(q).name() << '\n'
       << "unmanipulated, q = " << q << ": compare :" << &int2 << '\n';

  cout << hex
       << "ch = " << ch << '\n'
       << "*p = " << *p << '\n'
       << "p = " << (long int) p << '\n';

  // Check if using typeid correctly.
  int int1 = 0;
  bool bool1 = true;
  double double1 = 2.3;
  int &reference = int1;
  bool &ref2 = bool1;

  cout << "typeid(int1).name() = " << typeid(int1).name() << '\n'
       << "typeid(&reference).name() = " << typeid(&reference).name() << '\n'
       << "typeid(&ref2).name() = " << typeid(&ref2).name() << '\n';

  return 0; 

}
