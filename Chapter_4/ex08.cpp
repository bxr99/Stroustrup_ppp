#include "std_lib_facilities.h"

int main()
{
  long long total = 2;

  for (int curr_square = 1; curr_square <= 64; ++curr_square) {
    cout << "Current square: " << curr_square << ", Grains: " << total << '\n';
    total *= 2;
  }

  return 0;
}