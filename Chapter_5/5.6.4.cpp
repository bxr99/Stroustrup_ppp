#include "std_lib_facilities.h"

// demo narrowing errors
int main()
{
  int x = 2.9     // x = 2
  char c = 1066;  // c = 42 (represents the character '*')
                  // because there is no char with the value 1066

  // We can write a function that tests and throws a runtime_error exception
  // if an assignment or initialization would lead to a changed value
  int x1 = narrow_cast<int>(2.9);    // throws
  int x2 = narrow_cast<int>(2.0);    // Ok
  char c1 = narrow_cast<char>(1066); // throws
  char c2 = narrow_cast<char>(85);   // Ok

  // We can use narrow_cast when we need to convert a value and we are not sure
  // "if it will fit", it is defined in std_lib_facilities.h
}