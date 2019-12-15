/*
Lisa Sun
Chapter 3
9/8/2019

This program determines the reading level of documents.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  string line;
  int wordCount = 0;  
  int i;
  char vowels [12] = {'A', 'E', 'I', 'O', 'U', 'Y',
	'a', 'e', 'i', 'o', 'u', 'y'};
  int syllableCount = 0;

  cout << "Load a text document.\n";
  ifstream file("text_docs.txt"); // file called text_dics.txt

  if(file.is_open()) { // checks if file is open
    while (getline(file, line)) {
      cout << line << '\n';
    }
    file.close(); // closes file
  }
  else cout << "File is not open.\n";

  for (i = 0; i < file.length(); i++) {
    // Count words.
    if (file[i] == ' ' || file[i] == 13) {
      wordCount++;
    }
    cout << "There are " << wordCount << " words in the file.\n";

    // Count syllables.
    // Vowels count as syllables.
//    if (file[i] == 
  }

  return 0;
}
