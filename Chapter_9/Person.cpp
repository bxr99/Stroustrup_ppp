#include <iostream>
#include <string>

class Person {
  int age_;
  std::string name_;

public:
  std::string get_name() { return name_; }
  void set_name(std::string name) { name_ = name; }
};

int main()
{
  Person p;
  p.set_name("Eli");

  std::cout << p.get_name() << '\n';

  return 0;
}