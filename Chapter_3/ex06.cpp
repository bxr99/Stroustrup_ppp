#include "std_lib_facilities.h"

int main()
{
  int v1 = 0;
  int v2 = 0;
  int v3 = 0;

  cout << "Enter three integer values (separated by <space>): ";
  cin >> v1 >> v2 >> v3;

  int low = 0;
  int mid = 0;
  int high = 0;

  if (v1 <= v2 && v1 <= v3) {
    low = v1;
    if (v2 <= v3) {
      mid = v2;
      high = v3;
    } else {
      mid = v3;
      high = v2;
    }
  } else if (v2 <= v1 && v2 <= v3) {
    low = v2;
    if (v1 <= v3) {
      mid = v1;
      high = v3;
    } else {
      mid = v3;
      high = v1;
    }
  } else {
    low = v3;
    if (v1 <= v2) {
      mid = v1;
      high = v2;
    } else {
      mid = v2;
      high = v1;
    }
  }

  cout << low << ", " << mid << ", " << high << '\n';

  return 0;
}