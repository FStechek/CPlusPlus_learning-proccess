#include <iostream>
#include <ostream>

// Namespaces
/*
 * INFO: Namespace: Provides a solution for preventing name conflicts in large
 * projects. Each entity needs a unique name. A namespace allows for identically
 * named entities as long as the namespaces are different
 */

namespace first {
int x = 1;
}

namespace second {
int x = 2;
}

int main() {
  int iks = 0; // Renamed because the second demonstration's conflit
  // If you create existing named variable, the compiler gives error
  /* int x = 1; */
  // The :: is called scope resolution operater
  std::cout << first::x << std::endl;

  // If you are pretending to use the first x then
  using namespace first;

  std::cout << x; // Output is 1!

  return 0;
}
