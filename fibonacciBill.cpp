// fibonacci.cpp
//
// generate fibonacci numbers
//
#include <iostream>
#include <gmpxx.h>
using namespace std;

int main()
{
  mpz_class i,j,k;
  int l;
  k = "1";
  i = k;
  j = k;
  cout << ' ' << i << endl;
  cout << ' ' << j << endl;

  for (l = 1; l < 11121; l++)
    {
      i = i + j;
      cout << ' ' << i << endl;
      j = i + j;
      cout << ' ' << j << endl;
    }
} 
// re:  http://www.cs.arizona.edu/icon/oddsends/phi.htm


