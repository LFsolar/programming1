/*

*/

//#include "finalLvl2Preproc.cpp"
#include <iostream>
using namespace std;

#if __INCLUDE_LEVEL__ < 1
int main() {
	cout << __INCLUDE_LEVEL__ << endl;
}

#else
#undef lvl1
#define lvl1 __INCLUDE_LEVEL__
	
#endif