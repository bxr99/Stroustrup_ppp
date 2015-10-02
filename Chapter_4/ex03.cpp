#include "std_lib_facilities.h"

int main()
{
  vector<double> values;
  double total = 0;

  // input represents the distance between two cities on a given route
  for (double input; cin >> input;) {
    values.push_back(input);
    total += input;
  }

  // sort the vector
  sort(values.begin(), values.end());

  cout << "the smallest distance between two cities: " << values[0] << '\n';
  cout << "the largest distance between two cities: " << values[values.size()-1] << '\n';
  cout << "the mean distance between two neighboring cities: " << (total/values.size()) << '\n';

  return 0;
}