#include "std_lib_facilities.h"

int main()
{
  vector<string> disliked_words;
  disliked_words.push_back("broccoli");

  // add words I hate hearing
  disliked_words.push_back("essay");
  disliked_words.push_back("chores");
  disliked_words.push_back("tuition");

  string input = "";

  while (cin>>input) {
    bool found_match = false;
    for (int i = 0; i < disliked_words.size(); ++i) {
      if (input == disliked_words[i]) {
        found_match = true;
        break;
      }
    }

    if (found_match) {
      cout << "BLEEP\n";
    } else {
      cout << input << '\n';
    }
  }

  return 0;
}