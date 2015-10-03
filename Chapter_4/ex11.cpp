#include "std_lib_facilities.h"

bool isPrime(int n)
{
  for (int i = 2; i < n; ++i) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int n = 0;
  cout << "Enter an integer value (1-100): ";
  cin >> n;

  if (n < 1 || n > 100) simple_error("Follow directions next time\n");

  if (isPrime(n))
    cout << n << " is prime\n";
  else
    cout << n << " is not prime\n";

  return 0;
}