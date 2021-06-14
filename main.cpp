/********************************************************************
* File: Chapter 5 PE 5_3.cpp
* Make it a point to have all the output look good by
* making sure it is properly aligned. Please display the GPA to
* two places beyond the decimal point.
********************************************************************/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::left;
using std::setprecision;
using std::fixed;
using std::ios;

const int COLUMN_1 = 15;
const int COLUMN_2 = 12;
const int COLUMN_3 = 4;

int main()
{
  cout << "Income versus GPA" << endl;
  cout << left << setw(COLUMN_1) << "Name" 
       << setw(COLUMN_2) << "Income" 
       << setw(COLUMN_3) << "GPA" << endl;

  cout << setw(COLUMN_1) << "Jamie" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 12300.00f 
       << setw(COLUMN_3) << setprecision(2) << 3.40f << endl;

  cout << setw(COLUMN_1) << "Linda" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 14500.00f 
       << setw(COLUMN_3) << setprecision(2) << 3.92f << endl;

  cout << setw(COLUMN_1) << "Bob" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 9400.00f 
       << setw(COLUMN_3) << setprecision(2) << 3.12f << endl;

  cout << setw(COLUMN_1) << "Marie" 
       << setw(COLUMN_2) << fixed << setprecision(2) << 15129.00f 
       << setw(COLUMN_3) << setprecision(2) << 4.00f << endl;


    cout << "** End of Report 1 ** \n\n";
    

  cout << "Income versus age" << endl;
  cout.setf(ios::left);
  cout.width(15); cout << "Name";
  cout.width(12); cout << "Income";
  cout.width(4); cout << "Age \n";

  cout.setf(ios::left);
  cout.width(15); cout << "Jamie";
  cout.width(12); cout << "12300";
  cout.width(4); cout << "19 \n";

  cout.setf(ios::left);
  cout.width(15); cout << "Linda";
  cout.width(12); cout << "14500";
  cout.width(4); cout << "22 \n";

  cout.setf(ios::left);
  cout.width(15); cout << "Bob";
  cout.width(12); cout << "9400";
  cout.width(4); cout << "21 \n";

  cout.setf(ios::left);
  cout.width(15); cout << "Frank";
  cout.width(12); cout << "19129";
  cout.width(4); cout << "51 \n";

  cout << "** End of Report 2 ** \n\n";
  
    return 0;
}
