/* Assume that an object represents an employee report that contains information like employee id, total bonus, total
overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays
the report. Use setpara() member function to set report attributes by passing the arguments and member function
displayreport() to show the report according to the parameter passed. Display the report in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus
and
had worked ... ... ... hours as overtime in the year ... ... ...*/
#include <iostream>
using namespace std;

class Employee
{
private:
  int emp_id, bonus, ot;
  int check = 0, year = 2022;

public:
  void setpara(int id)
  {
    cout << "Employee " << id + 1 << endl;
    emp_id = id + 1;
    cout << "Enter Total Bonus Received:\t";
    cin >> bonus;
    cout << "Enter Overtime Hours:\t";
    cin >> ot;
    check = 1;
  }

  void store(int id)
  {
    while (check == 0)
    {
      setpara(id);
    }
  }

  void displayreport()
  {
    cout << "An employee with ID " << emp_id << " has received Rs " << bonus << " as a bonus and had worked " << ot << " hours as overtime in the year " << year;
  }
};

int main()
{
  int n;
  cout << "Enter the no. of employees: ";
  cin >> n;
  Employee emp[n];
  for (int i = 0; i < n; i++)
  {
    emp[i].store(i);
  }
  for (int i = 0; i < n; i++)
  {
    emp[i].displayreport();
  }
  return 0;
}