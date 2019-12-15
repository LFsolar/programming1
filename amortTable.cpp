/*
Lisa Sun
Programming I
Due: October 1, 2019
House payment program Part II
This program prints the first 8 and last 8 months of an amortization table.
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

// Payment Calculation all-in-one function.
double calc_monthlyPayment (double mp, double myir, double my) {
  double mmir = calc_mir(myir);
  double ma = calc_a(mmir);
  double mb = calc_b(ma);
  double mc = calc_c(my);
  double md = calc_d(mb, mc);
  double me = calc_e(md);
  double mf = calc_f(mp, mmir);
  return calc_payment(mf, me);
}

int main() {

  cout << fixed; // prevents output from being scientific notation.
  cout << setprecision(2); // Output values to 2 decimal places.

  double p; // principal
  double yir; // annual interest rate
  double y; // can have partial years
  double mir;
  double pay;
  int i;
  double totalPaid = 0.0;
  double remainingBalance;
  double monthlyInterest;
  double principalPaid = 0.0;
  double totalPP = 0.0;

  cout << "What is your principal, annual interest rate, and duration in years of your loan?  Ex: 70000.00 9.500 30.0\n\n";
  cin >> p >> yir >> y;
  
  // Remaining balance starts at principal.
  remainingBalance = p;

  // Calculate monthly due.
  pay = calc_monthlyPayment(p, yir, y);

  // Calculate monthly interest rate.
  mir = calc_mir(yir);

  cout << "Principal " << p << "\tInterest Rate: " << yir << "\tYears: " << y << "\tPayment: " << pay << endl << endl;

  // Print header.
  cout << "  Month   Pay       Total     Monthly   Principal    Total      Remaining  \n";
  cout << "                    Paid     Interest      Paid    Principal     Balance  \n";
  cout << "                                                     Paid                \n";                                                             
  
  for (i = 0; i < y * 12; i++) {

      totalPaid += pay;
     
      monthlyInterest = remainingBalance * mir;
      
      principalPaid = pay - monthlyInterest;

      remainingBalance -= principalPaid;
      // Drop any amount worth less than 0.5 cents.
      if (remainingBalance < 0.005 && remainingBalance > -0.005) remainingBalance = 0.00;

      totalPP += principalPaid;

    // Print 1st 8 rows and last 8 rows.
    if (i < 8 || i > y * 12 - 9){

      // Print the month count under the "Month" column.
      cout << setw(5) << i + 1; 

      // Print the monthly due under the "Pay" column.
      cout << setw(9) << pay;

      // Print the total paid under the "Total Paid" column.
      cout << setw(12) << totalPaid;

      // Print monthly interest under the "Monthly Interest" column.
      cout << setw(10) << monthlyInterest;

      // Print principal paid under the "Principal Paid" column.
      cout << setw(12) << principalPaid;

      // Print total pricipal paid under the "Total Principal Paid" column.
      cout << setw(12) << totalPP;

      // Print remaining balace under the "Remaining Balance" column.
      cout << setw(12) << remainingBalance << endl;
    }
    else if (i == 9) {
  cout << "    -      -           -         -           -           -           -\n"; // Not indented to align with the header
    }
  }
 
}
