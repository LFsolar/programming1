/*
	Determines insurance bracket.
	Tests function.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double insurance(char ch) {
	switch (ch) {
		case 'N': return 0; break;
		case 'S': return 9.5; break;
		case 'F': return 24.75; break;
	}
}

//test program
#if __INCLUDE_LEVEL__ < 1
int main() {
	cout << fixed << setprecision(2);
	cout << insurance('N') << endl;
	cout << insurance('S') << endl;
	cout << insurance('F') << endl;
	
}
#endif
