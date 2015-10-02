#include "std_lib_facilities.h"

int main()
{
  // modified version of exercise 4
  // changed the type to double
  double val1 = 0;
  double val2 = 0;

  cout << "Enter two floating-point values (separated by <space>): ";
  cin >> val1 >> val2;

  if (val1 < val2) {
    cout << "the smaller value is " << val1 << '\n';
    cout << "the larger value is " << val2 << '\n';
  } else if (val1 == val2) {
    cout << "the two values are equal\n";
  } else { // val1 > val2
    cout << "the larger value is " << val1 << '\n';
    cout << "the smaller value is " << val2 << '\n';
  }

  cout << "the sum is " << val1+val2 << '\n';
  cout << "the difference is " << val1-val2 << '\n';
  cout << "the product is " << val1*val2 << '\n';
  cout << "the quotient is " << val1/val2 << '\n';

  return 0;
}