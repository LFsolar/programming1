/*
	Lisa Sun
	Programming I
	Program: Buddy Holly Songs
	This program defines the Album struct.
	Supports the buddyHolly.cpp program.
	Due: December 2, 2019
*/
#include <iostream>
#include "SongStruct.cpp"
using namespace std;

struct Album {
	string title;
	string date;
	Song songs[12]; // make room for the longest one
	int count = 0; // number of songs?
};

// Test
#if __INCLUDE_LEVEL__ < 1
// int main() {
	
// }
#endif