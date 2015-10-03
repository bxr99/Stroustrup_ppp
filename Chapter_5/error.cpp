#include "std_lib_facilities.h"

int main()
{
  try {
    vector<int> v;
    for (int i = 0; i < 10; ++i)
      v.push_back(i);

    cout << v[v.size()];
    return 0;
  } catch (out_of_range &e) {
    cerr << "caught out-of-range error: " << e.what() << '\n';
  } catch (runtime_error &e) {
    cerr << "caught runtime error: " << e.what() << '\n';
    return 1;
  } catch (...) { // catch anything else
    cerr << "unknown error\n";
    return 2;
  }
}