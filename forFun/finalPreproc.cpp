/*
	Use preprocessor directives
	#if # else # endif
	__DATE__
	__LINE__
	__FILE__
	__BASE_FILE__
	__INCLUDE_LEVEL__
*/

#include <iostream>
#include "finalLvl1Preproc.cpp"

#define A 25
#if A > 25
#undef y
#define y 126

#elif A < 25
#undef y
#define y 124

#else
#undef y
#define y 125
#endif

using namespace std;

int main() {
	int x = y;
	cout << "x is " << x << endl;
	cout << __DATE__ << endl;
	cout << __LINE__ << endl;
	cout << __FILE__ << endl;
	cout << __BASE_FILE__ << endl;
	cout << "include level is " << __INCLUDE_LEVEL__ << endl;
	cout << lvl1 << endl;
}