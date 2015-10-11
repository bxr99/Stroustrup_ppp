// Calling a function with parameter taken by value causes copies of the values
// to be made.  This is a relatively inexpensive operation for fundamental types
// such as int, but if the parameter is of a large compound type, it may result
// in certain overhead
#include "std_lib_facilities.h"

// This function takes two strings as parameters (by value), and returns the
// result of concatenating them.  By passing the arguments by value, the function
// forces 'a' and 'b' to be copies of the arguments passed to the function when
// it is called.  If these are long strings, it may mean copying large quantities
// of data just for the function call.
// (This copy can be avoided altogether if both parameters are made 'references')
string concatenate(string a, string b)
{
  return a + b;
}

// Arguments by reference do not require a copy.  The function operates directly
// on (aliases of) the strings passed as arguments.  In this regard, this version
// of the function taking references is more efficient than the version taking
// values.
string concatenate(string& a, string& b)
{
  return a + b;
}

// By qualifying the parameters as constant, the function is forbidden to modify
// the values of neither 'a' nor 'b', but can actually access their values as
// references (aliases of the arguments), without having to make actual copies
// of the strings.  Therefore, const references provide functionality similar
// to passing arguments by value, but with an increased efficiency for parameters
// of large types.  That is why they are extremely popular in  C++ for arguments
// of compound types.
string concatenate(const string& a, const string& b)
{
  return a + b;
}