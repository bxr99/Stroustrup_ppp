#include "std_lib_facilities.h"

class Token {
public:
  char kind;
  double value;
  Token(char ch)              // constructor, takes 1 argument of type char
    :kind(ch), value(0) { }   // sets kind to whats passed in, value is set to 0
  Token(char ch, double val)  // constructor, takes 2 arguments, type char and type double
    :kind(ch), value(val) { } // sets kind and value to whats passed in
};

int main()
{
  while (cin) {
    cout << "shit\n";
  }

  return 0;
}
