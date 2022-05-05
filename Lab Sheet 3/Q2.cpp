/* Assume that you want to check whether the number is prime or not. Write a program that asks for
numbers repeatedly. When it finishes checking a number the program asks if the user wants to do
another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept. */
#include <iostream>
using namespace std;

class Check
{
private:
  int n;
  char gate = 'y';
  int isprime(int n)
  {
    for (int i = 2; i < n / 2 + 1; i++)
    {
      if (n % i == 0)
      {
        return 1;
      }
    }
    return 0;
  }

public:
  void run()
  {
    while (gate == 'y')
    {
      cout << "Enter a number: ";
      cin >> n;
      if (isprime(n))
      {
        cout << "The number is not prime.";
      }
      else
      {
        cout << "The number is prime.";
      }
      cout << endl
           << "Do you want to continue (y/n): ";
      cin >> gate;
    }
  }
};

int main()
{
  Check prime;
  prime.run();
  return 0;
}