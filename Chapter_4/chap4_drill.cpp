#include "std_lib_facilities.h"

// TODO: still need to finish
int main()
{
	int count = 1;
	double val = 0;
	double low = 0;
	double max = 0;
	string unit; // cm, m, in, ft

	while (cin >> val >> unit) {
		if (val == '|') break;
		if (unit != "cm" || unit != "m" || unit != "in" || unit != "ft") break;

    // first time in loop, will only execute this code once
		if (count++ <= 1) {
			low = val;
			max = val;
		}

    // update values
		if (low > val) low = val;
		if (max < val) max = val;

		cout << low << " the smallest so far\n";
		cout << max << " the largest so far\n";

	}

	return 0;
}