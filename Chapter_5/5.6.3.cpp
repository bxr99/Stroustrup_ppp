#include "std_lib_facilities.h"

// The condition !cin means that the previous operation on cin failed
// The string passed to error() can be printed as help to debugging
// The STL defines a few types of exceptions, such as the out_of_range thrown by
// vector.  It also supplies runtime_error
double some_function()
{
  double d = 0;
  cin >> d;
  if (!cin) error("couldn't read a double in 'some_function()'");

  // do stuff
  return 4.0;
}

void error(string s)
{
  throw runtime_error(s);
}

// When you use error(), you'll often wish to pass two pieces of information
// along to describe the problem.  This is so common that we provide a second
// version of error() for that
void error(string s1, string s2)
{
  throw runtime_error(s1+s2);
}

// The call e.what() extracts the error message from the runtime_error
// The & is an indicator for "pass the exception by reference"
// cerr is exactly like cout except that it is meant for error output
int main()
{
  try {
    // ... our program ...
    return 0; // 0 indicates success
  } catch (runtime_error &e) {
    cerr "runtime error: " << e.what() << '\n';
    return 1; // 1 indicates failure
  }
}