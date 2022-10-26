/* Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
A. Make a particular member function of one class as a friend function of another class for Operations.
B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
C. Also write a small program to demonstrate that all the member functions of one class are the friend
functions of another class if the former class is made friend to the latter.
Make least possible classes to demonstrate all the above in a single program without conflict. */
#include <iostream>
using namespace std;

class Operations;
class Coordinate
{
private:
  int x, y;
  int x1, y1;

public:
  Coordinate();
  friend void add(Operations, Coordinate);
  friend void multi(Operations, Coordinate);
  friend void div(Operations, Coordinate);
  friend void sub(Operations, Coordinate);
};

Coordinate::Coordinate()
{
  cout << "Enter the coordinates:" << endl
       << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
}

class Operations
{
private:
  int x, y;

public:
  Operations();
  friend void add(Operations, Coordinate);
  friend void multi(Operations, Coordinate);
  friend void div(Operations, Coordinate);
  friend void sub(Operations, Coordinate);
};

Operations::Operations()
{
  cout << "Enter the coordinates:" << endl
       << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
}

void add(Operations O, Coordinate C)
{
  C.x1 = O.x + C.x;
  C.y1 = O.y + C.y;
  cout << "Sum of Coordinates (x, y): (" << C.x1 << ", " << C.y1 << ")" << endl;
}

void multi(Operations O, Coordinate C)
{
  C.x1 = O.x * C.x;
  C.y1 = O.y * C.y;
  cout << "Product of Coordinates (x, y): (" << C.x1 << ", " << C.y1 << ")" << endl;
}

void div(Operations O, Coordinate C)
{
  C.x1 = O.x / C.x;
  C.y1 = O.y / C.y;
  cout << "Quotient of Coordinates (x, y): (" << C.x1 << ", " << C.y1 << ")" << endl;
}

void sub(Operations O, Coordinate C)
{
  C.x1 = O.x - C.x;
  C.y1 = O.y - C.y;
  cout << "Difference Coordinates (x, y): (" << C.x1 << ", " << C.y1 << ")" << endl;
}

int main()
{
  Coordinate C;
  Operations O;
  add(O, C);
  multi(O, C);
  div(O, C);
  sub(O, C);
  return 0;
}
