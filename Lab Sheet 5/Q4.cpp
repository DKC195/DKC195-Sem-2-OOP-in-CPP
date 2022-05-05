/* Write a class Date that overloads prefix and postfix operators to increase the Date object by one day,
while causing appropriate increments to the month and year (use the appropriate condition for leap year).
The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators. */
#include <iostream>
using namespace std;

class Date
{
private:
  int DD = 0, MM = 0, YY = 0;

public:
  Date(int, int, int);

  int leap()
  {
    if (YY % 100)
    {
      if (YY % 4)
        return 0;
      else
        return 1;
    }
    else
    {
      if (YY % 400)
        return 0;
      else
        return 1;
    }
  }

  void verify()
  {
    if (leap() && MM == 2)
    {
      if (DD >= 30)
      {
        MM++;
        DD = DD - 29;
      }
    }
    else if (MM == 2)
    {
      if (DD >= 29)
      {
        MM++;
        DD = DD - 28;
      }
    }

    else
    {
      if (DD >= 32)
      {
        MM++;
        DD = DD - 31;
      }
    }
    if (MM >= 13)
    {
      YY++;
      MM = MM - 11;
    }
  }

  void print()
  {
    cout << "DD/MM/YYYY" << endl
         << DD << "/" << MM << "/" << YY << endl;
  }
  void operator++()
  {
    ++DD;
    verify();
    print();
  }

  void operator++(int)
  {
    DD++;
    verify();
    print();
  }
};

Date::Date(int dd, int mm, int yy)
{
  DD = dd;
  YY = yy;
  MM = mm;
  verify();
}

int main()
{
  Date D(29, 02, 2001);
  D.print();
  cout << "-----------" << endl;
  ++D;
  Date E(29, 02, 2001);
  cout << "-----------" << endl;
  E++;
  return 0;
}
