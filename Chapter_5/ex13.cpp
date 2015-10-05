#include "std_lib_facilities.h"

int main()
{
  vector<int> values = {1,2,3,4};
  vector<int> guesses;
  bool go = true;
  int guess = 0;

  while (go) {
    int count = 4;
      for (int guess; cin>>guess; ) {
        guesses.push_back(guess);
        --count;
        if (count == 0) break;
      }

    if (guesses.size() == 4) {
      for (int i = 0; i < guesses.size(); ++i)
        cout << guesses[i] << " ";
      go = false;
    }
  }

  cout << '\n';
  return 0;
}