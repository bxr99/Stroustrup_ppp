#include "std_lib_facilities.h"

void swap_v(int, int);
void swap_r(int&, int&);
void swap_cr(const int&, const int&);

int main()
{
  //int x = 7;
  //int y = 9;
  //swap_v(x,y);
  //cout << x << " " << y << '\n'; // 7 9
  //swap_r(x,y);
  //cout << x << " " << y << '\n'; // 9 7

  //const int cx = 7;
  //const int cy = 9;
  //swap_v(cx,cy); // 7 9
  //swap_r(cx,cy); // Error: reference of type int, got const int
  //cout << cx << " " << cy << '\n';

  //double dx = 7.7;
  //double dy = 9.9;
  //swap_v(dx,dy);
  //cout << dx << " " << dy << '\n'; // 7.7 9.9
  //swap_r(dx,dy);// Error: expected reference to type int, got type double
  //cout << dx << " " << dy << '\n';

  return 0;
}

void swap_v(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void swap_r(int& a, int& b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

// the program would not even compile with this function
/*
void swap_cr(const int& a, const int& b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
*/
