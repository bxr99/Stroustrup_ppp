#include "std_lib_facilities.h"

// Computes the number of primes less than or equal to N using
// the Sieve of Eratosthenes
int main()
{
  int N = 0;
  cout << "Compute primes until: ";
  cin >> N;

  // initially assume all integers are prime
  bool isPrime[N];
  for (int i = 2; i <= N; ++i)
    isPrime[i] = true;

  // mark non-primes <= N using Sieve of Eratosthenes
  for (int i = 2; i*i <= N; ++i) {
    // if i is prime, then mark multiples of i as nonprime
    // suffices to consider multiples of i, i+1, ..., N/i
    if (isPrime[i]) {
      for (int j = i; i*j <= N; ++j) {
        isPrime[i*j] = false;
      }
    }
  }

  // output primes
  for (int i = 2; i <= N; ++i) {
    if (isPrime[i]) cout << i << '\n';
  }

  return 0;
}