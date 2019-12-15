#include <iostream>

using namespace std;

int main() {
	int a = 3, b = 6;
	{ int a = 0;
		cout << a << " " << b << endl;
	}
}