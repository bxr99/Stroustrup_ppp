#include "std_lib_facilities.h"

int main()
{
  string input;
  cin >> input;

  if (input == "zero")
    cout << "0\n";
  else if (input == "one")
    cout << "1\n";
  else if (input == "two")
    cout << "2\n";
  else if (input == "three")
    cout << "3\n";
  else if (input == "four")
    cout << "4\n";
  else
    cout << "not a number I know of\n";

  return 0;
}