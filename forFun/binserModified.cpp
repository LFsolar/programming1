#include <iostream>
#include <stdlib.h>
using namespace std;
/*
 * binary search program - generate N random numbers, sort them
 *
 */
#define n 12
int i;
int ar [n];  

void swap(int &i, int &j, bool &swaps)
  {
    int t;
    t = i;
    i = j;
    j = t;
    swaps = 1;
  }

/* shell sort */
void sort()
  {
    int  gap;
    bool swaps;

    gap = n/2;
    while (gap > 0)
      {
        swaps = 1;
        while (swaps)
          {
            swaps = false;
            for (i = 0; i < n-gap; i++)
              if (ar[i] > ar[i+gap])
                swap(ar[i],ar[i+gap],swaps);
          }
        gap = gap / 2;
      }
  }

void binary_search(int i)
  {
      int top, bottom, mid, prev;
      bool found;
      top = 0;
      bottom = n;
      found = false;
      mid = -1;
      do
        {
          prev = mid;
          mid = (top+bottom) / 2;
		  cout << "mid is " << ar[mid] << ". Index is " << mid << endl;
          if (ar[mid] == i) found = 1;
          else
            if (ar[mid] < i) 
              top   = mid;
            else
              bottom = mid;
        }
      while (!(found || (mid == prev)));

      if (ar[mid] == i)
        cout << i << " found at location " << mid << endl;
      else
        cout << i << " not found" << endl;
  }

int main()
  {
    for (i = 0; i < n; i++)
      ar[i] = rand()%1000;
    sort();
    for (i = 0; i < n; i++)
      cout << ar[i] << " ";
    cout << endl;


    binary_search(ar[0]-1);
    for (i = 0; i < n; i++)
      binary_search(ar[i]);
    binary_search(ar[n / 2]+1);
    binary_search(ar[n-1]+1);
  }

