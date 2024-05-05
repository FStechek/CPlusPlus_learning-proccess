#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
  // 9 Useful math related functions
  double x = 3;
  double y = 4;
  double z;

  // Max function
  // Will find most highest number and return it
  z = std::max(x, y);
  // Min, reverse of max function
  double a = std::min(x, y);
  // x power of y (idk figure out yourself)
  double p = pow(x, y);
  // Square root of x
  double s = sqrt(x);
  // Absolute value of -3
  double b = abs(-3);
  // Round x
  double r = round(x);
  // Ceiling x
  double c = ceil(x);
  // Floor x
  double f = floor(x);

  /* More info at  https://cplusplus.com/reference/cmath/ */

  // Output stuff here
  using std::cout;
  cout << "Z: " << z << '\n';
  cout << "X: " << x << '\n';
  cout << "Y: " << y << '\n';
  cout << "S: " << s << '\n';
  cout << "B: " << b << '\n';
  cout << "R: " << r << '\n';
  cout << "C: " << c << '\n';
  cout << "F: " << f << '\n';

  return 0;
}
