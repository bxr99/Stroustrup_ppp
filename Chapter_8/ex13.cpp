#include <iostream>
#include <vector>
#include <string>

// returns a vector<int> containing the number of characters in each string
std::vector<int> num_of_chars(std::vector<std::string> v)
{
  std::vector<int> r;
  for (int i = 0; i < v.size(); ++i) {
    int count = v[i].size(); // size of current string
    r.push_back(count);
  }
  return r;
}

// returns the largest string in the vector<string>
std::string get_longest(std::vector<std::string> v)
{
  std::string longest = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (longest.size() < v[i].size()) longest = v[i];
  }
  return longest;
}

// returns the shortest string in the vector<string>
std::string get_shortest(std::vector<std::string> v)
{
  std::string shortest = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (shortest.size() > v[i].size()) shortest = v[i];
  }
  return shortest;
}

// returns the lexicographically first string
std::string get_lex_first(std::vector<std::string> v)
{
  std::string s = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (s > v[i]) s = v[i];
  }
  return s;
}

// returns the lexicographically last string
std::string get_lex_last(std::vector<std::string> v)
{
  std::string s = v[0];
  for (int i = 0; i < v.size(); ++i) {
    if (s < v[i]) s = v[i];
  }
  return s;
}

int main()
{
  std::vector<std::string> v;
  v.push_back("eli");
  v.push_back("james");
  v.push_back("samuel");
  v.push_back("aj");
  v.push_back("frederick");
  v.push_back("ai");
  v.push_back("zedd");

  std::vector<int> values = num_of_chars(v);
  for (int i : values) std::cout << i << " ";
  std::cout << '\n';
  std::cout << get_longest(v) << '\n';
  std::cout << get_shortest(v) << '\n';
  std::cout << get_lex_first(v) << '\n';
  std::cout << get_lex_last(v) << '\n';
  return 0;
}