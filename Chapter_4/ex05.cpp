#include "std_lib_facilities.h"

int main()
{
  double val1 = 0;
  double val2 = 0;
  char operation;

  cout << "Enter two values and an operation: ";
  cin >> val1 >> val2 >> operation;

  if (operation == '+') {
    cout << "The sum of " << val1 << " and " << val2 << " is " << val1+val2 << '\n';
  } else if (operation == '-') {
    cout << "The difference of " << val1 << " and " << val2 << " is " << val1-val2 << '\n';
  } else if (operation == '*') {
    cout << "The product of " << val1 << " and " << val2 << " is " << val1*val2 << '\n';
  } else if (operation == '/') {
    cout << "The quotient of " << val1 << " and " << val2 << " is " << val1/val2 << '\n';
  } else {
    cout << "I don't know of the " << operation << " operation.\n";
  }

  return 0;
}