#include <iostream>
#include <string>

class Person {
public:
  // constructors
  Person() {}

  Person(std::string n, int a, char g)
    : name_(n), age_(a), gender_(g) {}

  // getters
  std::string get_name() { return name_; }
  int get_age() { return age_; }
  char get_gender() { return gender_; }

  // setters
  void set_name(std::string n) { name_ = n; }
  void set_age(int a) { age_ = a; }

private:
  std::string name_;
  int age_;
  char gender_;
};

int main()
{
  Person p {"Eli", 23, 'm'};

  std::cout << p.get_name() << '\n';
  std::cout << p.get_age() << '\n';
  std::cout << p.get_gender() << '\n';

  Person p2; // should be fine with default constructor?
  p2.set_name("Emily");
  p2.set_age(22);
  p2.set_gender('f');

  std::cout << p2.get_name() << '\n';
  std::cout << p2.get_age() << '\n';
  std::cout << p2.get_gender() << '\n';

}