// exceptions.cpp
//
// handling exceptions in the standard exception class
//
#include <iostream>
#include <typeinfo>
#include <malloc.h>
#include <stdexcept>
#include <vector>
#include <bitset>
using namespace std;

class Polymorphic {virtual void Member(){}};

int main () {
  int ar[4] = {1,2,3,4};
  int i,j=0,value;
  vector<int> myvector(10);

  cout << "key in a value" << endl;
  cin >> value;
  try
  {
    void *p;
    Polymorphic * pb = 0;
    switch (value)
      {
        case 1 : i = i  / j;
                 break;
        case 2 : typeid(*pb);              // throws a bad_typeid exception
                 break;
        case 3 : myvector.at(20)=100;      // at throws an out-of-range
                 break;
        case 4 : // throws a 'length_error' exception if resized above max_size
                 myvector.resize(myvector.max_size()+1);
                 break;
        case 5 :
                 throw out_of_range("out of range_error");
                 throw range_error("range_error");
                 break;
        case 6 : // bitset constructor throws an 'invalid_argument' exception
                 // if initialized with a string containing characters other
                 // than 0 and 1
                 bitset<5> mybitset (string("01234"));
                 break;
      }
  }

  // generic exception handler
  catch (exception& e)
  {
    cerr << "exception caught: " << e.what() << endl;
  }

// you will need these if the first catch is gone
//
//
//  catch (out_of_range& oor) {
//    cerr << "Out of Range error: " << oor.what() << endl;
//  }

//  catch (invalid_argument& ia)
//    {
//      cerr << "Invalid argument: " << ia.what() << endl;
//    }

//  catch (length_error& le)
//    {
//	  cerr << "Length error: " << le.what() << endl;
//    }

  catch (...)
    {
      cout << " ... exception caught" << endl;
    }
  return 0;
}

/*
 bad_alloc,
 bad_cast,
 bad_exception,
 domain_error,
 exception,
 invalid_argument,
 ios_base::failure,
 length_error,
 logic_error,
 out_of_range,
 overflow_error,
 range_error,
 runtime_error,
 underflow_error
*/



