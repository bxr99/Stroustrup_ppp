#include "std_lib_facilities.h"

// 10/02/15
int main()
{
	int count = 1;
	int num_values = 0; // how many inputs
	double val = 0;
	double low = 0;
	double max = 0;
	double tot_sum = 0; // in meters
	vector<double> tot_meters;
	string unit; // cm, m, in, ft

	while (cin >> val >> unit) {
		if (val == '|') break;

    // everything gets converted to meters
		if (unit == "cm") {
			tot_sum += (val/100.00);
			tot_meters.push_back(val/100.00);
		} else if (unit == "m") {
			tot_sum += val;
			tot_meters.push_back(val);
		} else if (unit == "in") {
			tot_sum += (val/39.370);
			tot_meters.push_back(val/39.370);
		} else if (unit == "ft") {
      tot_sum += (val/3.2808);
      tot_meters.push_back(val/3.2808);
		} else {
			cout << "not a valid unit\n";
			break;
		}

    // first time in loop, will only execute this code once
		if (count++ <= 1) {
			low = val;
			max = val;
		}

    // update values
		if (low > val) low = val;
		if (max < val) max = val;
		++num_values;
	}

  // sort the vector
  sort(tot_meters.begin(), tot_meters.end());

	// display vector elements
	for (int i = 0; i < tot_meters.size(); ++i)
		cout << tot_meters[i] << " ";

	cout << '\n';
	cout << "the number if values inputted is " << num_values << '\n';
	cout << low << "m is the smallest so far\n";
	cout << max << "m is the largest so far\n";
	cout << "the total sum in meters is " << tot_sum << '\n';

	return 0;
}