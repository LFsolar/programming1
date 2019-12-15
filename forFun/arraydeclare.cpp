#include <iostream>
#include <array>

using namespace std;

int main()
{
  int array[5] = {1, 2, 3, 4, 5};
  int array2[20];
  int * p, * q, * r, * s, * t, * u;

  p = array;
  q = &array[0];
  r = &array[1];
  s = &array[2];
  t = &array[3];
  u = &array[4];

  cout << "array = \n";
  for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
    cout << array[i] << ", ";
  }

  cout << "\np = " << p << '\n';
  cout << "q = " << q << '\n';
  cout << "r = " << r << '\n';
  cout << "s = " << s << '\n';
  cout << "t = " << t << '\n';
  cout << "u = " << u << '\n';

/*  p++;
  cout<< "p++ effect:\n";

  cout << "p = " << p << '\n';
  cout << "q = " << q << '\n';
  cout << "r = " << r << '\n';
  cout << "s = " << s << '\n';
  cout << "t = " << t << '\n';
  cout << "u = " << u << '\n';
*/

  cout << "*p++ = " << *p++;
  cout << "\np = " << p << '\n';  
  cout << "*p = " << *p << '\n';
  cout << "*++p = " << *++p << '\n';
  cout << "*p = " << *p << '\n';
  cout << "(*p)++ = " << (*p)++ << '\n';
  cout << "*p = " << *p << '\n';
  cout << "++*p = " << ++*p << '\n';
  cout << "*p = " << *p << '\n';


  return 0;

}
