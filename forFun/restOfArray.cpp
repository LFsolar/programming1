/*
	Seeing what return a+1 does to a = array
*/

#include <iostream>
#include <array>
using namespace std;

int* aPlus1(int list[]) {
	return list + 1;
}

int main() {
	int list[] = {1, 2, 3, 4, 5, 6};
	int* changedList = aPlus1(list);
	/*int size = sizeof(changedList) / sizeof(*changedList);
	cout << "The size of a + 1 is " << size
		 << endl;
	*/	 
	for (int i = 0; i < 7; i++) {
		cout << changedList[i] << ' ';
	}
	cout << endl;
}