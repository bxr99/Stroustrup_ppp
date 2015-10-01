#include "std_lib_facilities.h"

int square(int n)
{
	return n * n;
}

// Calculate and print a table of square 0-99
int main()
{
	int i = 0;  // start from 0
	while (i < 100) {
		cout << i << '\t' << square(i) << '\n';
		++i;
	}
	return 0;
}