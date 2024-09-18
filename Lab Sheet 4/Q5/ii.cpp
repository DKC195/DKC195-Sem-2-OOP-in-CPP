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

  // Const member function
  int getData() const {
    return data; // Doesn't modify the object
  }

  void printData() const { cout << "Data: " << data << endl; }
};

int main() {
  const Obj obj(10); // Create a const object

  // Can call const member functions on const object
  int value = obj.getData(); // OK
  obj.printData();           // OK

  // obj.setData(20);  // Error: can't call non-const function on const object

  return 0;
}
