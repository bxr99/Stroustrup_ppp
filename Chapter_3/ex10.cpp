#include "std_lib_facilities.h"

int main()
{
  string operation;
  cin >> operation;

  double v1, v2; // values
  cin >> v1 >> v2;

  if (operation == "+" || operation == "plus")
    cout << v1 + v2 << '\n';
  else if (operation == "-" || operation == "minus")
    cout << v1 - v2 << '\n';
  else if (operation == "*" || operation == "mul")
    cout << v1 * v2 << '\n';
  else if (operation == "/" || operation == "div")
    cout << v1 / v2 << '\n';
  else
    cout << "not an operation I know of\n";

  return 0;
}