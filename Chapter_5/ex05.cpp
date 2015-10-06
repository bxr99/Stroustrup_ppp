#include "std_lib_facilities.h"

// handle bad input from inside the function
double c_to_k(double c)
{
  if (c < -273.15) error("Entered a temperature less than 0k");
  double k = c + 273.15;
  return k;
}

double k_to_c(double k)
{
  double c = k - 273.15;
  if (c < -273.15) error("The temperature cannot be less than 0k");
  return c;
}

int main()
{
  try {
    char unit;
    cout << "Celsius or Kelvin? (c/k): ";
    cin >> unit;

    if (unit == 'c') {
      double c = 0;
      cout << "Enter Celsius: ";
      cin >> c;
      double k = c_to_k(c);
      cout << c << " Celsius is " << k << " Kelvin" << '\n';
    } else { // 'k'
      double k =0;
      cout << "Enter Kelvin: ";
      cin >> k;
      double c = k_to_c(k);
      cout << k << " Kelvin is " << c << " Celsius" << '\n';
    }
    return 0;
  } catch (exception &e) {
    cerr << "Exception Caught: " << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "Unknown Exception" << '\n';
    return 2;
  }
}