#include <iostream>

// Conisdered good practice to indicate global variable names with 'g_'
// to indicate that they are global, helps avoid possible naming conflicts
// with local variables
int g_value{5}; // global variable

static int g_x; // g_x is static, and can only be used within this file
extern double g_y; // g_y is external, and can be used by other files

void increase()
{
  int local = 3;
  std::cout << "local variable = " << local << '\n';
  std::cout << "global variable = " << g_value << '\n';
  std::cout << "After incrementing ...\n";

  local++;     // local is 4
  ::g_value++; // increments global value, using global scope operator(::)

  std::cout << "local variable = " << local << '\n';
  std::cout << "global variable = " << g_value << '\n';
}

int main()
{
  increase();
  return 0;
}