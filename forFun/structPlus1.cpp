/*
	See if struct + 1 moves to next item in struct
*/
#include <iostream>
using namespace std;

struct myStruct {
	int name;
	string surname;
	//int count;
};

myStruct struct1;

int main() {
	struct1.name = 4;
	struct1.surname = "Bear";
	//struct1.count = 10;
	
	cout << *(&struct1.name + 1) << endl;
}