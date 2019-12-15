#include <iostream> 
using namespace std;


void shellsort(int ar[], int N)
  {
    int  gap = N/2;
    while (gap)
      {
        int swaps = 1;
        while (swaps--) 
          for (int i = 0; i < N-gap; i++)
            if (ar[i] > ar[i+gap])
              swaps = 1,swap(ar[i], ar[i+gap]);
          
        cout << "gap " << gap << endl;
        for (int i = 0; i < N; i++) cout << ar[i] << ' ';
        cout << endl;
        gap /= 2;
      }
  }

int main()
  {
    int ar[]; /*= {1, 2, 3, 4, 5};*/
      {
        #include "shellsort.data"
      };
    int N = sizeof(ar)/sizeof(ar[0]); 
    for (int i = 0; i < N; i++) cout << ar[i] << ' ';
    cout << endl;
    shellsort(ar, N);

    cout << "result" << endl;
    for (int i = 0; i < N; i++) cout << ar[i] << ' ';
    cout << endl;


  }


