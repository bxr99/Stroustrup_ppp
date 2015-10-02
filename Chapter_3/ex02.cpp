#include "std_lib_facilities.h"

int main()
{
  double mi = 0;
  cout << "Enter miles: ";
  cin >> mi;
  cout << mi << " mi is " << (mi/0.62137) << " km\n";
  return 0;
}