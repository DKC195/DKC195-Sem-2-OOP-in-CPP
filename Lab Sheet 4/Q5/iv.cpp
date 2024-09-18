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

  // Const member function - cannot modify the object's data members
  void printData() const { cout << "Data: " << data << endl; }

  // Non-const member function - can modify the object's data members
  void setData(int value) { data = value; }
};

int main() {
  Obj obj(10); // Create a non-const object

  // Can call const member function
  obj.printData(); // OK: doesn't modify the object

  // Can also call non-const member function
  obj.setData(20); // OK: modifies the object
  obj.printData(); // Display updated data

  return 0;
}
