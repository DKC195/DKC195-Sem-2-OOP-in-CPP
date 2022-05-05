/* Write a program to demonstrate the use of different ios flags and functions to format the output.
Create a program to generate the bill invoice of a department store by using different formatting. */
#include <iostream>
#include <fstream>
using namespace std;

class Menu
{
private:
public:
  Menu();
  ~Menu();
};

Menu::Menu()
{
  cout << "***************  MENU  ***************" << endl
       << "     Momo               Chowmin       " << endl
       << "Veg. Momo     40     Veg. Chowmin   40" << endl
       << "ChickenMomo   60     Chi. Chowmin   60" << endl
       << "Buff Momo     80" << endl
       << endl
       << "Coke";
}

Menu::~Menu()
{
}

int main()
{
  Menu Lunch;
  // ofstream file;
  // file.open("Q1.txt");
  // file.close();
  return 0;
}
