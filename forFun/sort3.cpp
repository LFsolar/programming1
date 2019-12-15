/*
Lisa Sun
9/13/2019
This program sorts 3 numbers into ascending order.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int v, w, x;

  cout << "Enter 3 integers.\n";
  cin >> v >> w >> x;

  sort3(v, w, x);

  cout << "Your numbers are ordered! v is now " << v << ", w is now " << w;
  cout << ", x is now " << x << '\n';
}
 
void sort3(int v, int w, int x) { 
  int max, min, mid, tempV, tempW, tempX;
 
  v > w ? 

 /*
  if (v < w) {
    if (v < x) {
      min = v;
      if (x < w) {
	max = w;
	mid = x;
      } else {
	max = x;
	mid = w;
      }
    } else {
      min = x;
      max = w;
      mid = v;
  } else {
    if (w < x) {
      min = w;
      if (v < x) {
        max = x;
	mid = v;
      } else {
        max = v;
	mid = x;
	}
    } else {
      min = x;
      max = v;
      mid = w;
  }

  */ 

  return 0;
}
