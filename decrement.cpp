#include <iostream>

using namespace std;

int main() {
  int j = 3, k = 1;

  do
    {
	j -= 1;
  } while (j > k);

  cout << " j is " << j << '\n';
  return 0;
}
