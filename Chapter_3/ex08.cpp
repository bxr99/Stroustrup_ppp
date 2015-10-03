#include "std_lib_facilities.h"

int main()
{
  int v;
  cout << "Enter an integer value: ";
  cin >> v;

  if (v % 2 == 0) {
    cout << "The value " << v << " is an even number\n";
  } else {
    cout << "The value " << v << " is an odd number\n";
  }

  return 0;
}