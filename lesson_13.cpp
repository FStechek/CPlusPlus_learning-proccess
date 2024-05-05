#include <chrono>
#include <iostream>
#include <thread>

void Clear() {
#if defined _WIN32
  system("cls");
  // clrscr(); // including header file : conio.h
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
  system("clear");
  // std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences
#elif defined(__APPLE__)
  system("clear");
#endif
}

int main() {
  // INFO: Swtich: altarnative to using many "else if" statements
  //       compare one value against matching cases

  /* int month; */
  /* std::cout << "Enter the month (1-12): "; */
  /* std::cin >> month; */

  /* switch (month) { */
  /* case 1: */
  /*   std::cout << "It is January"; */
  /*   break; */
  /* case 2: */
  /*   std::cout << "It is February"; */
  /*   break; */
  /* case 3: */
  /*   std::cout << "It is March"; */
  /*   break; */
  /* case 4: */
  /*   std::cout << "It is April"; */
  /*   break; */
  /* case 5: */
  /*   std::cout << "It is May"; */
  /*   break; */
  /* case 6: */
  /*   std::cout << "It is June"; */
  /*   break; */
  /* case 7: */
  /*   std::cout << "It is July"; */
  /*   break; */
  /* case 8: */
  /*   std::cout << "It is August"; */
  /*   break; */
  /* case 9: */
  /*   std::cout << "It is September"; */
  /*   break; */
  /* case 10: */
  /*   std::cout << "It is October"; */
  /*   break; */
  /* case 11: */
  /*   std::cout << "It is November"; */
  /*   break; */
  /* case 12: */
  /*   std::cout << "It is December"; */
  /*   break; */
  /* default: */
  /*   std::cout << "Please enter in only numbers (1-12)"; */
  /*   break; */
  /* } */

  char op;
  double num1;
  double num2;
  double result;

  std::cout << "----------[ CALCULATOR ]----------";

  std::cout << "\n\nEnter either (+ - * / %): ";
  std::cin >> op;
  std::cout << "\nEnter #1: ";
  std::cin >> num1;
  std::cout << "\nEnter #2: ";
  std::cin >> num2;

  std::cout << "\n----------------------------------";
  std::this_thread::sleep_for(std::chrono::nanoseconds(1000));
  std::this_thread::sleep_until(std::chrono::system_clock::now() +
                                std::chrono::seconds(1));

  Clear();

  std::cout << "----------[ CALCULATOR ]----------\n\n";

  switch (op) {
  case '+':
    result = num1 + num2;
    std::cout << "RESULT: " << result;
    break;
  case '-':
    result = num1 - num2;
    std::cout << "RESULT: " << result;
    break;
  case '/':
    result = num1 / num2;
    std::cout << "RESULT: " << result;
    break;
  case '*':
    result = num1 * num2;
    std::cout << "RESULT: " << result;
    break;
  case '%':
    result = (int)num1 % (int)num2;
    std::cout << "RESULT: " << result;
    break;
  default:
    std::cout << "ERROR: INVALID OPERATOR";
    break;
  }

  std::cout << "\n\n----------------------------------";

  return 0;
}
