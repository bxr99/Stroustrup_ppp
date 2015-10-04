#include "std_lib_facilities.h"

// TODO: handle cases with more than one mode
// right now the mode is most common occurrence of the smallest value
int main()
{
  vector<int> numbers;

  cout << "Enter positive integer values ('q' to quit): ";
  for (int i; cin>>i; )
    numbers.push_back(i);

  // print elements
  cout << "\nUnsorted: ";
  for (int i : numbers) cout << i << " ";
  cout << '\n';

  // put in ascending order
  sort(numbers);

  int num = numbers[0];
  int mode = num;
  int count = 1;
  int mode_count = 1;
  for (int i = 1; i < numbers.size(); ++i) {
    if (numbers[i] == num) {
      ++count;
    } else {
      if (count > mode_count) {
        mode_count = count;
        mode = num;
      }
      count = 1;
      num = numbers[i];
    }
  }

  // print elements
  cout << "Sorted  : ";
  for (int i : numbers) cout << i << " ";
  cout << '\n';

  cout << "Mode: " << mode << '\n';

  return 0;
}