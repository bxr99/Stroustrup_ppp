#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
	return 0;
}

