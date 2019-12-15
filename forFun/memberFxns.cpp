/*

Lisa Sun
9/9/2019
Chapter 5

Implement all member functions of the following class:
class Person
{
public:
Person();
Person(string pname, int page);
void get_name() const;
void get_age() const;
private:
string name;
int age; // 0 if unknown
};

*/

class Person
{
public:
Person() {
  name;
  age = 0;
};
Person(string pname, int page) {
  name = pname;
  age = page;
};
void get_name() const {
  return name;
};
void get_age() const {

};
private:
string name;
int age; // 0 if unknown
};
