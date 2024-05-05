#include <iostream>

int main() {
  // Const (Constant the variable)
  /*
   * WARNING: Constants should be UPPERCASE like `pi` should be `PI`
   * NOTE: Constants can't be changed so they are going to be RO (Read-Only)
   *
   * Use of const is like this: `const <data type (like string)> <name> =
   * <data>`
   */
  const double PI = 3.14159;
  // Example of changing constant variable (which gives error)
  /* PI = 6.9; */
  // Now lets try to change a non-constant variable
  double radius = 9;
  radius = 10;                            // Works!
  double circumference = 2 * PI * radius; // Some math :)

  // Output
  std::cout << circumference << "cm";

  return 0;
}
