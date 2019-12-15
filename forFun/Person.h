/*
Lisa Sun
9/17/2019
Person is a class containing a name and a age.
*/

#include <string>

using namespace std;

class Person {
  public:
    Person(); 
    Person(string pname, int page);
    void get_name();
    void get_age();
  private:
    string name;
    int age;
};
