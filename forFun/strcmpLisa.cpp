/*
	Testing stgcmp()
*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char name1[] = "a";
	char name2[] = "b";
	
	// will not compile bc char -> char*
	cout << strcmp(name1, name2) << endl;
	return 0;
}