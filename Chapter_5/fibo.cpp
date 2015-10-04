#include "std_lib_facilities.h"

int fib(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return fib(n-2) + fib(n-1);
}

int main()
{
  int n = 0;
  cout << "Enter any integer: ";
  cin >> n;
  cout << fib(n) << '\n';
  return 0;
}