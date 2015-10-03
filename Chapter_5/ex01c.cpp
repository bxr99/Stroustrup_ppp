#include "std_lib_facilities.h"

// ask user for a yes-or-no answer
// return 'b' to indicate a bad answer (e.g. not yes or no)
char ask_user(string question)
{
  cout << question << "? (yes or no)\n";
  string answer = "";
  cin >> answer;
  if (answer == "y" || answer == "yes") return 'y';
  if (answer == "n" || answer == "no") return 'n';
  return 'b';  // 'b' for "bad answer"
}

// calculate area of a rectagle
// return -1 to indicate a bad argument
int area(int length, int width)
{
  if (length <= 0 || width <= 0) return -1;
  return length*width;
}

int f(int x, int y, int z)
{
  int area1 = area(x,y);
  if (area1 <= 0) error("non-positive area\n");
  int area2 = framed_area(1,z);
  int area3 = framed_area(y,z);
  double ratio = double(area1)/area3;
  // ...
}

int main()
{
  string q = "Why is the sky blue?";
  ask_user(q);
}