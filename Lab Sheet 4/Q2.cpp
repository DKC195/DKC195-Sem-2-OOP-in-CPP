/* Write a program that has a class with a dynamically allocated character array as its
data member. One object should contain "Engineers are" and another should contain "Creatures
of logic". Member function join() should concatenate two strings by passing two objects
as arguments. Display the concatenated string through a member function. Use constructors
to allocate and initialize the data member. Also, write a destructor to free the allocated
memory for the character array. Make your own function for the concatenation of two strings. */
#include <iostream>
#include <string>
using namespace std;

class Text
{
private:
  string A;
  char* temp;

public:
  Text(string B);
  ~Text();

  void join(Text A, Text B)
  {
    string merge = A.A + B.A;
    cout << merge << endl;
  }
};

Text::Text(string B)
{
  temp = new char[B.length()];
  *temp = A[0];
  A = B;
}

Text::~Text()
{
  delete[] temp;
}

int main()
{
  Text A("Engineers are ");
  Text B("Creatures of logic");
  A.join(A, B);
  exit(0);
}
