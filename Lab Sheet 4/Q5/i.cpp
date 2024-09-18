/* Write a program that illustrates the following relationship and comment on
them.
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function */
#include <iostream>
using namespace std;

class Obj {
private:
  int data;

public:
  Obj(int value) : data(value) {}

  // Non-const member function
  void setData(int value) { data = value; }

  // Const member function
  void printData() const { cout << "Data: " << data << endl; }
};

int main() {
  const Obj obj(10); // Creating a const object

  // Cast away const-ness to call non-const member function
  const_cast<Obj &>(obj).setData(20); // Modifying const object

  obj.printData(); // Output: Data: 20

  return 0;
}
