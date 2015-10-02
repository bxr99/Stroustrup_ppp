#include "std_lib_facilities.h"

// Implementation of square() without using the multiplication operator
int square(int n)
{
  int res = n;
  for (int i = 1; i < n; ++i) {
    res += n;
  }
  return res;
}

int main()
{
  int n;
  cout << "Enter an integer to square: ";
  cin >> n;
  cout << n << " * " << n << " = " << square(n) << '\n';
  return 0;
}