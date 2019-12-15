
 // numbers.cpp
 //
 //  convert binary strings into gmpxx 
 //
 #include <iostream>
 #include <gmpxx.h> // allows for big number usage, but need to use number as string
 // ex: x = "20317203971203701297301973017930197301793019730197301793123231"
 #include <string>
 #include <int128cout> //bills library to print long int
 #include <cmath>
 using namespace std;
 
 long int n;
 __int128  x;
 int main(int argc, char *argv[])
   { 
     n = 2147483647; 
	 n = pow(2, 63) - 1;
     cout << n << endl; 
	 n++;
	 cout << n << endl; 

   }
