#include "std_lib_facilities.h"

void print_v(vector<int> v)
{
	for (int i : v) { // for each 'i' in vector 'v', do stuff..
		cout << i << " ";
	}
	cout << '\n';
}

int main()
{
	vector<int> values;
	for (int i = 0; i < 10; ++i)
		values.push_back(i);

	print_v(values);
	cout << "The header file worked!\n";
	return 0;
}

