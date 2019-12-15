/*
 * readint.cpp
 *
 * read int with error check
 *
 * This example illustrates the basic use of try, catch, and throw.
 */ 
#include <iostream>
using namespace std;

void ValueCheck( int i )
  { 
    if (i<= 0) throw -1;  // will be caught below 
    cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
  }

int main()
  {
     int a;
     int done = 0;

     while (!done)
       {
         cout << "Enter a positive number: ";
         cin >> a;
         try
           {
              ValueCheck( a );
              done = 1;
           }
         catch ( int j)
           {
              cout << "value thrown is " << j << endl;
              cout << "main::Negative or Zero input is not valid." << endl;
           }
       }
     cout << "Reciprocal is " << 1.0/a << endl; 
  }

