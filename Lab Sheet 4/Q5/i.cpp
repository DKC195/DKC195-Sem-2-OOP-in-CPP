/* Write a program that illustrates the following relationship and comment on them. 
i) const_object.non_const_mem_function
ii) const_object.const_mem_function
iii) non_const_object.non_const_mem_function
iv) non_const_object.const_mem_function */
#include <iostream>
using namespace std;

class obj
{
private:

public:
  void out()
  {
    cout << "Out";
  }
};

int main()
{
  const obj TR;
  TR.out();
  return 0;
}
