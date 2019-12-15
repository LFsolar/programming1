/*
	Use string functions from class handout.
*/

#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string /*s, */s1, s2;
	char c;
	char s3[] = "This is the s3 C string";
	char s4[] = "This is the s4 C string";
	char * cs, * name;
	
	bool b;
	int i, start, len, start1, len1, start2, len2, newSize;
	/*
	istringstream istr;
	ostringstream ostr;
	*/
	s1 = "This is the s1 string";
	// string s(s1);
	name = s4;
	i = s1.capacity();
	string s(cs);
	b = s1.empty();
	i = s1.resize(50);

	
	cout << s1 << '\n'
		 << b << '\n'
		 << i << '\n';
	
	return 0;
}
