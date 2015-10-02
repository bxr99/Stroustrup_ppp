#include "std_lib_facilities.h"

int main()
{
  vector<string> values = {
    "zero", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"
  };

  vector<int> num_values = {0,1,2,3,4,5,6,7,8,9};

  int input;
  cin >> input;
  cout << values[input] << "\n";

  string input2;
  cin >> input2;

  if (input2 == "zero") {
    cout << num_values[0] << '\n';
  } else if (input2 == "one") {
    cout << num_values[1] << '\n';
  } else if (input2 == "two") {
    cout << num_values[2] << '\n';
  } else if (input2 == "three") {
    cout << num_values[3] << '\n';
  } else if (input2 == "four") {
    cout << num_values[4] << '\n';
  } else if (input2 == "five") {
    cout << num_values[5] << '\n';
  } else if (input2 == "six") {
    cout << num_values[6] << '\n';
  } else if (input2 == "seven") {
    cout << num_values[7] << '\n';
  } else if (input2 == "eight") {
    cout << num_values[8] << '\n';
  } else if (input2 == "nine") {
    cout << num_values[9] << '\n';
  } else {
    return 1;
  }

  return 0;
}