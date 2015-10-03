#include "std_lib_facilities.h"

int main()
{
  char currency;
  double amount = 0;

  cout << "Enter any value of yen(y), euro(e), or pounds(p): ";
  cin >> amount >> currency;

  if (currency == 'y')
    cout << amount << " JPY is " << (amount*0.008335) << " USD\n";
  else if (currency == 'e')
    cout << amount << " EUR is " << (amount*1.121252) << " USD\n";
  else if (currency == 'p')
    cout << amount << " GBP is " << (amount*1.518100) << " USD\n";
  else
    cout << "Not a unit I know of\n";

  return 0;
}