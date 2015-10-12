#include "std_lib_facilities.h"

// prototypes
void swap(int& a, int& b);
void print_v(vector<int> v);
void larger(vector<int> v1, vector<int> v2);
vector<int> fill_v();
void sys_randomize();

int main()
{
  srand(time(0));
  vector<int> v1 = fill_v();
  vector<int> v2 = fill_v();

  print_v(v1);
  print_v(v2);
  return 0;
}

void sys_randomize()
{
  srand(time(0));
}

vector<int> fill_v()
{
  vector<int> v;
  for (int i = 0; i < 10; ++i)
    v.push_back(rand()%101); // add random number between [0-100]
  return v;
}

void swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

void print_v(vector<int> v )
{
  cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i != v.size()-1) cout << ", ";
  }
  cout << " }\n";
}

void larger(vector<int> v1, vector<int> v2)
{
  if (v1.size() != v2.size()) error("Error in larger(): vector's are the same size");
  for (int i = 0; i < v1.size(); ++i) {
    if (v1[i] < v2[i])
      swap(v1[i], v2[i]);
  }
}