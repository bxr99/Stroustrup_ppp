#include "std_lib_facilities.h"

// Imagine that we had used my_find() for a while and then discovered that
// callers rarely used 'hint' anymore, but there is lots of code "out there"
// that calls my_find() with a hint.  We don't want to rewrite that code
// (or can't because its someone else's code), so we don't want to change the
// declaration(s) of my_find()
int my_find(vector<string> vs, string s, int hint)
{
  if (hint < 0 || vs.size() <= hint) hint = 0;
  for (int i = hint; i < vs.size(); ++i) // search starting from hint
    if (vs[i] == s) return i;

  if (0 < hint) {                        // if we didn't find s, search before hint
    for (int i = 0; i < hint; ++i)
      if (vs[i] == s) return i;
  }

  return -1; // couldn't find s
}

// Instead, we just don't use the last argument.  Since we don't use it, we can
// leave it unnamed
int my_find(vector<string> vs, string s, int)
{
  for (int i = 0; i < vs.size(); ++i)
    if (vs[i] == s) return i;

  return -1; // couldn't find s
}