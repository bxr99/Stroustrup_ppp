// Calling a function with parameter taken by value causes copies of the values
// to be made.  This is a relatively inexpensive operation for fundamental types
// such as int, but if the parameter is of a large compound type, it may result
// in certain overhead
#include <string>
using std::string;

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

// Calling a function generally causes a certain overhead (stacking arguments,
// jumps, etc...), and thus for very short functions, it may be more efficient
// to simply insert the code of the fucntion where it is called, instead of performing
// the process of formally calling a function.

// Precending a function with the 'inline' specifier informs the compiler that
// inline expansion is preferred over the usual function call mechanism for a
// specific function.  This does not change at all the behavior of a function,
// but is merely used to sugged the compiler that the code generated by the
// function body shall be inserted at each point the function is called, instead
// of being invoked with a regular function call
inline string concatenate(const string& a, const string& b)
{
  return a + b;
}
