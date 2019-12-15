#include <iostream>
using namespace std;

union union_type
  {
    char c;
    int  i;
    union_type() { c = 'a'; i = 0;}
  } myunion;

int main()
{
   cout << myunion.c << ' ' << myunion.i << endl;
   myunion.c = 'b';
   cout << myunion.c << ' ' << myunion.i << endl;
}

