#include "std_lib_facilities.h"

// Below are 25 code fragments; each is meant to be inserted between the comment blocks
// Each has zero or more errors, the task is to find and remove all errors
// When you have removed those bugs, the program will compile, run, and write "Success!"
int main()
{
  try {
    //--------------------------------------------------------------------------

    //Cout << "Success!\n"; // Cout instead of cout

    //cout << "Success!\n;  // missing "

    //cout << "Success"  << !\n" // 3 errors here (! ; ")

    //cout << success << '\n'; // 'success' not declared in scope

    //string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    // Solution 1:
    //string res = "7"; vector<string> v(10); v[5] = res; cout << "Success!\n";
    // Solution 2:
    //int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

    //vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    //vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";



    //--------------------------------------------------------------------------
    return 0;
  } catch (exception &e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "unknown exception\n";
    return 2;
  }
}