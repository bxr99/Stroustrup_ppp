#include <iostream>

// Some examples with variable initialization
int main()
{

  int v1 = 5; // explicit initialization
  int v2(5);  // implicit initialization

  // Uniform initialization in C++ 11
  int value{5};
  int value{}; // initialize to 0

  // Uniform can be useful for detecting certain things
  int x = 4.5; // will compile, x is 4
  int y(4.5);  // will compile, x is 4
  int z{4.5};  // will not compile, narrowing conversion

}

