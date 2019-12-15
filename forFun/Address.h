#include <string>

using namespace std;

class Address {
  private:
    int houseNo;
    string street;
    int aptNo;
    string city;
    string state;
    int zip;
  public:
    Address();
    Address(int paptNo);
    Address(int phouseNo, string pstreet, string pcity,
            string pstate, int pzip);
    Address(int phouseNo, string pstreet, int paptNo, string pcity,
	    string pstate, int pzip);
    void print();
    void comes_before(Address a, Address b);
    int getZip(Address a);
};
