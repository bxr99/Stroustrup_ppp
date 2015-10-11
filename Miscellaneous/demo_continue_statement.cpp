#include "std_lib_facilities.h"

// demo of continue statement
int main()
{
  for (int i = 10; i > 0; --i) {
    if (i == 5) {
      cout << "continue ";
      continue;
    }
    cout << i << " ";
  }
  cout << '\n';

  return 0;
}