#include "std_lib_facilities.h"

// converts Celsius to Kelvin
double c_to_k(double c)
{
  double k = c + 273.15;
  return k;
}

int main()
{
  double c;
  cout << "Enter Celsius: ";
  cin >> c;
  double k = c_to_k(c);
  cout << c << " Celsius is " << k << " Kelvin" << '\n';
  return 0;
}