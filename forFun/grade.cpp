/*
Lisa Sun
Chapter 3
9/6/2019

Write a program that translates a letter grade into a number grade.
Letter grades are A, B, C, D, and F, possibly followed by + or –. Their numeric values
are 4, 3, 2, 1, and 0. There is no F+ or F–. A + increases the numeric value by 0.3,
a – decreases it by 0.3. However, an A+ has value 4.0.
Enter a letter grade: BThe
numeric value is 2.7.

This program translates a letter grade into a number grade.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  double numGrade;
  string letterGrade;

  cout << "Enter a capital letter grade.  Ex: A+" << endl;
  cin >> letterGrade;

  // Convert letter grade to GPA
  switch (letterGrade[0]) {
    case 'A': numGrade = 4; break;
    case 'B': numGrade = 3; break;
    case 'C': numGrade = 2; break;
    case 'D': numGrade = 1; break;
    case 'F': numGrade = 0; break;
    default: cout << "Invalid letter" << endl;
  }
  if (letterGrade[1]) {
    numGrade += (letterGrade[1] == '+' ? 0.3 : -0.3);
  }

  cout << letterGrade << " is a GPA of " << numGrade << endl; 
  
  return 0;
}
