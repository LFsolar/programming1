#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void lookup();
void add();
int main(){
string type;
while (cin >> type){
if (type == "lookup")
    lookup();
else
    add();
}
return 0;
}
void lookup()
{ifstream fin;
bool check = false;
string name,firstName,lastName,email;
cin >> name;
fin.open("phonedir");
while (fin >> firstName >> lastName >> email){
if (firstName.compare(name)==0 || lastName.compare(name)==0){
     cout<<firstName<<" "<<lastName<<" "<<email<<endl;
     check=true;
    }
}
if(!check)
     cout << name << ": not found" << endl;
fin.close();
}
void add()
{ofstream fout;
string name;
getline(cin, name);
fout.open("phonedir", ios::app);
fout << name << endl;
fout.close();
}