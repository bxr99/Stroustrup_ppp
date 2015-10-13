#include <iostream>
#include <vector>
#include <string>

// prototypes
void swap(int&,int&);
void print_v(const std::vector<std::string>&);
std::vector<std::string> reverse_1(const std::vector<std::string>&);
void reverse_2(std::vector<std::string>&);

int main()
{
  std::vector<std::string> v1 = {
    "Joe", "Sam", "Eli", "Mary", "Emma", "Becka"
  };

  print_v(v1);
  reverse_2(v1);
  print_v(v1);

  return 0;
}

void print_v(const std::vector<std::string>& v)
{
  std::cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i != v.size()-1) std::cout << ", ";
  }
  std::cout << " }\n";
}

std::vector<std::string> reverse_1(const std::vector<std::string>& v)
{
  std::vector<std::string> r;
  for (int i = v.size()-1; i >= 0; --i)
    r.push_back(v[i]);
  return r;
}

void reverse_2(std::vector<std::string>& v)
{
  for (int i = 0; i < v.size()/2; ++i)
    swap(v[i],v[v.size()-1-i]);
}

void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = a;
}