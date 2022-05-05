/* Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument
and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above. */
#include <iostream>
using namespace std;

void convert()
{
  int ft;
  cin >> ft;
  cout << ft << " Feet = " << (ft * 12) << " Inches" << endl;
}

int convert(int ft)
{
  return ft * 12;
}

int convert(int *ft, int inch)
{
  return *ft * inch;
}

int main()
{
  int ft, ans;
  cout << "Case 1: " << endl
       << "Enter Feet: ";
  convert();

  cout << "Case 2: " << endl
       << "Enter Feet: ";
  cin >> ft;
  cout << ft << " Feet = " << convert(ft) << " Inches" << endl;

  cout << "Case 3: " << endl
       << "Enter Feet: ";
  cin >> ft;
  cout << ft << " Feet = " << convert(&ft, 12) << " Inches" << endl;
  return 0;
}
