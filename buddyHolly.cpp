/*
	Lisa Sun
	Programming I
	Program: Buddy Holly Songs
	This program sorts songs and albums alphabetically.
	Due: December 2, 2019
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "sortSongs.cpp"
#include "sortAlbumsA2Z.cpp"
#define NUMALBUMS 5
using namespace std;

Album buddyAlbums[NUMALBUMS];

int main() {
	int albumNo = 0;
	int songNo = 0;
	string line;
	
	ifstream ifile("SongsBuddyHolly.txt");
	
	getline(ifile, buddyAlbums[albumNo].title);
	getline(ifile, buddyAlbums[albumNo].date);		
	while(getline(ifile, line)) {
		if(line[0] == '=') {
			// Go to next album and fill in name and date
			albumNo++;
			getline(ifile, buddyAlbums[albumNo].title);
			getline(ifile, buddyAlbums[albumNo].date);
			songNo = 0;		
			// Fill songs
		} else {
			// Separate the track number from the song name
			buddyAlbums[albumNo].songs[songNo][0] = line.substr(0, 3);
				
			buddyAlbums[albumNo].songs[songNo][1] = line.substr(5);
			buddyAlbums[albumNo].count++;
			songNo++;
		}
	}
	ifile.close();
	
	// Sort songs alphabetically
	cout << endl << "Songs sorted alphabetically:" << endl << endl;
	for (int i = 0; i <= albumNo; i++) {
		cout << buddyAlbums[i].title << endl
			 << buddyAlbums[i].date << endl;
		sortSongs(buddyAlbums[i].songs, buddyAlbums[i].count);
			 for (int j = 0; j < buddyAlbums[i].count; j++) {
				cout << buddyAlbums[i].songs[j][0] << "  "
					 << buddyAlbums[i].songs[j][1] << endl;
			 }
		cout << "========================" << endl;
	}	
	
	// Sort albums alphabetically, use + 1 to get quantity, not index
	sortAlbumsA2Z(buddyAlbums, albumNo + 1);
	
	cout << endl << "Albums sorted alphabetically:" << endl << endl;
	for (int i = 0; i <= albumNo; i++) {
		cout << buddyAlbums[i].title << endl
			 << buddyAlbums[i].date << endl;
			 for (int j = 0; j < buddyAlbums[i].count; j++) {
				cout << buddyAlbums[i].songs[j][0] << "  "
					 << buddyAlbums[i].songs[j][1] << endl;
			 }
		cout << "========================" << endl;
	}	
}