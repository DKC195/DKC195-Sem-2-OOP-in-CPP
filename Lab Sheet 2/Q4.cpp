// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include <iostream>
using namespace std;

int &temp(int &x, int &y)
{
  if (*&x < *&y)
    return x;
  else
    return y;
}

int main()
{
  int a, x, y;

  cout << "Enter 1st Number: ";
  cin >> x;
  cout << "Enter 2nd Number: ";
  cin >> y;

  cout << "Enter a random value: ";
  cin >> a;
  temp(x, y) = a;

  cout << "Set Value: " << x;

  return 0;
}
