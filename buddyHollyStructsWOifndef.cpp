/*
	Lisa Sun
	Programming I
	Program: Buddy Holly Songs
	This program defines the Song struct and the Album struct.
	Supports the buddyHolly.cpp program.
	Due: December 2, 2019
*/
#if __INCLUDE_LEVEL < 1
#include <iostream>
using namespace std;

struct Song {
	string trackNo;
	string name;
};

struct Album {
	string title;
	string date;
	Song songs[12]; // make room for the longest one
	int count = 0; // number of songs
};

#endif