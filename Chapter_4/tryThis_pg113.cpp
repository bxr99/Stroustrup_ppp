#include "std_lib_facilities.h"

// Prints a table of uppercase characters with their corresponding integer values
// Using a for-loop
int main()
{
  int i = 0;
  for (int char_val = char('A' + i); char_val <= 90; ++char_val) {
    cout << char('A' + i++) << '\t' << char_val << '\n';
  }
  return 0;
}
