/*
	Lisa Sun
	Programming I
	Program: Buddy Holly Songs
	This program sorts Albums alphabetically.
	Supports the buddyHolly.cpp program.
	Due: December 2, 2019
*/
#include <iostream>
#define MAXSONGS 12
#define NUMTRACKINFO 2
using namespace std;

struct Album {
	string title;
	string date;
	string songs[MAXSONGS][NUMTRACKINFO]; // 12 songs, with trackNo & name
	int count = 0; // number of songs
};

void sortAlbumsA2Z(Album anthology[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (anthology[i].title < anthology[j].title) 
				swap(anthology[i], anthology[j]);
		}
	}
}

// Test
#if __INCLUDE_LEVEL__ < 1
int main() {
	// Make array of Albums
	Album album1;
	album1.title = "zabd";
	album1.date = "1832";
	
	Album album2;
	album2.title = "eabd";
	album2.date = "1862";
	
	Album list[] = {album1, album2};
	
	// Display unsorted
	for (int i = 0; i < 2; i++) {
	cout << list[i].title << list[i].date << endl;
	}
	
	sortAlbumsA2Z(list, 2);
	
	// Display sorted
	for (int i = 0; i < 2; i++) {
		cout << list[i].title << list[i].date << endl;
	}
}
#endif
