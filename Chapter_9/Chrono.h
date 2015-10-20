#include <iostream>
using namespace std;

namespace Chrono {

  class Date {
  public:
    enum class Month {
      jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };
    class Invalid {}; // to throw as exception

    Date(Month m, int d, int y); // check for valid date and initialize
    Date();                   // default constructor
    // default copy operations are fine

    // nonmodifying operations
    int day() const { return d; }
    Month month() const { return m; }
    int year() const { return y; }

    // modifying operations
    void add_day(int n);
    void add_month(int n);
    void add_year(int n);

  // format mo/day/year
  private:
    Month m;
    int d;
    int y;
  };

  bool is_date(Date::Month m, int d, int y); // true for valid date
  bool leapyear(int y); // true if y is a leap year
  bool operator==(const Date& a, const Date& b);
  bool operator!=(const Date& a, const Date& b);

  ostream& operator<<(ostream& os, const Date& d);

  istream& operator>>(istream& is, Date& dd);

} // Chrono

