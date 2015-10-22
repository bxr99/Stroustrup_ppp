#include <iostream>
// One of the simplest methods for creating a user-defined data type is via an enumerated type
// An enumeration is a data type where every possible value is defined as a symbolic constant

// Declare a new enumeration named Color
enum Color
{
  COLOR_BLACK, // 0
  COLOR_RED,   // 1
  COLOR_BLUE,  // 2 ..
  COLOR_YELLOW,
  COLOR_GREEN,
  COLOR_WHITE
};

// Define a few variable of enumerated type Color
Color paint = COLOR_YELLOW;
std::cout << paint; // prints 4
Color house(COLOR_GREEN);

// Declaring an enumeration does not allocate any memory.  When a variable of an
// enumerated type is defined, memory is allocated for that variable at that time


enum Color
{
  RED,
  BLUE, // BLUE is put into the global namespace
  GREEN
};

enum Feeling
{
  HAPPY,
  TIRED,
  BLUE // error, BLUE was already used in enum Color in the global namespace
};