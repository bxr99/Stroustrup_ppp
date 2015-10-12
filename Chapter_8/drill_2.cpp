#include "std_lib_facilities.h"

swap_v(int, int);
swap_r(int&, int&);
swap_cr(const int&, const int&);

int main()
{
  int x = 7;
  int y = 9;
  swap_v(x,y);
  cout << x << " " << y << '\n';
}

swap_v(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

swap_r(int& a, int& b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

swap_cr(const int& a, const int& b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

