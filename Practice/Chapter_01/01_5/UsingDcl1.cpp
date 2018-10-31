#include <iostream>

namespace Hybrid {
  void HybFunc(void) {
    std::cout << "So simple function" << '\n';
    std::cout << "In namespace Hybrid" << '\n';

  }
} /*Hybrid */

int main(void) {
  using Hybrid :: HybFunc;
  HybFunc();
  return 0;
}
