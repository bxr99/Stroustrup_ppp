#include "std_lib_facilities.h"

void printPrimes(int n)
{
  for (int i = 2; i < n; ++i) {
    bool isPrime = true;
    for (int j = 2; j*j <= i; ++j) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) cout << i << '\n';
  }
}

int main()
{
  int max = 0;
  cout << "Calculate primes from 1 until: ";
  cin >> max;

  if (max < 1) simple_error("Number should be at least 1\n");
  printPrimes(max);

  return 0;
}