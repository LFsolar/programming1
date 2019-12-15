// fileio10.cpp
//
// test: getline
// read lines from 'cache.in' and write to 'output.txt' with line numbers
// 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
  {
    int pg,found,counter;
    string line;

    ifstream ifile ("cache.in");              // open input file
    ofstream ofile ("output.txt");            // open output file


    if (ifile.is_open() && ofile.is_open())   // see if they opened
      {
        counter = 1;
		getline(ifile,line);
        while (!ifile.eof())
          {
            //getline(ifile,line);
            ofile << counter << "\t" 
                  << '|' << line 
                  << '|' << endl; // write to output file
            counter++; 
          getline(ifile,line);	// to catch eof character
		  //while (! ifile.eof() );         // check for eof
		}
		ifile.close();                      // close the files
        ofile.close();                      // -
      }
    else
      {
        cout << "Unable to open files cache.in and/or output.txt"
             << endl;
      }
    return 0;
}


