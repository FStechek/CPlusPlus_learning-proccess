#include <iostream>

int main() {
  using std::cout;
  // INFO: Type conversion: Convertsion of a value of one data type to
  // another
  //       There is two types of conversion
  //        Implicit = Automatic
  //        Explicit = Precede valua with new data (int)

  /* Implicit */
  char d = 100; // ASCII Character
  // Output: d
  cout << d;
  /* Explicit */
  cout << (char)100;
  // OR
  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;
  cout << score << '%';
}
