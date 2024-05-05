#include <iostream>
#include <string>

// INFO: Lesson 5: Typedef
// typedef = reserved keyword used to create an additional name (alias)
// for another data type.
// New identifier for an existing type
// Helps with readability and reduces types
// Use when there is clear benefit
// Replaced with 'using' (work better with templates)

// The replacement example:
typedef std::string string_t;
// Replacement:
using string_t = std::string;

/*
 * Typedef can be used to shortcut the code for example aliasing the string:
 */

int main() {
  typedef std::string text_t;
  text_t msg = "Hi";
  std::cout << msg;

  return 0;
}
