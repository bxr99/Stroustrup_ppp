#include "std_lib_facilities.h"

int main()
{
  int num_pennies = 0;
  int num_nickels = 0;
  int num_dimes = 0;
  int num_quarters = 0;
  int num_half_dollars = 0;
  int num_one_dollars = 0;
  double tot_cents = 0;

  cout << "How many pennies do you have? ";
  cin >> num_pennies;
  tot_cents += (num_pennies*0.01);

  cout << "How many nickels do you have? ";
  cin >> num_nickels;
  tot_cents += (num_nickels*0.05);

  cout << "How many dimes do you have? ";
  cin >> num_dimes;
  tot_cents += (num_dimes*0.10);

  cout << "How many quarters do you have? ";
  cin >> num_quarters;
  tot_cents += (num_quarters*0.25);

  cout << "How many half dollar coins do you have? ";
  cin >> num_half_dollars;
  tot_cents += (num_half_dollars*0.50);

  cout << "how many one dollar coins do you have? ";
  cin >> num_one_dollars;
  tot_cents += (num_one_dollars*1.00);

  if (num_pennies == 1)
    cout << "You have " << num_pennies << " penny.\n";
  else
    cout << "You have " << num_pennies << " pennies.\n";

  if (num_nickels == 1)
    cout << "You have " << num_nickels << " nickel.\n";
  else
    cout << "You have " << num_nickels << " nickels.\n";

  if (num_dimes == 1)
    cout << "You have " << num_dimes << " dime.\n";
  else
    cout << "You have " << num_dimes << " dimes.\n";

  if (num_quarters == 1)
    cout << "You have " << num_quarters << " quarter.\n";
  else
    cout << "You have " << num_quarters << " quarters.\n";

  if (num_half_dollars == 1)
    cout << "You have " << num_half_dollars << " half dollar.\n";
  else
    cout << "You have " << num_half_dollars << " half dollars.\n";

  if (num_one_dollars == 1)
    cout << "You have " << num_one_dollars << " one dollar.\n";
  else
    cout << "You have " << num_one_dollars << " one dollars.\n";

  if (tot_cents >= 1.00)
    cout << "The value of all of your coins is $" << tot_cents << "\n";
  else
    cout << "The value of all of your coins is " << tot_cents << " cents.\n";

  return 0;
}