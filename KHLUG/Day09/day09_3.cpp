#include <iostream>
#include "day09_1.h"

int main() {
  Fraction fr1(4,5),fr2(4,6);
  Fraction fr=add(fr1, fr2);
  fr.print();
  std::cout  << '\n';

  return 0;
}
