/*
	recursion example from class
	10/29/2019
*/

#include <iostream>
#include <iomanip>
#include<gmpxx.h>

using namespace std;

long int facto(int N, int level) {
	long int t;
	cout << setw(level *4) << level << endl;
	if (N > 0)
		t= N * facto(N-1, level + 1);
	else
		t = 1;
	cout << setw(level *4) << level << " t = " << t << endl;
	return t;
}

int main() {
	int x;
	long int z;
	cin >> x;
	z = facto(x, 1);
	cout << z << endl;
}