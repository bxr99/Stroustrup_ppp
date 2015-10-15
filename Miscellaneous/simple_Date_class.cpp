// simple Date
struct Date {
  int y; // year
  int m; // month
  int d; // day of month
};

Date today; // a Date variable (a named object)

// set today to October 15, 2015
today.y = 2015;
today.m = 10;
today.d = 15;
// this is tedious and error-prone

// helper functions:

void init_day(Date& date, int m, int d, int y)
{
  // check that (m,d,y) is a valid date
  // if it is, use it to initalize date
}

void add_day(Date& date, int n)
{
  // increase date by n days
}

// trying to use Date:
void f()
{
  Date date_obj;
  init_day(date_obj,10,15,2015);
  add_day(date_obj,1);
}