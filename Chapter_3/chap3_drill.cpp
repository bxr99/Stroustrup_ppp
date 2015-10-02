#include "std_lib_facilities.h"

int main()
{
  cout << "Enter the name of the person you want to write to: ";
  string first_name;
  cin >> first_name;

  cout << "Dear " << first_name << ",\n";
  cout << "\tThis is some random text blah blah.\n";

  cout << "Enter the name of another friend: ";
  string friend_name;
  cin >> friend_name;

  cout << "Have you seen " << friend_name << " lately?\n";

  char friend_sex = 0;
  cout << "Enter an 'm' if the friend is male or 'f' if the friend is female: ";
  cin >> friend_sex;

  if (friend_sex == 'm')
    cout << "If you see " << friend_name << " please ask him to call me.\n";
  if (friend_sex == 'f')
    cout << "If you see " << friend_name << " please ask her to call me.\n";

  int age = 0;
  cout << "Enter the age of " << first_name << ": ";
  cin >> age;

  cout << "I hear you just had a birthday and you are " << age << " years old.\n";

  if (age <= 0 || age >= 110)
    simple_error("you're kidding!");

  if (age > 0 && age < 12)
    cout << "Next year you will be " << age+1 << ".\n";

  if (age == 17)
    cout << "Next year you will be able to vote.\n";

  if (age > 70)
    cout << "I hope you enjoy retirement.\n";

  cout << "Yours sincerely.\n\n";

  return 0;
}