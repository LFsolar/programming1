/*
Lisa Sun
Programming I
Due: September 24, 2019
House payment program Part I
This program computes monthly payments.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//------------------- Payment Calculation Functions -------------------------
double calc_mir (double myir) {
  return myir/1200;
}

double calc_a (double mmir) {
  return 1 + mmir;
}

double calc_b (double ma) {
  return 1 / ma;
}

double calc_c (double my) {
  return 12 * my;
}

double calc_d (double mb, double mc) {
  return pow(mb, mc);
}

double calc_e (double md) {
  return 1 - md;
}

double calc_f (double mp, double mmir) {
  return mp * mmir;
}

double calc_payment (double mf, double me) {
  return mf / me;
}
// -------------------------------------------------------------------------

int main() {

  double p; // principal
  double yir; // annual interest rate
  double y; // can have partial years
  
  // Parts of Principal equation.
  double a;
  double b;
  double c;
  double d;
  double e;
  double f;
  double mir;
  double payment;

  cout << "What is your principal, annual interest rate, and duration in years of your loan?  Ex: 70000.00 9.500 30.0\n";
  cin >> p >> yir >> y;
  
  cout << fixed; // prevents output from being scientific notation.
  cout << setprecision(2); // Output values to 2 decimal places.

  // Calculate monthly payment in parts.
  mir = calc_mir (yir);
  a = calc_a (mir);
  b = calc_b (a);
  c = calc_c (y);
  d = calc_d (b, c);
  e = calc_e (d);
  f = calc_f (p, mir);
  payment = calc_payment (f, e);

  cout << "Principal " << p << "\tInterest Rate " << yir << "\tYears " <<
        y << "\tPayment " << payment << endl;
}
