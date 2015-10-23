#include <iostream>
#include <stdexcept>
#include <ratio>
class Rational {
public:
  Rational(); // default constructor
  Rational(double n) : numer(n), denom(1) {}
  Rational(double n, double d) : numer(n) // assign numerator
  {
    if (d == 0) throw std::invalid_argument("Error: divide by zero");
    denom = d; // otherwise, assign denominator
  }

  // non-modifying
  double getNumerator() const { return numer; }
  double getDenominator() const { return denom; }

  // modifying
  void setNumerator(double n) { numer = n; }
  void setDenominator(double d)
  {
    if (d == 0) throw std::invalid_argument("Error: divide by zero");
    denom = d;
  }

  // operations
  Rational add(double, double);
  Rational subtract(double, double);
  Rational multiply(double, double);
  Rational divide(double, double);
private:
  double numer;
  double denom;
};

// Not done yet