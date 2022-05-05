/* Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure 
and print out the values in the format 11/28/2004 by function. Pass the structure to the function. */
#include <iostream>
using namespace std;

struct Date
{
  int mm;
  int dd;
  int yy;
};

void pdate(Date d) {
  if(d.mm < 10)
    cout << "0";
  cout << d.mm << "/";
  if(d.dd < 10)
    cout << "0";
    cout << d.dd << "/" << d.yy;
}

int main()
{
  Date d;
  cout << "Enter The Year: \t";
  cin >> d.yy;
  cout << "Enter The Month: \t";
  cin >> d.mm;
  cout << "Enter The Date: \t";
  cin >> d.dd;

  pdate(d);

  return 0;
}