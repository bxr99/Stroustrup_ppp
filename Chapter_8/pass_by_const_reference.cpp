#include "std_lib_facilities.h"

// We could write this fucntion to print out a vector of floating-point numbers.
// What if we had vectors such as:
// vector<double> v1(10)
// vector<double> v2(1000000)
// vector<double> v3(x)  // vector of some unknown size
// This code works but after the first call the function has to copy ten doubles
// and the second call has to copy one milltion doubles...etc
// This is where the idea of pass-by-reference comes into play
void print_v(vector<double> v)
{
  cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i != v.size()-1) cout << ", ";
  }
  cout << " }\n";
}

// The & means "reference" and the 'const' is there to stop print_v() modifying
// its argument by accident
void print_v(const vector<double>& v) // pass-by-const-reference
{
  cout << "{ ";
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i != v.size()-1) cout << ", ";
  }
  cout << " }\n";
}

// A 'const' reference has the useful property that we can't accidentally
// modify the object pased.  For example, if we made a silly error and tried
// to assign an element from within print_v(), the compiler would catch it
void print_v(const vector<double>& v) // pass-by-const-reference
{
  // ...
  v[i] = 7; // Error: v is a const (is not mutable)
  // ...
}