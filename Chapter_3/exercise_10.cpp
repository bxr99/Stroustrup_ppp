#include "std_lib_facilities.h"

int main()
{
	string operation;
	cin >> operation;

	double v1, v2; // values
	cin >> v1 >> v2;

	if (operation == "+")
		cout << v1 + v2 << '\n';
	if (operation == "-")
		cout << v1 - v2 << '\n';
	if (operation == "*")
		cout << v1 * v2 << '\n';
	if (operation == "/")
		cout << v1 / v2 << '\n';

	return 0;
}