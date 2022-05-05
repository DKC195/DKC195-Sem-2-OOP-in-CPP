/* Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data
member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding
car id. Make functions for setting and showing the data members. Member function should be called from other functions. */
#include <iostream>
using namespace std;

class carpark
{
private:
  int car_id;
  int charge = 12;
  float time;

  int calc()
  {
    return time * charge;
  }

public:
  void setup()
  {
    cout << "Register the Car ID: ";
    cin >> car_id;
    cout << "Enter the No. of Parked Hours: ";
    cin >> time;
    cout << "------\tThanks For Registering\t------" << endl;
  }

  void show()
  {
    cout << "------\t    Calculating\t\t------" << endl
         << "Car ID: \t" << car_id << endl
         << "Time Parked: \t" << time << endl
         << "Charge: \t" << calc() << endl;
  }
};

int main()
{
  carpark car;
  car.setup();
  car.show();

  return 0;
}
