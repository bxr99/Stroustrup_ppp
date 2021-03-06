#include "std_lib_facilities.h"

// handle bad input from inside the function
double c_to_k(double c)
{
  if (c < -273.15) error("Entered a temperature less than 0K");
  double k = c + 273.15;
  return k;
}

int main()
{
  try {
    double c;
    cout << "Enter Celsius: ";
    cin >> c;
    double k = c_to_k(c);
    cout << c << " Celsius is " << k << " Kelvin" << '\n';
    return 0;
  } catch (exception &e) {
    cout << "Exception Caught: " << e.what() << '\n';
    return 1;
  } catch (...) {
    cout << "Unknown Exception";
    return 2;
  }
}