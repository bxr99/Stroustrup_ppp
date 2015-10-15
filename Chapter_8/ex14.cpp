#include <iostream>

void f(const int);

// after compiling this function it states that there is an error
// using g++ -Wall -std=c++11, error: increment of read only parameter 'i'
void f(const int i)
{
  ++i;
  std::cout << i << '\n';
}

int main()
{
  f(7);
  return 9;
}
