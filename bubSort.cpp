#include <iostream>
#include <unistd.h>
using namespace std;
int main()
  {
    int N = 10;
    int ar[N];
    int i; 

    //rand(time(0)) // time(0) = current time
    // generate random numbers
    for (i = 0; i < N; i++) ar[i] = rand()%N;

    // display original array = echo check
    for (i = 0; i < N; i++)
      cout << ar[i] << ' ';
    cout << endl;

    // sort the numbers
    int swaps = 1;
    while (swaps)
      {
        swaps = 0;
        // make 1 pass
        for (i = 0; i < N-1; i++)
          if( ar[i] > ar[i+1])
            {
	      // swaps 2 numbers
              int t = ar[i+1];
              ar[i+1] = ar[i];
              ar[i] = t;
              swaps = 1;
            }
      } 

    // display sorted array
    for (i = 0; i < N; i++)
      cout << ar[i] << ' ';
    cout << endl;

  }


