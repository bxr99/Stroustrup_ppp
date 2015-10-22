#include <iostream>

// demo of continue statement
int main()
{
  for (int i = 10; i > 0; --i) {
    if (i == 5) {
      std::cout << "continue ";
      continue;
    }
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}