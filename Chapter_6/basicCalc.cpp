#include "std_lib_facilities.h"

int main()
{
  int lval = 0;
  int rval = 0;
  char op;
  int res = 0;

  cout << "Please enter expression (we can handle +,-,*,/): ";
  cin >> lval >> op >> rval; // read something like 1 + 3

  if (op == '+')
    res = lval+rval;
  else if (op == '-')
    res = lval-rval;
  else if (op == '*')
    res = lval*rval;
  else
    res = lval/rval; // Note: integer division

  cout << "Result = " << res << '\n';
  return 0;
}