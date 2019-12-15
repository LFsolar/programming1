/*
	Use sys/stat.h to test if a file exists
*/

#include <iostream>
#include <sys/stat.h>
using namespace std;

bool fileExists(const string& filename) {
	/*struct */stat buf;	// Maybe "struct" is needed here to say this is
	// the stat datastructure, and not the struct function?
	if (stat(filename.c_str(), &buf) != -1) {
		return true;
	} else return false;
}

int main() {
	cout << fileExists("quickSort.cpp") << endl;
	cout << fileExists("3ref4ygh5tyjruki768oilj") << endl;
}