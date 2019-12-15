/*
	Use these:
	ifstream in
	in.open("fn")
	in >> var
	getline(in, string)
	
	in.close()
	ofstream out;
	out.open("fn")
	out << var
	out.close()
*/

#include <fstream>
#include <iostream>
#include <ios>
using namespace std;

int main() {
	string aString;
	
	ifstream in;
	in.open("finalDoc.txt");
	ofstream out;
	out.open("final2Doc.txt");
	//getline(in, aSring);
	while (in) { // while in is open
		getline(in, aString);
		cout << aString << endl;
		out << aString;
		if (in.eof()) {
			in.close();
		}
	}
}