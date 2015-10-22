// demo pass-by-reference
#include <iostream>

void duplicate(int& a, int& b, int& c)
{
  a *= 2;
  b *= 2;
  c *= 2;
}

int main()
{
  int x = 1;
  int y = 3;
  int z = 7;

  // before
  std::cout << "x= " << x << ", y= " << y << ", z= " << z; // 1 3 7
  std::cout << '\n';

  duplicate(x,y,z);

  // after
  std::cout << "x= " << x << ", y= " << y << ", z= " << z; // 2 6 14
  std::cout << '\n';
  return 0;
}