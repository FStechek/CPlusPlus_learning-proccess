#include <iostream>
#include <string>

int main() {
  // Variables
  /*
   * NOTE: Always remember the ; end of the line
   *
   * Table of contents:
   * 1. Integers
   * 2. Double
   * 3. Char
   * 4. Bool
   *
   * Integers (Whole number) = int
   * Example:
   */
  int var1able = 1;

  // Now let's see the output
  std::cout << "Var1able: " << var1able << std::endl;

  // Double (Float numbers) = double
  /*
   * For example float number is: 1.5 or 6.9
   * Now the example code:
   * Also demonstrating the defying
   */
  double x; // First defining
  x = 6.9;  // Then setting

  // Now output
  std::cout << "x: " << x << std::endl;

  // Char (Single Character)
  /*
   * WARNING: Only can be stored one character like `A`
   *          AND use one quotes in it like 'this'
   *
   * Code example
   */

  char grade = 'A';

  // Output of grade
  std::cout << grade << std::endl;

  // Boolean (true or false)
  /*
   * WARNING: Booleans should not be 'true' or 'false'
   */
  bool isCpp = true;

  // Output (1 = if true, 0 = if false)
  std::cout << isCpp << std::endl;

  // String (Object that represents a sequense of text)
  std::string lang = "C++";

  // Output
  std::cout << lang << std::endl;

  return 0;
}
