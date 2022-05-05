/* Create a function called sum() that returns the sum of the elements of an
array. Make this function into a template so it will work with any numerical
type. Write a program that applies this function to data of various types. */
#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b)
{
  return a + b;
}

template <typename T>
T cases()
{
  int m, result = 0;
  cout << "Enter the no. of elements to store in array: ";
  cin >> m;

  cout << "Enter the elements: " << endl;
  T arr[m];
  for (int i = 0; i < m; i++)
  {
    cin >> arr[i];
    result = sum<T>(result, arr[i]);
  }
  return result;
}

int main()
{
  int n;
  int result = 0;
  cout << "Choose Type of Operation:" << endl
       << "1. int" << endl
       << "2. float" << endl
       << "3. double" << endl;
  cin >> n;

  if (n == 1)
    result = cases<int>();
  else if (n == 2)
    result = cases<float>();
  else
    result = cases<double>();

  cout << "The Sum is " << result << "." << endl;
  return 0;
}