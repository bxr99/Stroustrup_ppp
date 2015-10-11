#include "std_lib_facilities.h"

// demo of break statement
int main()
{
  for (int i = 10; i > 0; --i) {
    cout << i << " ";
    if (i == 3) {
      cout << "break";
      break;
    }
  }
  cout << '\n';

  return 0;
}