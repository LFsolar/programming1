/*
	Lisa Sun
	Programming I
	Program: Buddy Holly Songs
	This program defines the Album struct.
	Supports the buddyHolly.cpp program.
	Due: December 2, 2019
*/
#if __INCLUDE_LEVEL < 1
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

//int main() {}
#endif