#include <iostream>
using namespace std;
int main()
  {
    int i;
    int N;
    cin >> N;
    int ar[N];
    for (i = 0 ; i < N; i++) ar[i] = rand() % N;


    // echo check
    for (i = 0; i < N; i++) cout << ar[i] << ' ';
     cout << endl << endl;

    // bubble sort
    int swaps = 1;
    while (swaps)
      {
        swaps = 0;
        for (int i=0; i < N-1; i++)
          {
            if (ar[i] > ar[i+1])
              {
                swap(ar[i],ar[i+1]);
                swaps = 1;
              }
          }
      }

    // print the sorted numbers
    for (i = 0; i < N; i++) cout << ar[i] << ' ';
     cout << endl;
       
  }
