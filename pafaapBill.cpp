// pafaap.cpp
//
// Passing a function as a parameter.
//
#include <iostream>
using namespace std;

// a function that calls a function
void aftcaf (void (*sof)(int, int))
  {
    cout << "entering aftcaf" << endl;
    sof(4,5);
    cout << "leaving  aftcaf" << endl;
  } 

void f1(int a, int b) { cout << a + b << endl; } 
void f2(int a, int b) { cout << a * b << endl; }
void f3(int a, int b) { cout << a - b << endl; }
int main()
  { int i, siz; 
    cout << "starting " << endl; 
    aftcaf(f1); 
    cout << "between  " << endl;
    aftcaf(f2); 
    aftcaf(f3); 
    cout << "leaving  " << endl; 
  }

