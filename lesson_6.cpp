#include <iostream>

int main() {
  // INFO: Arithmetic operators: return the result of specific Arithmetic
  //       operation (+ - / *)

  // For example we have 20 blue caps
  double blueCap = 20; // If you want to divide but you didn't get the decimal
                       // portion then convert int to double

  // 2 People bought caps
  blueCap = blueCap - 2;
  // We want a more nested version of this:
  blueCap -= 2;
  // Now we bought one cap
  blueCap++;

  // Let's check if we get decimals (Commented if you want to test it)
  /* blueCap /= 3; */

  std::cout << blueCap;

  return 0;
}
