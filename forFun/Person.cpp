/*
Lisa Sun
9/17/2019
Person contains a name and a age.
*/

#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person() {}

Person::Person(string pname, int page) {
  name = pname;
  age = page;
}

void Person::get_name() {
  cout << "Name: " << name << '\n';
}

void Person::get_age() {
  cout << "Age: " << age << '\n';
}

