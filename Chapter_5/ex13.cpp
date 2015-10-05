#include "std_lib_facilities.h"

vector<int> get_v()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  return v;
}

void print_v(vector<int> v)
{
  for (int i = 0; i < v.size(); ++i)
    cout << v[i] << " ";
}

int main()
{
  vector<int> res = get_v();
  vector<int> guesses;

  for (int guess; cin>>guess; ) {
    guesses.push_back(guess);
    if (guesses.size() == 4) break;
  }

  int count = 0;
  for (int i = 0; i < guesses.size(); ++i) {
    if (guesses[i] == res[i]) ++count;
  }

  switch (count) {
    case 4:
      cout << "four bulls";
      break;
    case 3:
      cout << "three bulls one cow";
      break;
    case 2:
      cout << "two bulls two cows";
      break;
    case 1:
      cout << "one bull three cows";
      break;
    default:
      cout << "four cows";
      break;
  }

  cout << '\n';
  return 0;
}