#include "std_lib_facilities.h"

int main()
{
  char currency ;
  double amount = 0;

  cout << "Enter any value of yen(y), euro(e), or pounds(p): ";
  cin >> amount >> currency;

  switch (currency) {
    case 'y':
      cout << amount << " JPY is " << (amount*0.008335) << " USD\n";
      break;
    case 'e':
      cout << amount << " EUR is " << (amount*1.121252) << " USD\n";
      break;
    case 'p':
      cout << amount << " GBP is " << (amount*1.518100) << " USD\n";
      break;
    default:
      cout << "Not a unit I know of\n";
      break;
  }

  return 0;
}