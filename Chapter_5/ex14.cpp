#include "std_lib_facilities.h"

void print_v(vector<int> v)
{
  for (int i = 0; i < v.size(); ++i)
    cout << v[i] << " ";
  cout << '\n';
}

int get_vec_sum(vector<int> v)
{
  int sum = 0;
  for (int i = 0; i < v.size(); ++i)
    sum += v[i];
  return sum;
}

int main()
{
  try {
    vector<vector<int>> all_values; // vector to hold everything???

    vector<int> sunday;
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> thursday;
    vector<int> friday;
    vector<int> saturday;

    vector<int> illegal_days;

    char in;
    string day = "";
    int value = 0;

    cout << "Enter more values? (y/n): ";
    cin >> in;
    while (in != 'n') {
      cin >> day >> value;
      if (day == "Sun" || day == "sun" || day == "Sunday" || day == "sunday") {
        sunday.push_back(value);
      } else if (day == "Mon" || day == "mon" || day == "Monday" || day == "monday") {
        monday.push_back(value);
      } else if (day == "Tue" || day == "tue" || day == "Tuesday" || day == "tuesday") {
        tuesday.push_back(value);
      } else if (day == "Wed" || day == "wed" || day == "Wednesday" || day == "wednesday") {
        wednesday.push_back(value);
      } else if (day == "Thurs" || day == "thurs" || day == "Thursday" || day == "thursday") {
        thursday.push_back(value);
      } else if (day == "Fri" || day == "fri" || day == "Friday" || day == "friday") {
        friday.push_back(value);
      } else if (day == "Sat" || day == "sat" || day == "Saturday" || day == "saturday") {
        saturday.push_back(value);
      } else {
        illegal_days.push_back(value);
      }
      cout << "Enter more values? (y/n): ";
      cin >> in;
    }

    // output results
    cout << "Values of Sunday: ";
    print_v(sunday);
    cout << " Sum = " << get_vec_sum(sunday);
    cout << "\nValues of Monday: ";
    print_v(monday);
    cout << " Sum = " << get_vec_sum(monday);
    cout << "\nValues of Tuesday: ";
    print_v(tuesday);
    cout << " Sum = " << get_vec_sum(tuesday);
    cout << "\nValues of Wednesday: ";
    print_v(wednesday);
    cout << " Sum = " << get_vec_sum(wednesday);
    cout << "\nValues of Thursday: ";
    print_v(thursday);
    cout << " Sum = " << get_vec_sum(thursday);
    cout << "\nValues of Friday: ";
    print_v(friday);
    cout << " Sum = " << get_vec_sum(friday);
    cout << "\nValues of Saturday: ";
    print_v(saturday);
    cout << " Sum = " << get_vec_sum(saturday);
    cout << "\nValues of Illegal Days: ";
    cout << " Sum = " << get_vec_sum(illegal_days);
    cout << '\n';
    return 0;
  } catch (exception &e) {
    cerr << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "unknown exception\n";
    return 2;
  }
}