#include <iostream>
#include <string>

using namespace std;

int main() {
  string ch = "A";
  //cout << "ch |" << ch << "|" << endl;
  string *p = &ch;
  string &cho = ch;

  cout << "size of p " << sizeof(p) << endl;
  cout << "*p = " << *p << endl;
  cout << "&cho = " << &cho << endl;
  cout << "&ch = " << &ch << '\n';

  return 0;
}
