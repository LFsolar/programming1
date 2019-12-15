/*
Lisa Sun
Chapter 3
September 7, 2019

This program calculates the velocity of a projectile every 100 meters.

Uses equation:
s(t) = -1/2 * g * t^2 + v_0 * t
g = 9.81 m/s^2
*/

#include <iostream>
using namespace std;

int main() {
  double g = 9.81; // gravity in m/s^2
  double t;  // time
  const double delta_t = 0.01;
  double v; // velocity
  double s = 0; // position of projectile
  int count = -1; // Starts at -1 because printing starting position
    // takes an extra loop iteration

  cout << "What is the starting velocity in m/s?  Ex: 10.5\n";
  cin >> v;

  // Position updated every 0.01 seconds.
  for (t = 0; s >= 0; t += delta_t) {
    
    // Update the position and velocity 100x per second.
    s = s + v * delta_t;

    // Update the velocity 100x per second.
    v = v - g * delta_t;
   
    // Print position every second.
    count++;   
      if (count == 100) {
        cout << "Position at time " << t << " seconds is " <<
        s << " meters.\n";
        count = 0;
     }
  }  

  cout << "Position at time " << int (t) + 1 << " seconds is 0 meters.\n";

  return 0;
}
