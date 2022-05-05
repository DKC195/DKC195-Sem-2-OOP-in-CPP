/* Create a class with a data member to hold a "serial number" for each object created from the
class. That is, the first object created will be numbered 1, the second 2, and so on by using
the basic concept of static data members. Use static member function if it is useful in the
program. Otherwise, make a separate program that demonstrates the use of static member function. */
#include <iostream>
using namespace std;

class Mem
{
private:
  static int count;
  int *sno = new int;

public:
  Mem();
  ~Mem();

  void serial()
  {
    count++;
    *sno = count;
  }
};

int Mem::count = 0;

Mem::Mem()
{
  serial();
  cout << "The serial no. is " << *sno << endl;
}

Mem::~Mem()
{
  delete sno;
}

int main()
{
  Mem numbered1;
  Mem second2;
  return 0;
}
