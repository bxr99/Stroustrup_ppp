#include <iostream>
#include <string>

// Using the std::getline() function
int main()
{
  // To read a full line of input into a string, its better to use std::getline()
  std::cout << "Enter your full name: ";
  std::string name = "";
  std::getline(std::cin, name); // read a full line of text into 'name'
  std::cout << "Hello " << name << ".\n";
}