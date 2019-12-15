#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char ch = 'A';
  cout << "ch |" << ch << "|" << endl;
  char *p = &ch;
  char *cho = &ch;

//  cout << hex;
  cout << "size of p " << sizeof(p) << endl;
  cout << "p " <<  setw(15) <<"|" <</*(long int)*/ p << "|" << endl;
  cout << "*p = " << *p << endl;
  cout << "cho = " << (long int) cho << endl;
  cout << "cho = " <<            cho << endl;

  return 0;
}
