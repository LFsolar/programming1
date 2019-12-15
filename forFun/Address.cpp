#include <string>
#include <iostream>
#include "Address.h"

using namespace std;

  Address::Address() {};

  Address::Address(int paptNo): aptNo(paptNo) {};

  Address::Address(int phouseNo, string pstreet, int paptNo, string pcity,
                   string pstate, int pzip): houseNo(phouseNo), street(pstreet),
		   aptNo(paptNo), city(pcity), state(pstate), zip(pzip) {};
  
  Address::Address(int phouseNo, string pstreet, string pcity,string pstate,
		   int pzip): houseNo(phouseNo), street(pstreet),
                   city(pcity), state(pstate), zip(pzip) {}


  void Address::print() {
    cout << street << '\n';
    cout << city << ", " << state << ", " << zip << '\n';
  };

  void Address::comes_before(Address a, Address b) {
    Address first = a.zip < b.zip ? a : b;
    cout << first << " comes first.\n";

  int Address::getZip(Address a) {
    return a.zip;   
  }
 

