#include "std_lib_facilities.h"

// calculate area of a rectangle
// pre-condition: length and width are positive
// post-condition: returns a positive value that is the area
int area(int length, int width)
{
  if (length <= 0 || width <= 0) error("area() pre-condition\n");
  int a = length*width;
  if (a <= 0) error("area() post-condition");
  return a;
}

int main()
{
  int len = 0;
  int wid = 0;

  cout << "Enter a length and width (separated by <space>): ";
  cin >> len >> wid;
  cout << "Area: " << area(len,wid) << '\n';
  return 0;
}