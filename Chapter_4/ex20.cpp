#include "std_lib_facilities.h"

int main()
{
  try {
    vector<string> names;
    vector<int> values;
    string str = "";
    int val = 0;

    cout << "Enter a name and an integer value (separated by <space>): ";
    while (cin>>str>>val) {
      if (str == "NoName" && val == 0) break; // terminate input
      for (int i = 0; i < names.size(); ++i) if (str == names[i])
        error("Error: name has already been entered\n");
      names.push_back(str);
      values.push_back(val);
      cout << "Enter a name and an integer value (separated by <space>): ";
    }

    string name = "";
    cout << "Enter a name you'd to see the score of: ";
    cin >> name;
    for (int i = 0; i < names.size(); ++i) {
      if (name == names[i]) {
        cout << values[i] << " ";
      } else {
        cout << "name not found";
        break;
      }
    }

    cout << '\n';
    return 0;
  } catch (runtime_error &e) {
    cerr << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "something went wrong\n";
    return 2;
  }
}