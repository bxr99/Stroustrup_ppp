class Date {
public:
  class Invalid {};          // to be used as exception
  Date(int m, int d, int y); // constructor: check for valid date and initialize
  void add_day(int n);       // increase the Date by n days
  int month() { return m; }
private:
  int m, d, y;      // month, day, year
  bool valid_date();  // return true if date is valid
};

Date::Date(int mm, int dd, int yy) // Constructor
  :y{yy}, m{mm}, d{dd} // note: member initializers
{
  if (!valid_date()) throw Invalid{};
}

bool Date::valid_date()
{
  return (m >= 1 || m <= 12) ? true : false;
}

void Date::add_day(int n)
{

}
