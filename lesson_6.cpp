#include <iostream>
#include <ostream>

int main() {
  // INFO: Arithmetic operators: return the result of specific Arithmetic
  //       operation (+ - / * %)
  //       + = plus
  //       - = minus
  //       / = divide
  //       * = multiply
  //       % = remainder

  // For example we have 20 blue caps
  int blueCap = 20; // If you want to divide but you didn't get the decimal
                    // portion then convert int to double
                    // But also causes issues with % operator

  // 2 People bought caps
  blueCap = blueCap - 2;
  // We want a more nested version of this:
  blueCap -= 2;
  // Now we bought one cap
  blueCap++;

  // Let's check if we get decimals (Commented if you want to test it)
  /* blueCap /= 3; */
  double remder = blueCap % 3;

  std::cout << blueCap << std::endl;
  std::cout << remder;

  return 0;
}
