/* Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data
members to represent the actual objects and member functions to read and display objects, find perimeter
and area of the objects, and other useful functions. Use the classes to create objects in your program. */
#include <iostream>
#include <math.h>
using namespace std;

class circle
{
private:
  float r;
  float perimeter()
  {
    return 3.14 * 2 * r;
  }

  float area()
  {
    return 3.14 * r * r;
  }

public:
  void read()
  {
    cout << "Case Circle" << endl
         << "Enter The Radius of Circle: ";
    cin >> r;
  }

  void run()
  {
    read();
    cout << "Object:\t\tCircle" << endl
         << "Circumference:\t" << perimeter() << " cm" << endl
         << "Area:\t\t" << area() << " sq.cm" << endl;
  }
};

class rectangle
{
private:
  float l, b;
  float perimeter()
  {
    return 2 * (l + b);
  }

  float area()
  {
    return l * b;
  }

public:
  void read()
  {
    cout << "Case Rectangle" << endl
         << "Enter The Length: ";
    cin >> l;
    cout << "Enter The Breadth: ";
    cin >> b;
  }

  void run()
  {
    read();
    cout << "Object:\t\tRectangle" << endl
         << "Perimeter:\t" << perimeter() << " cm" << endl
         << "Area:\t\t" << area() << " sq.cm" << endl;
  }
};

class triangle
{
private:
  float a, b, c;
  float perimeter()
  {
    return a + b + c;
  }

  float area()
  {
    if (a < 0 || b < 0 || c < 0 ||
        (a + b <= c) || a + c <= b ||
        b + c <= a)
    {
      cout << "Not a valid triangle";
      return 0;
    }
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
  }

public:
  float read()
  {
    cout << "Case Triangle" << endl
         << "Enter the length of side A: ";
    cin >> a;
    cout << "Enter the length of side B: ";
    cin >> b;
    cout << "Enter the length of side C: ";
    cin >> c;
  }

  float run()
  {
    read();
    cout << "Object:\t\tTriangle" << endl
         << "Perimeter:\t" << perimeter() << " cm" << endl
         << "Area:\t\t" << area() << " sq.cm" << endl;
  }
};

int main()
{
  circle C;
  C.run();
  rectangle R;
  R.run();
  triangle T;
  T.run();
  return 0;
}
