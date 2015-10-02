#include "std_lib_facilities.h"

int main()
{
  string s1 = "";
  string s2 = "";
  string s3 = "";

  cout << "Enter three names (separated by <space>):\n";
  cin >> s1 >> s2 >> s3;

  string low = "";
  string mid = "";
  string high = "";

  if (s1 <= s2 && s1 <= s3) {
    low = s1;
    if (s2 <= s3) {
      mid = s2;
      high = s3;
    } else {
      mid = s3;
      high = s2;
    }
  } else if (s2 <= s1 && s2 <= s3) {
    low = s2;
    if (s1 <= s3) {
      mid = s1;
      high = s3;
    } else {
      mid = s3;
      high = s1;
    }
  } else {
    low = s3;
    if (s1 <= s2) {
      mid = s1;
      high = s2;
    } else {
      mid = s2;
      high = s1;
    }
  }

  cout << low << ", " << mid << ", " << high << '\n';

  return 0;
}