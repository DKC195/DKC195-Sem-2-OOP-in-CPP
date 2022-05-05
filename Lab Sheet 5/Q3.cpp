/* Write a program to compare two objects of a class that contains an integer value as its data member.
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=),
greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions. */
#include <iostream>
using namespace std;

class cmp
{
private:
  int x;

public:
  cmp(int a);

  friend cmp operator==(cmp, cmp);
  friend cmp operator<(cmp, cmp);
  friend cmp operator>(cmp, cmp);
  friend cmp operator!=(cmp, cmp);
  friend cmp operator>=(cmp, cmp);
  friend cmp operator<=(cmp, cmp);
};

cmp::cmp(int a)
{
  x = a;
}

cmp operator==(cmp A, cmp B)
{
  cout << "== Test" << endl;
  if (A.x == B.x)
    cout << "A==B" << endl;
  else
    cout << "A!=B" << endl;
}

cmp operator<(cmp A, cmp B)
{
  cout << "< Test" << endl;
  if (A.x < B.x)
    cout << "A<B" << endl;
  else
    cout << "A>B" << endl;
}

cmp operator>(cmp A, cmp B)
{
  cout << "> Test" << endl;
  if (A.x > B.x)
    cout << "A>B" << endl;
  else
    cout << "A<B" << endl;
}

cmp operator!=(cmp A, cmp B)
{
  cout << "!= Test" << endl;
  if (A.x != B.x)
    cout << "A!=B" << endl;
  else
    cout << "A==B" << endl;
}

cmp operator>=(cmp A, cmp B)
{
  cout << ">= Test" << endl;
  if (A.x >= B.x)
    cout << "A>=B" << endl;
  else
    cout << "A<B" << endl;
}

cmp operator<=(cmp A, cmp B)
{
  cout << "<= Test" << endl;
  if (A.x <= B.x)
    cout << "A<=B" << endl;
  else
    cout << "A>B" << endl;
}

int main()
{
  cmp A(5), B(2);
  A == B;
  A < B;
  A > B;
  A != B;
  A >= B;
  A <= B;
  return 0;
}