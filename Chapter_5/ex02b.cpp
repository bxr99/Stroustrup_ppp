#include "std_lib_facilities.h"

// converts Celsius to kelvin
double c_to_k(double c)
{
  double k = c + 273.15;
  return k;
}

int main()
{
  try {
    double c;
    cout << "Enter Celsius: ";
    cin >> c;
    if (c < -273.15) error("Entered a value less than 0k");
    double k = c_to_k(c);
    cout << c << " Celsius is " << k << " Kelvin" << '\n';
    return 0;
  } catch (const exception &e) {
    cerr << "Exception Caught: " << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "Unknown Exception\n";
    return 2;
  }
}