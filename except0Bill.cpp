// except0.cpp
// 
//  This example illustrates the basic use of try, catch,
//  and throw. There are a multitude of examples.
// 
/* C++ has a built in mechanism for dealing with the invalid
 * data, called exception handling.  Exceptions are used by
 * functions to tell its caller that it cannot do what it's
 * supposed to do.
 *
 * When a function is invoked, there are only two alternatives:
 * success or failure.  When a function succeeds, it returns
 * as usual.  When it fails, it is supposed to terminate by
 * "throwing an exception."
 *
 * The following example illustrates the basic use of try,
 * catch, and throw.  You can throw a constant, a variable or 
 * an expression (i.e. an instance of some type) and you catch the type.
 *
 * This program prompts for numerical input and determines
 * the input's reciprocal.  Before it attempts to display
 * the reciprocal, it checks the input value.  If the value
 * is invalid (for some arbitrary reason), an exception is thrown.
 *
 *
 * cs    - compile with: c++ except0.cpp
 * Linux - compile with: c++ except0.cpp -fhandle-exceptions
 */
 
#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>
using namespace std; 

typedef
  int * billstype; 

int ar[] = {8,3,9,7,5,4};

enum MyEnumType { ALPHA, BETA, GAMMA };

union union_type
  {
    char  c;
    int   i;
    float f;
  } myunion;

struct
  my_struct
    {
      int a;
      char b;
      //my_struct() { a = 77; b = 777; }
      virtual int identity()
      { cout << "This is my_struct.identity()" << endl; }
      int lookhere ()
        {
          cout << "This is my_struct.lookhere()" << endl;
          identity();
        }
    } mynes;

struct
  my_empty_struct
    {
    } myes;

class
  my_class
    {
    public:
      int a;
      char b;
      my_class()
        {
          a = 977;
          //b = 888;
          cout << "running my_class constructor" << endl;
        }
    } myc;

class my_derived_class : my_class
  {
    float f;
    virtual int identity()
      { cout << "This is my_derived_class.identity()" << endl; }
  } mydc;


class
  my_empty_class { } myec; 

typedef
  int (*ptaf) (int);  // ptr to a f()

int my_f(int i)
  {
    cout << "entering (and leaving) my_f" << endl;
    return i*i;
  } 

int ValueCheck( int i )
  {
    int j;
    unsigned short int usi = 88;
    unsigned long  int uli = 888;
    unsigned long long  int ulli = 8888;
    void *vp;
    bool *bp;
    string st = "This is a string";
    bp = new(bool); 
    MyEnumType met = GAMMA;
    ptaf f;
    f = my_f;
    double d;

    j=({ int i=7; i;});    // returns an int
    if (i ==  0)
      {
        cout << "getting ready to throw an exception that ";
        cout << "is not caught";
        cout << endl;
        throw ;                 // no constant - nobody can handle it
                                // result - core dump on a unix system
      }
    switch (i)
      { 
      case  10 : throw true ;                   // bool
      case  20 : throw bp;                      // * bool
      case  25 : throw &bp;                     // * void
      case  27 : throw vp;                      // * void
      case  30 : throw usi;                     // unsigned short int
      case  31 : throw uli;                     // unsigned long  int
      case  32 : throw ulli;                    // unsigned long long int
      case  33 : throw (typeof d) 4;            // ...
      case  34 : throw (typeof usi) 4;          // unsigned short int
      case  35 : throw (short) __SHRT_MAX__;    // short int
      case  40 : throw 65536;                   // int
      case  41 : throw j + 32767-5;             // int
      case  42 : throw j;                       // int
      case  43 : throw j = ({ int i=7; i;});    // returns an int 
      case  45 : throw (long) __LONG_MAX__;     // long
      case  50 : throw  &i;                     // * int
      case  55 : throw  (billstype) &i;         // * int
      case  60 : throw 'a';                     // char
      case  65 : throw (wchar_t) 'a';           // wchar_t
      case  70 : throw 1.5 ;                    // double - NOT float
      case  75 : throw (float) 1.5 ;            // float
      case  80 : throw 9ll;                     // long long 
      case  81 : throw 9223372036854775807ll;   // long long 
      case  85 : throw myes;                    // empty struct
      case  90 : throw mynes;                   // non-empty struct
      case  95 : throw myunion;                 // union
      case 100 : throw "This is a C string";    // char *
      case 110 : throw (string)"a string";      // string
      case 120 : throw st;                      // string
      case 130 : throw ar;                      // ptr to int
      case 140 : throw myec;                    // an empty class 
      case 150 : throw myc;                     // my_class
      case 160 : throw mydc;                    // ...
      case 170 : throw BETA;                    // MyEnumType
      case 175 : throw met;                     // MyEnumType 
      case 180 : throw my_f(9);                 // a function - (catch int)
      case 190 : throw my_f;                    // ptr to a function
      case 200 : throw f;                       // ptr to a function
      case 210 : throw f(8);                    // catch int

      case 230 : throw typeid(myec).name();       // char * "14my_empty_class"
      case 300 : throw typeid(ar).name();         // char * "A10_i"
      case 305 : throw typeid('c').name();        // char * "c"
      case 310 : throw typeid(5).name();          // char * "i"
      case 315 : throw typeid(5.5).name();        // char * "d"
      case 320 : throw typeid(mynes).name();      // char * "9my_struct"
      case 325 : throw typeid(myc).name();        // char * "8my_class"
      case 330 : throw typeid(my_f).name();       // char * "FviE"
      case 335 : throw typeid(bool).name();       // char * "b"
      case 336 : throw typeid(ptaf).name();       // char * "PFiiE"
      case 340 : throw typeid(long long).name();  // char * "x"
      case 345 : throw typeid(billstype).name();  // char * "Pi"
      case 350 : throw typeid(vp).name();         // char * "Pv"
      case 355 : throw typeid(st).name();         // char * "Ss" 
                                                  // also see: demangle.cpp
                                                  // to get the full name
      case 356 : throw typeid("ABC").name();      // array of char 
      case 900 : throw;                           // no constant or instance
                                                  // results in a core dump
      case 999 : terminate();                     // displays 'Aborted'
      }
  } 

int main() // except0.cpp
  {
    int a;
    myunion.i = 789;

    cout << "Enter a number: ";
    cin >> a;
    cout << " a = " <<  a << endl;
    try
      {
        ValueCheck( a );
        cout << "Reciprocal is " << 1.0/a << endl;
      }
    catch ( bool i )
      {
        cout << "catch a bool" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( bool *i )
      {
        cout << "catch a bool pointer" << endl;
        cout << "value " << i << " was thrown." << endl; 
      }
    catch ( short i )
      {
        cout << "catch a short int" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( unsigned short int i )
      {
        cout << "catch an unsigned short int" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( unsigned long int i )
      {
        cout << "catch an unsigned long int" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( unsigned long long int i )
      {
        cout << "catch an unsigned long long int" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( long i )
      {
        cout << "catch a long" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( billstype i )
      {
        cout << "catch a billstype" << endl;
        cout << "value " << i << " was thrown." << endl; // in hex 
        cout << "value " << *i << " was thrown." << endl;  
      } 
    catch ( int * i )
      {
        cout << "catch a pointer to an int *" << endl;
        cout << "value " << i << " was thrown." << endl; // in hex 
        cout << "value " << *i << " was thrown." << endl;  
      }
    // or
    catch ( int i )
      {
        cout << "catch an int" << endl;
        cout << "value " << i << " was thrown." << endl;
      }
    catch ( char )
      {
        cout << "catch a char" << endl;
      }
    catch ( wchar_t ch )
      {
        cout << "catch a wchar_t " << ch << endl;
      }
    catch ( float )
      {
        cout << "catch a float" << endl;
      }
    catch ( long long ll)
      {
        cout << "catch a long long " << ll << endl;
      }

    catch ( my_empty_struct my_es)
      {
        cout << "catch an empty struct  a = " << endl;
      }

    catch ( my_struct my_s)
      {
        cout << "catch a struct  a = " << my_s.a << endl;
        my_s.identity();
        my_s.lookhere();
      } 
    catch ( union union_type i)
      {
        cout << "union union_type caught" << endl;
        cout << "value " << i.i << " was received." << endl;
      } 
    catch ( my_class)
      {
        cout << "catch a class or a descendent" << endl;
      }
    catch ( my_empty_class)
      {
        cout << "catch a empty class " << endl;
      } 
    catch ( MyEnumType i )
      {
        cout << "catch a MyEnumType " << endl;
        cout << "value " << i << " was thrown." << endl;
      } 
    catch (ptaf p)
      {
        cout << "catch a pointer to a function" << endl;
        cout << "value returned from the function is " << p(10) << endl;
      }
    catch (const char* msg)
      {
        cout << "Catch an array of char " << endl;
        cout << "Exception caught: msg = : " << msg << endl;
      }
    catch (string msg)
      {
        cout << "Catch a string " << endl;
        cout << "Exception caught: the msg is: " << msg << endl;
      }
    catch (void *)
      {
        cout << "catch a void pointer " << endl;
      }
    catch ( ... )
      {
        cout << "catch anything else." << endl;
      }

    cout << "Normal Termination" << endl;

    exit(0);
  }
 
