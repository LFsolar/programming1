/*
	Use:
	concat +
	st3 = st.substr()
	st.erase()
	position =  st.find()
	c_str()
*/

#include <string>
#include <iostream>
using namespace std;

int main() {
	string str1 = "a string";
	string str2 = str1 + " is concatenated";
	string str3 = str2.substr(8);
	string str4 = str1.erase(1,1);
	char aCstring[] = {'a', 'b', 'c'};
	const char * a2ndCstring = "def";
	
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << "is is at position " << str2.find("is") << endl;
	cout << str1.c_str() << endl;
	cout << aCstring << endl;
	cout << "size of {'a', 'b', 'c'} is " << sizeof(aCstring) / sizeof(char) 
		 << endl;
	cout << "size of \"def\" is " << sizeof(a2ndCstring) / sizeof(char) << endl;
}