#include "std_lib_facilities.h"

int main()
{
  vector<string> words;
  string disliked = "broccoli";

  int i = 0;
  for (string input; cin >> input;) {
    words.push_back(input);
    if (input == disliked) {
      cout << "BLEEP\n";
      ++i;
    } else {
      cout << words[i++] << '\n';
    }
  }

  return 0;
}