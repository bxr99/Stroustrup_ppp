#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

class Name_pairs {
private:
  std::vector<std::string> name_;
  std::vector<double> age_;
public:
  void read_names();
  void read_ages();
  void print();
};

void Name_pairs::read_names()
{
  std::cout << "Enter name (followed by <enter>): ";
  for (std::string s = ""; std::cin >> s; ) {
    if (s == "quit") break;
    name_.push_back(s);
    std::cout << "Enter name (followed by <enter>): ";
  }

}

void Name_pairs::read_ages()
{
  double age = 0;
  for (int i = 0; i < name_.size(); ++i) {
    std::cout << "Enter age of " << name_[i] << ": ";
    std::cin >> age;
    age_.push_back(age);
  }
}

void Name_pairs::print()
{
  if (name_.size() != age_.size())
    throw std::invalid_argument("Vectors different sizes");

  for (int i = 0; i < name_.size(); ++i) {
    std::cout << "( " << name_[i] << ", " << age_[i] << " )" << '\n';
  }
  std::cout << '\n';
}

int main()
{
  try {
    Name_pairs pair;
    pair.read_names();
    pair.read_ages();
    pair.print();

    return 0;
  } catch (const std::invalid_argument& e) {
    std::cerr << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Unknown Exception\n";
    return 2;
  }
}

