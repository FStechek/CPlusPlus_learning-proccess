#include <iostream>
#include <istream>
#include <string>

// INFO: Insertion Operator: <<
//       Will be used in cout, and others
// INFO: Extraction Operator: >>
//       Will be used in cin, and others

int main() {
  std::string name;
  // This is cout which stands for output
  std::cout << "What's your full name?\n";

  // This is cin which stands for input (commented because of space will only
  // get first word)
  // NOTE: You can't do input message, like in python, but you
  // can use cout first.
  // NOTE: Input with spaces will be only first word is
  // being writed

  /* std::cin >> name; */

  // To fix that use getline()
  // The getline gets value from first argument and sets to the `name` variable
  std::getline(std::cin >> std::ws, name);
  std::cout << "Hi, " << name;

  return 0;
}
