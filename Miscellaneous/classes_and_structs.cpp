class X {
public:
  // public members
  //  ->(accessible by all)
  // functions, types, data (often best kept private)
private:
  // private members
  //  ->(used by members of this class only)
  // functions, types, data
};

// class members are private by default so:
class X {
  int foo(int);
};
// means
class X {
private:
  int foo(int);
};
// so that
X x;             // variable of type X
int y = x.foo(); // error: foo() is private (e.g. inaccessible)

// a user cannot directly refer to a private memeber.  Instead you have to go
// through a public function that can use it:
class X {
  int m;
  int foo(int);
public:
  int bar(int i)
  {
    m = i;
    return foo(i);
  }
};

X x;
int y = x.bar(2);

// a struct is a class where members are public by default
// structs are primarily used for data structures where the members can
// take any value
struct X {
  int m;
  // more code ...
};

class X {
public:
  int m;
  // more code ...
};