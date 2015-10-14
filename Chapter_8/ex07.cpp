#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort()
#include <stdexcept>

void print_age(const std::vector<double>&);
void print_name(const std::vector<std::string>&);
void print_pair(const std::vector<std::string>&, const std::vector<double>&);
void read_names(); // just 5 names, later change to arbitrary amount
void read_pairs(); // read both names, and an age

// read five names
void read_names()
{
  std::vector<std::string> names;
  std::string s = "";

  for (int i = 0; i < 5; ++i) {
    std::cin >> s;
    names.push_back(s);
  }
}


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

void read_pairs(std::vector<std::string>& names, std::vector<double>& ages)
{
  std::string name = "";
  double age = 0;
  for (int i = 0; i < 5; ++i) {
    std::cout << "Type a name and an age (separated by <space>): ";
    std::cin >> name >> age;
    names.push_back(name);
    ages.push_back(age);
  }
  std::cout << std::endl;
}

void print_pairs(const std::vector<std::string>& names, const std::vector<double>& ages)
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
    std::vector<double> orignal_ages;

    read_pairs(original_names, orignal_ages);
    print_pairs(original_names, orignal_ages);

    // TODO: make copies of stuff

    return 0;
  } catch (const std::invalid_argument& e) {
    std::cerr << "Error caught: " << e.what() << '\n';
    return 1;
  }
}