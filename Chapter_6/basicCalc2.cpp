#include "std_lib_facilities.h"

// slightly improved calculator as it handles longer expressions, however, this
// does not handle operator precedence (e.g. PEMDAS)
int main()
{
  int lval = 0;
  int rval = 0;
  char op;

  cout << "Please enter expression\n";
  cout << "add an ';' to the end expression (e.g. 1+2*3;): ";
  cin >> lval;

  if (!cin) error("No first operand");
  for (char op; cin>>op; ) {
    if (op != ';') cin >> rval;
    switch (op) {
      case '+':
        lval += rval;
        break;
      case '-':
        lval -= rval;
        break;
      case '*':
        lval *= rval;
        break;
      case '/':
        lval /= rval; // Note: still integer division
        break;
      default:
        cout << "Result: " << lval << '\n';
        return 0;
    }
  }
  error("Bad expression");
}