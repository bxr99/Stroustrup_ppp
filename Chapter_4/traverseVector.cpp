#include "std_lib_facilities.h"

int main()
{
	// Create a vector of ints
	vector<int> v = {5,7,9,4,6,8};

	// Traverse the vector with a for-loop
	// A vector "knows" its size
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	cout << '\n';

	// Traveser the vector with a range-for-loop
	for (int i : v) { // for each 'i' in 'v'
		cout << i << " ";
	}

	cout << '\n';
	return 0;
}