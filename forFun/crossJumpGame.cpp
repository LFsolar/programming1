/*
  A jumping man with gravity.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void man(int width) {
	cout << setw(width) << "    O   " << endl
		 << setw(width) << "   /T\\  " << endl
		 << setw(width) << "    ||   " << endl;
}

void manFall(int width) {
	cout << setw(width) << "   \\O/    " << endl
		 << setw(width) << "    T      " << endl
		 << setw(width) << "    ||     " << endl;
	
}

void manGoRight(int width) {
	cout << setw(width) << "    O   " << endl
		 << setw(width) << "   <T\\  " << endl
		 << setw(width) << "   /|   " << endl;
	
}

void manGoRight2(int width) {
	cout << setw(width) << "    O   " << endl
		 << setw(width) << "   <T   " << endl
		 << setw(width) << "    |\\  " << endl;
	
}

void manGoLeft(int width) {
	cout << setw(width) << "     O    " << endl
		 << setw(width) << "    /T>   " << endl
		 << setw(width) << "    |\\   " << endl;
	
}

void manGoLeft2(int width) {
	cout << setw(width) << "     O    " << endl
		 << setw(width) << "     T>   " << endl
		 << setw(width) << "    /|    " << endl;
	
}

void headSpace(int topLines) {
	//cout << "--------------------------------------------"
	//	 << "--------------------------------------------\n";
	while(topLines) {
		cout << "\n";
		topLines--;
	}
}

void jumpSpace(int bottomLines) {
	while(bottomLines) {
		cout << "\n";
		bottomLines--;
	}
	//cout << "--------------------------------------------"
	//	 << "--------------------------------------------\n";
}

int main() {
	char input;
	// int height = 2; refactor pHeadSpace and pJumpSpace into height. Later.
	int pHeadSpace = 80;
	int pJumpSpace = 3;
	int width = 200;
	int walking = 0;
	int wait = 0;
	int jumpUp = 0;

	headSpace(pHeadSpace);
	man(width);
	jumpSpace(pJumpSpace);
	
	cout << "        \n"
		 << "Use   Q   &   E   to control, enter \"x\" to exit.\n";
	
	while(input != 'x' && pHeadSpace >= 0 && pJumpSpace >= 0) {
		input = getchar();
		
		if (pHeadSpace <= 0 || pJumpSpace <= 0) {
			pHeadSpace = 60;
			pJumpSpace = 3;
		}	
		
		// Jump Left.
		if (input == 'q') {
			while(pJumpSpace < 30) {
				wait++;
				if(wait == 10000000) {
					headSpace(pHeadSpace -= 2);
					man(width -= 2);
					jumpSpace(pJumpSpace += 2);
					wait = 0;
				}
			}
			while(pJumpSpace > 2) {
				wait++;
				if(wait == 10000000) {
					headSpace(pHeadSpace += 2);
					manFall(width -= 2);
					jumpSpace(pJumpSpace -= 2);
					wait = 0;
				}
			}
		}
		
		
		// Jump Right.
		if (input == 'e') {
			while(pJumpSpace < 30) {
				wait++;
				if(wait == 10000000) {
					headSpace(pHeadSpace -= 2);
					man(width += 2);
					jumpSpace(pJumpSpace += 2);
					wait = 0;
				}
			}
			while(pJumpSpace > 2) {
				wait++;
				if(wait == 10000000) {
					headSpace(pHeadSpace += 2);
					manFall(width += 2);
					jumpSpace(pJumpSpace -= 2);
					wait = 0;
				}
			}
		}
		
		
		
	}
	
	
	
	return 0;
}