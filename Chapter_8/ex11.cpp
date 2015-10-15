#include <iostream>
#include <vector>
#include <algorithm> // sort()
#include <stdexcept>

double get_smallest(const std::vector<double>&);
double get_largest(const std::vector<double>&);
double get_mean(std::vector<double>&);
double get_median(std::vector<double>&);

int main()
{
  try {
    std::vector<double> v = {1,2,4,7};
    std::cout << get_mean(v) << '\n';
    std::cout << get_median(v) << '\n';

    return 0;
  } catch (const std::invalid_argument& e) {
    std::cerr << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Unknown exception\n";
    return 2;
  }
}

double get_smallest(const std::vector<double>& v)
{
  if (v.size() <= 0)
    throw std::invalid_argument("Vector has no elements");

  double smallest = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (smallest > v[i]) smallest = v[i];
  }
  return smallest;
}

double get_largest(const std::vector<double>& v)
{
  if (v.size() <= 0)
    throw std::invalid_argument("Vector has no elements");

  double largest = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (largest < v[i]) largest = v[i];
  }
  return largest;
}

double get_mean(std::vector<double>& v)
{
  if (v.size() <= 0)
    throw std::invalid_argument("Vector has no elements");

  double sum = 0;
  for (int i = 0; i < v.size(); ++i) {
    sum += v[i]; // sum up values
  }
  double mean = sum / v.size();
  return mean;
}

double get_median(std::vector<double>& v)
{
  if (v.size() <= 0)
    throw std::invalid_argument("Vector has no elements");

  std::sort(v.begin(),v.end()); // order from least to greatest

  double median = 0;
  if (v.size() % 2 != 0) {      // odd
    median = v[v.size()/2];
  } else {                      // even
    median = (v[(v.size()/2)-1] + v[(v.size()/2)])/2;
  }
  return median;
}
