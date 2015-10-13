#include <iostream>
#include <vector>

// prototypes
std::vector<int> reverse_1(const std::vector<int>);
void reverse_2(std::vector<int>&);
void swap(int&, int&);
void print_v(std::vector<int>);

int main()
{
  std::vector<int> v1 = {1,3,5,7,9};
  print_v(v1);
  reverse_2(v1);
  print_v(v1);
  return 0;
}

// read and write access only
void print_v(const std::vector<int> v)
{
  std::cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i != v.size()-1) std::cout << ", ";
  }
  std::cout << " }\n";
}

// first reverse function produces a new vector with the reversed sequence
// leaving its original vector unchanged
std::vector<int> reverse_1(const std::vector<int> v)
{
  std::vector<int> r;
  for (int i = v.size()-1; i >= 0; --i)
    r.push_back(v[i]);
  return r;
}

// second reverse function reverses the elements of the vector without using
// any other vectors (hint: swap)
void reverse_2(std::vector<int>& v)
{
  for (int i = 0; i < v.size()/2; ++i)
    swap(v[i],v[v.size()-1-i]);
}

void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}
