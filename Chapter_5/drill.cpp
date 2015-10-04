#include "std_lib_facilities.h"

// Below are 25 code fragments; each is meant to be inserted between the comment blocks
// Each has zero or more errors, the task is to find and remove all errors
// When you have removed those bugs, the program will compile, run, and write "Success!"
int main()
{
  try {
    //--------------------------------------------------------------------------

    Cout << "Success!\n"; // bad
    cout << "Success!\n"; // fixed

    cout << "Success!\n;  // bad
    cout << "Success!\n"; // fixed

    cout << "Success"  << !\n"  // bad
    cout << "Success" << "!\n"; // fixed

    cout << success << '\n';                              // bad
    string success = "Success!"; cout << success << '\n'; // fixed

    string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    string res = "7"; vector<string> v(10); v[5] = res; cout << "Success!\n"; // Solution 1
    int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";         // Solution 2

    vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";   // bad
    vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n"; // fixed

    if (cond) << cout << "Success!\n"; else cout << "Fail!\n";                // bad
    bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n"; // fixed

    string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";      // bad
    string s = "ape"; bool c = (s < "fool"); if (c) cout << "Success!\n"; // fixed

    string s = "ape"; if (s == "fool") cout << "Success!\n"; // bad
    string s = "ape"; if (s != "fool") cout << "Success!\n"; // fixed

    string s = "ape"; if (s+"fool") cout << "Success!\n"; // bad
    string s = "ape"; if (s<"fool") cout << "Success!\n"; // fixed

    vector<char> v(5); for (int i=0; 0<v.size(); ++i); cout << "Success!\n"; // bad
    vector<char> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n"; // fixed

    vector<char> v(5); for (int i=0; i<=v.size(); ++i) cout << "Success!\n"; // bad
    vector<char> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n"; // fixed

    string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; //bad
    string s = "Success!\n"; for (int i=0; i<9; ++i) cout << s[i]; //fixed

    if (true) then cout << "Success!\n"; else cout << "Fail!\n"; //bad
    if (true) cout << "Success!\n"; else cout << "Fail!\n";      //fixed

    int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; //bad;
    int x = 2000; char c = x; if (c!=2000) cout << "Success!\n"; //fixed

    string s = "Success!\n"; for (int i = 0; i <10; ++i) cout << s[i]; // prints "Success!" plus some blank characters

    vector v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n";      //bad
    vector<int> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n"; // fixed

    int i=0; int j=9; while (i<10) ++j; if (j<i) cout << "Success!\n"; //bad
    int i=0; int j=9; while (i>10) ++j; if (j>i) cout << "Success!\n"; //fixed

    int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n"; // bad
    int x = 2; double d = 5/(x+2); if (d<=2*x+0.5) cout << "Success!\n"; //fixed

    string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; //bad
    string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];       //fixed

    int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";          //bad
    int i=0; int j=0; while (j<10) ++j; if (j>i) cout << "Success!\n"; //fixed

    int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";  //bad
    int x = 4; double d = 5/(x-2); if (d<=2*x+0.5) cout << "Success!\n"; //fixed

    cin << "Success!\n";  // bad
    cout << "Success!\n"; // fixed

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