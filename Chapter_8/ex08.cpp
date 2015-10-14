#include <iostream>
#include <vector>
#include <stdexcept>

double get_index(std::vector<double> price, std::vector<double> weight)
{
  double sum = 0;
  if (price.size() != weight.size())
    throw std::invalid_argument("Vectors must have the same size");

  for (int i = 0; i < price.size(); ++i) {
    sum += (price[i]*weight[i]);
  }
  return sum;
}

int main()
{
  std::vector<double> price = {12.5,34,45,67,78.13,89};
  std::vector<double> weight = {32,53.3,64.6,86,985,13.99};
  std::cout << get_index(price,weight) << '\n';
  return 0;
}