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
  void setData(int value) {
    data = value; // This function can modify the object
  }

  // Const member function
  void printData() const { cout << "Data: " << data << endl; }
};

int main() {
  Obj obj(10); // Create a non-const object

  // Can call non-const member function
  obj.setData(20); // OK: modifies the object

  // Can also call const member function
  obj.printData(); // OK: displays the data

  return 0;
}
