#include <iostream>
#include <fstream>
#include <string>
#include <ios>
using namespace std;

void lookup() {
	// line;
	string a, b, c, d;
    bool match = false;
   ifstream ifile;
   cin >> a;
   ifile.open("phonedir");
   while(ifile >> b >> c >> d) {
	   if (b.compare(a) == 0 || c.compare(a) == 0 || d.compare(a) == 0) {
		   cout << b << ' ' << c << ' ' << d << endl;
		   match = true;
		   //break;
	   }
   }
   //if(!match)
   if (!match) cout << a << ':' << " not found" << endl;
   ifile.close();
}

void add() {
	ofstream ofile;
	string a;
	getline(cin, a);
	ofile.open("phonedir", std::ios_base::app);
	ofile << a << endl;
	ofile.close();	
}

int main(int arc, char*argv[]) {
	//string line;
	string method;
	while(cin >> method) {
		if (method == "lookup") {		
			lookup();
		} else if (method == "add") {
			add();
		}
	}
	return 0;
}