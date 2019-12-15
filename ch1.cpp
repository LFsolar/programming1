#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a,b,c,s,t,Area;
  a = 3;
  b = 5;
  c = 6;
  s = (a+b+c)/2;
  t = s*(s-a)*(s-b)*(s-c);
  Area = sqrt(t);
  cout << "Area " << Area << endl;
}
