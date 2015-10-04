#include "std_lib_facilities.h"

int main()
{
  try {
    vector<int> values;
    int N = 0;

    cout << "Enter the number of values you want to sum: ";
    cin >> N;

    cout << "Enter some integers (press '|' to stop): ";
    for (int i; cin>>i;)
      values.push_back(i);

    int sum = 0;
    for (int i = 0; i < N; ++i) sum += values[i];

    cout << "The sum of the first " << N << " numbers ( ";
    for (int i = 0; i < N; ++i) cout << values[i] << " ";
    cout << ") is " << sum << '\n';

    return 0;
  } catch (out_of_range) {
    cerr << "Error: asked for a sum of more numbers than there are in the vector\n";
    return 1;
  } catch (...) { // catch all other exceptions
    cerr << "something went wrong\n";
    return 2;
  }
}