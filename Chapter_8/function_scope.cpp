#include "std_lib_facilities.h"

class SomeClass {
public:
  void f();
  void g()  // a member function can be defined within its class
  {
    // some code ...
  }

  // some more code ...
};

void SomeClass::f() // a member function can be defined outside its class
{
  // some code ...
}
