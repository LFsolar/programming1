/*
  Use rand()
*/

#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  cout << rand() << '\n'
       << rand() % 100 << '\n'
       << rand() % 30 + 1985 << '\n';

  return 0;
}
