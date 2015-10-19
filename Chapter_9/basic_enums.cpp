// An enum (enumeration) is a simple user-defined type, specifying its set of
// values (enumerators) as symbolic constants

// example
// The class in enum class means that the enumerators are in the scope of the
// enumeration.  So to refer to jan, we must say Month::jan
enum class Month {
  jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

// You can give a specific representation value for an enumerator, or leave
// it to the compiler to pick a suitable value.  If you leave it to the compiler
// to pick, it'll give each enumerator the value of the previous enumerator plus one.
enum class Month {
  jan=1, feb=2, mar=3, apr=4, may=5, jun=6, jul=7, aug=8, sep=9, oct=10, nov=11, dec=12
};

// If we don't initialize the first enumerator, the count starts with 0
