/* Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst,
programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
- Chief executive officer Rs. 35000/m
- Information officer Rs. 25000/m
- System analyst Rs. 24000/m
- Programmer Rs. 18000/m
> Make a function that takes two arguments; one salary and the other increment. Use proper default argument. */
#include <iostream>
using namespace std;

int inc(int salary, int increment)
{
  return salary * increment / 100;
}

inline void print()
{
  cout << endl
       << "Current Monthly Salary of ";
}

int main()
{
  cout << "Monthly Salary";
  print();
  cout << "Chief Executive Officer is " << inc(35000, 9);
  print();
  cout << "Information Officer is " << inc(25000, 10);
  print();
  cout << "System Analyst is " << inc(24000, 12);
  print();
  cout << "Programmer is " << inc(18000, 12);
  return 0;
}
