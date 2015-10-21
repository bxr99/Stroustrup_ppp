#include <iostream>
#include <string>

class Name_pairs {
public:
  std::vector<std::string> read_names(std::vector<std::string>& names)
  {
    int count = 0;
    std::cout << "How many names do you want to enter: ";
    std::cin >> count;

    std::string s = "";
    for (int i = 0; i < count; ++i) {
      std::cout << "Enter name (followed by <enter>): ";
      std::cin >> s;
      names.push_back(s);
    }
    return names;
  }

  std::vector<double> read_ages(std::vector<double>& ages)
  {

  }

private:
  std::vector<std::string> name_;
  std::vector<double> age_;
};

