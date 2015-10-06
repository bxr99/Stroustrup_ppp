#include "std_lib_facilities.h"

double c_to_f(double c)
{
  double f = (c*1.8)+32;
  if (f < -459.67) error("Temperature cannot be less than 0k");
  return f;
}

double f_to_c(double f)
{
  double c = (f-32)*(5.0/9.0);
  if (c < -273.15) error("Temperature cannot be less than 0k");
  return c;
}

int main()
{
  try {
    char unit;
    cout << "Celsius or Fahrenheit? (c/f): ";
    cin >> unit;

    if (unit == 'c') {
      double c = 0;
      cout << "Enter Celsius: ";
      cin >> c;
      double f = c_to_f(c);
      cout << c << " Celsius is " << f << " Fahrenheit" << '\n';
    } else { // 'f'
      double f = 0;
      cout << "Enter Fahrenheit: ";
      cin >> f;
      double c = f_to_c(f);
      cout <<  f << " Fahrenheit is " << c << " Celsius" << '\n';
    }
    return 0;
  } catch (exception &e) {
    cerr << "Exception Caught: " << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "Unknown Exception\n";
    return 2;
  }
}