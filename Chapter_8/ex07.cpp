#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

// global variables
std::vector<std::string> names;
std::vector<double> ages;

void read_names()
{
  std::string s = "";
 for (int i = 0; i < 5; ++i) {
    std::cout << "Enter name (followed by <enter>): ";
    std::cin >> s;
    names.push_back(s);
  }
  std::cout << '\n';
}

void print_names(const std::vector<std::string>& v)
{
  std::cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i != v.size()-1) std::cout << ", ";
  }
  std::cout << " }\n";
}

void read_ages_of(const std::vector<std::string>& v)
{
  double age = 0;
  for (int i = 0; i < 5; ++i) {
    std::cout << "Enter age of " << v[i] << ": ";
    std::cin >> age;
    ages.push_back(age);
  }
  std::cout << '\n';
}

void print_pairs(const std::vector<std::string>& names, const std::vector<double>& ages)
{
  if (names.size() != ages.size()) throw std::invalid_argument("Vectors must be same size");
  for (int i = 0; i < names.size(); ++i) {
    std::cout << "(" << names[i] << ", " << ages[i] << ")\n";
  }
}

void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = a;
}

int get_index(const std::vector<std::string>& names, const std::string& name)
{
  for (int i = 0; i < names.size(); ++i)
    if (name == names[i]) return i;
  throw std::invalid_argument(name + " not found");
}

int main()
{
  try {
    read_names();
    read_ages_of(names);

    std::vector<std::string> original_names = names;
    std::vector<double> original_ages = ages;

    std::sort(names.begin(),names.end());

    for (int i = 0; i < names.size(); ++i)
      ages[i] = original_ages[get_index(original_names, names[i])];

    print_pairs(names,ages);

    return 0;
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error Caught: " << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Unknown Exception\n";
    return 2;
  }
}