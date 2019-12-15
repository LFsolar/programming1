// fibonacci.cpp
//
// generate fibonacci numbers
//
#include <iostream>

using namespace std;

int fibon(int N)
  {
    if (N <= 1) return 1;
    return fibon(N-1)+fibon(N-2);
  }
 

int main()
{
  int i,j,k;
  int l;
  k = 1;
  i = k;
  j = k;
  cout << ' ' << j << endl;

  cout << fibon(4) << endl;
} 
// re:  http://www.cs.arizona.edu/icon/oddsends/phi.htm


