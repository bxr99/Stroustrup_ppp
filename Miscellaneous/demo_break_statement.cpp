#include <iostream>

// demo of break statement
int main()
{
  for (int i = 10; i > 0; --i) {
    std::cout << i << " ";
    if (i == 3) {
      std::cout << "break";
      break;
    }
  }
  std::cout << '\n';

  return 0;
}