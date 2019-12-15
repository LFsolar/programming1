/*
	Lisa Sun
	Programming I
	Program: Buddy Holly Songs
	This program sorts songs alphabetically.
	Supports the buddyHolly.cpp program.
	Due: December 2, 2019
	
*/
#include <iostream>
#define SIZE2D 2
using namespace std;

void sortSongs(string songs[][SIZE2D], int size) {
	// Compare 1 song name to another song name
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			// song[][0] = track no.
			// song[][1] = name
			if (songs[i][1] < songs[j][1]) swap(songs[i], songs[j]);
		}
	}
}

// Test
#if __INCLUDE_LEVEL__ < 1
int main() {
	string song1[2];	
	song1[0] = " 1.";
	song1[1] = "example";
	
	string song2[2];	
	song2[0] = " 2.";
	song2[1] = "axample";
	
	string list[][2] = {song1, song2};
	
	// Display original
	for (int i = 0; i < 2; i++) { // access all individual songs
		for (int j = 0; j < 2; j++) { // access either trackNo [0] or name [1]
			cout << list[i][j] << ' ';
		}
		cout << endl;
	}
	
	sortSongs(list, 2);
	
	// Display sorted
	for (int i = 0; i < 2; i++) { // access all individual songs
		for (int j = 0; j < 2; j++) { // access either trackNo [0] or name [1]
			cout << list[i][j] << ' ';
		}
		cout << endl;
	}
}
#endif