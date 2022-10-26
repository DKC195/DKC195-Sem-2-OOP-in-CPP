/* Assume that one constructor initializes data member say num_vehicle, hour, and rate. There
should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects
and show a bit-by-bit copy of one object to another (make your own copy constructor). */
#include <iostream>
using namespace std;

class Mem
{
private:
  int num_vehicle, hour, rate;

public:
  Mem();
  ~Mem();

  int display()
  {
    int dis = (num_vehicle > 10) ? 10 : 0;
    cout << "Total Charge: " << num_vehicle * rate * (100 - dis) << endl;
    return 0;
  }
};

Mem::Mem()
{
  cout << "Register Your Vehicle" << endl
       << "Enter No. of Vechicles: ";
  cin >> num_vehicle;
  cout << "Enter No. of Hours Parked: ";
  cin >> hour;
  cout << "Enter Rates: ";
  cin >> rate;
}

Mem::~Mem()
{
  display();
}

int main()
{
  Mem V1;
  Mem V2 = V1;
  return 0;
}