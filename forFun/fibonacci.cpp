/*
	Non-recusrsive fibonacci code.
	10/31/2019
*/

#include <iostream>
using namespace std;

int fibo(int num) {
	while(num > 2) {
		num += num 
	}
	return num;
}

int main() {
	int num;
	cout << "Enter a positive integer" << endl;
	cin >> num;
	if (num > 0) {
		cout << fibo(num) << endl;
	} else cout << "Number was not a positive integer\n";
	return 0;
}