#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort()
#include <stdexcept>

void print_age(const std::vector<double>&);
void print_name(const std::vector<std::string>&);
void print_pair(const std::vector<std::string>&, const std::vector<double>&);

void print_age(const std::vector<double>& v)
{
  std::cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i != v.size()-1) std::cout << ", ";
  }
  std::cout << " }\n";
}

void print_name(const std::vector<std::string>& v)
{
  std::cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i != v.size()-1) std::cout << ", ";
  }
  std::cout << " }\n";
}

void print_pair(const std::vector<std::string>& names, const std::vector<double>& ages)
{
  if (names.size() != ages.size()) {
    throw std::invalid_argument("Vectors must be the same size");
  }

  for (int i = 0; i < names.size(); ++i) {
    std::cout << "(" << names[i] << "," << ages[i] << ")\n";
  }
}

int main()
{
  try {
    std::vector<std::string> original_names;
    std::vector<double> original_ages;
    std::string s = "";
    double age = 0;

    for (int i = 0; i < 5; ++i) {
      std::cout << "Enter a name (followed by <enter>): ";
      std::cin >> s;
      original_names.push_back(s);
    }

    for (int i = 0; i < 5; ++i) {
      std::cout << "Enter the age of " << original_names[i] << ": ";
      std::cin >> age;
      original_ages.push_back(age);
    }

    // TODO: add more stuff

    return 0;
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error caught: " << e.what() << '\n';
    return 1;
  }
}