#include "std_lib_facilities.h"

class Token {
public:
  char kind;
  double value;
};

int main()
{
  Token t1 {'+'};
  Token t2 {'8',11.5};
  cout << t1.kind << '\n';
  cout << t1.value << '\n';
  cout << t2.kind << '\n';
  cout << t2.value << '\n';
  return 0;
}
