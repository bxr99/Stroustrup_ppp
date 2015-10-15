#include <iostream>
#include <vector>
#include <string>

void print_until_s1(const std::vector<std::string>&, const std::string&);
void print_until_ss(const std::vector<std::string>&, const std::string&);

int main()
{
  std::vector<std::string> names = {"bob","joe","eli","eli","emma","eli","ally"};
  print_until_ss(names, "eli");
  return 0;
}

/* starting function, wouldn't even compile
void print_until_s(std::vector<std::string> v, std::string quit)
{
  for (int s : v) {
    if (s == quit) return;
    std::cout << s << '\n';
  }
}
*/

// function with changes
void print_until_s1(const std::vector<std::string>& v, const std::string& quit)
{
  for (std::string s : v) {
    if (s == quit) return;
    std::cout << s << '\n';
  }
}

void print_until_ss(const std::vector<std::string>& v, const std::string& quit)
{
  int count = 0;
  for (std::string s : v) {
    if (s == quit) count++;
    if (count == 2) return;
    std::cout << s << '\n';
  }
}