/*
	Will y have a value if t is not initialized?
*/
#include <iostream>

using namespace std;

#define t 0

//void main()
int main()
  {
    int x,y=0;
    t = 11;
    for (x = 0; x < t; x++) y += (x%2 == 0) ? x : -x;
	
	cout << y << '\n';
  }