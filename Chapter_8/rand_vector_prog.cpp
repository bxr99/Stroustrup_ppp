#include "std_lib_facilities.h"

// prototypes
void swap(int& a, int& b);
void print_v(vector<int> v);
void larger(vector<int> v1, vector<int> v2);

int main()
{
  cout << sizeof(char) << '\n';
  cout << sizeof(int) << '\n';
  cout << sizeof(double) << '\n';
  cout << sizeof(long) << '\n';
  cout << sizeof(string) << '\n';

  return 0;
}

void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

// read and write only
void print_v(const vector<int> v )
{
  cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i != v.size()-1) cout << ", ";
  }
  cout << " }\n";
}

void larger(vector<int>& v1, vector<int>& v2)
{
  if (v1.size() != v2.size()) error("Error in larger(): vector's are the same size");
  for (int i = 0; i < v1.size(); ++i) {
    if (v1[i] < v2[i])
      swap(v1[i], v2[i]);
  }
}