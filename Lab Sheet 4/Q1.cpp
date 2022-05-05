/* Write a program that has a class to represent time. The class should have constructors to
ini  tialize data members hour, minute, and second to 0 and to initialize them to values passed
as arguments. The class should have a member function to add time objects and return the result
as a time object. There should be functions to display time in 12-hour and 24-hour format. */
#include <iostream>
using namespace std;

class time
{
private:
  int hour, minute, second;

public:
  time(int h, int m, int s)
  {
    while (s > 59)
    {
      s -= 60;
      m++;
    }
    while (m > 59)
    {
      m -= 59;
      h++;
    }
    while (h > 23)
    {
      h -= 24;
    }

    hour = h;
    minute = m;
    second = s;
  }

  void convert()
  {
    string M;
    cout << "24Hr Format: " << hour << ":" << minute << ":" << second << endl;
    if (hour > 12)
    {
      hour -= 12;
      M = "P.M.";
    }
    else
    {
      M = "A.M.";
    }
    cout << "12Hr Format: " << hour << ":" << minute << ":" << second << " " << M << endl;
  }
};

int main()
{
  int hour, minute, second;
  cout << "Enter the time:" << endl
       << "Hour: ";
  cin >> hour;
  cout << "Minute: ";
  cin >> minute;
  cout << "Second: ";
  cin >> second;
  class time t1(hour, minute, second);
  t1.convert();
  return 0;
}
