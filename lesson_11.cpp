// INFO: if statements:
//       Do something if condition is true,
//       If NOT, then do not do it.
#include <iostream>

int main(int argc, char *argv[]) {
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 100) {
    // NOTE: To Prevent the age from being `technically` greater than 18
    //       You need to make greater or alike if statements first
    std::cout << "You are too old!";
  } else if (age >= 18) {
    std::cout << "Welcome to our site!";
  } else if (age < 0) {
    std::cout << "You are not even born yet!";
  } else {
    std::cout << "You are not old enough to enter!";
  }

  return 0;
}
