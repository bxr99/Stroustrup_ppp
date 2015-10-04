#include "std_lib_facilities.h"

int main()
{
  try {
    vector<string> names;
    vector<int> scores;
    string name = "";
    int val = 0;

    cout << "Enter a name and an integer value (separated by <space>): ";
    while (cin>>name>>val) {
      if (name == "NoName" && val == 0) break; // terminate input
      for (int i = 0; i < names.size(); ++i) if (name == names[i])
        error("Error: name has already been entered\n");
      names.push_back(name);
      scores.push_back(val);
      cout << "Enter a name and an integer value (separated by <space>): ";
    }

    int score = 0;
    cout << "Find names with the score of: ";
    cin >> score;
    bool match_found = false;
    for (int i = 0; i < scores.size(); ++i) {
      if (score == scores[i]) {
        match_found = true; // found at least one match
        cout << names[i] << " ";
      }
    }

    if (!match_found) cout << "score not found"; // nobody had the score

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