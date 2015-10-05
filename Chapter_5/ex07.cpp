#include "std_lib_facilities.h"

int root1(double a, double b, double c);
int root2(double a, double b, double c);

int main()
{
  try {
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "I solve quadratic equations (ax^2+bx+c)\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "x = " << root1(a,b,c) << " or x = " << root2(a,b,c) << '\n';
    return 0;
  } catch (runtime_error &e) {
    cerr << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "unknown exception\n";
    return 2;
  }
}

// pre-condition 1: a >= 1
// pre-condition 2: if discriminant is negative, no real roots exist
int root1(double a, double b, double c)
{
  if (a == 0) error("division by zero\n");
  if ((b*b-4*a*c) < 0) error("discriminant is negative\n");
  return (-b + sqrt(b*b-4*a*c))/2*a;
}

// pre-condition 1: a >= 1
// pre-condition 2: if discriminant is negative, no real roots exist
int root2(double a, double b, double c)
{
  if (a == 0) error("division by zero\n");
  if ((b*b-4*a*c) < 0) error("discriminant is negative\n");
  return (-b - sqrt(b*b-4*a*c))/2*a;
}
