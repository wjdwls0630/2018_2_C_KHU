#include <iostream>

namespace Parent {
  int num=2;
  namespace SubOne {
    int num=3;
  } /*SubOne */
  namespace SubTwo {
    int num =4;
  } /*SubTwo */
} /*Parent */

int main(void) {
  std::cout << Parent::num << '\n';
  std::cout << Parent::SubOne::num << '\n';
  std::cout << Parent::SubTwo::num << '\n';
  return 0;
}
