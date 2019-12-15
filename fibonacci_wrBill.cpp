// fibonacci.cpp
//
// generate fibonacci numbers
//
#include <iostream>
#include <gmpxx.h>
using namespace std;

mpz_class fibon(mpz_class N)
  {
    if (N <= 1) return 1;
    return fibon(N-1)+fibon(N-2);
  }
 

int main()
{
  mpz_class i,j,k;
  int l;
  k = "1";
  i = k;
  j = k;
  cout << ' ' << j << endl;

  cout << fibon(5) << endl;
} 
// re:  http://www.cs.arizona.edu/icon/oddsends/phi.htm


