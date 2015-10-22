#include <iostream>
#include <string>
#include <vector>

// demo of ranged-based for loop
int main()
{
  // for string
  using std::string;

  std::vector<string> names;

  // populate vector
  names.push_back("Fred");
  names.push_back("Eli");
  names.push_back("Sam");
  names.push_back("Emily");
  names.push_back("Jacob");
  names.push_back("Meredith");

  for (string i : names) { // for each i in names
    std::cout << i << " ";
  }
  std::cout << '\n';

  // also valid, making use of type deuction for the type of elements with auto
  for (auto i : names) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}