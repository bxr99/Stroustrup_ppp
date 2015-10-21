#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // sort()
#include <stdexcept>

class Name_pairs {
private:
  std::vector<std::string> name_;
  std::vector<double> age_;
public:
  void read_names();
  void read_ages();
  void sort_names();
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

// find n's index in vs
int find_index(const std::vector<std::string>& vs, const std::string& n)
{
  for (int i = 0; i < n.size(); ++i)
    if (n == vs[i]) return i;

  // if it makes it here, it wasn't in vs
  throw std::invalid_argument("find_index(): name wasn't found");
}

void Name_pairs::sort_names()
{
  if (name_.size() != age_.size())
    throw std::invalid_argument("sort_names(): Vectors different sizes");

  std::vector<std::string> orig_name = name_;
  std::vector<double> orig_age = age_;

  std::sort(name_.begin(), name_.end());

  // update ages
  for (int i = 0; i < name_.size(); ++i)
    age_[i] = orig_age[find_index(orig_name, name_[i])];
}

void Name_pairs::print()
{
  if (name_.size() != age_.size())
    throw std::invalid_argument("print(): Vectors different sizes");

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
    pair.print(); // unsorted by names
    pair.sort_names();
    pair.print(); // sorted by names

    return 0;
  } catch (const std::invalid_argument& e) {
    std::cerr << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Unknown Exception\n";
    return 2;
  }
}

