/*
  A jumping and falling man.
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
	cout << "--------------------------------------------"
		 << "--------------------------------------------\n";
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
	cout << "--------------------------------------------"
		 << "--------------------------------------------\n";
}

int main() {
	char input;
	// int height = 2; refactor pHeadSpace and pJumpSpace into height. Later.
	double pHeadSpace = 60;
	double pJumpSpace = 3;
	int width = 10;
	int walking = 0;
	int wait = 0;

	headSpace(pHeadSpace);
	man(width);
	jumpSpace(pJumpSpace);
	
	cout << "        W\n"
		 << "Use   A S D    to control, enter \"x\" to exit.\n";
	
	while(input != 'x' && pHeadSpace > 0 && pJumpSpace > 2) {
		input = getchar();
		//cin >> input;
		
		if(input == 'w') {
			headSpace(pHeadSpace -= 2);
			man(width);
			jumpSpace(pJumpSpace += 2);
			
		} else if(input == 's') {
			headSpace(pHeadSpace += 2);
			manFall(width);
			jumpSpace(pJumpSpace -= 2);
		} else if (input == 'a') {
			headSpace(pHeadSpace);
			if (walking % 2 == 0) {
				manGoLeft(width -= 2);
			} else manGoLeft2(width -= 2);
			jumpSpace(pJumpSpace);
			walking++;
		} else if (input == 'd') {
			headSpace(pHeadSpace);
			if (walking % 2 == 0) {
				manGoRight(width += 2);
			} else manGoRight2(width += 2);
			jumpSpace(pJumpSpace);
			walking++;
		}
		
		// If man reaches the top, fall to the ground
		if (pHeadSpace < 20) { 
			while (pJumpSpace > 0) {
				wait++;
				//cout << randomNum;
				if(wait == 10000000) {
					headSpace(pHeadSpace);
					manFall(width);
					jumpSpace(pJumpSpace);
					pHeadSpace += 1;
					pJumpSpace -= 1;
					wait = 0;
				}
			}
		}
		
	}
	
	if (pHeadSpace <= 0 || pJumpSpace <= 0) {
		cout << "Done!\n";
	}
	
	return 0;
}