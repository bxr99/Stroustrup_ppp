#include <iostream>

// demo type conversion (casting)
int main()
{
  float f1 = 10/4;    // 2.0, integer division on 10/4, then converted to 2.0
  float f2 = 10/4.0;  // 2.5, causes both operands to be converted to floats

  // C-style casts
  int v1 = 10;
  int v2 = 4;
  float f3 = (float)v1/v2; // 2.5
  float f4 = float(v1)/v2; // also valid, f4 is 2.5
  // C-style casts should be generally avoided

  // static_cast
  char c = 97;
  std::cout << static_cast<int>(c) << '\n'; // prints 97, not 'a'
  // static_cast is best used to convert one fundamental type into another
  int v3 = 10;
  int v4 = 4;
  float f5 = static_cast<float>(v3)/v4; // 2.5
  // The main advantage of static_cast is that it provides compile-time checking
  // making it harder to make an inadvertant error

}