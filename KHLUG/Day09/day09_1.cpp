#include <iostream>
#include "day09_1.h"
int main() {
  Fraction fr1,fr2;
  fr1.store(4,9);
  fr2.store(6,8);
  fr1.addTo(fr2);

  fr1.print();
  std::cout  << '\n';

  fr1.normalize();
  fr1.print();
  std::cout  << '\n';

  return 0;
}
