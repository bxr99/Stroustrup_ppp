#include "Chrono.h"

namespace Chrono {
  // member function definitions
  Date::Date(Month mm, int dd, int yy) : m{mm}, d{dd}, y{yy}
  {
    if (!is_date(mm, dd, yy)) throw Invalid{};
  }

  const Date& default_date()
  {
    static Date dd = { Month::jan, 1, 2001 }; // start of 21st century
    return dd;
  }

  Date::Date()
   : m{default_date().month}, d{default_date().day}, y{default_date().year}
   {

   }

   void Date::add_day(int n)
   {
    //..
   }

   void Date::add_month(int n)
   {
    //..
   }

   void Date::add_year(int n)
   {
    if (m == feb && d == 29 && !leapyear(y+n)) { // beware of leap years!
      m = mar; // use March 1 instead of February 29
      d = 1;
    }
    y += n;
   }

   // helper functions

   bool is_date(Month m, int d, int y)
   {
    // assume that y is valid
    if (d <= 0) return false; // d must be positive
    if (m < Month::jan || Month::dec < m) return false;

    int days_in_months = 31; // most months have 31 days

    switch (m) {
      case Month::feb:      // length of feb varies
        days_in_months = (leapyear(y) ? 29 : 28);
        break;
      case Month::apr:
      case Month::jun:
      case Month::sep:
      case Month::nov:
        days_in_months = 30; // the rest have 30 days
        break;
    }

    if (days_in_months < d) return false;

    return true;
   }

   bool leapyear(int y)
   {
    // TODO
   }

   bool operator==(const Date& a, const Date& b)
   {
    return a.month() == b.month() &&
           a.day() == b.day()     &&
           a.year() == b.year();
   }

   bool operator!=(const Date& a, const Date& b)
   {
    return !(a == b);
   }

   ostream& operator<<(ostream& os, const Date& d)
   {
    return os << '(' << d.month()
              << ',' << d.day()
              << ',' << d.year() << ')';
   }

   istream& operator>>(istream& is, Date& dd)
   {
    int m, d, y;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> m >> ch2 >> d >> ch3 >> y >> ch4
    if (!is) return is;
    if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')') { // format error
      is.clear(ios_base::failbit); // set the fail bit
      return is;
    }

    dd = Date(Month(m), d, y); // update dd
    return is;
   }

  enum class Day {
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
  };

  Day day_of_week(const Date& d)
  {
    //..
  }

  Date next_sunday(const Date& d)
  {
    //..
  }

  Date next_weekday(const Date& d)
  {
    //..
  }

} // Chrono