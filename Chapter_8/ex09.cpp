#include <iostream>
#include <vector>
#include <stdexcept>

int maxv(std::vector<int> v)
{
  if (v.size() <= 0)
    throw std::invalid_argument("Vector needs elements");

  int max = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (max < v[i])
      max = v[i];
  }
  return max;
}

void print_v(const std::vector<int>& v)
{
  std::cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i != v.size()-1) std::cout << ", ";
  }
  std::cout << " }\n";
}

int main()
{
  std::vector<int> v = {-5,-2,-100,0,-1};
  print_v(v);
  std::cout << "Max: " << maxv(v) << '\n'; // max is 0
  return 0;
}