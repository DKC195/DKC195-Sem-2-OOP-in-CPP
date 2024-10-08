/* Write a class that can store Department ID and Department Name with
constructors to initialize its members. Write destructor member in the same
class and display the message "Object n goes out of the scope". Your program
should be made such that it should show the order of constructor and destructor
invocation. */
#include <iostream>
using namespace std;

class Depart {
private:
  int ID;
  string Name;

public:
  Depart();
  ~Depart();
};

Depart::Depart(/* args */) {
  cout << "Constructor Activated" << endl << "Enter Department ID: ";
  cin >> ID;
  cout << "Enter Department Name: ";
  cin >> Name;
}

Depart::~Depart() {
  cout << "Destructor Activated" << endl << "Object n goes out of the scope";
}

int main() {
  Depart D;
  return 0;
}
