#include "std_lib_facilities.h"

double root1(double a, double b, double c);
double root2(double a, double b, double c);

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
    if (root1(a,b,c) == root2(a,b,c)) {
      cout << "There is only one root, x = " << root1(a,b,c) << '\n';
    } else {
      cout << "x = " << root1(a,b,c) << " or x = " << root2(a,b,c) << '\n';
    }
    return 0;
  } catch (exception &e) {
    cerr << "Exception Caught: " << e.what() << '\n';
    return 1;
  } catch (...) {
    cerr << "Unknown Exception\n";
    return 2;
  }
}

// pre-condition 1: a >= 1
// pre-condition 2: if discriminant is negative, no real roots exist
double root1(double a, double b, double c)
{
  if (a == 0) error("Division by zero");
  if ((b*b-4*a*c) < 0) error("Discriminant is negative");

  double disc = b*b-4*a*c;
  return (-b + sqrt(disc))/(2*a);
}

// pre-condition 1: a >= 1
// pre-condition 2: if discriminant is negative, no real roots exist
double root2(double a, double b, double c)
{
  if (a == 0) error("Division by zero");
  if ((b*b-4*a*c) < 0) error("Discriminant is negative");

  double disc = b*b-4*a*c;
  return (-b - sqrt(disc))/(2*a);
}
