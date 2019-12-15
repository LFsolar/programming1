/*
Use std::hex
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << "10 in hex is " << hex << 10 << '\n';
  cout << "15 in hex uppercase is " << hex << uppercase
       << 15 << '\n';

  return 0;
}
