/* Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic
concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that
hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you
need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value. */
#include <iostream>
using namespace std;

class Celcius
{
private:
  float base = 32;
  float div = 100;
  float multi = 180;

public:
  float toFahrenheit(float temp)
  {
    return (temp * multi / div) + 32;
  }
};

class Fahrenheit
{
private:
  float base = 32;
  float div = 180;
  float multi = 100;

public:
  float toCelcius(float temp)
  {
    return (temp * multi / div);
  }
};

int main()
{
  float temp;
  Celcius CtoF;
  Fahrenheit FtoC;
  cout << "Enter Temprature in Celcius: ";
  cin >> temp;
  cout << temp << "˚C = " << CtoF.toFahrenheit(temp) << "˚F" << endl
       << "Enter Temprature in Fafrenheit: ";
  cin >> temp;
  cout << temp << "˚F = " << FtoC.toCelcius(temp) << "˚C";
      return 0;
}
