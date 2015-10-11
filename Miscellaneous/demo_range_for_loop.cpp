#include "std_lib_facilities.h"

// demo ranged-base for loop
int main()
{
  vector<string> names;

  // populate vector
  names.push_back("Fred");
  names.push_back("Eli");
  names.push_back("Sam");
  names.push_back("Emily");
  names.push_back("Jacob");
  names.push_back("Meredith");

  for (string i : names) { // for each 'i' in 'names'
    cout << i << " ";
  }
  cout << '\n';

  // also valid, making use of type deduction for the type of elements with 'auto'
  for (auto i : names) {
    cout << i << " ";
  }
  cout << '\n';

  return 0;
}