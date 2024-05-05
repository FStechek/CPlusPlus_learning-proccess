#include <iostream>
#include <string>

// INFO: Insertion Operator: <<
//       Will be used in cout, and others
// INFO: Extraction Operator: >>
//       Will be used in cin, and others

int main() {
  std::string name;
  // This is cout which stands for output
  std::cout << "What's your name?\n";
  // This is cin which stands for input
  // NOTE: You can't do input message, like in python, but you can use cout
  // first.
  std::cin >> name;
  std::cout << "Hi, " << name;

  return 0;
}
