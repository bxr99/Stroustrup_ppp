// Chapter 5, exercise 2
// Find the errors in this program

#include "std_lib_facilities.h"

double ctok(double c)
{
  int k = c + 273.15; // narrowing conversion double-to-int
  return int          // returning int instead of double and no semicolon
}

int main()
{
  double c = 0;
  cin >> d;             // d has not been declared
  double k = ctok("c"); // ctock() takes a double as an argument, not a string
  Cout << k << '/n';    // Cout not cout, and '/n' not '\n'
}