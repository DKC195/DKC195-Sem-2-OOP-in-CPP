// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.
#include <iostream>
using namespace std;

inline void tax(int x)
{
  cout << 90 * x / 100;
}

int main()
{
  int x;
  cout << "Enter Employee Salary: ";
  cin >> x;
  cout << "The net salary is: ";
  tax(x);
  return 0;
}