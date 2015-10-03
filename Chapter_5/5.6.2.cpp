#include "std_lib_facilities.h"

int main()
{
  try {
    vector<int> v;

    for (int i; cin>>i; )
      v.push_back(i);

    for (int i = 0; i <= v.size(); ++i) // error with i <= v.size()
      cout << "v[" << i << "] == " << v[i] << '\n';

    return 0;     // 0 indicates success
  } catch (out_of_range) {
    cerr << "range error\n";
    return 1;     // indicates failure
  } catch (...) { // catch all other exceptions
    cerr << "exception: something went wrong\n";
    return 2;
  }
}