#include "std_lib_facilities.h"

// Prints a table of characters with their corresponding integer values
int main()
{
  // 'b' is char('a' + 1), 'c' is char('a' + 2)
	int i = 0;
	int char_val = char('a' + i);
	while (char_val <= 122) {
		cout << char('a' + i) << '\t' << char_val << '\n';
		++i;
		char_val = char('a' + i);
	}
  return 0;

}