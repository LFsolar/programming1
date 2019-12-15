/*
	Lisa Sun
	Programming I
	Payroll Programm
	Due: November 19, 2019
	This program conmputes net pay.
		The 2018 federal income tax brackets are used.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "grossPay.cpp"
#include "insurance.cpp"
#include "fedTax.cpp"
using namespace std;

// Computes social security due.
double socialSecurity(double gross) {
	return gross * 0.07;
}

// Computes state tax due.
double stateTax(double gross) {
	return gross * 0.03;
}

// Computes projected yearly earnings.
double pye(double gross, double weeks) {
	return gross * weeks;
}

// Compute net pay.
double net(double gross, double socSec, double insur, double stateTax, 
		   double fedTax) {
	return gross - socSec - insur - stateTax - fedTax;
}

int main ()
  {
    char cname[20];
    double rate, hours;
    char inscode;
	double weeks = 52;
	double gross;
	double pyee;
	double socSec;
	double insur;
	double stateTaxes;
	double fedTax;
	double netPay;

	cout << "NAME                 RATE   HOURS     INS    SOC    STATE    FED     NET" << endl
         << "                                             SEC     TAX     TAX" << endl;
		 
    while (cin.get(cname,21))  // read in 20 chars
      {
        string name = cname;
        cin >> rate >> hours >> ws >> inscode >> ws;
		
		cout << fixed << setprecision(2);
		gross = grossPay(rate, hours);
		pyee = pye(gross, weeks);
		socSec = socialSecurity(gross);
		insur = insurance(inscode);
		stateTaxes = stateTax(gross);
		fedTax = fedTax2018(pyee) / weeks;
		netPay = net(gross, socSec, insur, stateTaxes, fedTax);

        cout << setw(15) << name
			 << setw(5) << rate
			 << setw(8) << hours
			 << setw(8) << insur
			 << setw(8) << socSec
			 << setw(8) << stateTaxes
			 << setw(8) << fedTax
			 << setw(8) << netPay;
        cout << endl;
      } 
    return 0;
  }