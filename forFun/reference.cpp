#include <iostream>
#include <string>

using namespace std;

int main() {
  string food = "Beef";
  string &meal = food;
  
  meal = "taco";
  food = "shrimp";

  cout << "food = " << food << '\n';
  cout << "meal = " << meal << '\n';
  cout << "&meal = " << &meal << '\n';  
  cout << "&food = " << &food << '\n';
//  cout << "(&food)++ = " << (&food)++ << '\n';
//  cout << " &food = " << &food << '\n';

  return 0;
}
