/* Write a class to store x, y, and z coordinates of a point in three-dimensional space.
Overload addition and subtraction operators for addition and subtraction of two coordinate
objects. Implement the operator functions as non-member functions (friend operator functions). */
#include <iostream>
using namespace std;

class Coordinates
{
private:
  int x, y, z;

public:
  Coordinates(int a, int b, int c)
  {
    x = a;
    y = b;
    z = c;
  }

  inline void print()
  {
    cout << "( " << x << ", " << y << ", " << z << ")" << endl;
  }

  friend Coordinates operator+(Coordinates, Coordinates);
  friend Coordinates operator-(Coordinates, Coordinates);
};

Coordinates operator+(Coordinates A, Coordinates B)
{
  return Coordinates(A.x + B.x, A.y + B.y, A.z + B.z);
}

Coordinates operator-(Coordinates A, Coordinates B)
{
  return Coordinates(A.x - B.x, A.y - B.y, A.z - B.z);
}

int main()
{
  Coordinates A(2, 2, 2), B(1, 1, 1);
  Coordinates C = A + B;
  cout << "The sum is ";
  C.print();
  C = A - B;
  cout << "The difference is ";
  C.print();
  return 0;
}