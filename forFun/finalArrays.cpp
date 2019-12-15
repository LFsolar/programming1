/*
	Use:
	2D arrays
	sizeof(array)
	arrays of structs
*/

#include <array>
#include <iostream>
using namespace std;

struct aStruct {
	int anInt;
	void aMethod() {}
	void anotherMethod() {}
}a, b, c;

int main() {
	int row = 3;
	int col = 3;
	int num = 0;
	int array[row][col];
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = ++num;
		}
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << array[i][j] << ' ';
		}
	}
	cout << endl;
	
	cout << "size = " << sizeof(array) / sizeof(int) << endl;
	
	aStruct anArray[] = {a, b, c};
}