/*
Lisa Sun
9/17/2019
Main file for Person class
*/

#include "Person.h"

int main() {
  Person person1 = Person();

  Person person2 = Person("Betty", 50);

  person2.get_name();
  person2.get_age();

  return 0;
}
