#include "std_lib_facilities.h"

int main()
{
  // possible inputs
  int v1 = 0;
  int v2 = 0;
  string s1 = "";
  string s2 = "";
  char input, operation;

  cout << "Enter 's' for word input, or 'n' for number input: ";
  cin >> input;

  if (input == 's') {

    cout << "Enter two single-digit numbers in string format and an operation (separated by <space>): ";
    cin >> s1 >> s2 >> operation;

    // first input
    if (s1 == "zero")
      v1 = 0;
    else if (s1 == "one")
      v1 = 1;
    else if (s1 == "two")
      v1 = 2;
    else if (s1 == "three")
      v1 = 3;
    else if (s1 == "four")
      v1 = 4;
    else if (s1 == "five")
      v1 = 5;
    else if (s1 == "six")
      v1 = 6;
    else if (s1 == "seven")
      v1 = 7;
    else if (s1 == "eight")
      v1 = 8;
    else if (s1 == "nine")
      v1 = 9;
    else
      cout << "Follow directions next time\n";

    // second input
    if (s2 == "zero")
      v2 = 0;
    else if (s2 == "one")
      v2 = 1;
    else if (s2 == "two")
      v2 = 2;
    else if (s2 == "three")
      v2 = 3;
    else if (s2 == "four")
      v2 = 4;
    else if (s2 == "five")
      v2 = 5;
    else if (s2 == "six")
      v2 = 6;
    else if (s2 == "seven")
      v2 = 7;
    else if (s2 == "eight")
      v2 = 8;
    else if (s2 == "nine")
      v2 = 9;
    else
      cout << "Follow directions next time\n";

    // determining operation
    if (operation == '+')
      cout << s1 << "+" << s2 << " = " << v1+v2 << '\n';
    else if (operation == '-')
      cout << s1 << "-" << s2 << " = " << v1-v2 << '\n';
    else if (operation == '*')
      cout << s1 << "*" << s2 << " = " << v1*v2 << '\n';
    else if (operation == '/')
      cout << s1 << "/" << v2 << " = " << v1/v2 << '\n';
    else
      cout << "Follow directions next time\n";
  } else if (input == 'n') { // numbers

    cout << "Enter two single-digit integers and an operation (separated by <space>): ";
    cin >> v1 >> v2 >> operation;

    if (operation == '+')
      cout << v1 << "+" << v2 << " = " << v1+v2 << '\n';
    else if (operation == '-')
      cout << v1 << "-" << v2 << " = " << v1-v2 << '\n';
    else if (operation == '*')
      cout << v1 << "*" << v2 << " = " << v1*v2 << '\n';
    else if (operation == '/')
      cout << v1 << "/" << v2 << " = " << v1/v2 << '\n';
    else
      cout << "Follow directions next time\n";

  } else {
    cout << "Follow directions next time\n";
  }

  return 0;
}